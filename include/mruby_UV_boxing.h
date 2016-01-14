#ifndef MRUBY_UV_BOXING_HEADER
#define MRUBY_UV_BOXING_HEADER

/*
 * Boxing declarations
 * -------------------
 *
 * These declarations are enabled by the macros in mruby_UV_classes.h
 */

/*
* Extra wrapper over native pointer to indicate who owns this memory.
* (Either mruby, and it should be garage collected, or C, and it shouldn't be)
* Considered using the LSB of the pointer itself, but I don't think I can
* be assured that all memory is word-aligned (especially when C libraries
* implement their own memory management techniques like memory pools)
*/
typedef struct mruby_to_native_ref_ {
  /* If true, indicates that the object should be freed when
   * mruby GC's the ruby object containing this pointer. This
   * is set to true when an object is boxed via the `giftwrap`
   * or `gift_{type}_ptr_set` functions.
   */
  unsigned char belongs_to_ruby;

  /* A pointer to the native object */
  void* obj;

  /* For the convenience of the binding writer,
   * the data pointer can be used to associate arbitrary
   * data with a reference to a C object. This could
   * be a function pointer to invoke instead of `free` on GC,
   * a pointer back to the RObject, or even cast to an integer type
   * and used as a bit field. You get the idea...
   */
  void* data;
} mruby_to_native_ref;

#if BIND_SockaddrIn_TYPE
mrb_value
mruby_box_sockaddr_in(mrb_state* mrb, struct sockaddr_in *unboxed);

mrb_value
mruby_giftwrap_sockaddr_in(mrb_state* mrb, struct sockaddr_in *unboxed);

void
mruby_set_sockaddr_in_data_ptr(mrb_value obj, struct sockaddr_in *unboxed);

void
mruby_gift_sockaddr_in_data_ptr(mrb_value obj, struct sockaddr_in *unboxed);

struct sockaddr_in *
mruby_unbox_sockaddr_in(mrb_value boxed);
#endif

#if BIND_SockaddrIn6_TYPE
mrb_value
mruby_box_sockaddr_in6(mrb_state* mrb, struct sockaddr_in6 *unboxed);

mrb_value
mruby_giftwrap_sockaddr_in6(mrb_state* mrb, struct sockaddr_in6 *unboxed);

void
mruby_set_sockaddr_in6_data_ptr(mrb_value obj, struct sockaddr_in6 *unboxed);

void
mruby_gift_sockaddr_in6_data_ptr(mrb_value obj, struct sockaddr_in6 *unboxed);

struct sockaddr_in6 *
mruby_unbox_sockaddr_in6(mrb_value boxed);
#endif

#if BIND_UvAsyncT_TYPE
mrb_value
mruby_box_uv_async_t(mrb_state* mrb, uv_async_t *unboxed);

mrb_value
mruby_giftwrap_uv_async_t(mrb_state* mrb, uv_async_t *unboxed);

void
mruby_set_uv_async_t_data_ptr(mrb_value obj, uv_async_t *unboxed);

void
mruby_gift_uv_async_t_data_ptr(mrb_value obj, uv_async_t *unboxed);

uv_async_t *
mruby_unbox_uv_async_t(mrb_value boxed);
#endif

#if BIND_UvCheckT_TYPE
mrb_value
mruby_box_uv_check_t(mrb_state* mrb, uv_check_t *unboxed);

mrb_value
mruby_giftwrap_uv_check_t(mrb_state* mrb, uv_check_t *unboxed);

void
mruby_set_uv_check_t_data_ptr(mrb_value obj, uv_check_t *unboxed);

void
mruby_gift_uv_check_t_data_ptr(mrb_value obj, uv_check_t *unboxed);

uv_check_t *
mruby_unbox_uv_check_t(mrb_value boxed);
#endif

#if BIND_UvConnectT_TYPE
mrb_value
mruby_box_uv_connect_t(mrb_state* mrb, uv_connect_t *unboxed);

mrb_value
mruby_giftwrap_uv_connect_t(mrb_state* mrb, uv_connect_t *unboxed);

void
mruby_set_uv_connect_t_data_ptr(mrb_value obj, uv_connect_t *unboxed);

