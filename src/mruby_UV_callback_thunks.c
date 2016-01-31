#include <assert.h>
#include "mruby_UV.h"

/*
 * Thunk Preparation & Finalization Functions
 * ------------------------------------------
 */

/*
 * ### GC Registration
 *
 * GC registration is used to stop MRuby from GC'ing an object
 * while it's native component is still active in the event loop.
 */

void mruby_uv_register_handle(mrb_state* mrb, mrb_value obj) {
  uv_handle_t * handle = (uv_handle_t *)(mruby_unbox_as_void_ptr(obj));
  if (handle->loop == NULL) {
    mrb_raise(mrb, E_RUNTIME_ERROR, "Attempt use handle before initializing on a loop");
  }
  mruby_uv_data_t * data = (mruby_uv_data_t *)(handle->loop->data);
  mrb_funcall(mrb, data->self, "ref", 1, obj);
}

void mruby_uv_unregister_handle(mrb_state* mrb, mrb_value obj) {
  uv_handle_t * handle = (uv_handle_t *)(mruby_unbox_as_void_ptr(obj));
  if (handle->loop == NULL) {
    /* No loop associated, so nothing to be done. Not an error. */
    return;
  }
  mruby_uv_data_t * data = (mruby_uv_data_t *)(handle->loop->data);
  mrb_funcall(mrb, data->self, "unref", 1, obj);
}

void mruby_uv_register_req(mrb_state* mrb, mrb_value obj) {
  mrb_gc_register(mrb, obj);
}

void mruby_uv_unregister_req(mrb_state* mrb, mrb_value obj) {
  mrb_gc_unregister(mrb, obj);
}

/*
 * ### Thunk Preparation
 *
 * On any call that results in a callback, the thunk preparation
 * functions are used to set gc registration, and store any other data
 * that needs to be protected until the callbacks are hit (including a
 * reference to the block to be executed when the callback is hit).
 *
 * ### Thunk Finalization
 *
 * When callbacks are hit, after the thunk calls it's corresponding ruby block,
 * cleanup tasks are performed. Mainly checking if handles are still active,
 * and otherwise unsetting the gc registration.
 */
  
void mruby_uv_prepare_handle_thunk(mrb_state * mrb, mrb_value self, const char * thunk_name, mrb_value proc) {
  uv_handle_t * handle = mruby_unbox_uv_handle_t(self);
  if (NULL != handle && !uv_is_active(handle)) {
    mruby_uv_register_handle(mrb, self);
  }
  mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, thunk_name), proc);
}
  
void mruby_uv_finalize_handle_thunk(mrb_state * mrb, mrb_value self) {
  uv_handle_t * handle = mruby_unbox_uv_handle_t(self);
  if (NULL != handle && !uv_is_active(handle)) {
    mruby_uv_unregister_handle(mrb, self);
  }
  mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "@write_buf"), mrb_nil_value());
}

void mruby_uv_prepare_req_thunk(mrb_state * mrb, mrb_value self, const char * thunk_name, mrb_value proc) {
  mruby_uv_register_req(mrb, self);
  mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, thunk_name), proc); 
}
  
void mruby_uv_finalize_req_thunk(mrb_state * mrb, mrb_value self) {
  mruby_uv_unregister_req(mrb, self);
  mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "@write_buf"), mrb_nil_value());
}

uv_buf_t
mruby_uv_prepare_write_buf(mrb_state * mrb, mrb_value self, mrb_value buf) {
  assert(mrb_obj_is_kind_of(mrb, buf, mrb->string_class));
  uv_buf_t native_buf;
  native_buf.len = RSTRING_LEN(buf);
  native_buf.base = RSTRING_PTR(buf);
  mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "@write_buf"), buf);
  return native_buf;
}

void mruby_uv_alloc_cb(uv_handle_t * handle, size_t suggested_size, uv_buf_t * buf) {
  int size = suggested_size;
  
  if (size > (1024 * 8)) {
    size = (1024 * 8);
  }
  
  buf->base = (char*)calloc(size, sizeof(char));
  buf->len = size;
}
 
/*
 * Handle Callback Thunks
 * ----------------------
 */
 
