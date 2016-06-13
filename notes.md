- Handles are protected from GC by checking active status on the way into & out
  of the callback thunks.
  
- TODO: Check GC for loops (including the default loop)

Handle Types
------------

uv_handle_t # Abstract
uv_stream_t # Abstract
uv_tcp_t
uv_udp_t
uv_pipe_t
uv_tty_t
uv_poll_t
uv_timer_t
uv_prepare_t
uv_check_t
uv_idle_t
uv_async_t
uv_process_t
uv_fs_event_t
uv_fs_poll_t
uv_signal_t

Request Types
-------------

uv_req_t
uv_getaddrinfo_t
uv_getnameinfo_t
uv_shutdown_t
uv_write_t
uv_connect_t
uv_udp_send_t
uv_fs_t
uv_work_t

Other Types
-----------

uv_loop_t
uv_cpu_info_t
uv_interface_address_t
uv_dirent_t