void
mruby_gift_uv_connect_t_data_ptr(mrb_value obj, uv_connect_t *unboxed);

uv_connect_t *
mruby_unbox_uv_connect_t(mrb_value boxed);
#endif

#if BIND_UvCpuInfoT_TYPE
mrb_value
mruby_box_uv_cpu_info_t(mrb_state* mrb, uv_cpu_info_t *unboxed);

mrb_value
mruby_giftwrap_uv_cpu_info_t(mrb_state* mrb, uv_cpu_info_t *unboxed);

void
mruby_set_uv_cpu_info_t_data_ptr(mrb_value obj, uv_cpu_info_t *unboxed);

void
mruby_gift_uv_cpu_info_t_data_ptr(mrb_value obj, uv_cpu_info_t *unboxed);

uv_cpu_info_t *
mruby_unbox_uv_cpu_info_t(mrb_value boxed);
#endif

#if BIND_UvCpuTimesS_TYPE
mrb_value
mruby_box_uv_cpu_times_s(mrb_state* mrb, struct uv_cpu_times_s *unboxed);

mrb_value
mruby_giftwrap_uv_cpu_times_s(mrb_state* mrb, struct uv_cpu_times_s *unboxed);

void
mruby_set_uv_cpu_times_s_data_ptr(mrb_value obj, struct uv_cpu_times_s *unboxed);

void
mruby_gift_uv_cpu_times_s_data_ptr(mrb_value obj, struct uv_cpu_times_s *unboxed);

struct uv_cpu_times_s *
mruby_unbox_uv_cpu_times_s(mrb_value boxed);
#endif

#if BIND_UvDirentT_TYPE
mrb_value
mruby_box_uv_dirent_t(mrb_state* mrb, uv_dirent_t *unboxed);

mrb_value
mruby_giftwrap_uv_dirent_t(mrb_state* mrb, uv_dirent_t *unboxed);

void
mruby_set_uv_dirent_t_data_ptr(mrb_value obj, uv_dirent_t *unboxed);

void
mruby_gift_uv_dirent_t_data_ptr(mrb_value obj, uv_dirent_t *unboxed);

uv_dirent_t *
mruby_unbox_uv_dirent_t(mrb_value boxed);
#endif

#if BIND_UvFsEventT_TYPE
mrb_value
mruby_box_uv_fs_event_t(mrb_state* mrb, uv_fs_event_t *unboxed);

mrb_value
mruby_giftwrap_uv_fs_event_t(mrb_state* mrb, uv_fs_event_t *unboxed);

void
mruby_set_uv_fs_event_t_data_ptr(mrb_value obj, uv_fs_event_t *unboxed);

void
mruby_gift_uv_fs_event_t_data_ptr(mrb_value obj, uv_fs_event_t *unboxed);

uv_fs_event_t *
mruby_unbox_uv_fs_event_t(mrb_value boxed);
#endif

#if BIND_UvFsPollT_TYPE
mrb_value
mruby_box_uv_fs_poll_t(mrb_state* mrb, uv_fs_poll_t *unboxed);

mrb_value
mruby_giftwrap_uv_fs_poll_t(mrb_state* mrb, uv_fs_poll_t *unboxed);

void
mruby_set_uv_fs_poll_t_data_ptr(mrb_value obj, uv_fs_poll_t *unboxed);

void
mruby_gift_uv_fs_poll_t_data_ptr(mrb_value obj, uv_fs_poll_t *unboxed);

uv_fs_poll_t *
mruby_unbox_uv_fs_poll_t(mrb_value boxed);
#endif

#if BIND_UvFsT_TYPE
mrb_value
mruby_box_uv_fs_t(mrb_state* mrb, uv_fs_t *unboxed);

mrb_value
mruby_giftwrap_uv_fs_t(mrb_state* mrb, uv_fs_t *unboxed);

void
mruby_set_uv_fs_t_data_ptr(mrb_value obj, uv_fs_t *unboxed);

void
mruby_gift_uv_fs_t_data_ptr(mrb_value obj, uv_fs_t *unboxed);

uv_fs_t *
mruby_unbox_uv_fs_t(mrb_value boxed);
#endif

