#include "mruby_UV.h"

void mruby_uv_alloc_cb(uv_handle_t * handle, size_t suggested_size, uv_buf_t * buf) {
  buf->base = (char*)calloc(suggested_size, sizeof(char));
  buf->len = suggested_size;
}
 
/*
 * Handle Thunks
 */

/* Used for handles & requests. 'Merica */ 
#define UNWRAP_MRB_HANDLE_CONTEXT(handle) \
mruby_uv_data_t * data = ((mruby_uv_data_t*)handle->data); \
mrb_state * mrb = data->mrb; \
mrb_value self = data->self;
 
void mruby_uv_read_cb_thunk(uv_stream_t * handle, ssize_t size, const uv_buf_t * buf) {
  UNWRAP_MRB_HANDLE_CONTEXT(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_read_cb"));
  if (mrb_nil_p(callback)) return;
  
  /* Box Parameters */
  mrb_value rb_size = mrb_fixnum_value(size);
  mrb_value rb_buf = mrb_str_new(mrb, buf->base, buf->len);
  /* This buf belongs to us, but we just made a copy for ruby. Free the old one. */
  /* TODO: Avoid this copy. We allocate the memory in uv_alloc_cb above,
           should be easy enough to make a ruby string and pass that pointer along. */
  free(buf->base);
  
  /* Invoke callback */
  mrb_funcall(mrb, callback, "call", 3, MRUBY_UV_HANDLE_SELF(handle), rb_size, rb_buf);
}
 
void mruby_uv_connection_cb_thunk(uv_stream_t * handle, int status) {
  UNWRAP_MRB_HANDLE_CONTEXT(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_connection_cb"));
  if (mrb_nil_p(callback)) return;
  
  /* Box Parameters */
  mrb_value rb_status = mrb_fixnum_value(status);
  
  /* Invoke callback */
  mrb_funcall(mrb, callback, "call", 2, MRUBY_UV_HANDLE_SELF(handle), rb_status);
}
 
void mruby_uv_close_cb_thunk(uv_handle_t * handle) {
  UNWRAP_MRB_HANDLE_CONTEXT(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_close_cb"));
  if (mrb_nil_p(callback)) return;
  
  /* Invoke callback */
  mrb_funcall(mrb, callback, "call", 1, MRUBY_UV_HANDLE_SELF(handle));
}
 
void mruby_uv_poll_cb_thunk(uv_poll_t * handle, int status, int events) {
  UNWRAP_MRB_HANDLE_CONTEXT(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_poll_cb"));
  if (mrb_nil_p(callback)) return;
  
  /* Box Parameters */
  mrb_value rb_status = mrb_fixnum_value(status);
  mrb_value rb_events = mrb_fixnum_value(events);
  
  /* Invoke callback */
  mrb_funcall(mrb, callback, "call", 3, MRUBY_UV_HANDLE_SELF(handle), rb_status, rb_events);
}
 
void mruby_uv_timer_cb_thunk(uv_timer_t * handle) {
  UNWRAP_MRB_HANDLE_CONTEXT(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_timer_cb"));
  if (mrb_nil_p(callback)) return;
  
  /* Invoke callback */
  mrb_funcall(mrb, callback, "call", 1, MRUBY_UV_HANDLE_SELF(handle));
}
 
void mruby_uv_async_cb_thunk(uv_async_t * handle) {
  UNWRAP_MRB_HANDLE_CONTEXT(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_async_cb"));
  if (mrb_nil_p(callback)) return;
  
  /* Invoke callback */
  mrb_funcall(mrb, callback, "call", 1, MRUBY_UV_HANDLE_SELF(handle));
}

void mruby_uv_prepare_cb_thunk(uv_prepare_t * handle) {
  UNWRAP_MRB_HANDLE_CONTEXT(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_prepare_cb"));
  if (mrb_nil_p(callback)) return;
  
  /* Invoke callback */
  mrb_funcall(mrb, callback, "call", 1, MRUBY_UV_HANDLE_SELF(handle));
}
 
void mruby_uv_check_cb_thunk(uv_check_t * handle) {
  UNWRAP_MRB_HANDLE_CONTEXT(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_check_cb"));
  if (mrb_nil_p(callback)) return;
  
  /* Invoke callback */
  mrb_funcall(mrb, callback, "call", 1, MRUBY_UV_HANDLE_SELF(handle));
}
 
void mruby_uv_idle_cb_thunk(uv_idle_t * handle) {
  UNWRAP_MRB_HANDLE_CONTEXT(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_idle_cb"));
  if (mrb_nil_p(callback)) return;
  
  /* Invoke callback */
  mrb_funcall(mrb, callback, "call", 1, MRUBY_UV_HANDLE_SELF(handle));
}
 
void mruby_uv_exit_cb_thunk(uv_process_t * handle, int64_t exit_status, int term_signal) {
  UNWRAP_MRB_HANDLE_CONTEXT(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_exit_cb"));
  if (mrb_nil_p(callback)) return;
  
  /* Box Parameters */
  mrb_value rb_exit_status = mrb_fixnum_value(exit_status);
  mrb_value rb_term_signal = mrb_fixnum_value(term_signal);
  
  /* Invoke callback */
  mrb_funcall(mrb, callback, "call", 3, MRUBY_UV_HANDLE_SELF(handle), rb_exit_status, rb_term_signal);
}

//// TODO: Could do this with a proc... but need to figure out how to protect
////       it from GC until after the walk completes. (No handle to associate it with,
////       and I'm not sure how to tell when it's done.)
// void mruby_uv_walk_cb_thunk(uv_handle_t * handle, void * arg) {
//   UNWRAP_MRB_HANDLE_CONTEXT(handle);
//   mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_walk_cb"));
//   if (mrb_nil_p(callback)) return;
//   
//   /* NOTE: Arg is unused */
//   
//   /* Invoke callback */
//   /* NOTE: "self" is each handle being walked. */
//   mrb_funcall(mrb, callback, "call", 1, self);
// }
 
void mruby_uv_fs_event_cb_thunk(uv_fs_event_t * handle, const char * filename, int events, int status) {
  UNWRAP_MRB_HANDLE_CONTEXT(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_fs_event_cb"));
  if (mrb_nil_p(callback)) return;
  
  /* Box Parameters */
  mrb_value rb_filename = mrb_str_new_cstr(mrb, filename);
  mrb_value rb_events = mrb_fixnum_value(events);
  mrb_value rb_status = mrb_fixnum_value(status);
  
  /* Invoke callback */
  mrb_funcall(mrb, callback, "call", 4, MRUBY_UV_HANDLE_SELF(handle), rb_filename, rb_events, rb_status);
}
 
void mruby_uv_fs_poll_cb_thunk(uv_fs_poll_t * handle, int status, const uv_stat_t * prev, const uv_stat_t * curr) {
  UNWRAP_MRB_HANDLE_CONTEXT(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_fs_poll_cb"));
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
  mrb_funcall(mrb, callback, "call", 4, MRUBY_UV_HANDLE_SELF(handle), rb_status, rb_prev, rb_curr);
}
 
void mruby_uv_signal_cb_thunk(uv_signal_t * handle, int signal_num) {
  UNWRAP_MRB_HANDLE_CONTEXT(handle);
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_signal_cb"));
  if (mrb_nil_p(callback)) return;
  
  /* Box Parameters */
  mrb_value rb_signal = mrb_fixnum_value(signal_num);
  
  /* Invoke callback */
  mrb_funcall(mrb, callback, "call", 2, MRUBY_UV_HANDLE_SELF(handle), rb_signal);
}
 
// TODO: Need to setup sockaddr wrapper for this one
// void mruby_uv_udp_recv_cb_thunk(uv_udp_t * handle, ssize_t size, const uv_buf_t * buf, const struct sockaddr * addr, unsigned int flags) {
//   UNWRAP_MRB_HANDLE_CONTEXT(handle);
//   mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_udp_recv_cb"));
//   if (mrb_nil_p(callback)) return;
//   
//   /* Box Parameters */
//   mrb_value rb_size = mrb_fixnum_value(size);
//   mrb_value 
//   
//   /* Invoke callback */
//   mrb_funcall(mrb, callback, "call", ...);
// }

/*
 * Request Callback Thunks
 */

// void mruby_uv_connect_cb_thunk(uv_connect_t *, int) {
// 
// }

void mruby_uv_fs_cb_thunk(uv_fs_t * req) {
  UNWRAP_MRB_HANDLE_CONTEXT(req);
  uv_buf_t * buf = &((uv_fs_and_buf_t*)req)->buf;
  
  mrb_value callback = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@mruby_uv_fs_cb"));
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
  mrb_funcall(mrb, callback, "call", 1, MRUBY_UV_REQ_SELF(req));
}

// void mruby_uv_getaddrinfo_cb_thunk(uv_getaddrinfo_t *, int, struct addrinfo *) {
// 
// }
//  
// void mruby_uv_getnameinfo_cb_thunk(uv_getnameinfo_t *, int, const char *, const char *) {
// 
// }
// 
// void mruby_uv_shutdown_cb_thunk(uv_shutdown_t *, int) {
// 
// }
// 
// void mruby_uv_udp_send_cb_thunk(uv_udp_send_t *, int) {
// 
// }
// 
// void mruby_uv_after_work_cb_thunk(uv_work_t *, int) {
// 
// }
// 
// void mruby_uv_work_cb_thunk(uv_work_t *) {
// 
// }
// 
// void mruby_uv_write_cb_thunk(uv_write_t *, int) {
// 
// }
// 
// /*
//  * Other Thunks
//  */
//  
//  void mruby_uv_thread_cb_thunk(void *) {
// 
//  }
