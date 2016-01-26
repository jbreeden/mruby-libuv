#ifndef MRUBY_UV_BOXING_HEADER
#define MRUBY_UV_BOXING_HEADER

/* MRUBY_BINDING: header */
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

/* MRUBY_BINDING: Addrinfo::boxing_decls */
/* sha: 6b9b283610bbb66f97487efdd356297cef265f22a9f820352c8980f6def36d0e */
#if BIND_Addrinfo_TYPE
mrb_value
mruby_box_addrinfo(mrb_state* mrb, struct addrinfo *unboxed);

mrb_value
mruby_giftwrap_addrinfo(mrb_state* mrb, struct addrinfo *unboxed);

void
mruby_set_addrinfo_data_ptr(mrb_value obj, struct addrinfo *unboxed);

void
mruby_gift_addrinfo_data_ptr(mrb_value obj, struct addrinfo *unboxed);

struct addrinfo *
mruby_unbox_addrinfo(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Async::boxing_decls */
/* sha: b65d1ee99f7fc4908e06331a798fa82ee426693fb912cca1db86997607fe3fa7 */
#if BIND_Async_TYPE
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

/* MRUBY_BINDING: Check::boxing_decls */
/* sha: b17117f399baa2c025213f8b12dbebef0365f7f9eaa59087dd2f41f237a91a2f */
#if BIND_Check_TYPE
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

/* MRUBY_BINDING: Connect::boxing_decls */
/* sha: a2a518765b5cb1a6c76503c572db333c0a2aaa97b1afd0271d0ce28830fd09c4 */
#if BIND_Connect_TYPE
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

/* MRUBY_BINDING: CPUInfo::boxing_decls */
/* sha: ab4ebf2b2358ecacc88db0b7804b193a407c77f0c7a4a94ae6e049c8f34ed75b */
#if BIND_CPUInfo_TYPE
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

/* MRUBY_BINDING: CPUTimes::boxing_decls */
/* sha: 7273a1e642bc5a0ce94226ff2e44cdcc309d0d9ebe2f2e7355b6ded0cc95de72 */
#if BIND_CPUTimes_TYPE
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

/* MRUBY_BINDING: Dirent::boxing_decls */
/* sha: baf9b803a749200a852501a3f88c6b2853236e4269b4ffad5987748b3ad3e928 */
#if BIND_Dirent_TYPE
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

/* MRUBY_BINDING: FS::boxing_decls */
/* sha: 98ab871d6b6284fb75798acffd274c64dc48ecab1a6868483c63f60da87bbc0d */
#if BIND_FS_TYPE
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

/* MRUBY_BINDING: FSEvent::boxing_decls */
/* sha: 3c21c88d79161edbfb744e30624d07522bf84242af7577b60ced3da0591ea5a4 */
#if BIND_FSEvent_TYPE
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

/* MRUBY_BINDING: FSPoll::boxing_decls */
/* sha: f26d687a1c3d9f15dad728efe628523c6ac78dc85ca47c455b6ec4c2e0f779dd */
#if BIND_FSPoll_TYPE
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

/* MRUBY_BINDING: Getaddrinfo::boxing_decls */
/* sha: f5ea1a5cd6e540ec89367c482a32662a105094eef7067aea095df6c3350bbed0 */
#if BIND_Getaddrinfo_TYPE
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

/* MRUBY_BINDING: Getnameinfo::boxing_decls */
/* sha: 8546ec1d7f56e72270b11fb3b325b0730492a4cb5d2af1ba90f0ba564a4e9b6f */
#if BIND_Getnameinfo_TYPE
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

/* MRUBY_BINDING: Handle::boxing_decls */
/* sha: 3f4613051c694b823b7970b64690b4321282c3bac075f94420822a59090d96ba */
#if BIND_Handle_TYPE
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

/* MRUBY_BINDING: Idle::boxing_decls */
/* sha: 5b24df57984df252393cbac5e773dcce1974b5fd60065ff853007eed563d9620 */
#if BIND_Idle_TYPE
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

/* MRUBY_BINDING: InterfaceAddress::boxing_decls */
/* sha: 0f7092b2529ecf44b85da9c71296610b4b29641775ff1dcf860fe7901b7f7ec1 */
#if BIND_InterfaceAddress_TYPE
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

/* MRUBY_BINDING: Loop::boxing_decls */
/* sha: 61953a94d5f6048269f7611a6357a849c94bef7212b6799b45e45f960a19ca6a */
#if BIND_Loop_TYPE
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

/* MRUBY_BINDING: Pipe::boxing_decls */
/* sha: de41faaef9dfac78f85a10dec1a0594749554d1395b2558205a4502c8783f2f1 */
#if BIND_Pipe_TYPE
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

/* MRUBY_BINDING: Poll::boxing_decls */
/* sha: 57198fd9dd0b887879783e5f72bb719884b986515c5220b36a4cb35702df8010 */
#if BIND_Poll_TYPE
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

/* MRUBY_BINDING: Prepare::boxing_decls */
/* sha: fffe60dae2e458833b0f039c8f5a6d0fe0a2fcfafc3c8f9c38b780bb5adf8dd1 */
#if BIND_Prepare_TYPE
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

/* MRUBY_BINDING: Process::boxing_decls */
/* sha: 34f03e3c441f20e3e32fe1570c64e930ed0d3e5628d2be1c36307970f2f96d08 */
#if BIND_Process_TYPE
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

/* MRUBY_BINDING: ProcessOptions::boxing_decls */
/* sha: c91b2798b211ba819ce96bdac933b5f5e17b48e0f7415e50eaf0b0bcbf203393 */
#if BIND_ProcessOptions_TYPE
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

/* MRUBY_BINDING: Req::boxing_decls */
/* sha: a729204d488b961eda3c17de3416680a9dbba5e4135dc667c9839ee9a5ad0dbd */
#if BIND_Req_TYPE
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

/* MRUBY_BINDING: RUsage::boxing_decls */
/* sha: 346444b52817c4ec949a97a4d20200f1ca097883dc819f947dfb74eee162550e */
#if BIND_RUsage_TYPE
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

/* MRUBY_BINDING: Shutdown::boxing_decls */
/* sha: 16fc2c5b498ef9278884e9bcb7daf8d8a479d672e19804630bdefd1b94b7d494 */
#if BIND_Shutdown_TYPE
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

/* MRUBY_BINDING: Signal::boxing_decls */
/* sha: 96530b61d998fd2a2c9057b2864beeb6288aae9312b24f14c2b1d12b51386e72 */
#if BIND_Signal_TYPE
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

/* MRUBY_BINDING: Stat::boxing_decls */
/* sha: a42ae9eb1fd39c2be6b15ab659878344afc86d1f8c84f1b563f27979a5dd63aa */
#if BIND_Stat_TYPE
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

/* MRUBY_BINDING: STDIOContainer::boxing_decls */
/* sha: c6d6882f0782c8f825dbfe924360814c688d1cc2dbf519ade65f8f665ee97da8 */
#if BIND_STDIOContainer_TYPE
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

/* MRUBY_BINDING: Stream::boxing_decls */
/* sha: e82908535f7ffd443031f2a54b39baf9949caf0016a7ed6f92269efe3ea15b30 */
#if BIND_Stream_TYPE
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

/* MRUBY_BINDING: TCP::boxing_decls */
/* sha: 0d95f6073cdb82231b4426cd7d2e2ed312060c3f98e72fbfb316691215aef7ab */
#if BIND_TCP_TYPE
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

/* MRUBY_BINDING: Timer::boxing_decls */
/* sha: 2f6693cbaf40d390874b4e8e5156b5fc5a33d230a537f744ffd229b168d1a064 */
#if BIND_Timer_TYPE
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

/* MRUBY_BINDING: Timespec::boxing_decls */
/* sha: e6169b3b891900acf5e95dfc00954ede727914d93373d1f706ce9081ea2c7d4a */
#if BIND_Timespec_TYPE
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

/* MRUBY_BINDING: Timeval::boxing_decls */
/* sha: f0e63266875eefae714c33530937661516940e9b5f5cf547b2357c30192f4a09 */
#if BIND_Timeval_TYPE
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

/* MRUBY_BINDING: TTY::boxing_decls */
/* sha: e2e8252cef353f35900e30910236d08e9060b9b6a3a63a00276eba50b90d316e */
#if BIND_TTY_TYPE
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

/* MRUBY_BINDING: UDP::boxing_decls */
/* sha: 33c5b175a8a56a288df8744b18e1164958a3c9217f3ed8f02d8ae2958bad2df6 */
#if BIND_UDP_TYPE
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

/* MRUBY_BINDING: UDPSend::boxing_decls */
/* sha: c10f36c5d210dd6d938762b5afb0a1dfff747da793d5b7c54e9f597ed39da905 */
#if BIND_UDPSend_TYPE
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

/* MRUBY_BINDING: Work::boxing_decls */
/* sha: 01f7981e188ce6b2bea931d7a376c81f6babda245ea26857d6aac7ee35ec0b49 */
#if BIND_Work_TYPE
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

/* MRUBY_BINDING: Write::boxing_decls */
/* sha: ce5c4d919853257c67467177575c0adb7185933033cf36fcc721c640f04270e9 */
#if BIND_Write_TYPE
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

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */

#endif