#if BIND_UvGetaddrinfoT_TYPE
mrb_value
mruby_box_uv_getaddrinfo_t(mrb_state* mrb, uv_getaddrinfo_t *unboxed);

mrb_value
mruby_giftwrap_uv_getaddrinfo_t(mrb_state* mrb, uv_getaddrinfo_t *unboxed);

void
mruby_set_uv_getaddrinfo_t_data_ptr(mrb_value obj, uv_getaddrinfo_t *unboxed);

void
mruby_gift_uv_getaddrinfo_t_data_ptr(mrb_value obj, uv_getaddrinfo_t *unboxed);

uv_getaddrinfo_t *
mruby_unbox_uv_getaddrinfo_t(mrb_value boxed);
#endif

#if BIND_UvGetnameinfoT_TYPE
mrb_value
mruby_box_uv_getnameinfo_t(mrb_state* mrb, uv_getnameinfo_t *unboxed);

mrb_value
mruby_giftwrap_uv_getnameinfo_t(mrb_state* mrb, uv_getnameinfo_t *unboxed);

void
mruby_set_uv_getnameinfo_t_data_ptr(mrb_value obj, uv_getnameinfo_t *unboxed);

void
mruby_gift_uv_getnameinfo_t_data_ptr(mrb_value obj, uv_getnameinfo_t *unboxed);

uv_getnameinfo_t *
mruby_unbox_uv_getnameinfo_t(mrb_value boxed);
#endif

#if BIND_UvHandleT_TYPE
mrb_value
mruby_box_uv_handle_t(mrb_state* mrb, uv_handle_t *unboxed);

mrb_value
mruby_giftwrap_uv_handle_t(mrb_state* mrb, uv_handle_t *unboxed);

void
mruby_set_uv_handle_t_data_ptr(mrb_value obj, uv_handle_t *unboxed);

void
mruby_gift_uv_handle_t_data_ptr(mrb_value obj, uv_handle_t *unboxed);

uv_handle_t *
mruby_unbox_uv_handle_t(mrb_value boxed);
#endif

#if BIND_UvIdleT_TYPE
mrb_value
mruby_box_uv_idle_t(mrb_state* mrb, uv_idle_t *unboxed);

mrb_value
mruby_giftwrap_uv_idle_t(mrb_state* mrb, uv_idle_t *unboxed);

void
mruby_set_uv_idle_t_data_ptr(mrb_value obj, uv_idle_t *unboxed);

void
mruby_gift_uv_idle_t_data_ptr(mrb_value obj, uv_idle_t *unboxed);

uv_idle_t *
mruby_unbox_uv_idle_t(mrb_value boxed);
#endif

#if BIND_UvInterfaceAddressT_TYPE
mrb_value
mruby_box_uv_interface_address_t(mrb_state* mrb, uv_interface_address_t *unboxed);

mrb_value
mruby_giftwrap_uv_interface_address_t(mrb_state* mrb, uv_interface_address_t *unboxed);

void
mruby_set_uv_interface_address_t_data_ptr(mrb_value obj, uv_interface_address_t *unboxed);

void
mruby_gift_uv_interface_address_t_data_ptr(mrb_value obj, uv_interface_address_t *unboxed);

uv_interface_address_t *
mruby_unbox_uv_interface_address_t(mrb_value boxed);
#endif

#if BIND_UvLoopT_TYPE
mrb_value
mruby_box_uv_loop_t(mrb_state* mrb, uv_loop_t *unboxed);

mrb_value
mruby_giftwrap_uv_loop_t(mrb_state* mrb, uv_loop_t *unboxed);

void
mruby_set_uv_loop_t_data_ptr(mrb_value obj, uv_loop_t *unboxed);

void
mruby_gift_uv_loop_t_data_ptr(mrb_value obj, uv_loop_t *unboxed);

uv_loop_t *
mruby_unbox_uv_loop_t(mrb_value boxed);
#endif

#if BIND_UvPipeT_TYPE
mrb_value
mruby_box_uv_pipe_t(mrb_state* mrb, uv_pipe_t *unboxed);

mrb_value
mruby_giftwrap_uv_pipe_t(mrb_state* mrb, uv_pipe_t *unboxed);

void
mruby_set_uv_pipe_t_data_ptr(mrb_value obj, uv_pipe_t *unboxed);