void mruby_uv_close_cb_thunk(uv_handle_t * handle) {
  mrb_state * mrb = MRUBY_UV_HANDLE_MRB(handle);
  mrb_value self = MRUBY_UV_HANDLE_SELF(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_close_cb_thunk"));
  
  if (!mrb_nil_p(callback)) {
    mrb_funcall(mrb, callback, "call", 3, MRUBY_UV_HANDLE_SELF(handle));
  }
  
  /*
   * Now that the handle has been closed, and any callbacks triggered,
   * we can unset the GC registration.
   */
  mruby_uv_unregister_handle(mrb, self);
}
 
void mruby_uv_read_cb_thunk(uv_stream_t * handle, ssize_t nread, const uv_buf_t * buf) {
  mrb_state * mrb = MRUBY_UV_HANDLE_MRB(handle);
  mrb_value self = MRUBY_UV_HANDLE_SELF(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_read_cb_thunk"));
  
  /* Box Parameters */
  mrb_value rb_nread = mrb_fixnum_value(nread);
  mrb_value rb_buf = mrb_nil_value();
  if (nread > 0) {
    rb_buf = mrb_str_new(mrb, buf->base, nread);
  }
  free(buf->base);
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_HANDLE_THUNK(self);
  if (!mrb_nil_p(callback)) {
    mrb_funcall(mrb, callback, "call", 3, MRUBY_UV_HANDLE_SELF(handle), rb_nread, rb_buf);
  }
}
 
void mruby_uv_connection_cb_thunk(uv_stream_t * handle, int status) {
  mrb_state * mrb = MRUBY_UV_HANDLE_MRB(handle);
  mrb_value self = MRUBY_UV_HANDLE_SELF(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_connection_cb_thunk"));
  
  /* Box Parameters */
  mrb_value rb_status = mrb_fixnum_value(status);
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_HANDLE_THUNK(self);
  if (!mrb_nil_p(callback)) {
    mrb_funcall(mrb, callback, "call", 2, MRUBY_UV_HANDLE_SELF(handle), rb_status);
  }
}
 
void mruby_uv_poll_cb_thunk(uv_poll_t * handle, int status, int events) {
  mrb_state * mrb = MRUBY_UV_HANDLE_MRB(handle);
  mrb_value self = MRUBY_UV_HANDLE_SELF(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_poll_cb_thunk"));
  
  /* Box Parameters */
  mrb_value rb_status = mrb_fixnum_value(status);
  mrb_value rb_events = mrb_fixnum_value(events);
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_HANDLE_THUNK(self);
  if (!mrb_nil_p(callback)) {
    mrb_funcall(mrb, callback, "call", 3, MRUBY_UV_HANDLE_SELF(handle), rb_status, rb_events);
  }
}
 
void mruby_uv_timer_cb_thunk(uv_timer_t * handle) {
  mrb_state * mrb = MRUBY_UV_HANDLE_MRB(handle);
  mrb_value self = MRUBY_UV_HANDLE_SELF(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_timer_cb_thunk"));
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_HANDLE_THUNK(self);
  if (!mrb_nil_p(callback)) {
    mrb_funcall(mrb, callback, "call", 1, MRUBY_UV_HANDLE_SELF(handle));
  }
}
 
void mruby_uv_async_cb_thunk(uv_async_t * handle) {
  mrb_state * mrb = MRUBY_UV_HANDLE_MRB(handle);
  mrb_value self = MRUBY_UV_HANDLE_SELF(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_async_cb_thunk"));
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_HANDLE_THUNK(self);
  if (!mrb_nil_p(callback)) {
    mrb_funcall(mrb, callback, "call", 1, MRUBY_UV_HANDLE_SELF(handle));
  }
}

void mruby_uv_prepare_cb_thunk(uv_prepare_t * handle) {
  mrb_state * mrb = MRUBY_UV_HANDLE_MRB(handle);
  mrb_value self = MRUBY_UV_HANDLE_SELF(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_prepare_cb_thunk"));
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_HANDLE_THUNK(self);
  if (!mrb_nil_p(callback)) {
    mrb_funcall(mrb, callback, "call", 1, MRUBY_UV_HANDLE_SELF(handle));
  }
}
 
void mruby_uv_check_cb_thunk(uv_check_t * handle) {
  mrb_state * mrb = MRUBY_UV_HANDLE_MRB(handle);
  mrb_value self = MRUBY_UV_HANDLE_SELF(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_check_cb_thunk"));
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_HANDLE_THUNK(self);
  if (!mrb_nil_p(callback)) {
    mrb_funcall(mrb, callback, "call", 1, MRUBY_UV_HANDLE_SELF(handle));
  }
}
 
void mruby_uv_idle_cb_thunk(uv_idle_t * handle) {
  mrb_state * mrb = MRUBY_UV_HANDLE_MRB(handle);
  mrb_value self = MRUBY_UV_HANDLE_SELF(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_idle_cb_thunk"));
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_HANDLE_THUNK(self);
  if (!mrb_nil_p(callback)) {
    mrb_funcall(mrb, callback, "call", 1, MRUBY_UV_HANDLE_SELF(handle));
  }
}
 
void mruby_uv_exit_cb_thunk(uv_process_t * handle, int64_t exit_status, int term_signal) {
  mrb_state * mrb = MRUBY_UV_HANDLE_MRB(handle);
  mrb_value self = MRUBY_UV_HANDLE_SELF(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_exit_cb_thunk"));
  
  /* Box Parameters */
  mrb_value rb_exit_status = mrb_fixnum_value(exit_status);
  mrb_value rb_term_signal = mrb_fixnum_value(term_signal);
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_HANDLE_THUNK(self);
  if (!mrb_nil_p(callback)) {
    mrb_funcall(mrb, callback, "call", 3, MRUBY_UV_HANDLE_SELF(handle), rb_exit_status, rb_term_signal);
  }
}

//// TODO: Could do this with a proc... but need to figure out how to protect
////       it from GC until after the walk completes. (No handle to associate it with,
////       and I'm not sure how to tell when it's done.)
// void mruby_uv_walk_cb_thunk(uv_handle_t * handle, void * arg) {
// }
 
void mruby_uv_fs_event_cb_thunk(uv_fs_event_t * handle, const char * filename, int events, int status) {
  mrb_state * mrb = MRUBY_UV_HANDLE_MRB(handle);
  mrb_value self = MRUBY_UV_HANDLE_SELF(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_fs_event_cb_thunk"));
  
  /* Box Parameters */
  mrb_value rb_filename = mrb_str_new_cstr(mrb, filename);
  mrb_value rb_events = mrb_fixnum_value(events);
  mrb_value rb_status = mrb_fixnum_value(status);
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_HANDLE_THUNK(self);
  if (!mrb_nil_p(callback)) {
    mrb_funcall(mrb, callback, "call", 4, MRUBY_UV_HANDLE_SELF(handle), rb_filename, rb_events, rb_status);
  }
}
 
void mruby_uv_fs_poll_cb_thunk(uv_fs_poll_t * handle, int status, const uv_stat_t * prev, const uv_stat_t * curr) {
  mrb_state * mrb = MRUBY_UV_HANDLE_MRB(handle);
  mrb_value self = MRUBY_UV_HANDLE_SELF(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_fs_poll_cb_thunk"));
  
  /* Box Parameters */
  mrb_value rb_status = mrb_fixnum_value(status);
  mrb_value rb_prev = mrb_nil_value();
  mrb_value rb_curr = mrb_nil_value();
  if (status == 0) {
    rb_prev = mruby_box_uv_stat_t(mrb, (uv_stat_t*)prev);
    rb_curr = mruby_box_uv_stat_t(mrb, (uv_stat_t*)curr);
  }
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_HANDLE_THUNK(self);
  if (!mrb_nil_p(callback)) {
    mrb_funcall(mrb, callback, "call", 4, MRUBY_UV_HANDLE_SELF(handle), rb_status, rb_prev, rb_curr);
  }
}
 
void mruby_uv_signal_cb_thunk(uv_signal_t * handle, int signal_num) {
  mrb_state * mrb = MRUBY_UV_HANDLE_MRB(handle);
  mrb_value self = MRUBY_UV_HANDLE_SELF(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_signal_cb_thunk"));
  
  /* Box Parameters */
  mrb_value rb_signal = mrb_fixnum_value(signal_num);
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_HANDLE_THUNK(self);
  if (!mrb_nil_p(callback)) {
    mrb_funcall(mrb, callback, "call", 2, MRUBY_UV_HANDLE_SELF(handle), rb_signal);
  }
}

//// TODO: Done except for sockaddr boxing 
// void mruby_uv_udp_recv_cb_thunk(uv_udp_t * handle, ssize_t nread, const uv_buf_t * buf, const struct sockaddr * addr, unsigned int flags) {
//   mrb_state * mrb = MRUBY_UV_HANDLE_MRB(handle);
//   mrb_value self = MRUBY_UV_HANDLE_SELF(handle);
//   mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_udp_recv_cb_thunk"));
//   
//   /* Box Parameters */
//   mrb_value rb_nread = mrb_fixnum_value(nread);
//   mrb_value rb_buf = mrb_nil_value();
//   if (nread > 0) {
//     mrb_value rb_buf = mrb_str_new(mrb, buf->base, buf->len);
//   }
//   free(buf->base);
//   mrb_value rb_addr = mruby_box_sockddr(mrb, addr);
//   mrb_value rb_flags = mrb_fixnum_value(flags);
//   
//   /* Invoke callback */
//   MRUBY_UV_FINALIZE_HANDLE_THUNK(self);
//   if (!mrb_nil_p(callback))//    {
//     mrb_funcall(mrb, callback, "call", 5, MRUBY_UV_HANDLE_SELF(handle), rb_nread, rb_buf, rb_addr, rb_flags);
//   }
// }

/*
 * Request Callback Thunks
 * -----------------------
 */

void mruby_uv_connect_cb_thunk(uv_connect_t * req, int status) {
  mrb_state * mrb = MRUBY_UV_REQ_MRB(req);
  mrb_value self = MRUBY_UV_REQ_SELF(req);

  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_connect_cb_thunk"));

  /* Invoke callback */
  MRUBY_UV_FINALIZE_REQ_THUNK(self);
  if (!mrb_nil_p(callback)) {
    mrb_funcall(mrb, callback, "call", 2, MRUBY_UV_REQ_SELF(req), mrb_fixnum_value(status));
  }
}

void mruby_uv_fs_cb_thunk(uv_fs_t * req) {
  mrb_state * mrb = MRUBY_UV_REQ_MRB(req);
  mrb_value self = MRUBY_UV_REQ_SELF(req);
  uv_buf_t * buf = &((uv_fs_and_buf_t*)req)->buf;
  
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_fs_cb_thunk"));
  
  /* Save off the buffer in a ruby string, then ALWAYS free & NULLify the old buf */
  if (buf->base == NULL || req->result < 0) {
    /* Explicitly set to NULL in case this object is being reused. */
    mrb_iv_set(mrb, MRUBY_UV_REQ_SELF(req), mrb_intern_cstr(mrb, "@buf"), mrb_nil_value());
  } else {
    mrb_iv_set(mrb, MRUBY_UV_REQ_SELF(req), mrb_intern_cstr(mrb, "@buf"), mrb_str_new(mrb, buf->base, req->result));
  }
  
  if (buf->base != NULL) {
    free(buf->base);
    buf->base = NULL;
    buf->len = 0;
  }
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_REQ_THUNK(self);
  if (!mrb_nil_p(callback)) {
    mrb_funcall(mrb, callback, "call", 1, MRUBY_UV_REQ_SELF(req));
  }
}

void mruby_uv_getaddrinfo_cb_thunk(uv_getaddrinfo_t * req, int status, struct addrinfo * addr) {
  mrb_state * mrb = MRUBY_UV_REQ_MRB(req);
  mrb_value self = MRUBY_UV_REQ_SELF(req);
  
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_getaddrinfo_cb_thunk"));
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_REQ_THUNK(self);
  if (!mrb_nil_p(callback)) {
    if (status == 0) {
      mrb_funcall(mrb, callback, "call", 3, MRUBY_UV_REQ_SELF(req), mrb_fixnum_value(status), mruby_marshal_load_addrinfo(mrb, addr));
    } else {
      mrb_funcall(mrb, callback, "call", 3, MRUBY_UV_REQ_SELF(req), mrb_fixnum_value(status), mrb_nil_value());
    }
  }
  /* mruby_marshal_load_addrinfo made a copy for Ruby, free the native object */
  uv_freeaddrinfo(addr);
}
  
void mruby_uv_getnameinfo_cb_thunk(uv_getnameinfo_t * req, int status, const char * hostname, const char * service) {
  mrb_state * mrb = MRUBY_UV_REQ_MRB(req);
  mrb_value self = MRUBY_UV_REQ_SELF(req);
  
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_getnameinfo_cb_thunk"));
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_REQ_THUNK(self);
  if (!mrb_nil_p(callback)) {
    mrb_funcall(mrb, callback, "call", 4,
      MRUBY_UV_REQ_SELF(req),
      mrb_fixnum_value(status),
      (status == 0 ? mrb_str_new_cstr(mrb, hostname) : mrb_nil_value()),
      (status == 0 ? mrb_str_new_cstr(mrb, service) : mrb_nil_value())
    );
  }
}

void mruby_uv_shutdown_cb_thunk(uv_shutdown_t * req, int status) {
  mrb_state * mrb = MRUBY_UV_REQ_MRB(req);
  mrb_value self = MRUBY_UV_REQ_SELF(req);

  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_shutdown_cb_thunk"));

  /* Invoke callback */
  MRUBY_UV_FINALIZE_REQ_THUNK(self);
  if (!mrb_nil_p(callback)) {
    mrb_funcall(mrb, callback, "call", 2, MRUBY_UV_REQ_SELF(req), mrb_fixnum_value(status));
  }
}

void mruby_uv_udp_send_cb_thunk(uv_udp_send_t * req, int status) {
  mrb_state * mrb = MRUBY_UV_REQ_MRB(req);
  mrb_value self = MRUBY_UV_REQ_SELF(req);

  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_udp_send_cb_thunk"));

  /* Invoke callback */
  MRUBY_UV_FINALIZE_REQ_THUNK(self);
  if (!mrb_nil_p(callback)) {
    mrb_funcall(mrb, callback, "call", 2, MRUBY_UV_REQ_SELF(req), mrb_fixnum_value(status));
  }
}

void mruby_uv_after_work_cb_thunk(uv_work_t * req, int status) {
  mrb_state * mrb = MRUBY_UV_REQ_MRB(req);
  mrb_value self = MRUBY_UV_REQ_SELF(req);

  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_after_work_cb_thunk"));

  /* Invoke callback */
  MRUBY_UV_FINALIZE_REQ_THUNK(self);
  if (!mrb_nil_p(callback)) {
    mrb_funcall(mrb, callback, "call", 2, MRUBY_UV_REQ_SELF(req), mrb_fixnum_value(status));
  }
}

void mruby_uv_work_cb_thunk(uv_work_t * req) {
  mrb_state * mrb = MRUBY_UV_REQ_MRB(req);
  mrb_value self = MRUBY_UV_REQ_SELF(req);

  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_work_cb_thunk"));

  /* Invoke callback */
  MRUBY_UV_FINALIZE_REQ_THUNK(self);
  if (!mrb_nil_p(callback)) {
    mrb_funcall(mrb, callback, "call", 1, MRUBY_UV_REQ_SELF(req));
  }
}

void mruby_uv_write_cb_thunk(uv_write_t * req, int status) {
  mrb_state * mrb = MRUBY_UV_REQ_MRB(req);
  mrb_value self = MRUBY_UV_REQ_SELF(req);

  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_write_cb_thunk"));

  /* Invoke callback */
  MRUBY_UV_FINALIZE_REQ_THUNK(self);
  if (!mrb_nil_p(callback)) {
    mrb_funcall(mrb, callback, "call", 2, MRUBY_UV_REQ_SELF(req), mrb_fixnum_value(status));
  }
}
// 
// /*
//  * Other Thunks
//  */
//  
//  void mruby_uv_thread_cb_thunk(void *) {
// 
//  }
