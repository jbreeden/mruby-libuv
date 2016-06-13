- Cleanup handles & reqs when a loop is closed.
- Currently handles are removed from the event loop's "GC root" if they
  are marked inactive when one of their handlers are invoked. This does not
  cover the case that the client simply calls a `*_stop` function on the handle.
  For these, we should automatically unset the GC root reference.
- What happens when the user manually ref/unrefs a handle? May need to consider
  GC implications here as well.


To Bind
-------

- uv_fs_chown
- uv_fs_fchown
- uv_fs_ftruncate
- uv_get_process_title
- uv_inet_ntop
- uv_inet_pton
- uv_pipe_connect
- uv_shutdown
- uv_tty_get_winsize
- uv_udp_open
- uv_udp_recv_start
- uv_udp_send
- uv_udp_try_send