void
mruby_gift_uv_pipe_t_data_ptr(mrb_value obj, uv_pipe_t *unboxed);

uv_pipe_t *
mruby_unbox_uv_pipe_t(mrb_value boxed);
#endif

#if BIND_UvPollT_TYPE
mrb_value
mruby_box_uv_poll_t(mrb_state* mrb, uv_poll_t *unboxed);

mrb_value
mruby_giftwrap_uv_poll_t(mrb_state* mrb, uv_poll_t *unboxed);

void
mruby_set_uv_poll_t_data_ptr(mrb_value obj, uv_poll_t *unboxed);

void
mruby_gift_uv_poll_t_data_ptr(mrb_value obj, uv_poll_t *unboxed);

uv_poll_t *
mruby_unbox_uv_poll_t(mrb_value boxed);
#endif

#if BIND_UvPrepareT_TYPE
mrb_value
mruby_box_uv_prepare_t(mrb_state* mrb, uv_prepare_t *unboxed);

mrb_value
mruby_giftwrap_uv_prepare_t(mrb_state* mrb, uv_prepare_t *unboxed);

void
mruby_set_uv_prepare_t_data_ptr(mrb_value obj, uv_prepare_t *unboxed);

void
mruby_gift_uv_prepare_t_data_ptr(mrb_value obj, uv_prepare_t *unboxed);

uv_prepare_t *
mruby_unbox_uv_prepare_t(mrb_value boxed);
#endif

#if BIND_UvProcessOptionsS_TYPE
mrb_value
mruby_box_uv_process_options_s(mrb_state* mrb, struct uv_process_options_s *unboxed);

mrb_value
mruby_giftwrap_uv_process_options_s(mrb_state* mrb, struct uv_process_options_s *unboxed);

void
mruby_set_uv_process_options_s_data_ptr(mrb_value obj, struct uv_process_options_s *unboxed);

void
mruby_gift_uv_process_options_s_data_ptr(mrb_value obj, struct uv_process_options_s *unboxed);

struct uv_process_options_s *
mruby_unbox_uv_process_options_s(mrb_value boxed);
#endif

#if BIND_UvProcessT_TYPE
mrb_value
mruby_box_uv_process_t(mrb_state* mrb, uv_process_t *unboxed);

mrb_value
mruby_giftwrap_uv_process_t(mrb_state* mrb, uv_process_t *unboxed);

void
mruby_set_uv_process_t_data_ptr(mrb_value obj, uv_process_t *unboxed);

void
mruby_gift_uv_process_t_data_ptr(mrb_value obj, uv_process_t *unboxed);

uv_process_t *
mruby_unbox_uv_process_t(mrb_value boxed);
#endif

#if BIND_UvReqT_TYPE
mrb_value
mruby_box_uv_req_t(mrb_state* mrb, uv_req_t *unboxed);

mrb_value
mruby_giftwrap_uv_req_t(mrb_state* mrb, uv_req_t *unboxed);

void
mruby_set_uv_req_t_data_ptr(mrb_value obj, uv_req_t *unboxed);

void
mruby_gift_uv_req_t_data_ptr(mrb_value obj, uv_req_t *unboxed);

uv_req_t *
mruby_unbox_uv_req_t(mrb_value boxed);
#endif

#if BIND_UvRusageT_TYPE
mrb_value
mruby_box_uv_rusage_t(mrb_state* mrb, uv_rusage_t *unboxed);

mrb_value
mruby_giftwrap_uv_rusage_t(mrb_state* mrb, uv_rusage_t *unboxed);

void
mruby_set_uv_rusage_t_data_ptr(mrb_value obj, uv_rusage_t *unboxed);

void
mruby_gift_uv_rusage_t_data_ptr(mrb_value obj, uv_rusage_t *unboxed);

uv_rusage_t *
mruby_unbox_uv_rusage_t(mrb_value boxed);
#endif

#if BIND_UvShutdownT_TYPE
mrb_value
mruby_box_uv_shutdown_t(mrb_state* mrb, uv_shutdown_t *unboxed);

mrb_value
mruby_giftwrap_uv_shutdown_t(mrb_state* mrb, uv_shutdown_t *unboxed);

