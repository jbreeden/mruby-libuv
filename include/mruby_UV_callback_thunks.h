/* Variables declared in macro may clash with names passed in. So, new scopes. */
#define MRUBY_UV_PREPARE_HANDLE_THUNK(self, thunk_name, proc) \
{ mrb_value _self = self;\
  const char * _thunk_name = thunk_name;\
  mrb_value _proc = proc;\
  { uv_handle_t * _handle = mruby_unbox_uv_handle_t(_self); \
    if (NULL != _handle && !uv_is_active(_handle)) { \
      SET_LOOP_REF(_self); \
    } \
    mrb_iv_set(mrb, _self, mrb_intern_cstr(mrb, _thunk_name), _proc); } }
  
#define MRUBY_UV_FINALIZE_HANDLE_THUNK(self) \
{ mrb_value _self = self;\
  { uv_handle_t * handle = mruby_unbox_uv_handle_t(_self); \
    if (NULL != handle && !uv_is_active(handle)) { \
      UNSET_LOOP_REF(_self); \
    } } }
  
#define MRUBY_UV_PREPARE_REQ_THUNK(self, thunk_name, proc) \
{ mrb_gc_register(mrb, self); \
  mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, thunk_name), proc); }
  
#define MRUBY_UV_FINALIZE_REQ_THUNK(self, thunk_name, proc) \
{ mrb_gc_unregister(mrb, self); \
  mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, thunk_name), proc); }
  
void mruby_uv_alloc_cb(uv_handle_t *, size_t, uv_buf_t *);
void mruby_uv_close_cb_thunk(uv_handle_t *);
void mruby_uv_read_cb_thunk(uv_stream_t *, ssize_t, const uv_buf_t *);
void mruby_uv_write_cb_thunk(uv_write_t *, int);
void mruby_uv_connect_cb_thunk(uv_connect_t *, int);
void mruby_uv_shutdown_cb_thunk(uv_shutdown_t *, int);
void mruby_uv_connection_cb_thunk(uv_stream_t *, int);
void mruby_uv_poll_cb_thunk(uv_poll_t *, int, int);
void mruby_uv_timer_cb_thunk(uv_timer_t *);
void mruby_uv_async_cb_thunk(uv_async_t *);
void mruby_uv_prepare_cb_thunk(uv_prepare_t *);
void mruby_uv_check_cb_thunk(uv_check_t *);
void mruby_uv_idle_cb_thunk(uv_idle_t *);
void mruby_uv_exit_cb_thunk(uv_process_t *, int64_t, int);
void mruby_uv_walk_cb_thunk(uv_handle_t *, void *);
void mruby_uv_fs_cb_thunk(uv_fs_t *);
void mruby_uv_work_cb_thunk(uv_work_t *);
void mruby_uv_after_work_cb_thunk(uv_work_t *, int);
void mruby_uv_getaddrinfo_cb_thunk(uv_getaddrinfo_t *, int, struct addrinfo *);
void mruby_uv_getnameinfo_cb_thunk(uv_getnameinfo_t *, int, const char *, const char *);
void mruby_uv_fs_event_cb_thunk(uv_fs_event_t *, const char *, int, int);
void mruby_uv_fs_poll_cb_thunk(uv_fs_poll_t *, int, const uv_stat_t *, const uv_stat_t *);
void mruby_uv_signal_cb_thunk(uv_signal_t *, int);
void mruby_uv_udp_send_cb_thunk(uv_udp_send_t *, int);
void mruby_uv_udp_recv_cb_thunk(uv_udp_t *, ssize_t, const uv_buf_t *, const struct sockaddr *, unsigned int);
void mruby_uv_thread_cb_thunk(void *);
