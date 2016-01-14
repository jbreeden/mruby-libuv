#ifndef MRUBY_UV_CLASSES_HEADER
#define MRUBY_UV_CLASSES_HEADER

#define BIND_UvAsyncT_TYPE TRUE
#define BIND_UvCheckT_TYPE TRUE
#define BIND_UvConnectT_TYPE TRUE
#define BIND_UvConnectT_cb_FIELD_READER FALSE
#define BIND_UvConnectT_cb_FIELD_WRITER FALSE
#define BIND_UvConnectT_handle_FIELD_READER TRUE
#define BIND_UvConnectT_handle_FIELD_WRITER TRUE
#define BIND_UvCpuInfoT_TYPE TRUE
#define BIND_UvCpuInfoT_model_FIELD_READER FALSE
#define BIND_UvCpuInfoT_model_FIELD_WRITER FALSE
#define BIND_UvCpuInfoT_speed_FIELD_READER TRUE
#define BIND_UvCpuInfoT_speed_FIELD_WRITER TRUE
#define BIND_UvCpuInfoT_cpu_times_FIELD_READER FALSE
#define BIND_UvCpuInfoT_cpu_times_FIELD_WRITER TRUE
#define BIND_UvCpuTimesS_TYPE TRUE
#define BIND_UvCpuTimesS_user_FIELD_READER FALSE
#define BIND_UvCpuTimesS_user_FIELD_WRITER FALSE
#define BIND_UvCpuTimesS_nice_FIELD_READER FALSE
#define BIND_UvCpuTimesS_nice_FIELD_WRITER FALSE
#define BIND_UvCpuTimesS_sys_FIELD_READER FALSE
#define BIND_UvCpuTimesS_sys_FIELD_WRITER FALSE
#define BIND_UvCpuTimesS_idle_FIELD_READER FALSE
#define BIND_UvCpuTimesS_idle_FIELD_WRITER FALSE
#define BIND_UvCpuTimesS_irq_FIELD_READER FALSE
#define BIND_UvCpuTimesS_irq_FIELD_WRITER FALSE
#define BIND_UvDirentT_TYPE TRUE
#define BIND_UvDirentT_name_FIELD_READER TRUE
#define BIND_UvDirentT_name_FIELD_WRITER TRUE
#define BIND_UvDirentT_type_FIELD_READER TRUE
#define BIND_UvDirentT_type_FIELD_WRITER TRUE
#define BIND_UvFsEventT_TYPE TRUE
#define BIND_UvFsEventT_path_FIELD_READER FALSE
#define BIND_UvFsEventT_path_FIELD_WRITER FALSE
#define BIND_UvFsPollT_TYPE TRUE
#define BIND_UvFsPollT_poll_ctx_FIELD_READER FALSE
#define BIND_UvFsPollT_poll_ctx_FIELD_WRITER FALSE
#define BIND_UvFsT_TYPE TRUE
#define BIND_UvFsT_fs_type_FIELD_READER TRUE
#define BIND_UvFsT_fs_type_FIELD_WRITER TRUE
#define BIND_UvFsT_loop_FIELD_READER TRUE
#define BIND_UvFsT_loop_FIELD_WRITER TRUE
#define BIND_UvFsT_cb_FIELD_READER FALSE
#define BIND_UvFsT_cb_FIELD_WRITER FALSE
#define BIND_UvFsT_result_FIELD_READER FALSE
#define BIND_UvFsT_result_FIELD_WRITER FALSE
#define BIND_UvFsT_ptr_FIELD_READER FALSE
#define BIND_UvFsT_ptr_FIELD_WRITER FALSE
#define BIND_UvFsT_path_FIELD_READER TRUE
#define BIND_UvFsT_path_FIELD_WRITER TRUE
#define BIND_UvFsT_statbuf_FIELD_READER FALSE
#define BIND_UvFsT_statbuf_FIELD_WRITER TRUE
#define BIND_UvGetaddrinfoT_TYPE TRUE
#define BIND_UvGetaddrinfoT_loop_FIELD_READER TRUE
#define BIND_UvGetaddrinfoT_loop_FIELD_WRITER TRUE
#define BIND_UvGetnameinfoT_TYPE TRUE
#define BIND_UvGetnameinfoT_loop_FIELD_READER TRUE
#define BIND_UvGetnameinfoT_loop_FIELD_WRITER TRUE
#define BIND_UvHandleT_TYPE TRUE
#define BIND_UvIdleT_TYPE TRUE
#define BIND_UvInterfaceAddressT_TYPE TRUE
#define BIND_UvInterfaceAddressT_name_FIELD_READER FALSE
#define BIND_UvInterfaceAddressT_name_FIELD_WRITER FALSE
#define BIND_UvInterfaceAddressT_phys_addr_FIELD_READER FALSE
#define BIND_UvInterfaceAddressT_phys_addr_FIELD_WRITER FALSE
#define BIND_UvInterfaceAddressT_is_internal_FIELD_READER TRUE
#define BIND_UvInterfaceAddressT_is_internal_FIELD_WRITER TRUE
#define BIND_UvInterfaceAddressT_address_FIELD_READER FALSE
#define BIND_UvInterfaceAddressT_address_FIELD_WRITER FALSE
#define BIND_UvInterfaceAddressT_netmask_FIELD_READER FALSE
#define BIND_UvInterfaceAddressT_netmask_FIELD_WRITER FALSE
#define BIND_UvLoopT_TYPE TRUE
#define BIND_UvLoopT_data_FIELD_READER FALSE
#define BIND_UvLoopT_data_FIELD_WRITER FALSE
#define BIND_UvLoopT_active_handles_FIELD_READER TRUE
#define BIND_UvLoopT_active_handles_FIELD_WRITER TRUE
#define BIND_UvLoopT_handle_queue_FIELD_READER FALSE
#define BIND_UvLoopT_handle_queue_FIELD_WRITER FALSE
#define BIND_UvLoopT_active_reqs_FIELD_READER FALSE
#define BIND_UvLoopT_active_reqs_FIELD_WRITER FALSE
#define BIND_UvLoopT_stop_flag_FIELD_READER TRUE
#define BIND_UvLoopT_stop_flag_FIELD_WRITER TRUE
#define BIND_UvPipeT_TYPE TRUE
#define BIND_UvPipeT_ipc_FIELD_READER TRUE
#define BIND_UvPipeT_ipc_FIELD_WRITER TRUE
#define BIND_UvPollT_TYPE TRUE
#define BIND_UvPollT_poll_cb_FIELD_READER FALSE
#define BIND_UvPollT_poll_cb_FIELD_WRITER FALSE
#define BIND_UvPrepareT_TYPE TRUE
#define BIND_UvProcessOptionsT_TYPE TRUE
#define BIND_UvProcessOptionsT_exit_cb_FIELD_READER FALSE
#define BIND_UvProcessOptionsT_exit_cb_FIELD_WRITER FALSE
#define BIND_UvProcessOptionsT_file_FIELD_READER TRUE
#define BIND_UvProcessOptionsT_file_FIELD_WRITER TRUE
#define BIND_UvProcessOptionsT_args_FIELD_READER FALSE
#define BIND_UvProcessOptionsT_args_FIELD_WRITER FALSE
#define BIND_UvProcessOptionsT_env_FIELD_READER FALSE
#define BIND_UvProcessOptionsT_env_FIELD_WRITER FALSE
#define BIND_UvProcessOptionsT_cwd_FIELD_READER TRUE
#define BIND_UvProcessOptionsT_cwd_FIELD_WRITER TRUE
#define BIND_UvProcessOptionsT_flags_FIELD_READER TRUE
#define BIND_UvProcessOptionsT_flags_FIELD_WRITER TRUE
#define BIND_UvProcessOptionsT_stdio_count_FIELD_READER TRUE
#define BIND_UvProcessOptionsT_stdio_count_FIELD_WRITER TRUE
#define BIND_UvProcessOptionsT_stdio_FIELD_READER TRUE
#define BIND_UvProcessOptionsT_stdio_FIELD_WRITER TRUE
#define BIND_UvProcessOptionsT_uid_FIELD_READER FALSE
#define BIND_UvProcessOptionsT_uid_FIELD_WRITER FALSE
#define BIND_UvProcessOptionsT_gid_FIELD_READER FALSE
#define BIND_UvProcessOptionsT_gid_FIELD_WRITER FALSE
#define BIND_UvProcessT_TYPE TRUE
#define BIND_UvProcessT_exit_cb_FIELD_READER FALSE
#define BIND_UvProcessT_exit_cb_FIELD_WRITER FALSE
#define BIND_UvProcessT_pid_FIELD_READER TRUE
#define BIND_UvProcessT_pid_FIELD_WRITER TRUE
#define BIND_UvReqT_TYPE TRUE
#define BIND_UvRusageT_TYPE TRUE
#define BIND_UvRusageT_ru_utime_FIELD_READER FALSE
#define BIND_UvRusageT_ru_utime_FIELD_WRITER TRUE
#define BIND_UvRusageT_ru_stime_FIELD_READER FALSE
#define BIND_UvRusageT_ru_stime_FIELD_WRITER TRUE
#define BIND_UvRusageT_ru_maxrss_FIELD_READER FALSE
#define BIND_UvRusageT_ru_maxrss_FIELD_WRITER FALSE
#define BIND_UvRusageT_ru_ixrss_FIELD_READER FALSE
#define BIND_UvRusageT_ru_ixrss_FIELD_WRITER FALSE
#define BIND_UvRusageT_ru_idrss_FIELD_READER FALSE
#define BIND_UvRusageT_ru_idrss_FIELD_WRITER FALSE
#define BIND_UvRusageT_ru_isrss_FIELD_READER FALSE
#define BIND_UvRusageT_ru_isrss_FIELD_WRITER FALSE
#define BIND_UvRusageT_ru_minflt_FIELD_READER FALSE
#define BIND_UvRusageT_ru_minflt_FIELD_WRITER FALSE
#define BIND_UvRusageT_ru_majflt_FIELD_READER FALSE
#define BIND_UvRusageT_ru_majflt_FIELD_WRITER FALSE
#define BIND_UvRusageT_ru_nswap_FIELD_READER FALSE
#define BIND_UvRusageT_ru_nswap_FIELD_WRITER FALSE
#define BIND_UvRusageT_ru_inblock_FIELD_READER FALSE
#define BIND_UvRusageT_ru_inblock_FIELD_WRITER FALSE
#define BIND_UvRusageT_ru_oublock_FIELD_READER FALSE
#define BIND_UvRusageT_ru_oublock_FIELD_WRITER FALSE
#define BIND_UvRusageT_ru_msgsnd_FIELD_READER FALSE
#define BIND_UvRusageT_ru_msgsnd_FIELD_WRITER FALSE
#define BIND_UvRusageT_ru_msgrcv_FIELD_READER FALSE
#define BIND_UvRusageT_ru_msgrcv_FIELD_WRITER FALSE
#define BIND_UvRusageT_ru_nsignals_FIELD_READER FALSE
#define BIND_UvRusageT_ru_nsignals_FIELD_WRITER FALSE
#define BIND_UvRusageT_ru_nvcsw_FIELD_READER FALSE
#define BIND_UvRusageT_ru_nvcsw_FIELD_WRITER FALSE
#define BIND_UvRusageT_ru_nivcsw_FIELD_READER FALSE
#define BIND_UvRusageT_ru_nivcsw_FIELD_WRITER FALSE
#define BIND_UvShutdownT_TYPE TRUE
#define BIND_UvShutdownT_handle_FIELD_READER TRUE
#define BIND_UvShutdownT_handle_FIELD_WRITER TRUE
#define BIND_UvShutdownT_cb_FIELD_READER FALSE
#define BIND_UvShutdownT_cb_FIELD_WRITER FALSE
#define BIND_UvSignalT_TYPE TRUE
#define BIND_UvSignalT_signal_cb_FIELD_READER FALSE
#define BIND_UvSignalT_signal_cb_FIELD_WRITER FALSE
#define BIND_UvSignalT_signum_FIELD_READER TRUE
#define BIND_UvSignalT_signum_FIELD_WRITER TRUE
#define BIND_UvStatT_TYPE TRUE
#define BIND_UvStatT_st_dev_FIELD_READER FALSE
#define BIND_UvStatT_st_dev_FIELD_WRITER FALSE
#define BIND_UvStatT_st_mode_FIELD_READER FALSE
#define BIND_UvStatT_st_mode_FIELD_WRITER FALSE
#define BIND_UvStatT_st_nlink_FIELD_READER FALSE
#define BIND_UvStatT_st_nlink_FIELD_WRITER FALSE
#define BIND_UvStatT_st_uid_FIELD_READER FALSE
#define BIND_UvStatT_st_uid_FIELD_WRITER FALSE
#define BIND_UvStatT_st_gid_FIELD_READER FALSE
#define BIND_UvStatT_st_gid_FIELD_WRITER FALSE
#define BIND_UvStatT_st_rdev_FIELD_READER FALSE
#define BIND_UvStatT_st_rdev_FIELD_WRITER FALSE
#define BIND_UvStatT_st_ino_FIELD_READER FALSE
#define BIND_UvStatT_st_ino_FIELD_WRITER FALSE
#define BIND_UvStatT_st_size_FIELD_READER FALSE
#define BIND_UvStatT_st_size_FIELD_WRITER FALSE
#define BIND_UvStatT_st_blksize_FIELD_READER FALSE
#define BIND_UvStatT_st_blksize_FIELD_WRITER FALSE
#define BIND_UvStatT_st_blocks_FIELD_READER FALSE
#define BIND_UvStatT_st_blocks_FIELD_WRITER FALSE
#define BIND_UvStatT_st_flags_FIELD_READER FALSE
#define BIND_UvStatT_st_flags_FIELD_WRITER FALSE
#define BIND_UvStatT_st_gen_FIELD_READER FALSE
#define BIND_UvStatT_st_gen_FIELD_WRITER FALSE
#define BIND_UvStatT_st_atim_FIELD_READER FALSE
#define BIND_UvStatT_st_atim_FIELD_WRITER TRUE
#define BIND_UvStatT_st_mtim_FIELD_READER FALSE
#define BIND_UvStatT_st_mtim_FIELD_WRITER TRUE
#define BIND_UvStatT_st_ctim_FIELD_READER FALSE
#define BIND_UvStatT_st_ctim_FIELD_WRITER TRUE
#define BIND_UvStatT_st_birthtim_FIELD_READER FALSE
#define BIND_UvStatT_st_birthtim_FIELD_WRITER TRUE
#define BIND_UvStdioContainerT_TYPE TRUE
#define BIND_UvStdioContainerT_flags_FIELD_READER TRUE
#define BIND_UvStdioContainerT_flags_FIELD_WRITER TRUE
#define BIND_UvStdioContainerT_data_FIELD_READER FALSE
#define BIND_UvStdioContainerT_data_FIELD_WRITER FALSE
#define BIND_UvStreamT_TYPE TRUE
#define BIND_UvTcpT_TYPE TRUE
#define BIND_UvTimerT_TYPE TRUE
#define BIND_UvTimespecT_TYPE TRUE
#define BIND_UvTimespecT_tv_sec_FIELD_READER TRUE
#define BIND_UvTimespecT_tv_sec_FIELD_WRITER TRUE
#define BIND_UvTimespecT_tv_nsec_FIELD_READER TRUE
#define BIND_UvTimespecT_tv_nsec_FIELD_WRITER TRUE
#define BIND_UvTimevalT_TYPE TRUE
#define BIND_UvTimevalT_tv_sec_FIELD_READER TRUE
#define BIND_UvTimevalT_tv_sec_FIELD_WRITER TRUE
#define BIND_UvTimevalT_tv_usec_FIELD_READER TRUE
#define BIND_UvTimevalT_tv_usec_FIELD_WRITER TRUE
#define BIND_UvTtyT_TYPE TRUE
#define BIND_UvUdpSendT_TYPE TRUE
#define BIND_UvUdpSendT_handle_FIELD_READER TRUE
#define BIND_UvUdpSendT_handle_FIELD_WRITER TRUE
#define BIND_UvUdpSendT_cb_FIELD_READER FALSE
#define BIND_UvUdpSendT_cb_FIELD_WRITER FALSE
#define BIND_UvUdpT_TYPE TRUE
#define BIND_UvUdpT_send_queue_size_FIELD_READER TRUE
#define BIND_UvUdpT_send_queue_size_FIELD_WRITER TRUE
#define BIND_UvUdpT_send_queue_count_FIELD_READER TRUE
#define BIND_UvUdpT_send_queue_count_FIELD_WRITER TRUE
#define BIND_UvWorkT_TYPE TRUE
#define BIND_UvWorkT_loop_FIELD_READER TRUE
#define BIND_UvWorkT_loop_FIELD_WRITER TRUE
#define BIND_UvWorkT_work_cb_FIELD_READER FALSE
#define BIND_UvWorkT_work_cb_FIELD_WRITER FALSE
#define BIND_UvWorkT_after_work_cb_FIELD_READER FALSE
#define BIND_UvWorkT_after_work_cb_FIELD_WRITER FALSE
#define BIND_UvWriteT_TYPE TRUE
#define BIND_UvWriteT_cb_FIELD_READER FALSE
#define BIND_UvWriteT_cb_FIELD_WRITER FALSE
#define BIND_UvWriteT_send_handle_FIELD_READER TRUE
#define BIND_UvWriteT_send_handle_FIELD_WRITER TRUE
#define BIND_UvWriteT_handle_FIELD_READER TRUE
#define BIND_UvWriteT_handle_FIELD_WRITER TRUE
#endif