void
mruby_set_uv_shutdown_t_data_ptr(mrb_value obj, uv_shutdown_t *unboxed);

void
mruby_gift_uv_shutdown_t_data_ptr(mrb_value obj, uv_shutdown_t *unboxed);

uv_shutdown_t *
mruby_unbox_uv_shutdown_t(mrb_value boxed);
#endif

#if BIND_UvSignalT_TYPE
mrb_value
mruby_box_uv_signal_t(mrb_state* mrb, uv_signal_t *unboxed);

mrb_value
mruby_giftwrap_uv_signal_t(mrb_state* mrb, uv_signal_t *unboxed);

void
mruby_set_uv_signal_t_data_ptr(mrb_value obj, uv_signal_t *unboxed);

void
mruby_gift_uv_signal_t_data_ptr(mrb_value obj, uv_signal_t *unboxed);

uv_signal_t *
mruby_unbox_uv_signal_t(mrb_value boxed);
#endif

#if BIND_UvStatT_TYPE
mrb_value
mruby_box_uv_stat_t(mrb_state* mrb, uv_stat_t *unboxed);

mrb_value
mruby_giftwrap_uv_stat_t(mrb_state* mrb, uv_stat_t *unboxed);

void
mruby_set_uv_stat_t_data_ptr(mrb_value obj, uv_stat_t *unboxed);

void
mruby_gift_uv_stat_t_data_ptr(mrb_value obj, uv_stat_t *unboxed);

uv_stat_t *
mruby_unbox_uv_stat_t(mrb_value boxed);
#endif

#if BIND_UvStdioContainerS_TYPE
mrb_value
mruby_box_uv_stdio_container_s(mrb_state* mrb, struct uv_stdio_container_s *unboxed);

mrb_value
mruby_giftwrap_uv_stdio_container_s(mrb_state* mrb, struct uv_stdio_container_s *unboxed);

void
mruby_set_uv_stdio_container_s_data_ptr(mrb_value obj, struct uv_stdio_container_s *unboxed);

void
mruby_gift_uv_stdio_container_s_data_ptr(mrb_value obj, struct uv_stdio_container_s *unboxed);

struct uv_stdio_container_s *
mruby_unbox_uv_stdio_container_s(mrb_value boxed);
#endif

#if BIND_UvStreamT_TYPE
mrb_value
mruby_box_uv_stream_t(mrb_state* mrb, uv_stream_t *unboxed);

mrb_value
mruby_giftwrap_uv_stream_t(mrb_state* mrb, uv_stream_t *unboxed);

void
mruby_set_uv_stream_t_data_ptr(mrb_value obj, uv_stream_t *unboxed);

void
mruby_gift_uv_stream_t_data_ptr(mrb_value obj, uv_stream_t *unboxed);

uv_stream_t *
mruby_unbox_uv_stream_t(mrb_value boxed);
#endif

#if BIND_UvTcpT_TYPE
mrb_value
mruby_box_uv_tcp_t(mrb_state* mrb, uv_tcp_t *unboxed);

mrb_value
mruby_giftwrap_uv_tcp_t(mrb_state* mrb, uv_tcp_t *unboxed);

void
mruby_set_uv_tcp_t_data_ptr(mrb_value obj, uv_tcp_t *unboxed);

void
mruby_gift_uv_tcp_t_data_ptr(mrb_value obj, uv_tcp_t *unboxed);

uv_tcp_t *
mruby_unbox_uv_tcp_t(mrb_value boxed);
#endif

#if BIND_UvTimerT_TYPE
mrb_value
mruby_box_uv_timer_t(mrb_state* mrb, uv_timer_t *unboxed);

mrb_value
mruby_giftwrap_uv_timer_t(mrb_state* mrb, uv_timer_t *unboxed);

void
mruby_set_uv_timer_t_data_ptr(mrb_value obj, uv_timer_t *unboxed);

void
mruby_gift_uv_timer_t_data_ptr(mrb_value obj, uv_timer_t *unboxed);

uv_timer_t *
mruby_unbox_uv_timer_t(mrb_value boxed);
#endif

