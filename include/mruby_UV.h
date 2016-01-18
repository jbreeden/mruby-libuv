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
/* sha: ad50fb1bacb680a84edd0d1438157e7feb696a3e8cc2e5bc040d00fed726b260 */
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
#include "mruby_UV_callback_thunks.h"

typedef struct {
  mrb_state* mrb;
  mrb_value self;
} mruby_uv_data_t;

typedef struct {
  uv_fs_t handle_data;
  uv_buf_t buf;
} uv_fs_and_buf_t;

#define MRUBY_UV_HANDLE_SELF(handle) ((mruby_uv_data_t*)((uv_handle_t*)handle)->data)->self
#define MRUBY_UV_HANDLE_MRB(handle) ((mruby_uv_data_t*)((uv_handle_t*)handle)->data)->mrb
#define MRUBY_UV_REQ_SELF(handle) ((mruby_uv_data_t*)((uv_handle_t*)handle)->data)->self
#define MRUBY_UV_REQ_MRB(handle) ((mruby_uv_data_t*)((uv_handle_t*)handle)->data)->mrb

void free_mruby_uv_handle(uv_handle_t * handle);
void free_mruby_uv_req(uv_req_t * req);
uv_handle_t * new_mruby_uv_handle(mrb_state* mrb, mrb_value self, size_t size);
uv_req_t * new_mruby_uv_req(mrb_state* mrb, mrb_value self, size_t size);

#define INIT_LOOP_DATA(loop, mrb, _self) \
if (loop->data == NULL) { \
  mruby_uv_data_t * data = (mruby_uv_data_t*)calloc(1, sizeof(mruby_uv_data_t)); \
  data->mrb = mrb; \
  data->self = _self; \
  loop->data = data; \
}

