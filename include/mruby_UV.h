#ifndef UV_HEADER
#define UV_HEADER

/*
 * Header Files
 * ------------
 *
 * These are the header files that defined the
 * classes and functions for which bindings have
 * been generated. If any of these are not needed
 * they should be commented out.
 *
 * TODO: ONLY the filename is inserted here automatically.
 *       If the file is not directly on the include path,
 *       you will need to prepend the relative path.
 */

/* MRUBY_BINDING: pre_includes */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: includes */
/* sha: 717c8c5e289e0fb293beebdbe0868ece2c361e9e12de5b1c22b43c25aa6a6112 */
#include <stdlib.h>
#include "mruby.h"
#include "mruby/array.h"
#include "mruby/class.h"
#include "mruby/compile.h"
#include "mruby/data.h"
#include "mruby/string.h"
#include "mruby/value.h"
#include "mruby/variable.h"

#include "uv.h"

#include "mruby_UV_functions.h"
#include "mruby_UV_classes.h"
#include "mruby_UV_boxing.h"
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: post_includes */
/* sha: user_defined */

#ifdef __WIN32
#  include "Ws2tcpip.h"
#else
#  include "unistd.h"
#  include "sys/socket.h"
#  include "sys/types.h"
#endif

#include "mruby_UV_callback_thunks.h"

#define MRUBY_UV_PATH_BUF_SIZE 1024

typedef struct {
  mrb_state* mrb;
  mrb_value self;
} mruby_uv_data_t;

typedef struct {
  uv_fs_t fs_req;
  uv_buf_t buf;
} uv_fs_and_buf_t;

#define MRUBY_UV_HANDLE_SELF(handle) ((mruby_uv_data_t*)((uv_handle_t*)handle)->data)->self
#define MRUBY_UV_HANDLE_MRB(handle) ((mruby_uv_data_t*)((uv_handle_t*)handle)->data)->mrb
#define MRUBY_UV_REQ_SELF(handle) ((mruby_uv_data_t*)((uv_handle_t*)handle)->data)->self
#define MRUBY_UV_REQ_MRB(handle) ((mruby_uv_data_t*)((uv_handle_t*)handle)->data)->mrb
#define MRUBY_UV_REQ_MRB(handle) ((mruby_uv_data_t*)((uv_handle_t*)handle)->data)->mrb

uv_buf_t mruby_uv_prepare_write_buf(mrb_state* mrb, mrb_value self, mrb_value str);
void free_mruby_uv_handle(uv_handle_t * handle);
void free_mruby_uv_req(uv_req_t * req);
uv_handle_t * new_mruby_uv_handle(mrb_state* mrb, mrb_value self, size_t size);
uv_req_t * new_mruby_uv_req(mrb_state* mrb, mrb_value self, size_t size);

#define INIT_LOOP_DATA(native_loop, rb_loop) \
if (native_loop->data == NULL) { \
  mruby_uv_data_t * data = (mruby_uv_data_t*)calloc(1, sizeof(mruby_uv_data_t)); \
  data->mrb = mrb; \
  data->self = rb_loop; \
  native_loop->data = data; \
}

/* MRUBY_BINDING_END */

/*
 * RClass Macros
 * -------------
 *
 * Macros for retrieving the RClass*'s defined by this gem.
 */

/* MRUBY_BINDING: pre_class_macros */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: class_macros */
/* sha: 2075a9c00b4b672c36c7d59b3ab4f082dccefadc809cfeb90341a057e6fc96be */
#define UV_module(mrb) mrb_module_get(mrb, "UV")
#define Addrinfo_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "Addrinfo")
#define Async_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "Async")
#define Check_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "Check")
#define Connect_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "Connect")
#define CPUInfo_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "CPUInfo")
#define CPUTimes_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "CPUTimes")
#define Dirent_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "Dirent")
#define FS_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "FS")
#define FSEvent_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "FSEvent")
#define FSPoll_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "FSPoll")
#define Getaddrinfo_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "Getaddrinfo")
#define Getnameinfo_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "Getnameinfo")
#define Handle_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "Handle")
#define Idle_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "Idle")
#define InterfaceAddress_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "InterfaceAddress")
#define Loop_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "Loop")
#define Pipe_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "Pipe")
#define Poll_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "Poll")
#define Prepare_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "Prepare")
#define Process_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "Process")
#define ProcessOptions_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "ProcessOptions")
#define Req_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "Req")
#define RUsage_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "RUsage")
#define Shutdown_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "Shutdown")
#define Signal_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "Signal")
#define Stat_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "Stat")
#define STDIOContainer_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "STDIOContainer")
#define Stream_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "Stream")
#define TCP_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "TCP")
#define Timer_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "Timer")
#define Timespec_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "Timespec")
#define Timeval_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "Timeval")
#define TTY_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "TTY")
#define UDP_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UDP")
#define UDPSend_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UDPSend")
#define Work_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "Work")
#define Write_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "Write")
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: post_class_macros */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class initialization function declarations
 * ------------------------------------------
 */

