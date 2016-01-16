#ifndef MRUBY_UV_BOXING_HEADER
#define MRUBY_UV_BOXING_HEADER

/* MRUBY_BINDING: pre_boxing_decls */
/* sha: user_defined */

/* MRUBY_BINDING_END */


/*
 * Boxing declarations
 * -------------------
 *
 * These declarations are enabled by the macros in mruby_UV_classes.h
 */

/*
* Extra wrapper over native pointer to indicate who owns this memory.
* Owner is mruby (it should be garage collected) or C (it shouldn't be).
*/
typedef struct mruby_to_native_ref_ {
  /* If true, indicates that the object should be freed when
   * mruby garbage collects the ruby object containing this pointer.
   * This is set to true when an object is boxed via the `giftwrap`
   * or `gift_{type}_ptr_set` functions.
   */
  unsigned char belongs_to_ruby;

  /* A pointer to the native object */
  void* obj;

  /* For the convenience of the binding writer,
   * the data pointer can be used to associate arbitrary
   * data with a reference to a C object.
   * 
   * Possible uses:
   * - A function pointer to invoke instead of `free` on GC.
   * - A pointer back to the RObject, to be accessed during GC.
   * - etc.
   */
  void* data;
} mruby_to_native_ref;

/* MRUBY_BINDING: UvAsyncT::boxing_decls */
/* sha: e8126d5e58130414c4d54ce01b62045518702932772b42987bd92895cf3efdbf */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCheckT::boxing_decls */
/* sha: faab253c6c718459064c77cd14ff365b286c29303c71c0af8af36c6e119b5b3e */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvConnectT::boxing_decls */
/* sha: e325af07162dd68974a3246097ff42fc6eb133f90dbad53b3f46b2e256f9c0a9 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCpuInfoT::boxing_decls */
/* sha: ea431f435149ff679f8d3e6acf763e745b84cc68f3087f965b451bcbb6d32432 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCpuTimesS::boxing_decls */
/* sha: 4d1a893749737378eeaf63d81315825901de1315931ecfe2d729bb0c0e5275e7 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvDirentT::boxing_decls */
/* sha: 4559e5c4d6cfac0e31ab25c057520dd701f4448a320f33b7353eee974f383dcd */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsEventT::boxing_decls */
/* sha: 9041ab2888b28e23440235f4864e865612ea7350d77459dfd35d96deab6205e9 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsPollT::boxing_decls */
/* sha: baff8f4246e5f0140e72c5770929148a5e0930e7aa1d6ddff044b0c69a817121 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsT::boxing_decls */
/* sha: b919940fb71c1f488b84d6baa80f4f0d7af680b88fe241f5e6171fe37a066939 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetaddrinfoT::boxing_decls */
/* sha: 4447f02a92734a2325faaca55c460010a5f3cfa6f8a60dc26513e4f25cdfa15a */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetnameinfoT::boxing_decls */
/* sha: 44d161f8e56e58857e3758c64c1e3f4a141cf91770648ccd330b02671fe7582a */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvHandleT::boxing_decls */
/* sha: 4ba2f6fb9426ee6fb6589b0c69f7ecfe01290d97f33a626912730c0a4f9fdd05 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvIdleT::boxing_decls */
/* sha: 3d747041a8756c3b7124936b90f6de865ac09645a08a11f6693cc61d19dd3ecb */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvInterfaceAddressT::boxing_decls */
/* sha: de4881270301499394f2e71fa7f013e8a7a2161d4a54c0f86c6582f23e1fa4d5 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvLoopT::boxing_decls */
/* sha: 7439339d54ac7139e943d18dc78de662bec417fd60dd24bc312063b089a73b28 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPipeT::boxing_decls */
/* sha: 83a5da9af56d0639cd07a0268d8ef66e92c3117f2a5b25e6eeba3bdf91b24174 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPollT::boxing_decls */
/* sha: 23f3ea3d2046880279d563b49c8d4087270e635fe70eda3073f0e02895980669 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPrepareT::boxing_decls */
/* sha: 44624ffa3b8f9d8676debd24f7482033cce095b98a01ef864da0650dd1ceb07f */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsT::boxing_decls */
/* sha: 5ade5a1ab559c24bc2ec130af90f75950a667e671017b590239cbf06d2508b42 */
#if BIND_UvProcessOptionsT_TYPE
mrb_value
mruby_box_uv_process_options_t(mrb_state* mrb, uv_process_options_t *unboxed);