int set_loop_reference(mrb_state*, mrb_value);
int unset_loop_reference(mrb_state*, mrb_value);
#define SET_LOOP_REF(rb_handle) if (set_loop_reference(mrb, rb_handle)) return mrb_nil_value();
#define UNSET_LOOP_REF(rb_handle) if (unset_loop_reference(mrb, rb_handle)) return mrb_nil_value();

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
/* sha: 6b5d3eb33e7156feddb6afebb73e756eaf927f110aee5b5efc56d38990fcadc1 */
#define UV_module(mrb) mrb_module_get(mrb, "UV")
#define UvAsyncT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvAsyncT")
#define UvCheckT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvCheckT")
#define UvConnectT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvConnectT")
#define UvCpuInfoT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvCpuInfoT")
#define UvCpuTimesS_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvCpuTimesS")
#define UvDirentT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvDirentT")
#define UvFsEventT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvFsEventT")
#define UvFsPollT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvFsPollT")
#define UvFsT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvFsT")
#define UvGetaddrinfoT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvGetaddrinfoT")
#define UvGetnameinfoT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvGetnameinfoT")
#define UvHandleT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvHandleT")
#define UvIdleT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvIdleT")
#define UvInterfaceAddressT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvInterfaceAddressT")
#define UvLoopT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvLoopT")
#define UvPipeT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvPipeT")
#define UvPollT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvPollT")
#define UvPrepareT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvPrepareT")
#define UvProcessOptionsT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvProcessOptionsT")
#define UvProcessT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvProcessT")
#define UvReqT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvReqT")
#define UvRusageT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvRusageT")
#define UvShutdownT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvShutdownT")
#define UvSignalT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvSignalT")
#define UvStatT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvStatT")
#define UvStdioContainerT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvStdioContainerT")
#define UvStreamT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvStreamT")
#define UvTcpT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvTcpT")
#define UvTimerT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvTimerT")
#define UvTimespecT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvTimespecT")
#define UvTimevalT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvTimevalT")
#define UvTtyT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvTtyT")
#define UvUdpSendT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvUdpSendT")
#define UvUdpT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvUdpT")
#define UvWorkT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvWorkT")
#define UvWriteT_class(mrb) mrb_class_get_under(mrb, UV_module(mrb), "UvWriteT")
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
/* sha: 2a1118d505d650406c327cb17e1c5c11ec2f171669b8f1a01fd2b6fa73d4e22b */
#if BIND_UvAsyncT_TYPE
void mrb_UV_UvAsyncT_init(mrb_state* mrb);
#endif
#if BIND_UvCheckT_TYPE
void mrb_UV_UvCheckT_init(mrb_state* mrb);
#endif
#if BIND_UvConnectT_TYPE
void mrb_UV_UvConnectT_init(mrb_state* mrb);
#endif
#if BIND_UvCpuInfoT_TYPE
void mrb_UV_UvCpuInfoT_init(mrb_state* mrb);
#endif
#if BIND_UvCpuTimesS_TYPE
void mrb_UV_UvCpuTimesS_init(mrb_state* mrb);
#endif
#if BIND_UvDirentT_TYPE
void mrb_UV_UvDirentT_init(mrb_state* mrb);
#endif
#if BIND_UvFsEventT_TYPE
void mrb_UV_UvFsEventT_init(mrb_state* mrb);
#endif
#if BIND_UvFsPollT_TYPE
void mrb_UV_UvFsPollT_init(mrb_state* mrb);
#endif
#if BIND_UvFsT_TYPE
void mrb_UV_UvFsT_init(mrb_state* mrb);
#endif
#if BIND_UvGetaddrinfoT_TYPE
void mrb_UV_UvGetaddrinfoT_init(mrb_state* mrb);
#endif
#if BIND_UvGetnameinfoT_TYPE
void mrb_UV_UvGetnameinfoT_init(mrb_state* mrb);
#endif
#if BIND_UvHandleT_TYPE
void mrb_UV_UvHandleT_init(mrb_state* mrb);
#endif
#if BIND_UvIdleT_TYPE
void mrb_UV_UvIdleT_init(mrb_state* mrb);
#endif
#if BIND_UvInterfaceAddressT_TYPE
void mrb_UV_UvInterfaceAddressT_init(mrb_state* mrb);
#endif
#if BIND_UvLoopT_TYPE
void mrb_UV_UvLoopT_init(mrb_state* mrb);
#endif
#if BIND_UvPipeT_TYPE
void mrb_UV_UvPipeT_init(mrb_state* mrb);
#endif
#if BIND_UvPollT_TYPE
void mrb_UV_UvPollT_init(mrb_state* mrb);
#endif
#if BIND_UvPrepareT_TYPE
void mrb_UV_UvPrepareT_init(mrb_state* mrb);
#endif
#if BIND_UvProcessOptionsT_TYPE
void mrb_UV_UvProcessOptionsT_init(mrb_state* mrb);
#endif
#if BIND_UvProcessT_TYPE
void mrb_UV_UvProcessT_init(mrb_state* mrb);
#endif
#if BIND_UvReqT_TYPE
void mrb_UV_UvReqT_init(mrb_state* mrb);
#endif
#if BIND_UvRusageT_TYPE
void mrb_UV_UvRusageT_init(mrb_state* mrb);
#endif
#if BIND_UvShutdownT_TYPE
void mrb_UV_UvShutdownT_init(mrb_state* mrb);
#endif
#if BIND_UvSignalT_TYPE
void mrb_UV_UvSignalT_init(mrb_state* mrb);
#endif
#if BIND_UvStatT_TYPE
void mrb_UV_UvStatT_init(mrb_state* mrb);
#endif
#if BIND_UvStdioContainerT_TYPE
void mrb_UV_UvStdioContainerT_init(mrb_state* mrb);
#endif
#if BIND_UvStreamT_TYPE
void mrb_UV_UvStreamT_init(mrb_state* mrb);
#endif
#if BIND_UvTcpT_TYPE
void mrb_UV_UvTcpT_init(mrb_state* mrb);
#endif
#if BIND_UvTimerT_TYPE
void mrb_UV_UvTimerT_init(mrb_state* mrb);
#endif
#if BIND_UvTimespecT_TYPE
void mrb_UV_UvTimespecT_init(mrb_state* mrb);
#endif
#if BIND_UvTimevalT_TYPE
void mrb_UV_UvTimevalT_init(mrb_state* mrb);
#endif
#if BIND_UvTtyT_TYPE
void mrb_UV_UvTtyT_init(mrb_state* mrb);
#endif
#if BIND_UvUdpSendT_TYPE
void mrb_UV_UvUdpSendT_init(mrb_state* mrb);
#endif
#if BIND_UvUdpT_TYPE
void mrb_UV_UvUdpT_init(mrb_state* mrb);
#endif
#if BIND_UvWorkT_TYPE
void mrb_UV_UvWorkT_init(mrb_state* mrb);
#endif
#if BIND_UvWriteT_TYPE
void mrb_UV_UvWriteT_init(mrb_state* mrb);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: post_class_init_decls */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Macro definition function declaration
 * -------------------------------------
 */
void mruby_UV_define_macro_constants(mrb_state* mrb);

#endif