#if BIND_UvTimespecT_TYPE
mrb_value
mruby_box_uv_timespec_t(mrb_state* mrb, uv_timespec_t *unboxed);

mrb_value
mruby_giftwrap_uv_timespec_t(mrb_state* mrb, uv_timespec_t *unboxed);

void
mruby_set_uv_timespec_t_data_ptr(mrb_value obj, uv_timespec_t *unboxed);

void
mruby_gift_uv_timespec_t_data_ptr(mrb_value obj, uv_timespec_t *unboxed);

uv_timespec_t *
mruby_unbox_uv_timespec_t(mrb_value boxed);
#endif

#if BIND_UvTimevalT_TYPE
mrb_value
mruby_box_uv_timeval_t(mrb_state* mrb, uv_timeval_t *unboxed);

mrb_value
mruby_giftwrap_uv_timeval_t(mrb_state* mrb, uv_timeval_t *unboxed);

void
mruby_set_uv_timeval_t_data_ptr(mrb_value obj, uv_timeval_t *unboxed);

void
mruby_gift_uv_timeval_t_data_ptr(mrb_value obj, uv_timeval_t *unboxed);

uv_timeval_t *
mruby_unbox_uv_timeval_t(mrb_value boxed);
#endif

#if BIND_UvTtyT_TYPE
mrb_value
mruby_box_uv_tty_t(mrb_state* mrb, uv_tty_t *unboxed);

mrb_value
mruby_giftwrap_uv_tty_t(mrb_state* mrb, uv_tty_t *unboxed);

void
mruby_set_uv_tty_t_data_ptr(mrb_value obj, uv_tty_t *unboxed);

void
mruby_gift_uv_tty_t_data_ptr(mrb_value obj, uv_tty_t *unboxed);

uv_tty_t *
mruby_unbox_uv_tty_t(mrb_value boxed);
#endif

#if BIND_UvUdpSendT_TYPE
mrb_value
mruby_box_uv_udp_send_t(mrb_state* mrb, uv_udp_send_t *unboxed);

mrb_value
mruby_giftwrap_uv_udp_send_t(mrb_state* mrb, uv_udp_send_t *unboxed);

void
mruby_set_uv_udp_send_t_data_ptr(mrb_value obj, uv_udp_send_t *unboxed);

void
mruby_gift_uv_udp_send_t_data_ptr(mrb_value obj, uv_udp_send_t *unboxed);

uv_udp_send_t *
mruby_unbox_uv_udp_send_t(mrb_value boxed);
#endif

#if BIND_UvUdpT_TYPE
mrb_value
mruby_box_uv_udp_t(mrb_state* mrb, uv_udp_t *unboxed);

mrb_value
mruby_giftwrap_uv_udp_t(mrb_state* mrb, uv_udp_t *unboxed);

void
mruby_set_uv_udp_t_data_ptr(mrb_value obj, uv_udp_t *unboxed);

void
mruby_gift_uv_udp_t_data_ptr(mrb_value obj, uv_udp_t *unboxed);

uv_udp_t *
mruby_unbox_uv_udp_t(mrb_value boxed);
#endif

#if BIND_UvWorkT_TYPE
mrb_value
mruby_box_uv_work_t(mrb_state* mrb, uv_work_t *unboxed);

mrb_value
mruby_giftwrap_uv_work_t(mrb_state* mrb, uv_work_t *unboxed);

void
mruby_set_uv_work_t_data_ptr(mrb_value obj, uv_work_t *unboxed);

void
mruby_gift_uv_work_t_data_ptr(mrb_value obj, uv_work_t *unboxed);

uv_work_t *
mruby_unbox_uv_work_t(mrb_value boxed);
#endif

#if BIND_UvWriteT_TYPE
mrb_value
mruby_box_uv_write_t(mrb_state* mrb, uv_write_t *unboxed);

mrb_value
mruby_giftwrap_uv_write_t(mrb_state* mrb, uv_write_t *unboxed);

void
mruby_set_uv_write_t_data_ptr(mrb_value obj, uv_write_t *unboxed);

void
mruby_gift_uv_write_t_data_ptr(mrb_value obj, uv_write_t *unboxed);

uv_write_t *
mruby_unbox_uv_write_t(mrb_value boxed);
#endif


#endif