/* MRUBY_BINDING: pre_class_init_decls */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: pre_class_init_decls */
/* sha: efe6c9fca9d1ec938b40cf8f3824370572f7a076110864a642b7e7602b0ebf1d */
#if BIND_Addrinfo_TYPE
void mrb_UV_Addrinfo_init(mrb_state* mrb);
#endif
#if BIND_Async_TYPE
void mrb_UV_Async_init(mrb_state* mrb);
#endif
#if BIND_Check_TYPE
void mrb_UV_Check_init(mrb_state* mrb);
#endif
#if BIND_Connect_TYPE
void mrb_UV_Connect_init(mrb_state* mrb);
#endif
#if BIND_CPUInfo_TYPE
void mrb_UV_CPUInfo_init(mrb_state* mrb);
#endif
#if BIND_CPUTimes_TYPE
void mrb_UV_CPUTimes_init(mrb_state* mrb);
#endif
#if BIND_Dirent_TYPE
void mrb_UV_Dirent_init(mrb_state* mrb);
#endif
#if BIND_FS_TYPE
void mrb_UV_FS_init(mrb_state* mrb);
#endif
#if BIND_FSEvent_TYPE
void mrb_UV_FSEvent_init(mrb_state* mrb);
#endif
#if BIND_FSPoll_TYPE
void mrb_UV_FSPoll_init(mrb_state* mrb);
#endif
#if BIND_Getaddrinfo_TYPE
void mrb_UV_Getaddrinfo_init(mrb_state* mrb);
#endif
#if BIND_Getnameinfo_TYPE
void mrb_UV_Getnameinfo_init(mrb_state* mrb);
#endif
#if BIND_Handle_TYPE
void mrb_UV_Handle_init(mrb_state* mrb);
#endif
#if BIND_Idle_TYPE
void mrb_UV_Idle_init(mrb_state* mrb);
#endif
#if BIND_InterfaceAddress_TYPE
void mrb_UV_InterfaceAddress_init(mrb_state* mrb);
#endif
#if BIND_Loop_TYPE
void mrb_UV_Loop_init(mrb_state* mrb);
#endif
#if BIND_Pipe_TYPE
void mrb_UV_Pipe_init(mrb_state* mrb);
#endif
#if BIND_Poll_TYPE
void mrb_UV_Poll_init(mrb_state* mrb);
#endif
#if BIND_Prepare_TYPE
void mrb_UV_Prepare_init(mrb_state* mrb);
#endif
#if BIND_Process_TYPE
void mrb_UV_Process_init(mrb_state* mrb);
#endif
#if BIND_ProcessOptions_TYPE
void mrb_UV_ProcessOptions_init(mrb_state* mrb);
#endif
#if BIND_Req_TYPE
void mrb_UV_Req_init(mrb_state* mrb);
#endif
#if BIND_RUsage_TYPE
void mrb_UV_RUsage_init(mrb_state* mrb);
#endif
#if BIND_Shutdown_TYPE
void mrb_UV_Shutdown_init(mrb_state* mrb);
#endif
#if BIND_Signal_TYPE
void mrb_UV_Signal_init(mrb_state* mrb);
#endif
#if BIND_Stat_TYPE
void mrb_UV_Stat_init(mrb_state* mrb);
#endif
#if BIND_STDIOContainer_TYPE
void mrb_UV_STDIOContainer_init(mrb_state* mrb);
#endif
#if BIND_Stream_TYPE
void mrb_UV_Stream_init(mrb_state* mrb);
#endif
#if BIND_TCP_TYPE
void mrb_UV_TCP_init(mrb_state* mrb);
#endif
#if BIND_Timer_TYPE
void mrb_UV_Timer_init(mrb_state* mrb);
#endif
#if BIND_Timespec_TYPE
void mrb_UV_Timespec_init(mrb_state* mrb);
#endif
#if BIND_Timeval_TYPE
void mrb_UV_Timeval_init(mrb_state* mrb);
#endif
#if BIND_TTY_TYPE
void mrb_UV_TTY_init(mrb_state* mrb);
#endif
#if BIND_UDP_TYPE
void mrb_UV_UDP_init(mrb_state* mrb);
#endif
#if BIND_UDPSend_TYPE
void mrb_UV_UDPSend_init(mrb_state* mrb);
#endif
#if BIND_Work_TYPE
void mrb_UV_Work_init(mrb_state* mrb);
#endif
#if BIND_Write_TYPE
void mrb_UV_Write_init(mrb_state* mrb);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: post_class_init_decls */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Macro & Enum definition function declarations
 * ---------------------------------------------
 */
void mruby_UV_define_macro_constants(mrb_state* mrb);
void mruby_UV_define_enum_constants(mrb_state* mrb);

#endif