mrb_value
mruby_giftwrap_uv_process_options_t(mrb_state* mrb, uv_process_options_t *unboxed);

void
mruby_set_uv_process_options_t_data_ptr(mrb_value obj, uv_process_options_t *unboxed);

void
mruby_gift_uv_process_options_t_data_ptr(mrb_value obj, uv_process_options_t *unboxed);

uv_process_options_t *
mruby_unbox_uv_process_options_t(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessT::boxing_decls */
/* sha: 13e0673fdd86635a9100cfd805b8cce27ea108f3380313a2da4612a4028771d4 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvReqT::boxing_decls */
/* sha: 0a82b81262de1522df4ebe791ad1631a2a5fa42bd3f82074cc7c4095692ddf1f */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::boxing_decls */
/* sha: 496af37c8d81dc4e80aeee7fc2842720d3ae997c4df1f02832837942963676a5 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvShutdownT::boxing_decls */
/* sha: 073333f5c131fe03d765d9bb9b1fb2419aff1bf593ec1b88a069d2a90a48d877 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvSignalT::boxing_decls */
/* sha: 01c13038119fe680d1b75fa309d8beb0bc9fa088bfaa027759620ae3033b8cb7 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStatT::boxing_decls */
/* sha: 25ad15bdbbb21d1605401301c80973e9bb43e08e927616ab3102efdd9a6abb60 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStdioContainerT::boxing_decls */
/* sha: dd9e334db45947189197f6fc6377987a96f8d2ce4cb076519ad8849a740acadb */
#if BIND_UvStdioContainerT_TYPE
mrb_value
mruby_box_uv_stdio_container_t(mrb_state* mrb, uv_stdio_container_t *unboxed);

mrb_value
mruby_giftwrap_uv_stdio_container_t(mrb_state* mrb, uv_stdio_container_t *unboxed);

void
mruby_set_uv_stdio_container_t_data_ptr(mrb_value obj, uv_stdio_container_t *unboxed);

void
mruby_gift_uv_stdio_container_t_data_ptr(mrb_value obj, uv_stdio_container_t *unboxed);

uv_stdio_container_t *
mruby_unbox_uv_stdio_container_t(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStreamT::boxing_decls */
/* sha: 8992e0617d9188ec49cdcff0d3a0e269a46eb034b8561b474258ff2540f14145 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTcpT::boxing_decls */
/* sha: 4195f43089d0cc4e3a6f61c5e4afa7fd21d4fb8e51f3a3e951c2f50438e4323d */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimerT::boxing_decls */
/* sha: ffa476cff1cad439e428a6274b39440fa2eac969f09a3f8d615890aaf6431bb4 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimespecT::boxing_decls */
/* sha: cb7d4c5792f9b76c49dd46617e3ec1d9a40bd1fe04fecea750087d2ddefdfb73 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimevalT::boxing_decls */
/* sha: 8f4daa3c6fe47832b92ed0de0571fd879fc3653b9428f17f556741177165fa1f */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTtyT::boxing_decls */
/* sha: 53ea993c993d2bcccd62219cc52b98afa5fa4f87c4895fc19d727fb00e9996df */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpSendT::boxing_decls */
/* sha: 2d70247532911c69a4380b911e7695db1eba752109fa376fa53865a7c7eb7a98 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpT::boxing_decls */
/* sha: 6a8757e5771ac236cc97eed13a59634d30e9fa9d75d4c4e6876bbe79ba7ac1d1 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWorkT::boxing_decls */
/* sha: 62fc862a279fa76cde311f2d905dd64fa2e93b75e8061e2c1a3c95cd06587c1c */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::boxing_decls */
/* sha: 8afce7031fe7daed204789cd6e4eb6ef8459d825f6f496aa5d284f9fdbd45670 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: post_boxing_decls */
/* sha: user_defined */

/* MRUBY_BINDING_END */

#endif
