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

void mruby_uv_prepare_handle_thunk(mrb_state * mrb, mrb_value self, const char * thunk_name, mrb_value proc);
void mruby_uv_finalize_handle_thunk(mrb_state * mrb, mrb_value self);
void mruby_uv_prepare_req_thunk(mrb_state * mrb, mrb_value self, const char * thunk_name, mrb_value proc);
void mruby_uv_finalize_req_thunk(mrb_state * mrb, mrb_value self);
uv_buf_t mruby_uv_prepare_write_buf(mrb_state * mrb, mrb_value self, mrb_value buf);

void mruby_uv_register_handle(mrb_state*, mrb_value);
void mruby_uv_unregister_handle(mrb_state*, mrb_value);

#define MRUBY_UV_PREPARE_HANDLE_THUNK(self, thunk_name, proc) \
  mruby_uv_prepare_handle_thunk(mrb, self, thunk_name, proc);
  
#define MRUBY_UV_FINALIZE_HANDLE_THUNK(self) \
  mruby_uv_finalize_handle_thunk(mrb, self);
  
#define MRUBY_UV_PREPARE_REQ_THUNK(self, thunk_name, proc) \
  mruby_uv_prepare_req_thunk(mrb, self, thunk_name, proc);
  
#define MRUBY_UV_FINALIZE_REQ_THUNK(self) \
  mruby_uv_finalize_req_thunk(mrb, self);
  
#define MRUBY_UV_PREPARE_WRITE_BUF(self, buf) \
  mruby_uv_prepare_write_buf(mrb, self, buf);
