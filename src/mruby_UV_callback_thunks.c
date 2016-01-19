#include "mruby_UV.h"

void mruby_uv_alloc_cb(uv_handle_t * handle, size_t suggested_size, uv_buf_t * buf) {
  buf->base = (char*)calloc(suggested_size, sizeof(char));
  buf->len = suggested_size;
}
 
/*
 * Handle Thunks
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
   * we can unset the loop ref (potentially freeing the handle for GC).
   */
  UNSET_LOOP_REF(self);
}
 
void mruby_uv_read_cb_thunk(uv_stream_t * handle, ssize_t size, const uv_buf_t * buf) {
  mrb_state * mrb = MRUBY_UV_HANDLE_MRB(handle);
  mrb_value self = MRUBY_UV_HANDLE_SELF(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_read_cb_thunk"));
  
  /* Box Parameters */
  mrb_value rb_size = mrb_fixnum_value(size);
  mrb_value rb_buf = mrb_str_new(mrb, buf->base, buf->len);
  /* This buf belongs to us, but we just made a copy for ruby. Free the old one. */
  /* TODO: Avoid this copy. We allocate the memory in uv_alloc_cb above,
           should be easy enough to make a ruby string and pass that pointer along. */
  free(buf->base);
  
  /* Invoke callback */
  if (mrb_nil_p(callback)) return;
  MRUBY_UV_FINALIZE_HANDLE_THUNK(self);
  mrb_funcall(mrb, callback, "call", 3, MRUBY_UV_HANDLE_SELF(handle), rb_size, rb_buf);
}
 
void mruby_uv_connection_cb_thunk(uv_stream_t * handle, int status) {
  mrb_state * mrb = MRUBY_UV_HANDLE_MRB(handle);
  mrb_value self = MRUBY_UV_HANDLE_SELF(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_connection_cb_thunk"));
  if (mrb_nil_p(callback)) return;
  
  /* Box Parameters */
  mrb_value rb_status = mrb_fixnum_value(status);
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_HANDLE_THUNK(self);
  mrb_funcall(mrb, callback, "call", 2, MRUBY_UV_HANDLE_SELF(handle), rb_status);
}
 
void mruby_uv_poll_cb_thunk(uv_poll_t * handle, int status, int events) {
  mrb_state * mrb = MRUBY_UV_HANDLE_MRB(handle);
  mrb_value self = MRUBY_UV_HANDLE_SELF(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_poll_cb_thunk"));
  if (mrb_nil_p(callback)) return;
  
  /* Box Parameters */
  mrb_value rb_status = mrb_fixnum_value(status);
  mrb_value rb_events = mrb_fixnum_value(events);
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_HANDLE_THUNK(self);
  mrb_funcall(mrb, callback, "call", 3, MRUBY_UV_HANDLE_SELF(handle), rb_status, rb_events);
}
 
void mruby_uv_timer_cb_thunk(uv_timer_t * handle) {
  mrb_state * mrb = MRUBY_UV_HANDLE_MRB(handle);
  mrb_value self = MRUBY_UV_HANDLE_SELF(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_timer_cb_thunk"));
  if (mrb_nil_p(callback)) return;
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_HANDLE_THUNK(self);
  mrb_funcall(mrb, callback, "call", 1, MRUBY_UV_HANDLE_SELF(handle));
}
 
void mruby_uv_async_cb_thunk(uv_async_t * handle) {
  mrb_state * mrb = MRUBY_UV_HANDLE_MRB(handle);
  mrb_value self = MRUBY_UV_HANDLE_SELF(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_async_cb_thunk"));
  if (mrb_nil_p(callback)) return;
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_HANDLE_THUNK(self);
  mrb_funcall(mrb, callback, "call", 1, MRUBY_UV_HANDLE_SELF(handle));
}

void mruby_uv_prepare_cb_thunk(uv_prepare_t * handle) {
  mrb_state * mrb = MRUBY_UV_HANDLE_MRB(handle);
  mrb_value self = MRUBY_UV_HANDLE_SELF(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_prepare_cb_thunk"));
  if (mrb_nil_p(callback)) return;
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_HANDLE_THUNK(self);
  mrb_funcall(mrb, callback, "call", 1, MRUBY_UV_HANDLE_SELF(handle));
}
 
void mruby_uv_check_cb_thunk(uv_check_t * handle) {
  mrb_state * mrb = MRUBY_UV_HANDLE_MRB(handle);
  mrb_value self = MRUBY_UV_HANDLE_SELF(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_check_cb_thunk"));
  if (mrb_nil_p(callback)) return;
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_HANDLE_THUNK(self);
  mrb_funcall(mrb, callback, "call", 1, MRUBY_UV_HANDLE_SELF(handle));
}
 
void mruby_uv_idle_cb_thunk(uv_idle_t * handle) {
  mrb_state * mrb = MRUBY_UV_HANDLE_MRB(handle);
  mrb_value self = MRUBY_UV_HANDLE_SELF(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_idle_cb_thunk"));
  if (mrb_nil_p(callback)) return;
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_HANDLE_THUNK(self);
  mrb_funcall(mrb, callback, "call", 1, MRUBY_UV_HANDLE_SELF(handle));
}
 
void mruby_uv_exit_cb_thunk(uv_process_t * handle, int64_t exit_status, int term_signal) {
  mrb_state * mrb = MRUBY_UV_HANDLE_MRB(handle);
  mrb_value self = MRUBY_UV_HANDLE_SELF(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_exit_cb_thunk"));
  if (mrb_nil_p(callback)) return;
  
  /* Box Parameters */
  mrb_value rb_exit_status = mrb_fixnum_value(exit_status);
  mrb_value rb_term_signal = mrb_fixnum_value(term_signal);
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_HANDLE_THUNK(self);
  mrb_funcall(mrb, callback, "call", 3, MRUBY_UV_HANDLE_SELF(handle), rb_exit_status, rb_term_signal);
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
  if (mrb_nil_p(callback)) return;
  
  /* Box Parameters */
  mrb_value rb_filename = mrb_str_new_cstr(mrb, filename);
  mrb_value rb_events = mrb_fixnum_value(events);
  mrb_value rb_status = mrb_fixnum_value(status);
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_HANDLE_THUNK(self);
  mrb_funcall(mrb, callback, "call", 4, MRUBY_UV_HANDLE_SELF(handle), rb_filename, rb_events, rb_status);
}
 
void mruby_uv_fs_poll_cb_thunk(uv_fs_poll_t * handle, int status, const uv_stat_t * prev, const uv_stat_t * curr) {
  mrb_state * mrb = MRUBY_UV_HANDLE_MRB(handle);
  mrb_value self = MRUBY_UV_HANDLE_SELF(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_fs_poll_cb_thunk"));
  if (mrb_nil_p(callback)) return;
  
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
  mrb_funcall(mrb, callback, "call", 4, MRUBY_UV_HANDLE_SELF(handle), rb_status, rb_prev, rb_curr);
}
 
void mruby_uv_signal_cb_thunk(uv_signal_t * handle, int signal_num) {
  mrb_state * mrb = MRUBY_UV_HANDLE_MRB(handle);
  mrb_value self = MRUBY_UV_HANDLE_SELF(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_signal_cb_thunk"));
  if (mrb_nil_p(callback)) return;
  
  /* Box Parameters */
  mrb_value rb_signal = mrb_fixnum_value(signal_num);
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_HANDLE_THUNK(self);
  mrb_funcall(mrb, callback, "call", 2, MRUBY_UV_HANDLE_SELF(handle), rb_signal);
}

//// TODO: Done except for sockaddr boxing 
// void mruby_uv_udp_recv_cb_thunk(uv_udp_t * handle, ssize_t nread, const uv_buf_t * buf, const struct sockaddr * addr, unsigned int flags) {
//   mrb_state * mrb = MRUBY_UV_HANDLE_MRB(handle);
//   mrb_value self = MRUBY_UV_HANDLE_SELF(handle);
//   mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_udp_recv_cb_thunk"));
//   if (mrb_nil_p(callback)) return;
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
//   /* TODO: Free buf? */
//   
//   /* Invoke callback */
//   MRUBY_UV_FINALIZE_HANDLE_THUNK(self);
//   mrb_funcall(mrb, callback, "call", 5, MRUBY_UV_HANDLE_SELF(handle), rb_nread, rb_buf, rb_addr, rb_flags);
// }

/*
 * Request Callback Thunks
 */

void mruby_uv_connect_cb_thunk(uv_connect_t * req, int status) {
  mrb_state * mrb = MRUBY_UV_REQ_MRB(req);
  mrb_value self = MRUBY_UV_REQ_SELF(req);

  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_connect_cb_thunk"));
  /* xxx: This should never happen... might want an assert for this */
  if (mrb_nil_p(callback)) return;

  /* Invoke callback */
  MRUBY_UV_FINALIZE_REQ_THUNK(self);
  mrb_funcall(mrb, callback, "call", 2, MRUBY_UV_REQ_SELF(req), mrb_fixnum_value(status));
}

void mruby_uv_fs_cb_thunk(uv_fs_t * req) {
  mrb_state * mrb = MRUBY_UV_REQ_MRB(req);
  mrb_value self = MRUBY_UV_REQ_SELF(req);
  uv_buf_t * buf = &((uv_fs_and_buf_t*)req)->buf;
  
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_fs_cb_thunk"));
  /* xxx: This should never happen... might want an assert for this */
  if (mrb_nil_p(callback)) return;
  
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
  mrb_funcall(mrb, callback, "call", 1, MRUBY_UV_REQ_SELF(req));
}

void mruby_uv_getaddrinfo_cb_thunk(uv_getaddrinfo_t * req, int status, struct addrinfo * addr) {
  mrb_state * mrb = MRUBY_UV_REQ_MRB(req);
  mrb_value self = MRUBY_UV_REQ_SELF(req);
  
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_getaddrinfo_cb_thunk"));
  /* xxx: This should never happen... might want an assert for this */
  if (mrb_nil_p(callback)) return;
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_REQ_THUNK(self);
  mrb_funcall(mrb, callback, "call", 3, MRUBY_UV_REQ_SELF(req), mrb_fixnum_value(status), mruby_box_addrinfo(mrb, addr));
}
  
void mruby_uv_getnameinfo_cb_thunk(uv_getnameinfo_t * req, int status, const char * hostname, const char * service) {
  mrb_state * mrb = MRUBY_UV_REQ_MRB(req);
  mrb_value self = MRUBY_UV_REQ_SELF(req);
  
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_getnameinfo_cb_thunk"));
  /* xxx: This should never happen... might want an assert for this */
  if (mrb_nil_p(callback)) return;
  
  /* Invoke callback */
  MRUBY_UV_FINALIZE_REQ_THUNK(self);
  mrb_funcall(mrb, callback, "call", 4,
    MRUBY_UV_REQ_SELF(req),
    mrb_fixnum_value(status),
    (status == 0 ? mrb_str_new_cstr(mrb, hostname) : mrb_nil_value()),
    (status == 0 ? mrb_str_new_cstr(mrb, service) : mrb_nil_value())
  );
}

void mruby_uv_shutdown_cb_thunk(uv_shutdown_t * req, int status) {
  mrb_state * mrb = MRUBY_UV_REQ_MRB(req);
  mrb_value self = MRUBY_UV_REQ_SELF(req);

  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_shutdown_cb_thunk"));
  /* xxx: This should never happen... might want an assert for this */
  if (mrb_nil_p(callback)) return;

  /* Invoke callback */
  MRUBY_UV_FINALIZE_REQ_THUNK(self);
  mrb_funcall(mrb, callback, "call", 2, MRUBY_UV_REQ_SELF(req), mrb_fixnum_value(status));
}

void mruby_uv_udp_send_cb_thunk(uv_udp_send_t * req, int status) {
  mrb_state * mrb = MRUBY_UV_REQ_MRB(req);
  mrb_value self = MRUBY_UV_REQ_SELF(req);

  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_udp_send_cb_thunk"));
  /* xxx: This should never happen... might want an assert for this */
  if (mrb_nil_p(callback)) return;

  /* Invoke callback */
  MRUBY_UV_FINALIZE_REQ_THUNK(self);
  mrb_funcall(mrb, callback, "call", 2, MRUBY_UV_REQ_SELF(req), mrb_fixnum_value(status));
}

void mruby_uv_after_work_cb_thunk(uv_work_t * req, int status) {
  mrb_state * mrb = MRUBY_UV_REQ_MRB(req);
  mrb_value self = MRUBY_UV_REQ_SELF(req);

  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_after_work_cb_thunk"));
  /* xxx: This should never happen... might want an assert for this */
  if (mrb_nil_p(callback)) return;

  /* Invoke callback */
  MRUBY_UV_FINALIZE_REQ_THUNK(self);
  mrb_funcall(mrb, callback, "call", 2, MRUBY_UV_REQ_SELF(req), mrb_fixnum_value(status));
}

void mruby_uv_work_cb_thunk(uv_work_t * req) {
  mrb_state * mrb = MRUBY_UV_REQ_MRB(req);
  mrb_value self = MRUBY_UV_REQ_SELF(req);

  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_work_cb_thunk"));
  /* xxx: This should never happen... might want an assert for this */
  if (mrb_nil_p(callback)) return;

  /* Invoke callback */
  MRUBY_UV_FINALIZE_REQ_THUNK(self);
  mrb_funcall(mrb, callback, "call", 1, MRUBY_UV_REQ_SELF(req));
}

void mruby_uv_write_cb_thunk(uv_write_t * req, int status) {
  mrb_state * mrb = MRUBY_UV_REQ_MRB(req);
  mrb_value self = MRUBY_UV_REQ_SELF(req);

  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_write_cb_thunk"));
  /* xxx: This should never happen... might want an assert for this */
  if (mrb_nil_p(callback)) return;

  /* Invoke callback */
  MRUBY_UV_FINALIZE_REQ_THUNK(self);
  mrb_funcall(mrb, callback, "call", 2, MRUBY_UV_REQ_SELF(req), mrb_fixnum_value(status));
}
// 
// /*
//  * Other Thunks
//  */
//  
//  void mruby_uv_thread_cb_thunk(void *) {
// 
//  }
