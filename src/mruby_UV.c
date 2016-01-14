#include "mruby_UV.h"

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

#ifdef __cplusplus
extern "C" {
#endif

/* MRUBY_BINDING: uv_accept */
/* sha: 9d8144c2636cb5a9b06d7c519a1edb30acdfb5f8d3f57acffc692e0c106a1c24 */
#if BIND_uv_accept_FUNCTION
#define uv_accept_REQUIRED_ARGC 2
#define uv_accept_OPTIONAL_ARGC 0
/* uv_accept
 *
 * Parameters:
 * - server: uv_stream_t *
 * - client: uv_stream_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_accept(mrb_state* mrb, mrb_value self) {
  mrb_value server;
  mrb_value client;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &server, &client);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, server, UvStreamT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvStreamT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, client, UvStreamT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvStreamT expected");
    return mrb_nil_value();
  }

  /* Unbox param: server */
  uv_stream_t * native_server = (mrb_nil_p(server) ? NULL : mruby_unbox_uv_stream_t(server));

  /* Unbox param: client */
  uv_stream_t * native_client = (mrb_nil_p(client) ? NULL : mruby_unbox_uv_stream_t(client));

  /* Invocation */
  int native_return_value = uv_accept(native_server, native_client);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_async_init */
/* sha: 51c419b339d651c4884714fd7c5039d1ac02fcb038257ec14aeec75000eecc28 */
#if BIND_uv_async_init_FUNCTION
#define uv_async_init_REQUIRED_ARGC 3
#define uv_async_init_OPTIONAL_ARGC 0
/* uv_async_init
 *
 * Parameters:
 * - arg1: uv_loop_t *
 * - async: uv_async_t *
 * - async_cb: uv_async_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_async_init(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value async;
  mrb_value async_cb;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &async, &async_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, async, UvAsyncT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvAsyncT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_async_cb(async_cb);

  /* Unbox param: arg1 */
  uv_loop_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_loop_t(arg1));

  /* Unbox param: async */
  uv_async_t * native_async = (mrb_nil_p(async) ? NULL : mruby_unbox_uv_async_t(async));

  /* Unbox param: async_cb */
  uv_async_cb native_async_cb = TODO_mruby_unbox_uv_async_cb(async_cb);

  /* Invocation */
  int native_return_value = uv_async_init(native_arg1, native_async, native_async_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_async_send */
/* sha: 891b669f6ff01e57166989d4085ea01c8c7535e7a966d1ad6cc743f107aa0e12 */
#if BIND_uv_async_send_FUNCTION
#define uv_async_send_REQUIRED_ARGC 1
#define uv_async_send_OPTIONAL_ARGC 0
/* uv_async_send
 *
 * Parameters:
 * - async: uv_async_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_async_send(mrb_state* mrb, mrb_value self) {
  mrb_value async;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &async);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, async, UvAsyncT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvAsyncT expected");
    return mrb_nil_value();
  }

  /* Unbox param: async */
  uv_async_t * native_async = (mrb_nil_p(async) ? NULL : mruby_unbox_uv_async_t(async));

  /* Invocation */
  int native_return_value = uv_async_send(native_async);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_backend_fd */
/* sha: 2de3429f0af568f0c692d0bb5139ea2e31a4e0fd262b4d8e68be0f79b0635daa */
#if BIND_uv_backend_fd_FUNCTION
#define uv_backend_fd_REQUIRED_ARGC 1
#define uv_backend_fd_OPTIONAL_ARGC 0
/* uv_backend_fd
 *
 * Parameters:
 * - arg1: const uv_loop_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_backend_fd(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  const uv_loop_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_loop_t(arg1));

  /* Invocation */
  int native_return_value = uv_backend_fd(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_backend_timeout */
/* sha: 74d06f797140b3cace24842ea9b51b6ced45dbdf3f01285da530675ef865a628 */
#if BIND_uv_backend_timeout_FUNCTION
#define uv_backend_timeout_REQUIRED_ARGC 1
#define uv_backend_timeout_OPTIONAL_ARGC 0
/* uv_backend_timeout
 *
 * Parameters:
 * - arg1: const uv_loop_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_backend_timeout(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  const uv_loop_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_loop_t(arg1));

  /* Invocation */
  int native_return_value = uv_backend_timeout(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_barrier_destroy */
/* sha: 3773b8c7c1afb04603b10850864e2089958d40e3fd916157e5975baa7beaf3ec */
#if BIND_uv_barrier_destroy_FUNCTION
#define uv_barrier_destroy_REQUIRED_ARGC 1
#define uv_barrier_destroy_OPTIONAL_ARGC 0
/* uv_barrier_destroy
 *
 * Parameters:
 * - barrier: int *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_barrier_destroy(mrb_state* mrb, mrb_value self) {
  mrb_value barrier;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &barrier);

  /* Type checking */
  TODO_type_check_int_PTR(barrier);

  /* Unbox param: barrier */
  int * native_barrier = TODO_mruby_unbox_int_PTR(barrier);

  /* Invocation */
  uv_barrier_destroy(native_barrier);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_barrier_init */
/* sha: 59c077726df102344d03d44d718fa0950ec867b2770fc603efc8dc6f7eccef0e */
#if BIND_uv_barrier_init_FUNCTION
#define uv_barrier_init_REQUIRED_ARGC 2
#define uv_barrier_init_OPTIONAL_ARGC 0
/* uv_barrier_init
 *
 * Parameters:
 * - barrier: int *
 * - count: unsigned int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_barrier_init(mrb_state* mrb, mrb_value self) {
  mrb_value barrier;
  mrb_int native_count;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &barrier, &native_count);

  /* Type checking */
  TODO_type_check_int_PTR(barrier);

  /* Unbox param: barrier */
  int * native_barrier = TODO_mruby_unbox_int_PTR(barrier);

  /* Invocation */
  int native_return_value = uv_barrier_init(native_barrier, native_count);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_barrier_wait */
/* sha: 768d97409e6957257ef43a4bfa56bf2ecf4ca4c3e0c81cbfe6383b19a2a9889c */
#if BIND_uv_barrier_wait_FUNCTION
#define uv_barrier_wait_REQUIRED_ARGC 1
#define uv_barrier_wait_OPTIONAL_ARGC 0
/* uv_barrier_wait
 *
 * Parameters:
 * - barrier: int *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_barrier_wait(mrb_state* mrb, mrb_value self) {
  mrb_value barrier;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &barrier);

  /* Type checking */
  TODO_type_check_int_PTR(barrier);

  /* Unbox param: barrier */
  int * native_barrier = TODO_mruby_unbox_int_PTR(barrier);

  /* Invocation */
  int native_return_value = uv_barrier_wait(native_barrier);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_buf_init */
/* sha: 9ae9c00cda1dbf50649d381f5d194ae18278b44cc202cb1375d2b2ffcf51351c */
#if BIND_uv_buf_init_FUNCTION
#define uv_buf_init_REQUIRED_ARGC 0
#define uv_buf_init_OPTIONAL_ARGC 0
/* uv_buf_init
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_UV_uv_buf_init(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int native_return_value = uv_buf_init();

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_cancel */
/* sha: e9ed9e6b89b87ac16f8d6daf7f393a8fdd449fba8bf3aacdd175d74a62d0cbad */
#if BIND_uv_cancel_FUNCTION
#define uv_cancel_REQUIRED_ARGC 1
#define uv_cancel_OPTIONAL_ARGC 0
/* uv_cancel
 *
 * Parameters:
 * - req: uv_req_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_cancel(mrb_state* mrb, mrb_value self) {
  mrb_value req;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &req);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, req, UvReqT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvReqT expected");
    return mrb_nil_value();
  }

  /* Unbox param: req */
  uv_req_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_req_t(req));

  /* Invocation */
  int native_return_value = uv_cancel(native_req);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_chdir */
/* sha: f4bc1f7759d2e7118a3edaa2d8379d087b269fd47049cfb92fa2ee0599c18b33 */
#if BIND_uv_chdir_FUNCTION
#define uv_chdir_REQUIRED_ARGC 1
#define uv_chdir_OPTIONAL_ARGC 0
/* uv_chdir
 *
 * Parameters:
 * - dir: const char *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_chdir(mrb_state* mrb, mrb_value self) {
  char * native_dir = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_dir);

  /* Invocation */
  int native_return_value = uv_chdir(native_dir);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_check_init */
/* sha: a50227090d34c8cdc874cce9446e8d887b1ea4a43b798b266e770b820e18030f */
#if BIND_uv_check_init_FUNCTION
#define uv_check_init_REQUIRED_ARGC 2
#define uv_check_init_OPTIONAL_ARGC 0
/* uv_check_init
 *
 * Parameters:
 * - arg1: uv_loop_t *
 * - check: uv_check_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_check_init(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value check;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &check);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, check, UvCheckT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvCheckT expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uv_loop_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_loop_t(arg1));

  /* Unbox param: check */
  uv_check_t * native_check = (mrb_nil_p(check) ? NULL : mruby_unbox_uv_check_t(check));

  /* Invocation */
  int native_return_value = uv_check_init(native_arg1, native_check);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_check_start */
/* sha: a9ae849af90fc0d4e464fa569d8766fda40643f8f81c4ef0b19845260454321c */
#if BIND_uv_check_start_FUNCTION
#define uv_check_start_REQUIRED_ARGC 2
#define uv_check_start_OPTIONAL_ARGC 0
/* uv_check_start
 *
 * Parameters:
 * - check: uv_check_t *
 * - cb: uv_check_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_check_start(mrb_state* mrb, mrb_value self) {
  mrb_value check;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &check, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, check, UvCheckT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvCheckT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_check_cb(cb);

  /* Unbox param: check */
  uv_check_t * native_check = (mrb_nil_p(check) ? NULL : mruby_unbox_uv_check_t(check));

  /* Unbox param: cb */
  uv_check_cb native_cb = TODO_mruby_unbox_uv_check_cb(cb);

  /* Invocation */
  int native_return_value = uv_check_start(native_check, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_check_stop */
/* sha: 54834fca5905f3303ce33ffaca5819309f8cc28127a01a0902e7b32adaca0a9d */
#if BIND_uv_check_stop_FUNCTION
#define uv_check_stop_REQUIRED_ARGC 1
#define uv_check_stop_OPTIONAL_ARGC 0
/* uv_check_stop
 *
 * Parameters:
 * - check: uv_check_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_check_stop(mrb_state* mrb, mrb_value self) {
  mrb_value check;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &check);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, check, UvCheckT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvCheckT expected");
    return mrb_nil_value();
  }

  /* Unbox param: check */
  uv_check_t * native_check = (mrb_nil_p(check) ? NULL : mruby_unbox_uv_check_t(check));

  /* Invocation */
  int native_return_value = uv_check_stop(native_check);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_close */
/* sha: 420a2ecdcf708cf5f92b9aae5ea6494da270cf377c817f5b273e64b1a04f44fc */
#if BIND_uv_close_FUNCTION
#define uv_close_REQUIRED_ARGC 2
#define uv_close_OPTIONAL_ARGC 0
/* uv_close
 *
 * Parameters:
 * - handle: uv_handle_t *
 * - close_cb: uv_close_cb
 * Return Type: void
 */
mrb_value
mrb_UV_uv_close(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value close_cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &handle, &close_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvHandleT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvHandleT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_close_cb(close_cb);

  /* Unbox param: handle */
  uv_handle_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_handle_t(handle));

  /* Unbox param: close_cb */
  uv_close_cb native_close_cb = TODO_mruby_unbox_uv_close_cb(close_cb);

  /* Invocation */
  uv_close(native_handle, native_close_cb);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_cond_broadcast */
/* sha: cd4f0a0e4ff135599676b442f2525fc72a396644574908672202d06b6ff58fa7 */
#if BIND_uv_cond_broadcast_FUNCTION
#define uv_cond_broadcast_REQUIRED_ARGC 1
#define uv_cond_broadcast_OPTIONAL_ARGC 0
/* uv_cond_broadcast
 *
 * Parameters:
 * - cond: int *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_cond_broadcast(mrb_state* mrb, mrb_value self) {
  mrb_value cond;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &cond);

  /* Type checking */
  TODO_type_check_int_PTR(cond);

  /* Unbox param: cond */
  int * native_cond = TODO_mruby_unbox_int_PTR(cond);

  /* Invocation */
  uv_cond_broadcast(native_cond);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_cond_destroy */
/* sha: 779feae6814b542df2a6f0991de98ca12850728099f1cf013d8176618ce1f3c2 */
#if BIND_uv_cond_destroy_FUNCTION
#define uv_cond_destroy_REQUIRED_ARGC 1
#define uv_cond_destroy_OPTIONAL_ARGC 0
/* uv_cond_destroy
 *
 * Parameters:
 * - cond: int *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_cond_destroy(mrb_state* mrb, mrb_value self) {
  mrb_value cond;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &cond);

  /* Type checking */
  TODO_type_check_int_PTR(cond);

  /* Unbox param: cond */
  int * native_cond = TODO_mruby_unbox_int_PTR(cond);

  /* Invocation */
  uv_cond_destroy(native_cond);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_cond_init */
/* sha: 6dbb91afe4261bb163257b8515a69c82e7c9c132403bb7791b64a96eca97ee83 */
#if BIND_uv_cond_init_FUNCTION
#define uv_cond_init_REQUIRED_ARGC 1
#define uv_cond_init_OPTIONAL_ARGC 0
/* uv_cond_init
 *
 * Parameters:
 * - cond: int *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_cond_init(mrb_state* mrb, mrb_value self) {
  mrb_value cond;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &cond);

  /* Type checking */
  TODO_type_check_int_PTR(cond);

  /* Unbox param: cond */
  int * native_cond = TODO_mruby_unbox_int_PTR(cond);

  /* Invocation */
  int native_return_value = uv_cond_init(native_cond);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_cond_signal */
/* sha: da7b3ad1a206e637c66537892f4dbcb7def3ef1df192680faa44286be0f0277d */
#if BIND_uv_cond_signal_FUNCTION
#define uv_cond_signal_REQUIRED_ARGC 1
#define uv_cond_signal_OPTIONAL_ARGC 0
/* uv_cond_signal
 *
 * Parameters:
 * - cond: int *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_cond_signal(mrb_state* mrb, mrb_value self) {
  mrb_value cond;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &cond);

  /* Type checking */
  TODO_type_check_int_PTR(cond);

  /* Unbox param: cond */
  int * native_cond = TODO_mruby_unbox_int_PTR(cond);

  /* Invocation */
  uv_cond_signal(native_cond);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_cond_timedwait */
/* sha: c7ec54897e19cf3a11afeb166d50bd816fac7f545caac4042eed05096d7dd388 */
#if BIND_uv_cond_timedwait_FUNCTION
#define uv_cond_timedwait_REQUIRED_ARGC 3
#define uv_cond_timedwait_OPTIONAL_ARGC 0
/* uv_cond_timedwait
 *
 * Parameters:
 * - cond: int *
 * - mutex: int *
 * - timeout: uint64_t
 * Return Type: int
 */
mrb_value
mrb_UV_uv_cond_timedwait(mrb_state* mrb, mrb_value self) {
  mrb_value cond;
  mrb_value mutex;
  mrb_value timeout;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &cond, &mutex, &timeout);

  /* Type checking */
  TODO_type_check_int_PTR(cond);
  TODO_type_check_int_PTR(mutex);
  TODO_type_check_uint64_t(timeout);

  /* Unbox param: cond */
  int * native_cond = TODO_mruby_unbox_int_PTR(cond);

  /* Unbox param: mutex */
  int * native_mutex = TODO_mruby_unbox_int_PTR(mutex);

  /* Unbox param: timeout */
  uint64_t native_timeout = TODO_mruby_unbox_uint64_t(timeout);

  /* Invocation */
  int native_return_value = uv_cond_timedwait(native_cond, native_mutex, native_timeout);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_cond_wait */
/* sha: d807ba83ebd5b1f306433788d81b611ade0ab47451a764869927548ca3332ccf */
#if BIND_uv_cond_wait_FUNCTION
#define uv_cond_wait_REQUIRED_ARGC 2
#define uv_cond_wait_OPTIONAL_ARGC 0
/* uv_cond_wait
 *
 * Parameters:
 * - cond: int *
 * - mutex: int *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_cond_wait(mrb_state* mrb, mrb_value self) {
  mrb_value cond;
  mrb_value mutex;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &cond, &mutex);

  /* Type checking */
  TODO_type_check_int_PTR(cond);
  TODO_type_check_int_PTR(mutex);

  /* Unbox param: cond */
  int * native_cond = TODO_mruby_unbox_int_PTR(cond);

  /* Unbox param: mutex */
  int * native_mutex = TODO_mruby_unbox_int_PTR(mutex);

  /* Invocation */
  uv_cond_wait(native_cond, native_mutex);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_cpu_info */
/* sha: d5bdbaa1fa475da8e889ada6422d93b8aba854ae6ef62917fc3055ce963294cc */
#if BIND_uv_cpu_info_FUNCTION
#define uv_cpu_info_REQUIRED_ARGC 2
#define uv_cpu_info_OPTIONAL_ARGC 0
/* uv_cpu_info
 *
 * Parameters:
 * - cpu_infos: uv_cpu_info_t **
 * - count: int *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_cpu_info(mrb_state* mrb, mrb_value self) {
  mrb_value cpu_infos;
  mrb_value count;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &cpu_infos, &count);

  /* Type checking */
  TODO_type_check_uv_cpu_info_t_PTR_PTR(cpu_infos);
  TODO_type_check_int_PTR(count);

  /* Unbox param: cpu_infos */
  uv_cpu_info_t ** native_cpu_infos = TODO_mruby_unbox_uv_cpu_info_t_PTR_PTR(cpu_infos);

  /* Unbox param: count */
  int * native_count = TODO_mruby_unbox_int_PTR(count);

  /* Invocation */
  int native_return_value = uv_cpu_info(native_cpu_infos, native_count);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_cwd */
/* sha: 81144ae06fbc908226260cb9ec0b8e92a6b61d975463c1d14755d66df0f1dc52 */
#if BIND_uv_cwd_FUNCTION
#define uv_cwd_REQUIRED_ARGC 2
#define uv_cwd_OPTIONAL_ARGC 0
/* uv_cwd
 *
 * Parameters:
 * - buffer: char *
 * - size: size_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_cwd(mrb_state* mrb, mrb_value self) {
  mrb_value buffer;
  mrb_value size;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &buffer, &size);

  /* Type checking */
  TODO_type_check_char_PTR(buffer);
  TODO_type_check_size_t_PTR(size);

  /* Unbox param: buffer */
  char * native_buffer = TODO_mruby_unbox_char_PTR(buffer);

  /* Unbox param: size */
  size_t * native_size = TODO_mruby_unbox_size_t_PTR(size);

  /* Invocation */
  int native_return_value = uv_cwd(native_buffer, native_size);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_default_loop */
/* sha: 05264cb54ba5585ab018ae3578889119417821cb2660d9416bf9807d94110a10 */
#if BIND_uv_default_loop_FUNCTION
#define uv_default_loop_REQUIRED_ARGC 0
#define uv_default_loop_OPTIONAL_ARGC 0
/* uv_default_loop
 *
 * Parameters: None
 * Return Type: uv_loop_t *
 */
mrb_value
mrb_UV_uv_default_loop(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uv_loop_t * native_return_value = uv_default_loop();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uv_loop_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_disable_stdio_inheritance */
/* sha: 674fd224714c6003f4dacea98f1bfb3bf315a1cfa425fc3cc4f67fcf3b529cb1 */
#if BIND_uv_disable_stdio_inheritance_FUNCTION
#define uv_disable_stdio_inheritance_REQUIRED_ARGC 0
#define uv_disable_stdio_inheritance_OPTIONAL_ARGC 0
/* uv_disable_stdio_inheritance
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_UV_uv_disable_stdio_inheritance(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uv_disable_stdio_inheritance();

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_dlclose */
/* sha: ac0e992bcb080fe9103098c6834f78ba173cca1ab6bb6595ce20c9110ea63e9a */
#if BIND_uv_dlclose_FUNCTION
#define uv_dlclose_REQUIRED_ARGC 1
#define uv_dlclose_OPTIONAL_ARGC 0
/* uv_dlclose
 *
 * Parameters:
 * - lib: int *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_dlclose(mrb_state* mrb, mrb_value self) {
  mrb_value lib;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &lib);

  /* Type checking */
  TODO_type_check_int_PTR(lib);

  /* Unbox param: lib */
  int * native_lib = TODO_mruby_unbox_int_PTR(lib);

  /* Invocation */
  uv_dlclose(native_lib);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_dlerror */
/* sha: 35042a232642dafb5fdaf404f2242f73a42224dbec2d7e8d97ae3eca5b832620 */
#if BIND_uv_dlerror_FUNCTION
#define uv_dlerror_REQUIRED_ARGC 1
#define uv_dlerror_OPTIONAL_ARGC 0
/* uv_dlerror
 *
 * Parameters:
 * - lib: const int *
 * Return Type: const char *
 */
mrb_value
mrb_UV_uv_dlerror(mrb_state* mrb, mrb_value self) {
  mrb_value lib;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &lib);

  /* Type checking */
  TODO_type_check_int_PTR(lib);

  /* Unbox param: lib */
  const int * native_lib = TODO_mruby_unbox_int_PTR(lib);

  /* Invocation */
  const char * native_return_value = uv_dlerror(native_lib);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_dlopen */
/* sha: b0ae22782b174aa7afeb8bb9e136865091943a627e4f83073078e5dff63d4052 */
#if BIND_uv_dlopen_FUNCTION
#define uv_dlopen_REQUIRED_ARGC 2
#define uv_dlopen_OPTIONAL_ARGC 0
/* uv_dlopen
 *
 * Parameters:
 * - filename: const char *
 * - lib: int *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_dlopen(mrb_state* mrb, mrb_value self) {
  char * native_filename = NULL;
  mrb_value lib;

  /* Fetch the args */
  mrb_get_args(mrb, "zo", &native_filename, &lib);

  /* Type checking */
  TODO_type_check_int_PTR(lib);

  /* Unbox param: lib */
  int * native_lib = TODO_mruby_unbox_int_PTR(lib);

  /* Invocation */
  int native_return_value = uv_dlopen(native_filename, native_lib);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_dlsym */
/* sha: c1dee4cb1833f0a2a2374dc3cdfb56405a0c0a300e172cf519238791fa473ef5 */
#if BIND_uv_dlsym_FUNCTION
#define uv_dlsym_REQUIRED_ARGC 3
#define uv_dlsym_OPTIONAL_ARGC 0
/* uv_dlsym
 *
 * Parameters:
 * - lib: int *
 * - name: const char *
 * - ptr: void **
 * Return Type: int
 */
mrb_value
mrb_UV_uv_dlsym(mrb_state* mrb, mrb_value self) {
  mrb_value lib;
  char * native_name = NULL;
  mrb_value ptr;

  /* Fetch the args */
  mrb_get_args(mrb, "ozo", &lib, &native_name, &ptr);

  /* Type checking */
  TODO_type_check_int_PTR(lib);
  TODO_type_check_void_PTR_PTR(ptr);

  /* Unbox param: lib */
  int * native_lib = TODO_mruby_unbox_int_PTR(lib);

  /* Unbox param: ptr */
  void ** native_ptr = TODO_mruby_unbox_void_PTR_PTR(ptr);

  /* Invocation */
  int native_return_value = uv_dlsym(native_lib, native_name, native_ptr);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_err_name */
/* sha: 3ed02bc08b37d62b2d18d403130a2c5ef96d112dc5e550ebe988801f4c5e1b34 */
#if BIND_uv_err_name_FUNCTION
#define uv_err_name_REQUIRED_ARGC 1
#define uv_err_name_OPTIONAL_ARGC 0
/* uv_err_name
 *
 * Parameters:
 * - err: int
 * Return Type: const char *
 */
mrb_value
mrb_UV_uv_err_name(mrb_state* mrb, mrb_value self) {
  mrb_int native_err;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_err);

  /* Invocation */
  const char * native_return_value = uv_err_name(native_err);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_exepath */
/* sha: cde85ca5174171ac4b5c7be361126b9cbaf958394dac93171e204934ed7688ef */
#if BIND_uv_exepath_FUNCTION
#define uv_exepath_REQUIRED_ARGC 2
#define uv_exepath_OPTIONAL_ARGC 0
/* uv_exepath
 *
 * Parameters:
 * - buffer: char *
 * - size: size_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_exepath(mrb_state* mrb, mrb_value self) {
  mrb_value buffer;
  mrb_value size;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &buffer, &size);

  /* Type checking */
  TODO_type_check_char_PTR(buffer);
  TODO_type_check_size_t_PTR(size);

  /* Unbox param: buffer */
  char * native_buffer = TODO_mruby_unbox_char_PTR(buffer);

  /* Unbox param: size */
  size_t * native_size = TODO_mruby_unbox_size_t_PTR(size);

  /* Invocation */
  int native_return_value = uv_exepath(native_buffer, native_size);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fileno */
/* sha: c22fdd5e7a6b2ab271bb8b2054d44fdf4da894e2b252f40b4d59be6fa603fee7 */
#if BIND_uv_fileno_FUNCTION
#define uv_fileno_REQUIRED_ARGC 2
#define uv_fileno_OPTIONAL_ARGC 0
/* uv_fileno
 *
 * Parameters:
 * - handle: const uv_handle_t *
 * - fd: int *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fileno(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value fd;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &handle, &fd);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvHandleT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvHandleT expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(fd);

  /* Unbox param: handle */
  const uv_handle_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_handle_t(handle));

  /* Unbox param: fd */
  int * native_fd = TODO_mruby_unbox_int_PTR(fd);

  /* Invocation */
  int native_return_value = uv_fileno(native_handle, native_fd);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_free_cpu_info */
/* sha: 8b9e1993aea55aa2613dd31a758d77acfec9b5274bf6b84a98b3a39c52dfaa6c */
#if BIND_uv_free_cpu_info_FUNCTION
#define uv_free_cpu_info_REQUIRED_ARGC 2
#define uv_free_cpu_info_OPTIONAL_ARGC 0
/* uv_free_cpu_info
 *
 * Parameters:
 * - cpu_infos: uv_cpu_info_t *
 * - count: int
 * Return Type: void
 */
mrb_value
mrb_UV_uv_free_cpu_info(mrb_state* mrb, mrb_value self) {
  mrb_value cpu_infos;
  mrb_int native_count;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &cpu_infos, &native_count);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cpu_infos, UvCpuInfoT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvCpuInfoT expected");
    return mrb_nil_value();
  }

  /* Unbox param: cpu_infos */
  uv_cpu_info_t * native_cpu_infos = (mrb_nil_p(cpu_infos) ? NULL : mruby_unbox_uv_cpu_info_t(cpu_infos));

  /* Invocation */
  uv_free_cpu_info(native_cpu_infos, native_count);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_free_interface_addresses */
/* sha: 6cff8daaf24cd090f3a2cd1c643deef85a167d95c4379e0649bf35306680fea7 */
#if BIND_uv_free_interface_addresses_FUNCTION
#define uv_free_interface_addresses_REQUIRED_ARGC 2
#define uv_free_interface_addresses_OPTIONAL_ARGC 0
/* uv_free_interface_addresses
 *
 * Parameters:
 * - addresses: uv_interface_address_t *
 * - count: int
 * Return Type: void
 */
mrb_value
mrb_UV_uv_free_interface_addresses(mrb_state* mrb, mrb_value self) {
  mrb_value addresses;
  mrb_int native_count;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &addresses, &native_count);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, addresses, UvInterfaceAddressT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvInterfaceAddressT expected");
    return mrb_nil_value();
  }

  /* Unbox param: addresses */
  uv_interface_address_t * native_addresses = (mrb_nil_p(addresses) ? NULL : mruby_unbox_uv_interface_address_t(addresses));

  /* Invocation */
  uv_free_interface_addresses(native_addresses, native_count);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_freeaddrinfo */
/* sha: 366b802b261e81bb789749f580b5d5d1e21acd85fe84fc063a052a94775cc199 */
#if BIND_uv_freeaddrinfo_FUNCTION
#define uv_freeaddrinfo_REQUIRED_ARGC 1
#define uv_freeaddrinfo_OPTIONAL_ARGC 0
/* uv_freeaddrinfo
 *
 * Parameters:
 * - ai: struct addrinfo *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_freeaddrinfo(mrb_state* mrb, mrb_value self) {
  mrb_value ai;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &ai);

  /* Type checking */
  TODO_type_check_addrinfo_PTR(ai);

  /* Unbox param: ai */
  struct addrinfo * native_ai = TODO_mruby_unbox_addrinfo_PTR(ai);

  /* Invocation */
  uv_freeaddrinfo(native_ai);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_access */
/* sha: 3f262793b1fc1e6813f26f039e8dada9b89032914c21218ffd5b0bfa51ae1a0e */
#if BIND_uv_fs_access_FUNCTION
#define uv_fs_access_REQUIRED_ARGC 5
#define uv_fs_access_OPTIONAL_ARGC 0
/* uv_fs_access
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - path: const char *
 * - mode: int
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_access(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  char * native_path = NULL;
  mrb_int native_mode;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oozio", &loop, &req, &native_path, &native_mode, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_access(native_loop, native_req, native_path, native_mode, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_chmod */
/* sha: aa84a497924a2d2f5692b8d068461d462bc9688ae2b31ca797f77fbef4657142 */
#if BIND_uv_fs_chmod_FUNCTION
#define uv_fs_chmod_REQUIRED_ARGC 5
#define uv_fs_chmod_OPTIONAL_ARGC 0
/* uv_fs_chmod
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - path: const char *
 * - mode: int
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_chmod(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  char * native_path = NULL;
  mrb_int native_mode;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oozio", &loop, &req, &native_path, &native_mode, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_chmod(native_loop, native_req, native_path, native_mode, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_chown */
/* sha: 08acf9c7ba837cfae613bfe0cc25f3b2cdda06eb3eb7260f211bedb7e0d92c06 */
#if BIND_uv_fs_chown_FUNCTION
#define uv_fs_chown_REQUIRED_ARGC 6
#define uv_fs_chown_OPTIONAL_ARGC 0
/* uv_fs_chown
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - path: const char *
 * - uid: int
 * - gid: int
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_chown(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  char * native_path = NULL;
  mrb_int native_uid;
  mrb_int native_gid;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "ooziio", &loop, &req, &native_path, &native_uid, &native_gid, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_chown(native_loop, native_req, native_path, native_uid, native_gid, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_close */
/* sha: b286e37c3fb931316d08f34c46c7c935c0ba611c3eb03edc9e86cd3e09385e9f */
#if BIND_uv_fs_close_FUNCTION
#define uv_fs_close_REQUIRED_ARGC 4
#define uv_fs_close_OPTIONAL_ARGC 0
/* uv_fs_close
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - file: int
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_close(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  mrb_int native_file;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "ooio", &loop, &req, &native_file, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_close(native_loop, native_req, native_file, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_event_getpath */
/* sha: 78039eb0f3b7947bf0d4348424e1ff2fb24ec5d4385619a371c6b628a02e2521 */
#if BIND_uv_fs_event_getpath_FUNCTION
#define uv_fs_event_getpath_REQUIRED_ARGC 3
#define uv_fs_event_getpath_OPTIONAL_ARGC 0
/* uv_fs_event_getpath
 *
 * Parameters:
 * - handle: uv_fs_event_t *
 * - buffer: char *
 * - size: size_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_event_getpath(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value buffer;
  mrb_value size;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &handle, &buffer, &size);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvFsEventT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsEventT expected");
    return mrb_nil_value();
  }
  TODO_type_check_char_PTR(buffer);
  TODO_type_check_size_t_PTR(size);

  /* Unbox param: handle */
  uv_fs_event_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_fs_event_t(handle));

  /* Unbox param: buffer */
  char * native_buffer = TODO_mruby_unbox_char_PTR(buffer);

  /* Unbox param: size */
  size_t * native_size = TODO_mruby_unbox_size_t_PTR(size);

  /* Invocation */
  int native_return_value = uv_fs_event_getpath(native_handle, native_buffer, native_size);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_event_init */
/* sha: 456c6288bf1a34437444e933b6495fcc23a7ee2856233f980cf2d25363a23ae7 */
#if BIND_uv_fs_event_init_FUNCTION
#define uv_fs_event_init_REQUIRED_ARGC 2
#define uv_fs_event_init_OPTIONAL_ARGC 0
/* uv_fs_event_init
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - handle: uv_fs_event_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_event_init(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &loop, &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, UvFsEventT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsEventT expected");
    return mrb_nil_value();
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: handle */
  uv_fs_event_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_fs_event_t(handle));

  /* Invocation */
  int native_return_value = uv_fs_event_init(native_loop, native_handle);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_event_start */
/* sha: 50659408ce3c78330467641076c88cfe05eed9747880505a52cc196aa8942355 */
#if BIND_uv_fs_event_start_FUNCTION
#define uv_fs_event_start_REQUIRED_ARGC 4
#define uv_fs_event_start_OPTIONAL_ARGC 0
/* uv_fs_event_start
 *
 * Parameters:
 * - handle: uv_fs_event_t *
 * - cb: uv_fs_event_cb
 * - path: const char *
 * - flags: unsigned int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_event_start(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value cb;
  char * native_path = NULL;
  mrb_int native_flags;

  /* Fetch the args */
  mrb_get_args(mrb, "oozi", &handle, &cb, &native_path, &native_flags);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvFsEventT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsEventT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_fs_event_cb(cb);

  /* Unbox param: handle */
  uv_fs_event_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_fs_event_t(handle));

  /* Unbox param: cb */
  uv_fs_event_cb native_cb = TODO_mruby_unbox_uv_fs_event_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_event_start(native_handle, native_cb, native_path, native_flags);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_event_stop */
/* sha: b9a0fedaf6b13467ad44b3cf9f86a7ae29cc4f69fecdadd94b1b4c00c18358f1 */
#if BIND_uv_fs_event_stop_FUNCTION
#define uv_fs_event_stop_REQUIRED_ARGC 1
#define uv_fs_event_stop_OPTIONAL_ARGC 0
/* uv_fs_event_stop
 *
 * Parameters:
 * - handle: uv_fs_event_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_event_stop(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvFsEventT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsEventT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_fs_event_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_fs_event_t(handle));

  /* Invocation */
  int native_return_value = uv_fs_event_stop(native_handle);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_fchmod */
/* sha: d6aed641b6438f25fb221a4497ad8de2b2163a53cbde004e9359fc1b5738c875 */
#if BIND_uv_fs_fchmod_FUNCTION
#define uv_fs_fchmod_REQUIRED_ARGC 5
#define uv_fs_fchmod_OPTIONAL_ARGC 0
/* uv_fs_fchmod
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - file: int
 * - mode: int
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_fchmod(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  mrb_int native_file;
  mrb_int native_mode;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "ooiio", &loop, &req, &native_file, &native_mode, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_fchmod(native_loop, native_req, native_file, native_mode, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_fchown */
/* sha: 8be2071c88bc1832743a203327eb4ae34975ee73e4ba7f32ad73abe83d2f40df */
#if BIND_uv_fs_fchown_FUNCTION
#define uv_fs_fchown_REQUIRED_ARGC 6
#define uv_fs_fchown_OPTIONAL_ARGC 0
/* uv_fs_fchown
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - file: int
 * - uid: int
 * - gid: int
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_fchown(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  mrb_int native_file;
  mrb_int native_uid;
  mrb_int native_gid;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "ooiiio", &loop, &req, &native_file, &native_uid, &native_gid, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_fchown(native_loop, native_req, native_file, native_uid, native_gid, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_fdatasync */
/* sha: 45659caa6be3b619aac9d70e01da47de82e55e88209c8165306b52c30b29fee0 */
#if BIND_uv_fs_fdatasync_FUNCTION
#define uv_fs_fdatasync_REQUIRED_ARGC 4
#define uv_fs_fdatasync_OPTIONAL_ARGC 0
/* uv_fs_fdatasync
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - file: int
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_fdatasync(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  mrb_int native_file;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "ooio", &loop, &req, &native_file, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_fdatasync(native_loop, native_req, native_file, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_fstat */
/* sha: 5b503101f5b3dbd88701f608ea96668423d7746b4d52bbd2ccb3e0ac8f91bef5 */
#if BIND_uv_fs_fstat_FUNCTION
#define uv_fs_fstat_REQUIRED_ARGC 4
#define uv_fs_fstat_OPTIONAL_ARGC 0
/* uv_fs_fstat
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - file: int
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_fstat(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  mrb_int native_file;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "ooio", &loop, &req, &native_file, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_fstat(native_loop, native_req, native_file, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_fsync */
/* sha: 5e6b79198b5649bbbdda2074f1c731e7711099b83c74bb4fa62a2c10df4c5dcf */
#if BIND_uv_fs_fsync_FUNCTION
#define uv_fs_fsync_REQUIRED_ARGC 4
#define uv_fs_fsync_OPTIONAL_ARGC 0
/* uv_fs_fsync
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - file: int
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_fsync(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  mrb_int native_file;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "ooio", &loop, &req, &native_file, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_fsync(native_loop, native_req, native_file, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_ftruncate */
/* sha: 519d6373bd8cad534b2d59184c3bb5d7ae4a3c9c24377b3aa3f10c4db8a8ebff */
#if BIND_uv_fs_ftruncate_FUNCTION
#define uv_fs_ftruncate_REQUIRED_ARGC 5
#define uv_fs_ftruncate_OPTIONAL_ARGC 0
/* uv_fs_ftruncate
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - file: int
 * - offset: int64_t
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_ftruncate(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  mrb_int native_file;
  mrb_value offset;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "ooioo", &loop, &req, &native_file, &offset, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_int64_t(offset);
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: offset */
  int64_t native_offset = TODO_mruby_unbox_int64_t(offset);

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_ftruncate(native_loop, native_req, native_file, native_offset, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_futime */
/* sha: 5c58632f3a194108cbd7cd5f1cc74fa5d663b8fb2031d6442703eeab51e6d99c */
#if BIND_uv_fs_futime_FUNCTION
#define uv_fs_futime_REQUIRED_ARGC 6
#define uv_fs_futime_OPTIONAL_ARGC 0
/* uv_fs_futime
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - file: int
 * - atime: double
 * - mtime: double
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_futime(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  mrb_int native_file;
  mrb_float native_atime;
  mrb_float native_mtime;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "ooiffo", &loop, &req, &native_file, &native_atime, &native_mtime, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_futime(native_loop, native_req, native_file, native_atime, native_mtime, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_link */
/* sha: fbb63b38c6b59bfb2b58123f3101a9454389bfd025c414aab5a50bc1c5b23144 */
#if BIND_uv_fs_link_FUNCTION
#define uv_fs_link_REQUIRED_ARGC 5
#define uv_fs_link_OPTIONAL_ARGC 0
/* uv_fs_link
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - path: const char *
 * - new_path: const char *
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_link(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  char * native_path = NULL;
  char * native_new_path = NULL;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oozzo", &loop, &req, &native_path, &native_new_path, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_link(native_loop, native_req, native_path, native_new_path, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_lstat */
/* sha: 322df29a8949efd3edd12b4b1e7ff760dfda0ed2c7138c5583e710ad6770e47b */
#if BIND_uv_fs_lstat_FUNCTION
#define uv_fs_lstat_REQUIRED_ARGC 4
#define uv_fs_lstat_OPTIONAL_ARGC 0
/* uv_fs_lstat
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - path: const char *
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_lstat(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  char * native_path = NULL;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oozo", &loop, &req, &native_path, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_lstat(native_loop, native_req, native_path, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_mkdir */
/* sha: c35c3f66794d3fc6c637a6fdd486b71963fcf7f3a25f9dbd89f533a1510a3a1e */
#if BIND_uv_fs_mkdir_FUNCTION
#define uv_fs_mkdir_REQUIRED_ARGC 5
#define uv_fs_mkdir_OPTIONAL_ARGC 0
/* uv_fs_mkdir
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - path: const char *
 * - mode: int
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_mkdir(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  char * native_path = NULL;
  mrb_int native_mode;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oozio", &loop, &req, &native_path, &native_mode, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_mkdir(native_loop, native_req, native_path, native_mode, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_mkdtemp */
/* sha: b34598580f35013c4410ac56201775eb9694a48c31287783ed67a60b1a4d10ae */
#if BIND_uv_fs_mkdtemp_FUNCTION
#define uv_fs_mkdtemp_REQUIRED_ARGC 4
#define uv_fs_mkdtemp_OPTIONAL_ARGC 0
/* uv_fs_mkdtemp
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - tpl: const char *
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_mkdtemp(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  char * native_tpl = NULL;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oozo", &loop, &req, &native_tpl, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_mkdtemp(native_loop, native_req, native_tpl, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_open */
/* sha: 255cc913e472048f3b393400b3c9059f62f16039254127d5741f8fa046c4f933 */
#if BIND_uv_fs_open_FUNCTION
#define uv_fs_open_REQUIRED_ARGC 6
#define uv_fs_open_OPTIONAL_ARGC 0
/* uv_fs_open
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - path: const char *
 * - flags: int
 * - mode: int
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_open(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  char * native_path = NULL;
  mrb_int native_flags;
  mrb_int native_mode;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "ooziio", &loop, &req, &native_path, &native_flags, &native_mode, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_open(native_loop, native_req, native_path, native_flags, native_mode, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_poll_getpath */
/* sha: e0ad3e0d6b93637c8a3300a0fa95cd1dabb7b26cd7f3b2aa36be80655cf93f46 */
#if BIND_uv_fs_poll_getpath_FUNCTION
#define uv_fs_poll_getpath_REQUIRED_ARGC 3
#define uv_fs_poll_getpath_OPTIONAL_ARGC 0
/* uv_fs_poll_getpath
 *
 * Parameters:
 * - handle: uv_fs_poll_t *
 * - buffer: char *
 * - size: size_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_poll_getpath(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value buffer;
  mrb_value size;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &handle, &buffer, &size);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvFsPollT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsPollT expected");
    return mrb_nil_value();
  }
  TODO_type_check_char_PTR(buffer);
  TODO_type_check_size_t_PTR(size);

  /* Unbox param: handle */
  uv_fs_poll_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_fs_poll_t(handle));

  /* Unbox param: buffer */
  char * native_buffer = TODO_mruby_unbox_char_PTR(buffer);

  /* Unbox param: size */
  size_t * native_size = TODO_mruby_unbox_size_t_PTR(size);

  /* Invocation */
  int native_return_value = uv_fs_poll_getpath(native_handle, native_buffer, native_size);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_poll_init */
/* sha: 264f390889bb061145599155346d008dfd273592bad57be3c8b2529a6bfd4bea */
#if BIND_uv_fs_poll_init_FUNCTION
#define uv_fs_poll_init_REQUIRED_ARGC 2
#define uv_fs_poll_init_OPTIONAL_ARGC 0
/* uv_fs_poll_init
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - handle: uv_fs_poll_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_poll_init(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &loop, &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, UvFsPollT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsPollT expected");
    return mrb_nil_value();
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: handle */
  uv_fs_poll_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_fs_poll_t(handle));

  /* Invocation */
  int native_return_value = uv_fs_poll_init(native_loop, native_handle);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_poll_start */
/* sha: 520bb73ee25a73ede2a9e37468466d5eee600c6651fab720303d583435a255f2 */
#if BIND_uv_fs_poll_start_FUNCTION
#define uv_fs_poll_start_REQUIRED_ARGC 4
#define uv_fs_poll_start_OPTIONAL_ARGC 0
/* uv_fs_poll_start
 *
 * Parameters:
 * - handle: uv_fs_poll_t *
 * - poll_cb: uv_fs_poll_cb
 * - path: const char *
 * - interval: unsigned int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_poll_start(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value poll_cb;
  char * native_path = NULL;
  mrb_int native_interval;

  /* Fetch the args */
  mrb_get_args(mrb, "oozi", &handle, &poll_cb, &native_path, &native_interval);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvFsPollT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsPollT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_fs_poll_cb(poll_cb);

  /* Unbox param: handle */
  uv_fs_poll_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_fs_poll_t(handle));

  /* Unbox param: poll_cb */
  uv_fs_poll_cb native_poll_cb = TODO_mruby_unbox_uv_fs_poll_cb(poll_cb);

  /* Invocation */
  int native_return_value = uv_fs_poll_start(native_handle, native_poll_cb, native_path, native_interval);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_poll_stop */
/* sha: 959b2f19ca98716bdd4a6c5cb88383fdcf8413d51271c1413c038aa0f0ad8ba9 */
#if BIND_uv_fs_poll_stop_FUNCTION
#define uv_fs_poll_stop_REQUIRED_ARGC 1
#define uv_fs_poll_stop_OPTIONAL_ARGC 0
/* uv_fs_poll_stop
 *
 * Parameters:
 * - handle: uv_fs_poll_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_poll_stop(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvFsPollT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsPollT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_fs_poll_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_fs_poll_t(handle));

  /* Invocation */
  int native_return_value = uv_fs_poll_stop(native_handle);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_read */
/* sha: 7c90501e6901709f7176a2a665a8f4e90a474bc5f851cce83720c64a047cd1d4 */
#if BIND_uv_fs_read_FUNCTION
#define uv_fs_read_REQUIRED_ARGC 7
#define uv_fs_read_OPTIONAL_ARGC 0
/* uv_fs_read
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - file: int
 * - bufs: const int []
 * - nbufs: unsigned int
 * - offset: int64_t
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_read(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  mrb_int native_file;
  mrb_value bufs;
  mrb_int native_nbufs;
  mrb_value offset;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "ooioioo", &loop, &req, &native_file, &bufs, &native_nbufs, &offset, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_[](bufs);
  TODO_type_check_int64_t(offset);
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: bufs */
  const int [] native_bufs = TODO_mruby_unbox_int_[](bufs);

  /* Unbox param: offset */
  int64_t native_offset = TODO_mruby_unbox_int64_t(offset);

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_read(native_loop, native_req, native_file, native_bufs, native_nbufs, native_offset, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_readlink */
/* sha: 58f1fd5a658172f9b9e143e2c515163f49246c350913ab22140dc5b989b16705 */
#if BIND_uv_fs_readlink_FUNCTION
#define uv_fs_readlink_REQUIRED_ARGC 4
#define uv_fs_readlink_OPTIONAL_ARGC 0
/* uv_fs_readlink
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - path: const char *
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_readlink(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  char * native_path = NULL;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oozo", &loop, &req, &native_path, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_readlink(native_loop, native_req, native_path, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_realpath */
/* sha: 85f0ac59f54937b857cff47afdb537088e01c16014b6fc813d0a7466709ae0e6 */
#if BIND_uv_fs_realpath_FUNCTION
#define uv_fs_realpath_REQUIRED_ARGC 4
#define uv_fs_realpath_OPTIONAL_ARGC 0
/* uv_fs_realpath
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - path: const char *
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_realpath(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  char * native_path = NULL;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oozo", &loop, &req, &native_path, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_realpath(native_loop, native_req, native_path, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_rename */
/* sha: 0479721688ca7edca388d59375b5024b0c8413ead5b09da917f56959d7069703 */
#if BIND_uv_fs_rename_FUNCTION
#define uv_fs_rename_REQUIRED_ARGC 5
#define uv_fs_rename_OPTIONAL_ARGC 0
/* uv_fs_rename
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - path: const char *
 * - new_path: const char *
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_rename(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  char * native_path = NULL;
  char * native_new_path = NULL;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oozzo", &loop, &req, &native_path, &native_new_path, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_rename(native_loop, native_req, native_path, native_new_path, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_req_cleanup */
/* sha: d557003f66276327e056440b27da4e5d50b93bf1df4c6c8930dc6a60696c8d4a */
#if BIND_uv_fs_req_cleanup_FUNCTION
#define uv_fs_req_cleanup_REQUIRED_ARGC 1
#define uv_fs_req_cleanup_OPTIONAL_ARGC 0
/* uv_fs_req_cleanup
 *
 * Parameters:
 * - req: uv_fs_t *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_fs_req_cleanup(mrb_state* mrb, mrb_value self) {
  mrb_value req;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &req);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Invocation */
  uv_fs_req_cleanup(native_req);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_rmdir */
/* sha: 166db75ffa2ed5fadc0ae2ed5008feeb3f4b29e25bf352f4301c89caa258e7e1 */
#if BIND_uv_fs_rmdir_FUNCTION
#define uv_fs_rmdir_REQUIRED_ARGC 4
#define uv_fs_rmdir_OPTIONAL_ARGC 0
/* uv_fs_rmdir
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - path: const char *
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_rmdir(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  char * native_path = NULL;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oozo", &loop, &req, &native_path, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_rmdir(native_loop, native_req, native_path, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_scandir */
/* sha: 654b05351b5e23b3955510fd6354d6ead4939a94511dba817f8720917b8f83a6 */
#if BIND_uv_fs_scandir_FUNCTION
#define uv_fs_scandir_REQUIRED_ARGC 5
#define uv_fs_scandir_OPTIONAL_ARGC 0
/* uv_fs_scandir
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - path: const char *
 * - flags: int
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_scandir(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  char * native_path = NULL;
  mrb_int native_flags;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oozio", &loop, &req, &native_path, &native_flags, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_scandir(native_loop, native_req, native_path, native_flags, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_scandir_next */
/* sha: eca8a0dfbd9737627e3ab6472594e3a19be6215f3941844ad7a635ec0974223f */
#if BIND_uv_fs_scandir_next_FUNCTION
#define uv_fs_scandir_next_REQUIRED_ARGC 2
#define uv_fs_scandir_next_OPTIONAL_ARGC 0
/* uv_fs_scandir_next
 *
 * Parameters:
 * - req: uv_fs_t *
 * - ent: uv_dirent_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_scandir_next(mrb_state* mrb, mrb_value self) {
  mrb_value req;
  mrb_value ent;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &req, &ent);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, ent, UvDirentT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvDirentT expected");
    return mrb_nil_value();
  }

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: ent */
  uv_dirent_t * native_ent = (mrb_nil_p(ent) ? NULL : mruby_unbox_uv_dirent_t(ent));

  /* Invocation */
  int native_return_value = uv_fs_scandir_next(native_req, native_ent);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_sendfile */
/* sha: 89d469fa64e2ad7a269c7b0ff655b6471104b1e01a735347b5c42a3135cb20cd */
#if BIND_uv_fs_sendfile_FUNCTION
#define uv_fs_sendfile_REQUIRED_ARGC 7
#define uv_fs_sendfile_OPTIONAL_ARGC 0
/* uv_fs_sendfile
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - out_fd: int
 * - in_fd: int
 * - in_offset: int64_t
 * - length: size_t
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_sendfile(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  mrb_int native_out_fd;
  mrb_int native_in_fd;
  mrb_value in_offset;
  mrb_int native_length;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "ooiioio", &loop, &req, &native_out_fd, &native_in_fd, &in_offset, &native_length, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_int64_t(in_offset);
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: in_offset */
  int64_t native_in_offset = TODO_mruby_unbox_int64_t(in_offset);

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_sendfile(native_loop, native_req, native_out_fd, native_in_fd, native_in_offset, native_length, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_stat */
/* sha: 5e1b370edd0017c972a81adc9108ca06272e8a748bb4c756c6d773dfa610bebe */
#if BIND_uv_fs_stat_FUNCTION
#define uv_fs_stat_REQUIRED_ARGC 4
#define uv_fs_stat_OPTIONAL_ARGC 0
/* uv_fs_stat
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - path: const char *
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_stat(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  char * native_path = NULL;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oozo", &loop, &req, &native_path, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_stat(native_loop, native_req, native_path, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_symlink */
/* sha: a309cb97372935aa84d62df482b65d5db1e455df6e5ce1601c6014e614971f7c */
#if BIND_uv_fs_symlink_FUNCTION
#define uv_fs_symlink_REQUIRED_ARGC 6
#define uv_fs_symlink_OPTIONAL_ARGC 0
/* uv_fs_symlink
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - path: const char *
 * - new_path: const char *
 * - flags: int
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_symlink(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  char * native_path = NULL;
  char * native_new_path = NULL;
  mrb_int native_flags;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oozzio", &loop, &req, &native_path, &native_new_path, &native_flags, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_symlink(native_loop, native_req, native_path, native_new_path, native_flags, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_unlink */
/* sha: cd68db1fb70e622531da799438b6702f00a743b541a665115a7ac09fa457f944 */
#if BIND_uv_fs_unlink_FUNCTION
#define uv_fs_unlink_REQUIRED_ARGC 4
#define uv_fs_unlink_OPTIONAL_ARGC 0
/* uv_fs_unlink
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - path: const char *
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_unlink(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  char * native_path = NULL;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oozo", &loop, &req, &native_path, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_unlink(native_loop, native_req, native_path, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_utime */
/* sha: bdab809882f78bd90ae55abbbfb17755f0115621af184222e3594c7ee931945d */
#if BIND_uv_fs_utime_FUNCTION
#define uv_fs_utime_REQUIRED_ARGC 6
#define uv_fs_utime_OPTIONAL_ARGC 0
/* uv_fs_utime
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - path: const char *
 * - atime: double
 * - mtime: double
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_utime(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  char * native_path = NULL;
  mrb_float native_atime;
  mrb_float native_mtime;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oozffo", &loop, &req, &native_path, &native_atime, &native_mtime, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_utime(native_loop, native_req, native_path, native_atime, native_mtime, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_write */
/* sha: acbae79ffdb308e2fb76fe377743076a49b801a199be028b34fa4d0214a14317 */
#if BIND_uv_fs_write_FUNCTION
#define uv_fs_write_REQUIRED_ARGC 7
#define uv_fs_write_OPTIONAL_ARGC 0
/* uv_fs_write
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - file: int
 * - bufs: const int []
 * - nbufs: unsigned int
 * - offset: int64_t
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_write(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  mrb_int native_file;
  mrb_value bufs;
  mrb_int native_nbufs;
  mrb_value offset;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "ooioioo", &loop, &req, &native_file, &bufs, &native_nbufs, &offset, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvFsT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvFsT expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_[](bufs);
  TODO_type_check_int64_t(offset);
  TODO_type_check_uv_fs_cb(cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: bufs */
  const int [] native_bufs = TODO_mruby_unbox_int_[](bufs);

  /* Unbox param: offset */
  int64_t native_offset = TODO_mruby_unbox_int64_t(offset);

  /* Unbox param: cb */
  uv_fs_cb native_cb = TODO_mruby_unbox_uv_fs_cb(cb);

  /* Invocation */
  int native_return_value = uv_fs_write(native_loop, native_req, native_file, native_bufs, native_nbufs, native_offset, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_get_free_memory */
/* sha: beabdf33c5f52f0d9739b0612915bb3bbae2e47a7b9368be7442e6d1b5284036 */
#if BIND_uv_get_free_memory_FUNCTION
#define uv_get_free_memory_REQUIRED_ARGC 0
#define uv_get_free_memory_OPTIONAL_ARGC 0
/* uv_get_free_memory
 *
 * Parameters: None
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_uv_get_free_memory(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uint64_t native_return_value = uv_get_free_memory();

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_uint64_t(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_get_process_title */
/* sha: db356ae08f278b1796117cfcb5ad929d768ddd509be2af1489e5a9abfa42f801 */
#if BIND_uv_get_process_title_FUNCTION
#define uv_get_process_title_REQUIRED_ARGC 2
#define uv_get_process_title_OPTIONAL_ARGC 0
/* uv_get_process_title
 *
 * Parameters:
 * - buffer: char *
 * - size: size_t
 * Return Type: int
 */
mrb_value
mrb_UV_uv_get_process_title(mrb_state* mrb, mrb_value self) {
  mrb_value buffer;
  mrb_int native_size;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &buffer, &native_size);

  /* Type checking */
  TODO_type_check_char_PTR(buffer);

  /* Unbox param: buffer */
  char * native_buffer = TODO_mruby_unbox_char_PTR(buffer);

  /* Invocation */
  int native_return_value = uv_get_process_title(native_buffer, native_size);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_get_total_memory */
/* sha: 6758384c54e8d6434ce8e3037dd8bc1a3a9ace4eb587fb675a246bb811685a45 */
#if BIND_uv_get_total_memory_FUNCTION
#define uv_get_total_memory_REQUIRED_ARGC 0
#define uv_get_total_memory_OPTIONAL_ARGC 0
/* uv_get_total_memory
 *
 * Parameters: None
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_uv_get_total_memory(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uint64_t native_return_value = uv_get_total_memory();

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_uint64_t(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_getaddrinfo */
/* sha: cf897c881163d7d2fa196c019ed9910e2ccc2402529f94390ad21b714b652e5f */
#if BIND_uv_getaddrinfo_FUNCTION
#define uv_getaddrinfo_REQUIRED_ARGC 6
#define uv_getaddrinfo_OPTIONAL_ARGC 0
/* uv_getaddrinfo
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_getaddrinfo_t *
 * - getaddrinfo_cb: uv_getaddrinfo_cb
 * - node: const char *
 * - service: const char *
 * - hints: const struct addrinfo *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_getaddrinfo(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  mrb_value getaddrinfo_cb;
  char * native_node = NULL;
  char * native_service = NULL;
  mrb_value hints;

  /* Fetch the args */
  mrb_get_args(mrb, "ooozzo", &loop, &req, &getaddrinfo_cb, &native_node, &native_service, &hints);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvGetaddrinfoT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvGetaddrinfoT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_getaddrinfo_cb(getaddrinfo_cb);
  TODO_type_check_addrinfo_PTR(hints);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_getaddrinfo_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_getaddrinfo_t(req));

  /* Unbox param: getaddrinfo_cb */
  uv_getaddrinfo_cb native_getaddrinfo_cb = TODO_mruby_unbox_uv_getaddrinfo_cb(getaddrinfo_cb);

  /* Unbox param: hints */
  const struct addrinfo * native_hints = TODO_mruby_unbox_addrinfo_PTR(hints);

  /* Invocation */
  int native_return_value = uv_getaddrinfo(native_loop, native_req, native_getaddrinfo_cb, native_node, native_service, native_hints);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_getnameinfo */
/* sha: b068483e399cf58dab1dcb19f2eba18faedaa8955efbb0f9ca4652b42d778ed3 */
#if BIND_uv_getnameinfo_FUNCTION
#define uv_getnameinfo_REQUIRED_ARGC 5
#define uv_getnameinfo_OPTIONAL_ARGC 0
/* uv_getnameinfo
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_getnameinfo_t *
 * - getnameinfo_cb: uv_getnameinfo_cb
 * - addr: const struct sockaddr *
 * - flags: int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_getnameinfo(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  mrb_value getnameinfo_cb;
  mrb_value addr;
  mrb_int native_flags;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooi", &loop, &req, &getnameinfo_cb, &addr, &native_flags);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvGetnameinfoT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvGetnameinfoT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_getnameinfo_cb(getnameinfo_cb);
  TODO_type_check_sockaddr_PTR(addr);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_getnameinfo_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_getnameinfo_t(req));

  /* Unbox param: getnameinfo_cb */
  uv_getnameinfo_cb native_getnameinfo_cb = TODO_mruby_unbox_uv_getnameinfo_cb(getnameinfo_cb);

  /* Unbox param: addr */
  const struct sockaddr * native_addr = TODO_mruby_unbox_sockaddr_PTR(addr);

  /* Invocation */
  int native_return_value = uv_getnameinfo(native_loop, native_req, native_getnameinfo_cb, native_addr, native_flags);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_getrusage */
/* sha: 9b079afc63150856781ff3e292050652734f41e797be0211773a980917fb7ed2 */
#if BIND_uv_getrusage_FUNCTION
#define uv_getrusage_REQUIRED_ARGC 1
#define uv_getrusage_OPTIONAL_ARGC 0
/* uv_getrusage
 *
 * Parameters:
 * - rusage: uv_rusage_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_getrusage(mrb_state* mrb, mrb_value self) {
  mrb_value rusage;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &rusage);

  /* Type checking */
  TODO_type_check_uv_rusage_t_PTR(rusage);

  /* Unbox param: rusage */
  uv_rusage_t * native_rusage = TODO_mruby_unbox_uv_rusage_t_PTR(rusage);

  /* Invocation */
  int native_return_value = uv_getrusage(native_rusage);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_guess_handle */
/* sha: a0e9390bde3e00940787c3ab7486447593b2e5243c01f66046d028fdf7c9e420 */
#if BIND_uv_guess_handle_FUNCTION
#define uv_guess_handle_REQUIRED_ARGC 1
#define uv_guess_handle_OPTIONAL_ARGC 0
/* uv_guess_handle
 *
 * Parameters:
 * - file: int
 * Return Type: uv_handle_type
 */
mrb_value
mrb_UV_uv_guess_handle(mrb_state* mrb, mrb_value self) {
  mrb_int native_file;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_file);

  /* Invocation */
  uv_handle_type native_return_value = uv_guess_handle(native_file);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_handle_size */
/* sha: 0e9237516baf86ed85f1991a774e584c03beed02f3efaa6ca16bfbb025cdbffb */
#if BIND_uv_handle_size_FUNCTION
#define uv_handle_size_REQUIRED_ARGC 1
#define uv_handle_size_OPTIONAL_ARGC 0
/* uv_handle_size
 *
 * Parameters:
 * - type: uv_handle_type
 * Return Type: size_t
 */
mrb_value
mrb_UV_uv_handle_size(mrb_state* mrb, mrb_value self) {
  mrb_int native_type;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_type);

  /* Invocation */
  size_t native_return_value = uv_handle_size(native_type);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_has_ref */
/* sha: 42733fd4fc9bdd3028519192564655db8706bd90304665e7a839eb5a89a4a9cc */
#if BIND_uv_has_ref_FUNCTION
#define uv_has_ref_REQUIRED_ARGC 1
#define uv_has_ref_OPTIONAL_ARGC 0
/* uv_has_ref
 *
 * Parameters:
 * - arg1: const uv_handle_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_has_ref(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvHandleT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvHandleT expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  const uv_handle_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_handle_t(arg1));

  /* Invocation */
  int native_return_value = uv_has_ref(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_hrtime */
/* sha: 53d51629943f9f96ab7dd6e3dcb4865785eefa3d2483628aaec111e1b60932c3 */
#if BIND_uv_hrtime_FUNCTION
#define uv_hrtime_REQUIRED_ARGC 0
#define uv_hrtime_OPTIONAL_ARGC 0
/* uv_hrtime
 *
 * Parameters: None
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_uv_hrtime(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uint64_t native_return_value = uv_hrtime();

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_uint64_t(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_idle_init */
/* sha: 4cd408a623b498ab315294a5dc52dde5b199869685af53c16e710d2637691225 */
#if BIND_uv_idle_init_FUNCTION
#define uv_idle_init_REQUIRED_ARGC 2
#define uv_idle_init_OPTIONAL_ARGC 0
/* uv_idle_init
 *
 * Parameters:
 * - arg1: uv_loop_t *
 * - idle: uv_idle_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_idle_init(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value idle;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &idle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, idle, UvIdleT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvIdleT expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uv_loop_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_loop_t(arg1));

  /* Unbox param: idle */
  uv_idle_t * native_idle = (mrb_nil_p(idle) ? NULL : mruby_unbox_uv_idle_t(idle));

  /* Invocation */
  int native_return_value = uv_idle_init(native_arg1, native_idle);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_idle_start */
/* sha: 24c2a5acb02527e8e2f8307006a773ab4579acaf57ea451aefb9b42d054b5dc0 */
#if BIND_uv_idle_start_FUNCTION
#define uv_idle_start_REQUIRED_ARGC 2
#define uv_idle_start_OPTIONAL_ARGC 0
/* uv_idle_start
 *
 * Parameters:
 * - idle: uv_idle_t *
 * - cb: uv_idle_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_idle_start(mrb_state* mrb, mrb_value self) {
  mrb_value idle;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &idle, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, idle, UvIdleT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvIdleT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_idle_cb(cb);

  /* Unbox param: idle */
  uv_idle_t * native_idle = (mrb_nil_p(idle) ? NULL : mruby_unbox_uv_idle_t(idle));

  /* Unbox param: cb */
  uv_idle_cb native_cb = TODO_mruby_unbox_uv_idle_cb(cb);

  /* Invocation */
  int native_return_value = uv_idle_start(native_idle, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_idle_stop */
/* sha: 641f7e4595d0a16d86e02616b1df1bdfff7360186e59bca9127ba6513e6d48c6 */
#if BIND_uv_idle_stop_FUNCTION
#define uv_idle_stop_REQUIRED_ARGC 1
#define uv_idle_stop_OPTIONAL_ARGC 0
/* uv_idle_stop
 *
 * Parameters:
 * - idle: uv_idle_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_idle_stop(mrb_state* mrb, mrb_value self) {
  mrb_value idle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &idle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, idle, UvIdleT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvIdleT expected");
    return mrb_nil_value();
  }

  /* Unbox param: idle */
  uv_idle_t * native_idle = (mrb_nil_p(idle) ? NULL : mruby_unbox_uv_idle_t(idle));

  /* Invocation */
  int native_return_value = uv_idle_stop(native_idle);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_inet_ntop */
/* sha: 3bba651559b0a7efb737f329e02deaf332aae9fa819f97a53e909e2c768cf387 */
#if BIND_uv_inet_ntop_FUNCTION
#define uv_inet_ntop_REQUIRED_ARGC 4
#define uv_inet_ntop_OPTIONAL_ARGC 0
/* uv_inet_ntop
 *
 * Parameters:
 * - af: int
 * - src: const void *
 * - dst: char *
 * - size: size_t
 * Return Type: int
 */
mrb_value
mrb_UV_uv_inet_ntop(mrb_state* mrb, mrb_value self) {
  mrb_int native_af;
  mrb_value src;
  mrb_value dst;
  mrb_int native_size;

  /* Fetch the args */
  mrb_get_args(mrb, "iooi", &native_af, &src, &dst, &native_size);

  /* Type checking */
  TODO_type_check_void_PTR(src);
  TODO_type_check_char_PTR(dst);

  /* Unbox param: src */
  const void * native_src = TODO_mruby_unbox_void_PTR(src);

  /* Unbox param: dst */
  char * native_dst = TODO_mruby_unbox_char_PTR(dst);

  /* Invocation */
  int native_return_value = uv_inet_ntop(native_af, native_src, native_dst, native_size);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_inet_pton */
/* sha: fec40ac47db08206b20630a076d0ede792e868026ed7e3417903c49501565b72 */
#if BIND_uv_inet_pton_FUNCTION
#define uv_inet_pton_REQUIRED_ARGC 3
#define uv_inet_pton_OPTIONAL_ARGC 0
/* uv_inet_pton
 *
 * Parameters:
 * - af: int
 * - src: const char *
 * - dst: void *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_inet_pton(mrb_state* mrb, mrb_value self) {
  mrb_int native_af;
  char * native_src = NULL;
  mrb_value dst;

  /* Fetch the args */
  mrb_get_args(mrb, "izo", &native_af, &native_src, &dst);

  /* Type checking */
  TODO_type_check_void_PTR(dst);

  /* Unbox param: dst */
  void * native_dst = TODO_mruby_unbox_void_PTR(dst);

  /* Invocation */
  int native_return_value = uv_inet_pton(native_af, native_src, native_dst);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_interface_addresses */
/* sha: 2dc28f8ed6a410c8f343f5e92a6da54eea589cc0cd066e0d35bf0c526a557d76 */
#if BIND_uv_interface_addresses_FUNCTION
#define uv_interface_addresses_REQUIRED_ARGC 2
#define uv_interface_addresses_OPTIONAL_ARGC 0
/* uv_interface_addresses
 *
 * Parameters:
 * - addresses: uv_interface_address_t **
 * - count: int *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_interface_addresses(mrb_state* mrb, mrb_value self) {
  mrb_value addresses;
  mrb_value count;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &addresses, &count);

  /* Type checking */
  TODO_type_check_uv_interface_address_t_PTR_PTR(addresses);
  TODO_type_check_int_PTR(count);

  /* Unbox param: addresses */
  uv_interface_address_t ** native_addresses = TODO_mruby_unbox_uv_interface_address_t_PTR_PTR(addresses);

  /* Unbox param: count */
  int * native_count = TODO_mruby_unbox_int_PTR(count);

  /* Invocation */
  int native_return_value = uv_interface_addresses(native_addresses, native_count);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_ip4_addr */
/* sha: 1c17c643fe732e46250ff9a2bd590023adf9bf5e957c9993d579f7fafd3d0f9d */
#if BIND_uv_ip4_addr_FUNCTION
#define uv_ip4_addr_REQUIRED_ARGC 3
#define uv_ip4_addr_OPTIONAL_ARGC 0
/* uv_ip4_addr
 *
 * Parameters:
 * - ip: const char *
 * - port: int
 * - addr: struct sockaddr_in *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_ip4_addr(mrb_state* mrb, mrb_value self) {
  char * native_ip = NULL;
  mrb_int native_port;
  mrb_value addr;

  /* Fetch the args */
  mrb_get_args(mrb, "zio", &native_ip, &native_port, &addr);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, addr, SockaddrIn_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SockaddrIn expected");
    return mrb_nil_value();
  }

  /* Unbox param: addr */
  struct sockaddr_in * native_addr = (mrb_nil_p(addr) ? NULL : mruby_unbox_sockaddr_in(addr));

  /* Invocation */
  int native_return_value = uv_ip4_addr(native_ip, native_port, native_addr);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_ip4_name */
/* sha: 028d2ed8b88c04be4b662f6a0ffcbf20d1439a930ac7405958e073093b7656db */
#if BIND_uv_ip4_name_FUNCTION
#define uv_ip4_name_REQUIRED_ARGC 3
#define uv_ip4_name_OPTIONAL_ARGC 0
/* uv_ip4_name
 *
 * Parameters:
 * - src: const struct sockaddr_in *
 * - dst: char *
 * - size: size_t
 * Return Type: int
 */
mrb_value
mrb_UV_uv_ip4_name(mrb_state* mrb, mrb_value self) {
  mrb_value src;
  mrb_value dst;
  mrb_int native_size;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi", &src, &dst, &native_size);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SockaddrIn_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SockaddrIn expected");
    return mrb_nil_value();
  }
  TODO_type_check_char_PTR(dst);

  /* Unbox param: src */
  const struct sockaddr_in * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_sockaddr_in(src));

  /* Unbox param: dst */
  char * native_dst = TODO_mruby_unbox_char_PTR(dst);

  /* Invocation */
  int native_return_value = uv_ip4_name(native_src, native_dst, native_size);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_ip6_addr */
/* sha: 5a674e01576ce291b42bd4038435d5756c3d13efe5263fb6aa040dde63e8a1ab */
#if BIND_uv_ip6_addr_FUNCTION
#define uv_ip6_addr_REQUIRED_ARGC 3
#define uv_ip6_addr_OPTIONAL_ARGC 0
/* uv_ip6_addr
 *
 * Parameters:
 * - ip: const char *
 * - port: int
 * - addr: struct sockaddr_in6 *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_ip6_addr(mrb_state* mrb, mrb_value self) {
  char * native_ip = NULL;
  mrb_int native_port;
  mrb_value addr;

  /* Fetch the args */
  mrb_get_args(mrb, "zio", &native_ip, &native_port, &addr);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, addr, SockaddrIn6_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SockaddrIn6 expected");
    return mrb_nil_value();
  }

  /* Unbox param: addr */
  struct sockaddr_in6 * native_addr = (mrb_nil_p(addr) ? NULL : mruby_unbox_sockaddr_in6(addr));

  /* Invocation */
  int native_return_value = uv_ip6_addr(native_ip, native_port, native_addr);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_ip6_name */
/* sha: 07d7a6319726587b917734789654a2c6635168b406fcf1f7ed195f274f7ddfd7 */
#if BIND_uv_ip6_name_FUNCTION
#define uv_ip6_name_REQUIRED_ARGC 3
#define uv_ip6_name_OPTIONAL_ARGC 0
/* uv_ip6_name
 *
 * Parameters:
 * - src: const struct sockaddr_in6 *
 * - dst: char *
 * - size: size_t
 * Return Type: int
 */
mrb_value
mrb_UV_uv_ip6_name(mrb_state* mrb, mrb_value self) {
  mrb_value src;
  mrb_value dst;
  mrb_int native_size;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi", &src, &dst, &native_size);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SockaddrIn6_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SockaddrIn6 expected");
    return mrb_nil_value();
  }
  TODO_type_check_char_PTR(dst);

  /* Unbox param: src */
  const struct sockaddr_in6 * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_sockaddr_in6(src));

  /* Unbox param: dst */
  char * native_dst = TODO_mruby_unbox_char_PTR(dst);

  /* Invocation */
  int native_return_value = uv_ip6_name(native_src, native_dst, native_size);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_is_active */
/* sha: 57d879560791c00e2232d83cfd3e2ff4ba24bc0f926083c31a31613deb13fb2b */
#if BIND_uv_is_active_FUNCTION
#define uv_is_active_REQUIRED_ARGC 1
#define uv_is_active_OPTIONAL_ARGC 0
/* uv_is_active
 *
 * Parameters:
 * - handle: const uv_handle_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_is_active(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvHandleT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvHandleT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  const uv_handle_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_handle_t(handle));

  /* Invocation */
  int native_return_value = uv_is_active(native_handle);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_is_closing */
/* sha: 80914f39148cc0124d5beb0b10119c0747e914898edd8beb7aa270436bfe0ad7 */
#if BIND_uv_is_closing_FUNCTION
#define uv_is_closing_REQUIRED_ARGC 1
#define uv_is_closing_OPTIONAL_ARGC 0
/* uv_is_closing
 *
 * Parameters:
 * - handle: const uv_handle_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_is_closing(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvHandleT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvHandleT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  const uv_handle_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_handle_t(handle));

  /* Invocation */
  int native_return_value = uv_is_closing(native_handle);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_is_readable */
/* sha: 5bc85a4cf015c5cea63b1db843d209ca3d2bd7c72efa73dd5289537170956a23 */
#if BIND_uv_is_readable_FUNCTION
#define uv_is_readable_REQUIRED_ARGC 1
#define uv_is_readable_OPTIONAL_ARGC 0
/* uv_is_readable
 *
 * Parameters:
 * - handle: const uv_stream_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_is_readable(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvStreamT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvStreamT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  const uv_stream_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_stream_t(handle));

  /* Invocation */
  int native_return_value = uv_is_readable(native_handle);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_is_writable */
/* sha: 316edf6744e462159127802bf29a7346cdb71147311d69580cc455afda7746f9 */
#if BIND_uv_is_writable_FUNCTION
#define uv_is_writable_REQUIRED_ARGC 1
#define uv_is_writable_OPTIONAL_ARGC 0
/* uv_is_writable
 *
 * Parameters:
 * - handle: const uv_stream_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_is_writable(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvStreamT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvStreamT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  const uv_stream_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_stream_t(handle));

  /* Invocation */
  int native_return_value = uv_is_writable(native_handle);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_key_create */
/* sha: 0e42827a038e5b654a5d7649920aacc9935627c9cff4f2e4fa21458db73c3764 */
#if BIND_uv_key_create_FUNCTION
#define uv_key_create_REQUIRED_ARGC 1
#define uv_key_create_OPTIONAL_ARGC 0
/* uv_key_create
 *
 * Parameters:
 * - key: int *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_key_create(mrb_state* mrb, mrb_value self) {
  mrb_value key;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &key);

  /* Type checking */
  TODO_type_check_int_PTR(key);

  /* Unbox param: key */
  int * native_key = TODO_mruby_unbox_int_PTR(key);

  /* Invocation */
  int native_return_value = uv_key_create(native_key);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_key_delete */
/* sha: 2a414a0e1c32e7095184634d31325156cd337231b04fda06bf7898ba3e6ff361 */
#if BIND_uv_key_delete_FUNCTION
#define uv_key_delete_REQUIRED_ARGC 1
#define uv_key_delete_OPTIONAL_ARGC 0
/* uv_key_delete
 *
 * Parameters:
 * - key: int *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_key_delete(mrb_state* mrb, mrb_value self) {
  mrb_value key;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &key);

  /* Type checking */
  TODO_type_check_int_PTR(key);

  /* Unbox param: key */
  int * native_key = TODO_mruby_unbox_int_PTR(key);

  /* Invocation */
  uv_key_delete(native_key);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_key_get */
/* sha: 83b20c1a8a0c11043983e954853fecafdacfdb3c293d7db794f78ae41261cdf6 */
#if BIND_uv_key_get_FUNCTION
#define uv_key_get_REQUIRED_ARGC 1
#define uv_key_get_OPTIONAL_ARGC 0
/* uv_key_get
 *
 * Parameters:
 * - key: int *
 * Return Type: void *
 */
mrb_value
mrb_UV_uv_key_get(mrb_state* mrb, mrb_value self) {
  mrb_value key;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &key);

  /* Type checking */
  TODO_type_check_int_PTR(key);

  /* Unbox param: key */
  int * native_key = TODO_mruby_unbox_int_PTR(key);

  /* Invocation */
  void * native_return_value = uv_key_get(native_key);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_key_set */
/* sha: 9312782a79eb747b8055388f965ac5656797ba4fc4a19eb0633f3d22bef0a6cd */
#if BIND_uv_key_set_FUNCTION
#define uv_key_set_REQUIRED_ARGC 2
#define uv_key_set_OPTIONAL_ARGC 0
/* uv_key_set
 *
 * Parameters:
 * - key: int *
 * - value: void *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_key_set(mrb_state* mrb, mrb_value self) {
  mrb_value key;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &key, &value);

  /* Type checking */
  TODO_type_check_int_PTR(key);
  TODO_type_check_void_PTR(value);

  /* Unbox param: key */
  int * native_key = TODO_mruby_unbox_int_PTR(key);

  /* Unbox param: value */
  void * native_value = TODO_mruby_unbox_void_PTR(value);

  /* Invocation */
  uv_key_set(native_key, native_value);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_kill */
/* sha: c74239a742ada574f60f0ea09be1d81bbf38213aa5b6064282f1fe3fc95edf80 */
#if BIND_uv_kill_FUNCTION
#define uv_kill_REQUIRED_ARGC 2
#define uv_kill_OPTIONAL_ARGC 0
/* uv_kill
 *
 * Parameters:
 * - pid: int
 * - signum: int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_kill(mrb_state* mrb, mrb_value self) {
  mrb_int native_pid;
  mrb_int native_signum;

  /* Fetch the args */
  mrb_get_args(mrb, "ii", &native_pid, &native_signum);

  /* Invocation */
  int native_return_value = uv_kill(native_pid, native_signum);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_listen */
/* sha: 17ee0964025630a7bb665cd3d3080cf595e06f88a960e7d9e5a5db7f69160a0b */
#if BIND_uv_listen_FUNCTION
#define uv_listen_REQUIRED_ARGC 3
#define uv_listen_OPTIONAL_ARGC 0
/* uv_listen
 *
 * Parameters:
 * - stream: uv_stream_t *
 * - backlog: int
 * - cb: uv_connection_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_listen(mrb_state* mrb, mrb_value self) {
  mrb_value stream;
  mrb_int native_backlog;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oio", &stream, &native_backlog, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, stream, UvStreamT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvStreamT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_connection_cb(cb);

  /* Unbox param: stream */
  uv_stream_t * native_stream = (mrb_nil_p(stream) ? NULL : mruby_unbox_uv_stream_t(stream));

  /* Unbox param: cb */
  uv_connection_cb native_cb = TODO_mruby_unbox_uv_connection_cb(cb);

  /* Invocation */
  int native_return_value = uv_listen(native_stream, native_backlog, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_loadavg */
/* sha: 71c5be3658f471fdec89bd75222d93b1c9d5bb6f5bd079e069e7eff1b0630576 */
#if BIND_uv_loadavg_FUNCTION
#define uv_loadavg_REQUIRED_ARGC 1
#define uv_loadavg_OPTIONAL_ARGC 0
/* uv_loadavg
 *
 * Parameters:
 * - avg: double [3]
 * Return Type: void
 */
mrb_value
mrb_UV_uv_loadavg(mrb_state* mrb, mrb_value self) {
  mrb_value avg;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &avg);

  /* Type checking */
  TODO_type_check_double_[3](avg);

  /* Unbox param: avg */
  double [3] native_avg = TODO_mruby_unbox_double_[3](avg);

  /* Invocation */
  uv_loadavg(native_avg);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_loop_alive */
/* sha: c45e1d7c26e8f9f349d4def05fa7265476b8e573f35de899e5dc7dc84f8d1197 */
#if BIND_uv_loop_alive_FUNCTION
#define uv_loop_alive_REQUIRED_ARGC 1
#define uv_loop_alive_OPTIONAL_ARGC 0
/* uv_loop_alive
 *
 * Parameters:
 * - loop: const uv_loop_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_loop_alive(mrb_state* mrb, mrb_value self) {
  mrb_value loop;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &loop);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }

  /* Unbox param: loop */
  const uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Invocation */
  int native_return_value = uv_loop_alive(native_loop);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_loop_close */
/* sha: fb0081f04bb3cee1e6a165c8362c067e015439c2d1529cc011971c8c511165c3 */
#if BIND_uv_loop_close_FUNCTION
#define uv_loop_close_REQUIRED_ARGC 1
#define uv_loop_close_OPTIONAL_ARGC 0
/* uv_loop_close
 *
 * Parameters:
 * - loop: uv_loop_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_loop_close(mrb_state* mrb, mrb_value self) {
  mrb_value loop;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &loop);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Invocation */
  int native_return_value = uv_loop_close(native_loop);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_loop_configure */
/* sha: 678179d2c458f93903190adf9d87548c8390c2c13b21cd60da9261e9c529a338 */
#if BIND_uv_loop_configure_FUNCTION
#define uv_loop_configure_REQUIRED_ARGC 2
#define uv_loop_configure_OPTIONAL_ARGC 0
/* uv_loop_configure
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - option: uv_loop_option
 * Return Type: int
 */
mrb_value
mrb_UV_uv_loop_configure(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_int native_option;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &loop, &native_option);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Invocation */
  int native_return_value = uv_loop_configure(native_loop, native_option);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_loop_delete */
/* sha: 8c40c2f145aee5fe42477229b7a2928c6cd6f0410e015b3460980d2c05335a05 */
#if BIND_uv_loop_delete_FUNCTION
#define uv_loop_delete_REQUIRED_ARGC 1
#define uv_loop_delete_OPTIONAL_ARGC 0
/* uv_loop_delete
 *
 * Parameters:
 * - arg1: uv_loop_t *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_loop_delete(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uv_loop_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_loop_t(arg1));

  /* Invocation */
  uv_loop_delete(native_arg1);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_loop_init */
/* sha: 33d5f294d8ffd8848f336eae089d93513c4e2f121f3ccd69328e623f705015df */
#if BIND_uv_loop_init_FUNCTION
#define uv_loop_init_REQUIRED_ARGC 1
#define uv_loop_init_OPTIONAL_ARGC 0
/* uv_loop_init
 *
 * Parameters:
 * - loop: uv_loop_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_loop_init(mrb_state* mrb, mrb_value self) {
  mrb_value loop;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &loop);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Invocation */
  int native_return_value = uv_loop_init(native_loop);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_loop_new */
/* sha: 0530d4fe9bff0b47d3fae67539f3192c620906ef5b66c73903c0450fff860324 */
#if BIND_uv_loop_new_FUNCTION
#define uv_loop_new_REQUIRED_ARGC 0
#define uv_loop_new_OPTIONAL_ARGC 0
/* uv_loop_new
 *
 * Parameters: None
 * Return Type: uv_loop_t *
 */
mrb_value
mrb_UV_uv_loop_new(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uv_loop_t * native_return_value = uv_loop_new();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_uv_loop_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_loop_size */
/* sha: 8e1ce76ff9a18728338bc7526f5fa137efe2b7b274ccd6a5b6425163d9315572 */
#if BIND_uv_loop_size_FUNCTION
#define uv_loop_size_REQUIRED_ARGC 0
#define uv_loop_size_OPTIONAL_ARGC 0
/* uv_loop_size
 *
 * Parameters: None
 * Return Type: size_t
 */
mrb_value
mrb_UV_uv_loop_size(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  size_t native_return_value = uv_loop_size();

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_mutex_destroy */
/* sha: d234af4034209911683130c65f45bea9d456e2c45ea29471fac6ca4138647818 */
#if BIND_uv_mutex_destroy_FUNCTION
#define uv_mutex_destroy_REQUIRED_ARGC 1
#define uv_mutex_destroy_OPTIONAL_ARGC 0
/* uv_mutex_destroy
 *
 * Parameters:
 * - handle: int *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_mutex_destroy(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  TODO_type_check_int_PTR(handle);

  /* Unbox param: handle */
  int * native_handle = TODO_mruby_unbox_int_PTR(handle);

  /* Invocation */
  uv_mutex_destroy(native_handle);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_mutex_init */
/* sha: 679477813cccd6ca585a37f7efbeab6c92efe38396f987dcdaaabf0d313a4743 */
#if BIND_uv_mutex_init_FUNCTION
#define uv_mutex_init_REQUIRED_ARGC 1
#define uv_mutex_init_OPTIONAL_ARGC 0
/* uv_mutex_init
 *
 * Parameters:
 * - handle: int *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_mutex_init(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  TODO_type_check_int_PTR(handle);

  /* Unbox param: handle */
  int * native_handle = TODO_mruby_unbox_int_PTR(handle);

  /* Invocation */
  int native_return_value = uv_mutex_init(native_handle);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_mutex_lock */
/* sha: 620d12ea6c6570cd5bee3f3b3a1a56398d11d295c2d955d2204b17b2c080a9d9 */
#if BIND_uv_mutex_lock_FUNCTION
#define uv_mutex_lock_REQUIRED_ARGC 1
#define uv_mutex_lock_OPTIONAL_ARGC 0
/* uv_mutex_lock
 *
 * Parameters:
 * - handle: int *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_mutex_lock(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  TODO_type_check_int_PTR(handle);

  /* Unbox param: handle */
  int * native_handle = TODO_mruby_unbox_int_PTR(handle);

  /* Invocation */
  uv_mutex_lock(native_handle);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_mutex_trylock */
/* sha: 2ca04b67af85ac9698ff71587633a6517c77b9994c5f32af595c830e01f359b3 */
#if BIND_uv_mutex_trylock_FUNCTION
#define uv_mutex_trylock_REQUIRED_ARGC 1
#define uv_mutex_trylock_OPTIONAL_ARGC 0
/* uv_mutex_trylock
 *
 * Parameters:
 * - handle: int *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_mutex_trylock(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  TODO_type_check_int_PTR(handle);

  /* Unbox param: handle */
  int * native_handle = TODO_mruby_unbox_int_PTR(handle);

  /* Invocation */
  int native_return_value = uv_mutex_trylock(native_handle);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_mutex_unlock */
/* sha: c5660d994220ef472f2b2d2a33232799fad10a3552cf1e7432de4ab4f206068c */
#if BIND_uv_mutex_unlock_FUNCTION
#define uv_mutex_unlock_REQUIRED_ARGC 1
#define uv_mutex_unlock_OPTIONAL_ARGC 0
/* uv_mutex_unlock
 *
 * Parameters:
 * - handle: int *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_mutex_unlock(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  TODO_type_check_int_PTR(handle);

  /* Unbox param: handle */
  int * native_handle = TODO_mruby_unbox_int_PTR(handle);

  /* Invocation */
  uv_mutex_unlock(native_handle);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_now */
/* sha: 31fa772e5ba616d98ee2b377c942603ebba7881d15644989b91d12fd5cfcfcb2 */
#if BIND_uv_now_FUNCTION
#define uv_now_REQUIRED_ARGC 1
#define uv_now_OPTIONAL_ARGC 0
/* uv_now
 *
 * Parameters:
 * - arg1: const uv_loop_t *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_uv_now(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  const uv_loop_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_loop_t(arg1));

  /* Invocation */
  uint64_t native_return_value = uv_now(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_uint64_t(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_once */
/* sha: e79831775db0129393a472245b695f7d558acd13d696400854de0246e35e7876 */
#if BIND_uv_once_FUNCTION
#define uv_once_REQUIRED_ARGC 2
#define uv_once_OPTIONAL_ARGC 0
/* uv_once
 *
 * Parameters:
 * - guard: int *
 * - callback: void (*)(void)
 * Return Type: void
 */
mrb_value
mrb_UV_uv_once(mrb_state* mrb, mrb_value self) {
  mrb_value guard;
  mrb_value callback;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &guard, &callback);

  /* Type checking */
  TODO_type_check_int_PTR(guard);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(callback);

  /* Unbox param: guard */
  int * native_guard = TODO_mruby_unbox_int_PTR(guard);

  /* Unbox param: callback */
  void (*native_callback)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(callback);

  /* Invocation */
  uv_once(native_guard, native_callback);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_os_homedir */
/* sha: e4e23999cbd9c3d9b72aecdd3b8a98ea30c494ccd0f17c21d38e906de68665ba */
#if BIND_uv_os_homedir_FUNCTION
#define uv_os_homedir_REQUIRED_ARGC 2
#define uv_os_homedir_OPTIONAL_ARGC 0
/* uv_os_homedir
 *
 * Parameters:
 * - buffer: char *
 * - size: size_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_os_homedir(mrb_state* mrb, mrb_value self) {
  mrb_value buffer;
  mrb_value size;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &buffer, &size);

  /* Type checking */
  TODO_type_check_char_PTR(buffer);
  TODO_type_check_size_t_PTR(size);

  /* Unbox param: buffer */
  char * native_buffer = TODO_mruby_unbox_char_PTR(buffer);

  /* Unbox param: size */
  size_t * native_size = TODO_mruby_unbox_size_t_PTR(size);

  /* Invocation */
  int native_return_value = uv_os_homedir(native_buffer, native_size);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_pipe_bind */
/* sha: acfbbcfc3049adc48a47fa8073fd6e1ab4a5a270e61f299003f199f18a8d9ac7 */
#if BIND_uv_pipe_bind_FUNCTION
#define uv_pipe_bind_REQUIRED_ARGC 2
#define uv_pipe_bind_OPTIONAL_ARGC 0
/* uv_pipe_bind
 *
 * Parameters:
 * - handle: uv_pipe_t *
 * - name: const char *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_pipe_bind(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &handle, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvPipeT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvPipeT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_pipe_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_pipe_t(handle));

  /* Invocation */
  int native_return_value = uv_pipe_bind(native_handle, native_name);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_pipe_connect */
/* sha: 5a5c332e7c80e4390381bcf05b75ab79c87b0a1b9885c164afe4155c2b432723 */
#if BIND_uv_pipe_connect_FUNCTION
#define uv_pipe_connect_REQUIRED_ARGC 4
#define uv_pipe_connect_OPTIONAL_ARGC 0
/* uv_pipe_connect
 *
 * Parameters:
 * - req: uv_connect_t *
 * - handle: uv_pipe_t *
 * - name: const char *
 * - cb: uv_connect_cb
 * Return Type: void
 */
mrb_value
mrb_UV_uv_pipe_connect(mrb_state* mrb, mrb_value self) {
  mrb_value req;
  mrb_value handle;
  char * native_name = NULL;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oozo", &req, &handle, &native_name, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, req, UvConnectT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvConnectT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, UvPipeT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvPipeT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_connect_cb(cb);

  /* Unbox param: req */
  uv_connect_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_connect_t(req));

  /* Unbox param: handle */
  uv_pipe_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_pipe_t(handle));

  /* Unbox param: cb */
  uv_connect_cb native_cb = TODO_mruby_unbox_uv_connect_cb(cb);

  /* Invocation */
  uv_pipe_connect(native_req, native_handle, native_name, native_cb);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_pipe_getpeername */
/* sha: 89b83dde26ad9dbc656dfd02d8c9bc4c8599b4d8fabc97fcae32f98c16492b45 */
#if BIND_uv_pipe_getpeername_FUNCTION
#define uv_pipe_getpeername_REQUIRED_ARGC 3
#define uv_pipe_getpeername_OPTIONAL_ARGC 0
/* uv_pipe_getpeername
 *
 * Parameters:
 * - handle: const uv_pipe_t *
 * - buffer: char *
 * - size: size_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_pipe_getpeername(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value buffer;
  mrb_value size;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &handle, &buffer, &size);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvPipeT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvPipeT expected");
    return mrb_nil_value();
  }
  TODO_type_check_char_PTR(buffer);
  TODO_type_check_size_t_PTR(size);

  /* Unbox param: handle */
  const uv_pipe_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_pipe_t(handle));

  /* Unbox param: buffer */
  char * native_buffer = TODO_mruby_unbox_char_PTR(buffer);

  /* Unbox param: size */
  size_t * native_size = TODO_mruby_unbox_size_t_PTR(size);

  /* Invocation */
  int native_return_value = uv_pipe_getpeername(native_handle, native_buffer, native_size);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_pipe_getsockname */
/* sha: 54e62b6c5d47ad558fc586103a465d90e1b6ecc9d855f59877f2ccf3c3571a60 */
#if BIND_uv_pipe_getsockname_FUNCTION
#define uv_pipe_getsockname_REQUIRED_ARGC 3
#define uv_pipe_getsockname_OPTIONAL_ARGC 0
/* uv_pipe_getsockname
 *
 * Parameters:
 * - handle: const uv_pipe_t *
 * - buffer: char *
 * - size: size_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_pipe_getsockname(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value buffer;
  mrb_value size;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &handle, &buffer, &size);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvPipeT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvPipeT expected");
    return mrb_nil_value();
  }
  TODO_type_check_char_PTR(buffer);
  TODO_type_check_size_t_PTR(size);

  /* Unbox param: handle */
  const uv_pipe_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_pipe_t(handle));

  /* Unbox param: buffer */
  char * native_buffer = TODO_mruby_unbox_char_PTR(buffer);

  /* Unbox param: size */
  size_t * native_size = TODO_mruby_unbox_size_t_PTR(size);

  /* Invocation */
  int native_return_value = uv_pipe_getsockname(native_handle, native_buffer, native_size);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_pipe_init */
/* sha: 7558074cf11bc34b5b30435b7d9a54219b534847bb688e43fee9423599e6a689 */
#if BIND_uv_pipe_init_FUNCTION
#define uv_pipe_init_REQUIRED_ARGC 3
#define uv_pipe_init_OPTIONAL_ARGC 0
/* uv_pipe_init
 *
 * Parameters:
 * - arg1: uv_loop_t *
 * - handle: uv_pipe_t *
 * - ipc: int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_pipe_init(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value handle;
  mrb_int native_ipc;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi", &arg1, &handle, &native_ipc);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, UvPipeT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvPipeT expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uv_loop_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_loop_t(arg1));

  /* Unbox param: handle */
  uv_pipe_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_pipe_t(handle));

  /* Invocation */
  int native_return_value = uv_pipe_init(native_arg1, native_handle, native_ipc);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_pipe_open */
/* sha: 3b0e93c9739693e622bc27e1d06d3664a7d9df64198eb0e6e2391d2d651bdc2c */
#if BIND_uv_pipe_open_FUNCTION
#define uv_pipe_open_REQUIRED_ARGC 2
#define uv_pipe_open_OPTIONAL_ARGC 0
/* uv_pipe_open
 *
 * Parameters:
 * - arg1: uv_pipe_t *
 * - file: int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_pipe_open(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_file;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_file);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvPipeT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvPipeT expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uv_pipe_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_pipe_t(arg1));

  /* Invocation */
  int native_return_value = uv_pipe_open(native_arg1, native_file);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_pipe_pending_count */
/* sha: 28181c46f54ad25009dacdc29e8a54b04d84b25404c0154a8ff2d29d215d36e0 */
#if BIND_uv_pipe_pending_count_FUNCTION
#define uv_pipe_pending_count_REQUIRED_ARGC 1
#define uv_pipe_pending_count_OPTIONAL_ARGC 0
/* uv_pipe_pending_count
 *
 * Parameters:
 * - handle: uv_pipe_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_pipe_pending_count(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvPipeT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvPipeT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_pipe_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_pipe_t(handle));

  /* Invocation */
  int native_return_value = uv_pipe_pending_count(native_handle);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_pipe_pending_instances */
/* sha: 3ef7d78b379aea30390111937ddd122a675693989d011a94b3d48678a6b0a3f5 */
#if BIND_uv_pipe_pending_instances_FUNCTION
#define uv_pipe_pending_instances_REQUIRED_ARGC 2
#define uv_pipe_pending_instances_OPTIONAL_ARGC 0
/* uv_pipe_pending_instances
 *
 * Parameters:
 * - handle: uv_pipe_t *
 * - count: int
 * Return Type: void
 */
mrb_value
mrb_UV_uv_pipe_pending_instances(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_int native_count;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &handle, &native_count);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvPipeT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvPipeT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_pipe_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_pipe_t(handle));

  /* Invocation */
  uv_pipe_pending_instances(native_handle, native_count);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_pipe_pending_type */
/* sha: 7b3e4d471a64cc4fbaf2a46267956b07be744743419b93e82a3c64f00cedfa23 */
#if BIND_uv_pipe_pending_type_FUNCTION
#define uv_pipe_pending_type_REQUIRED_ARGC 1
#define uv_pipe_pending_type_OPTIONAL_ARGC 0
/* uv_pipe_pending_type
 *
 * Parameters:
 * - handle: uv_pipe_t *
 * Return Type: uv_handle_type
 */
mrb_value
mrb_UV_uv_pipe_pending_type(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvPipeT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvPipeT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_pipe_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_pipe_t(handle));

  /* Invocation */
  uv_handle_type native_return_value = uv_pipe_pending_type(native_handle);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_poll_init */
/* sha: d8d35a4b2019f9fc859066b2b38e6f5a9a03acc44d70f47486ec7ba92fbb302a */
#if BIND_uv_poll_init_FUNCTION
#define uv_poll_init_REQUIRED_ARGC 3
#define uv_poll_init_OPTIONAL_ARGC 0
/* uv_poll_init
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - handle: uv_poll_t *
 * - fd: int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_poll_init(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value handle;
  mrb_int native_fd;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi", &loop, &handle, &native_fd);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, UvPollT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvPollT expected");
    return mrb_nil_value();
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: handle */
  uv_poll_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_poll_t(handle));

  /* Invocation */
  int native_return_value = uv_poll_init(native_loop, native_handle, native_fd);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_poll_init_socket */
/* sha: 1d26e43eacb1d622a1e6c2fbefe2dd3d358ae437dcf24ad01f5ed3ff7cdf36fc */
#if BIND_uv_poll_init_socket_FUNCTION
#define uv_poll_init_socket_REQUIRED_ARGC 3
#define uv_poll_init_socket_OPTIONAL_ARGC 0
/* uv_poll_init_socket
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - handle: uv_poll_t *
 * - socket: int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_poll_init_socket(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value handle;
  mrb_int native_socket;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi", &loop, &handle, &native_socket);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, UvPollT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvPollT expected");
    return mrb_nil_value();
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: handle */
  uv_poll_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_poll_t(handle));

  /* Invocation */
  int native_return_value = uv_poll_init_socket(native_loop, native_handle, native_socket);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_poll_start */
/* sha: a80c901bea7639b25d344ad1674481a602a46f90bb2732d9f72161d9cfa9f2a8 */
#if BIND_uv_poll_start_FUNCTION
#define uv_poll_start_REQUIRED_ARGC 3
#define uv_poll_start_OPTIONAL_ARGC 0
/* uv_poll_start
 *
 * Parameters:
 * - handle: uv_poll_t *
 * - events: int
 * - cb: uv_poll_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_poll_start(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_int native_events;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oio", &handle, &native_events, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvPollT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvPollT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_poll_cb(cb);

  /* Unbox param: handle */
  uv_poll_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_poll_t(handle));

  /* Unbox param: cb */
  uv_poll_cb native_cb = TODO_mruby_unbox_uv_poll_cb(cb);

  /* Invocation */
  int native_return_value = uv_poll_start(native_handle, native_events, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_poll_stop */
/* sha: 560e0bb907a7fa62d1d40de0cf543c5c2fe03f54e6db46c08f75297d188c0102 */
#if BIND_uv_poll_stop_FUNCTION
#define uv_poll_stop_REQUIRED_ARGC 1
#define uv_poll_stop_OPTIONAL_ARGC 0
/* uv_poll_stop
 *
 * Parameters:
 * - handle: uv_poll_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_poll_stop(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvPollT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvPollT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_poll_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_poll_t(handle));

  /* Invocation */
  int native_return_value = uv_poll_stop(native_handle);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_prepare_init */
/* sha: 46c36e79640be42cdeda6ec9d3bfff1242a2d3aaecc11c769ef1de1c0ee4062f */
#if BIND_uv_prepare_init_FUNCTION
#define uv_prepare_init_REQUIRED_ARGC 2
#define uv_prepare_init_OPTIONAL_ARGC 0
/* uv_prepare_init
 *
 * Parameters:
 * - arg1: uv_loop_t *
 * - prepare: uv_prepare_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_prepare_init(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value prepare;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &prepare);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, prepare, UvPrepareT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvPrepareT expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uv_loop_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_loop_t(arg1));

  /* Unbox param: prepare */
  uv_prepare_t * native_prepare = (mrb_nil_p(prepare) ? NULL : mruby_unbox_uv_prepare_t(prepare));

  /* Invocation */
  int native_return_value = uv_prepare_init(native_arg1, native_prepare);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_prepare_start */
/* sha: 55e87d9a602ca02550c87b88cc5800ef06d8a3c9c5208623e80702e6f80267da */
#if BIND_uv_prepare_start_FUNCTION
#define uv_prepare_start_REQUIRED_ARGC 2
#define uv_prepare_start_OPTIONAL_ARGC 0
/* uv_prepare_start
 *
 * Parameters:
 * - prepare: uv_prepare_t *
 * - cb: uv_prepare_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_prepare_start(mrb_state* mrb, mrb_value self) {
  mrb_value prepare;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &prepare, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, prepare, UvPrepareT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvPrepareT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_prepare_cb(cb);

  /* Unbox param: prepare */
  uv_prepare_t * native_prepare = (mrb_nil_p(prepare) ? NULL : mruby_unbox_uv_prepare_t(prepare));

  /* Unbox param: cb */
  uv_prepare_cb native_cb = TODO_mruby_unbox_uv_prepare_cb(cb);

  /* Invocation */
  int native_return_value = uv_prepare_start(native_prepare, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_prepare_stop */
/* sha: a094d5d7c31123b21a50d7d558789d7f003e3ca86bf1aa0298b7d7be147e24b4 */
#if BIND_uv_prepare_stop_FUNCTION
#define uv_prepare_stop_REQUIRED_ARGC 1
#define uv_prepare_stop_OPTIONAL_ARGC 0
/* uv_prepare_stop
 *
 * Parameters:
 * - prepare: uv_prepare_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_prepare_stop(mrb_state* mrb, mrb_value self) {
  mrb_value prepare;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &prepare);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, prepare, UvPrepareT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvPrepareT expected");
    return mrb_nil_value();
  }

  /* Unbox param: prepare */
  uv_prepare_t * native_prepare = (mrb_nil_p(prepare) ? NULL : mruby_unbox_uv_prepare_t(prepare));

  /* Invocation */
  int native_return_value = uv_prepare_stop(native_prepare);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_print_active_handles */
/* sha: 14b80609b66d6bf70620de31ce24b98011eb9e94648221139df30c614b290c7e */
#if BIND_uv_print_active_handles_FUNCTION
#define uv_print_active_handles_REQUIRED_ARGC 2
#define uv_print_active_handles_OPTIONAL_ARGC 0
/* uv_print_active_handles
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - stream: FILE *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_print_active_handles(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value stream;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &loop, &stream);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  TODO_type_check_FILE_PTR(stream);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: stream */
  FILE * native_stream = TODO_mruby_unbox_FILE_PTR(stream);

  /* Invocation */
  uv_print_active_handles(native_loop, native_stream);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_print_all_handles */
/* sha: 4b0908152136324d9275e7775952bb8e29183f736fa7db2fd68b5dcdd77186dd */
#if BIND_uv_print_all_handles_FUNCTION
#define uv_print_all_handles_REQUIRED_ARGC 2
#define uv_print_all_handles_OPTIONAL_ARGC 0
/* uv_print_all_handles
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - stream: FILE *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_print_all_handles(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value stream;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &loop, &stream);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  TODO_type_check_FILE_PTR(stream);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: stream */
  FILE * native_stream = TODO_mruby_unbox_FILE_PTR(stream);

  /* Invocation */
  uv_print_all_handles(native_loop, native_stream);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_process_kill */
/* sha: 845d8e72cb59c12e1e3ee437cafdfaaadee5d3ba9ded3116a030c25c6f99b69d */
#if BIND_uv_process_kill_FUNCTION
#define uv_process_kill_REQUIRED_ARGC 2
#define uv_process_kill_OPTIONAL_ARGC 0
/* uv_process_kill
 *
 * Parameters:
 * - arg1: uv_process_t *
 * - signum: int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_process_kill(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_signum;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_signum);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvProcessT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvProcessT expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uv_process_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_process_t(arg1));

  /* Invocation */
  int native_return_value = uv_process_kill(native_arg1, native_signum);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_queue_work */
/* sha: 27b06024906c6998b5872835d36ed0c7d6e52b13a806dee44a696a6b730e22b8 */
#if BIND_uv_queue_work_FUNCTION
#define uv_queue_work_REQUIRED_ARGC 4
#define uv_queue_work_OPTIONAL_ARGC 0
/* uv_queue_work
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_work_t *
 * - work_cb: uv_work_cb
 * - after_work_cb: uv_after_work_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_queue_work(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  mrb_value work_cb;
  mrb_value after_work_cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &loop, &req, &work_cb, &after_work_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, UvWorkT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvWorkT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_work_cb(work_cb);
  TODO_type_check_uv_after_work_cb(after_work_cb);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_work_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_work_t(req));

  /* Unbox param: work_cb */
  uv_work_cb native_work_cb = TODO_mruby_unbox_uv_work_cb(work_cb);

  /* Unbox param: after_work_cb */
  uv_after_work_cb native_after_work_cb = TODO_mruby_unbox_uv_after_work_cb(after_work_cb);

  /* Invocation */
  int native_return_value = uv_queue_work(native_loop, native_req, native_work_cb, native_after_work_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_read_start */
/* sha: 93e3b04bf6d47e9d061b82fad9c1fb50da22ed7a9fc1a39799184645e12bd1f2 */
#if BIND_uv_read_start_FUNCTION
#define uv_read_start_REQUIRED_ARGC 3
#define uv_read_start_OPTIONAL_ARGC 0
/* uv_read_start
 *
 * Parameters:
 * - arg1: uv_stream_t *
 * - alloc_cb: uv_alloc_cb
 * - read_cb: uv_read_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_read_start(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value alloc_cb;
  mrb_value read_cb;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &alloc_cb, &read_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvStreamT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvStreamT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_alloc_cb(alloc_cb);
  TODO_type_check_uv_read_cb(read_cb);

  /* Unbox param: arg1 */
  uv_stream_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_stream_t(arg1));

  /* Unbox param: alloc_cb */
  uv_alloc_cb native_alloc_cb = TODO_mruby_unbox_uv_alloc_cb(alloc_cb);

  /* Unbox param: read_cb */
  uv_read_cb native_read_cb = TODO_mruby_unbox_uv_read_cb(read_cb);

  /* Invocation */
  int native_return_value = uv_read_start(native_arg1, native_alloc_cb, native_read_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_read_stop */
/* sha: af4ce39fd718223b70f11ffd3625b858c29586274e7c0259a5ad53687ca7dcd1 */
#if BIND_uv_read_stop_FUNCTION
#define uv_read_stop_REQUIRED_ARGC 1
#define uv_read_stop_OPTIONAL_ARGC 0
/* uv_read_stop
 *
 * Parameters:
 * - arg1: uv_stream_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_read_stop(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvStreamT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvStreamT expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uv_stream_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_stream_t(arg1));

  /* Invocation */
  int native_return_value = uv_read_stop(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_recv_buffer_size */
/* sha: 5352b92fa3be84445c5ef5ffeb410baaafab717e1e9abc6021206c3f3eea27dd */
#if BIND_uv_recv_buffer_size_FUNCTION
#define uv_recv_buffer_size_REQUIRED_ARGC 2
#define uv_recv_buffer_size_OPTIONAL_ARGC 0
/* uv_recv_buffer_size
 *
 * Parameters:
 * - handle: uv_handle_t *
 * - value: int *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_recv_buffer_size(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &handle, &value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvHandleT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvHandleT expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(value);

  /* Unbox param: handle */
  uv_handle_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_handle_t(handle));

  /* Unbox param: value */
  int * native_value = TODO_mruby_unbox_int_PTR(value);

  /* Invocation */
  int native_return_value = uv_recv_buffer_size(native_handle, native_value);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_ref */
/* sha: a78e3ddf620c2721a79ff5f21bedc1bc433307b8c0a200ebfbf505976398d9ab */
#if BIND_uv_ref_FUNCTION
#define uv_ref_REQUIRED_ARGC 1
#define uv_ref_OPTIONAL_ARGC 0
/* uv_ref
 *
 * Parameters:
 * - arg1: uv_handle_t *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_ref(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvHandleT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvHandleT expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uv_handle_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_handle_t(arg1));

  /* Invocation */
  uv_ref(native_arg1);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_replace_allocator */
/* sha: 154d9731bf071a355763baf4cd3f24075c10c00c3fb1a80fb7711b44f14cd12b */
#if BIND_uv_replace_allocator_FUNCTION
#define uv_replace_allocator_REQUIRED_ARGC 4
#define uv_replace_allocator_OPTIONAL_ARGC 0
/* uv_replace_allocator
 *
 * Parameters:
 * - malloc_func: uv_malloc_func
 * - realloc_func: uv_realloc_func
 * - calloc_func: uv_calloc_func
 * - free_func: uv_free_func
 * Return Type: int
 */
mrb_value
mrb_UV_uv_replace_allocator(mrb_state* mrb, mrb_value self) {
  mrb_value malloc_func;
  mrb_value realloc_func;
  mrb_value calloc_func;
  mrb_value free_func;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &malloc_func, &realloc_func, &calloc_func, &free_func);

  /* Type checking */
  TODO_type_check_uv_malloc_func(malloc_func);
  TODO_type_check_uv_realloc_func(realloc_func);
  TODO_type_check_uv_calloc_func(calloc_func);
  TODO_type_check_uv_free_func(free_func);

  /* Unbox param: malloc_func */
  uv_malloc_func native_malloc_func = TODO_mruby_unbox_uv_malloc_func(malloc_func);

  /* Unbox param: realloc_func */
  uv_realloc_func native_realloc_func = TODO_mruby_unbox_uv_realloc_func(realloc_func);

  /* Unbox param: calloc_func */
  uv_calloc_func native_calloc_func = TODO_mruby_unbox_uv_calloc_func(calloc_func);

  /* Unbox param: free_func */
  uv_free_func native_free_func = TODO_mruby_unbox_uv_free_func(free_func);

  /* Invocation */
  int native_return_value = uv_replace_allocator(native_malloc_func, native_realloc_func, native_calloc_func, native_free_func);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_req_size */
/* sha: 53d9d8df96d6959625ef1c1660a68b06511d909c7ab66a1b4e1c1a03e921d868 */
#if BIND_uv_req_size_FUNCTION
#define uv_req_size_REQUIRED_ARGC 1
#define uv_req_size_OPTIONAL_ARGC 0
/* uv_req_size
 *
 * Parameters:
 * - type: uv_req_type
 * Return Type: size_t
 */
mrb_value
mrb_UV_uv_req_size(mrb_state* mrb, mrb_value self) {
  mrb_int native_type;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_type);

  /* Invocation */
  size_t native_return_value = uv_req_size(native_type);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_resident_set_memory */
/* sha: ad45a94468b4b4489e0835b2d3a3ac1db6ea3b15646fb2658eb3a399f47d90a7 */
#if BIND_uv_resident_set_memory_FUNCTION
#define uv_resident_set_memory_REQUIRED_ARGC 1
#define uv_resident_set_memory_OPTIONAL_ARGC 0
/* uv_resident_set_memory
 *
 * Parameters:
 * - rss: size_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_resident_set_memory(mrb_state* mrb, mrb_value self) {
  mrb_value rss;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &rss);

  /* Type checking */
  TODO_type_check_size_t_PTR(rss);

  /* Unbox param: rss */
  size_t * native_rss = TODO_mruby_unbox_size_t_PTR(rss);

  /* Invocation */
  int native_return_value = uv_resident_set_memory(native_rss);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_run */
/* sha: 3f8f8508ac2c9828e3c4892ee0c37f97eca7a4b68ce8005eba2d5109ed25696c */
#if BIND_uv_run_FUNCTION
#define uv_run_REQUIRED_ARGC 2
#define uv_run_OPTIONAL_ARGC 0
/* uv_run
 *
 * Parameters:
 * - arg1: uv_loop_t *
 * - mode: uv_run_mode
 * Return Type: int
 */
mrb_value
mrb_UV_uv_run(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_mode;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_mode);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uv_loop_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_loop_t(arg1));

  /* Invocation */
  int native_return_value = uv_run(native_arg1, native_mode);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_rwlock_destroy */
/* sha: 2cfc209d99cca3aeff34f994c6fe285c82342322f51f82896ae24d9858e1f13e */
#if BIND_uv_rwlock_destroy_FUNCTION
#define uv_rwlock_destroy_REQUIRED_ARGC 1
#define uv_rwlock_destroy_OPTIONAL_ARGC 0
/* uv_rwlock_destroy
 *
 * Parameters:
 * - rwlock: int *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_rwlock_destroy(mrb_state* mrb, mrb_value self) {
  mrb_value rwlock;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &rwlock);

  /* Type checking */
  TODO_type_check_int_PTR(rwlock);

  /* Unbox param: rwlock */
  int * native_rwlock = TODO_mruby_unbox_int_PTR(rwlock);

  /* Invocation */
  uv_rwlock_destroy(native_rwlock);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_rwlock_init */
/* sha: 1229f0e6ce698de23cba68b11ed7f8f1131fd28a6e454848e28aafc5b38504b0 */
#if BIND_uv_rwlock_init_FUNCTION
#define uv_rwlock_init_REQUIRED_ARGC 1
#define uv_rwlock_init_OPTIONAL_ARGC 0
/* uv_rwlock_init
 *
 * Parameters:
 * - rwlock: int *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_rwlock_init(mrb_state* mrb, mrb_value self) {
  mrb_value rwlock;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &rwlock);

  /* Type checking */
  TODO_type_check_int_PTR(rwlock);

  /* Unbox param: rwlock */
  int * native_rwlock = TODO_mruby_unbox_int_PTR(rwlock);

  /* Invocation */
  int native_return_value = uv_rwlock_init(native_rwlock);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_rwlock_rdlock */
/* sha: 55db638e44df12fab23846f7d0b51a6564e9ebd4a8b6131145e4ab0934fec51a */
#if BIND_uv_rwlock_rdlock_FUNCTION
#define uv_rwlock_rdlock_REQUIRED_ARGC 1
#define uv_rwlock_rdlock_OPTIONAL_ARGC 0
/* uv_rwlock_rdlock
 *
 * Parameters:
 * - rwlock: int *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_rwlock_rdlock(mrb_state* mrb, mrb_value self) {
  mrb_value rwlock;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &rwlock);

  /* Type checking */
  TODO_type_check_int_PTR(rwlock);

  /* Unbox param: rwlock */
  int * native_rwlock = TODO_mruby_unbox_int_PTR(rwlock);

  /* Invocation */
  uv_rwlock_rdlock(native_rwlock);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_rwlock_rdunlock */
/* sha: 131e7e4ba7ffd3e312bfe4bbcd325295a563e8e11fe60f271f5bd1a1841b40f7 */
#if BIND_uv_rwlock_rdunlock_FUNCTION
#define uv_rwlock_rdunlock_REQUIRED_ARGC 1
#define uv_rwlock_rdunlock_OPTIONAL_ARGC 0
/* uv_rwlock_rdunlock
 *
 * Parameters:
 * - rwlock: int *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_rwlock_rdunlock(mrb_state* mrb, mrb_value self) {
  mrb_value rwlock;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &rwlock);

  /* Type checking */
  TODO_type_check_int_PTR(rwlock);

  /* Unbox param: rwlock */
  int * native_rwlock = TODO_mruby_unbox_int_PTR(rwlock);

  /* Invocation */
  uv_rwlock_rdunlock(native_rwlock);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_rwlock_tryrdlock */
/* sha: 2bfe611bc290caa98c229a88d4754b1667ee08054920053f03686528b76178af */
#if BIND_uv_rwlock_tryrdlock_FUNCTION
#define uv_rwlock_tryrdlock_REQUIRED_ARGC 1
#define uv_rwlock_tryrdlock_OPTIONAL_ARGC 0
/* uv_rwlock_tryrdlock
 *
 * Parameters:
 * - rwlock: int *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_rwlock_tryrdlock(mrb_state* mrb, mrb_value self) {
  mrb_value rwlock;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &rwlock);

  /* Type checking */
  TODO_type_check_int_PTR(rwlock);

  /* Unbox param: rwlock */
  int * native_rwlock = TODO_mruby_unbox_int_PTR(rwlock);

  /* Invocation */
  int native_return_value = uv_rwlock_tryrdlock(native_rwlock);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_rwlock_trywrlock */
/* sha: f8377403716c685ad551ada17709bf8c202da45028a3d49d883185e3d787f4fb */
#if BIND_uv_rwlock_trywrlock_FUNCTION
#define uv_rwlock_trywrlock_REQUIRED_ARGC 1
#define uv_rwlock_trywrlock_OPTIONAL_ARGC 0
/* uv_rwlock_trywrlock
 *
 * Parameters:
 * - rwlock: int *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_rwlock_trywrlock(mrb_state* mrb, mrb_value self) {
  mrb_value rwlock;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &rwlock);

  /* Type checking */
  TODO_type_check_int_PTR(rwlock);

  /* Unbox param: rwlock */
  int * native_rwlock = TODO_mruby_unbox_int_PTR(rwlock);

  /* Invocation */
  int native_return_value = uv_rwlock_trywrlock(native_rwlock);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_rwlock_wrlock */
/* sha: a5ef5113c77a133117c90f3ab3350c0e7966785588ae3f8d375fe55440e20ed7 */
#if BIND_uv_rwlock_wrlock_FUNCTION
#define uv_rwlock_wrlock_REQUIRED_ARGC 1
#define uv_rwlock_wrlock_OPTIONAL_ARGC 0
/* uv_rwlock_wrlock
 *
 * Parameters:
 * - rwlock: int *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_rwlock_wrlock(mrb_state* mrb, mrb_value self) {
  mrb_value rwlock;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &rwlock);

  /* Type checking */
  TODO_type_check_int_PTR(rwlock);

  /* Unbox param: rwlock */
  int * native_rwlock = TODO_mruby_unbox_int_PTR(rwlock);

  /* Invocation */
  uv_rwlock_wrlock(native_rwlock);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_rwlock_wrunlock */
/* sha: bb2edc487ac2395dfa87b0d88dead4735e25867adaac879609c9ad60e87fedfa */
#if BIND_uv_rwlock_wrunlock_FUNCTION
#define uv_rwlock_wrunlock_REQUIRED_ARGC 1
#define uv_rwlock_wrunlock_OPTIONAL_ARGC 0
/* uv_rwlock_wrunlock
 *
 * Parameters:
 * - rwlock: int *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_rwlock_wrunlock(mrb_state* mrb, mrb_value self) {
  mrb_value rwlock;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &rwlock);

  /* Type checking */
  TODO_type_check_int_PTR(rwlock);

  /* Unbox param: rwlock */
  int * native_rwlock = TODO_mruby_unbox_int_PTR(rwlock);

  /* Invocation */
  uv_rwlock_wrunlock(native_rwlock);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_sem_destroy */
/* sha: 3ff4928029bbd0c2c3bf8261706eeb68d4c8ea3c451cd73c333f40fb694de33b */
#if BIND_uv_sem_destroy_FUNCTION
#define uv_sem_destroy_REQUIRED_ARGC 1
#define uv_sem_destroy_OPTIONAL_ARGC 0
/* uv_sem_destroy
 *
 * Parameters:
 * - sem: int *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_sem_destroy(mrb_state* mrb, mrb_value self) {
  mrb_value sem;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &sem);

  /* Type checking */
  TODO_type_check_int_PTR(sem);

  /* Unbox param: sem */
  int * native_sem = TODO_mruby_unbox_int_PTR(sem);

  /* Invocation */
  uv_sem_destroy(native_sem);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_sem_init */
/* sha: 79c19c1f691bd845943089327f4ce19b0859fc36c0c651940b24b066828da8fc */
#if BIND_uv_sem_init_FUNCTION
#define uv_sem_init_REQUIRED_ARGC 2
#define uv_sem_init_OPTIONAL_ARGC 0
/* uv_sem_init
 *
 * Parameters:
 * - sem: int *
 * - value: unsigned int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_sem_init(mrb_state* mrb, mrb_value self) {
  mrb_value sem;
  mrb_int native_value;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &sem, &native_value);

  /* Type checking */
  TODO_type_check_int_PTR(sem);

  /* Unbox param: sem */
  int * native_sem = TODO_mruby_unbox_int_PTR(sem);

  /* Invocation */
  int native_return_value = uv_sem_init(native_sem, native_value);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_sem_post */
/* sha: e14c12305710c1c55fde533c4ae11742cfe6abca8eec140824e7c9c1eac26492 */
#if BIND_uv_sem_post_FUNCTION
#define uv_sem_post_REQUIRED_ARGC 1
#define uv_sem_post_OPTIONAL_ARGC 0
/* uv_sem_post
 *
 * Parameters:
 * - sem: int *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_sem_post(mrb_state* mrb, mrb_value self) {
  mrb_value sem;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &sem);

  /* Type checking */
  TODO_type_check_int_PTR(sem);

  /* Unbox param: sem */
  int * native_sem = TODO_mruby_unbox_int_PTR(sem);

  /* Invocation */
  uv_sem_post(native_sem);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_sem_trywait */
/* sha: a24679e2931ad458739f183b0987f4b3e027d1560dbf2a898870fd23adee59a9 */
#if BIND_uv_sem_trywait_FUNCTION
#define uv_sem_trywait_REQUIRED_ARGC 1
#define uv_sem_trywait_OPTIONAL_ARGC 0
/* uv_sem_trywait
 *
 * Parameters:
 * - sem: int *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_sem_trywait(mrb_state* mrb, mrb_value self) {
  mrb_value sem;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &sem);

  /* Type checking */
  TODO_type_check_int_PTR(sem);

  /* Unbox param: sem */
  int * native_sem = TODO_mruby_unbox_int_PTR(sem);

  /* Invocation */
  int native_return_value = uv_sem_trywait(native_sem);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_sem_wait */
/* sha: a84427a67e4d77bb2cf7d36c9dbc34b012e53255777846e707688df9ac44b994 */
#if BIND_uv_sem_wait_FUNCTION
#define uv_sem_wait_REQUIRED_ARGC 1
#define uv_sem_wait_OPTIONAL_ARGC 0
/* uv_sem_wait
 *
 * Parameters:
 * - sem: int *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_sem_wait(mrb_state* mrb, mrb_value self) {
  mrb_value sem;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &sem);

  /* Type checking */
  TODO_type_check_int_PTR(sem);

  /* Unbox param: sem */
  int * native_sem = TODO_mruby_unbox_int_PTR(sem);

  /* Invocation */
  uv_sem_wait(native_sem);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_send_buffer_size */
/* sha: 0d4218a793c6c08e7af142712dc6976018390229fe0e32fd1f79f8ce51d106b6 */
#if BIND_uv_send_buffer_size_FUNCTION
#define uv_send_buffer_size_REQUIRED_ARGC 2
#define uv_send_buffer_size_OPTIONAL_ARGC 0
/* uv_send_buffer_size
 *
 * Parameters:
 * - handle: uv_handle_t *
 * - value: int *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_send_buffer_size(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &handle, &value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvHandleT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvHandleT expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(value);

  /* Unbox param: handle */
  uv_handle_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_handle_t(handle));

  /* Unbox param: value */
  int * native_value = TODO_mruby_unbox_int_PTR(value);

  /* Invocation */
  int native_return_value = uv_send_buffer_size(native_handle, native_value);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_set_process_title */
/* sha: 5148cebfc8ee5f6d3c1798218765548931e510253c6b1b9197a643aef634a1aa */
#if BIND_uv_set_process_title_FUNCTION
#define uv_set_process_title_REQUIRED_ARGC 1
#define uv_set_process_title_OPTIONAL_ARGC 0
/* uv_set_process_title
 *
 * Parameters:
 * - title: const char *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_set_process_title(mrb_state* mrb, mrb_value self) {
  char * native_title = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_title);

  /* Invocation */
  int native_return_value = uv_set_process_title(native_title);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_setup_args */
/* sha: 16ad884387895546567466523f0e0809b3ef939214aadab3af694dd970de81d6 */
#if BIND_uv_setup_args_FUNCTION
#define uv_setup_args_REQUIRED_ARGC 2
#define uv_setup_args_OPTIONAL_ARGC 0
/* uv_setup_args
 *
 * Parameters:
 * - argc: int
 * - argv: char **
 * Return Type: char **
 */
mrb_value
mrb_UV_uv_setup_args(mrb_state* mrb, mrb_value self) {
  mrb_int native_argc;
  mrb_value argv;

  /* Fetch the args */
  mrb_get_args(mrb, "io", &native_argc, &argv);

  /* Type checking */
  TODO_type_check_char_PTR_PTR(argv);

  /* Unbox param: argv */
  char ** native_argv = TODO_mruby_unbox_char_PTR_PTR(argv);

  /* Invocation */
  char ** native_return_value = uv_setup_args(native_argc, native_argv);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_char_PTR_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_signal_init */
/* sha: a823a7c6bcb992d4a1c1e42239869f9e14524797153cce46536aba95fe5b5f01 */
#if BIND_uv_signal_init_FUNCTION
#define uv_signal_init_REQUIRED_ARGC 2
#define uv_signal_init_OPTIONAL_ARGC 0
/* uv_signal_init
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - handle: uv_signal_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_signal_init(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &loop, &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, UvSignalT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvSignalT expected");
    return mrb_nil_value();
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: handle */
  uv_signal_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_signal_t(handle));

  /* Invocation */
  int native_return_value = uv_signal_init(native_loop, native_handle);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_signal_start */
/* sha: d35592651908415bcd12938a9a5f43be6ead6c825b0d408fb0079c39d7628028 */
#if BIND_uv_signal_start_FUNCTION
#define uv_signal_start_REQUIRED_ARGC 3
#define uv_signal_start_OPTIONAL_ARGC 0
/* uv_signal_start
 *
 * Parameters:
 * - handle: uv_signal_t *
 * - signal_cb: uv_signal_cb
 * - signum: int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_signal_start(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value signal_cb;
  mrb_int native_signum;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi", &handle, &signal_cb, &native_signum);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvSignalT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvSignalT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_signal_cb(signal_cb);

  /* Unbox param: handle */
  uv_signal_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_signal_t(handle));

  /* Unbox param: signal_cb */
  uv_signal_cb native_signal_cb = TODO_mruby_unbox_uv_signal_cb(signal_cb);

  /* Invocation */
  int native_return_value = uv_signal_start(native_handle, native_signal_cb, native_signum);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_signal_stop */
/* sha: f36cf4b6568341851d5f9182fc27cf61360c18de33f7e86f76025ba25312dce4 */
#if BIND_uv_signal_stop_FUNCTION
#define uv_signal_stop_REQUIRED_ARGC 1
#define uv_signal_stop_OPTIONAL_ARGC 0
/* uv_signal_stop
 *
 * Parameters:
 * - handle: uv_signal_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_signal_stop(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvSignalT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvSignalT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_signal_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_signal_t(handle));

  /* Invocation */
  int native_return_value = uv_signal_stop(native_handle);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_spawn */
/* sha: d71577c784a07d7e2799d57fea6f48664d9004c95f7db957ad3a3b565b14d120 */
#if BIND_uv_spawn_FUNCTION
#define uv_spawn_REQUIRED_ARGC 3
#define uv_spawn_OPTIONAL_ARGC 0
/* uv_spawn
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - handle: uv_process_t *
 * - options: const uv_process_options_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_spawn(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value handle;
  mrb_value options;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &loop, &handle, &options);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, UvProcessT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvProcessT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_process_options_t_PTR(options);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: handle */
  uv_process_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_process_t(handle));

  /* Unbox param: options */
  const uv_process_options_t * native_options = TODO_mruby_unbox_uv_process_options_t_PTR(options);

  /* Invocation */
  int native_return_value = uv_spawn(native_loop, native_handle, native_options);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_stop */
/* sha: 229ba9352030e7f09f77c784afb3e7e625f06ad0e8436a028245635b1bdd5912 */
#if BIND_uv_stop_FUNCTION
#define uv_stop_REQUIRED_ARGC 1
#define uv_stop_OPTIONAL_ARGC 0
/* uv_stop
 *
 * Parameters:
 * - arg1: uv_loop_t *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_stop(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uv_loop_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_loop_t(arg1));

  /* Invocation */
  uv_stop(native_arg1);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_stream_set_blocking */
/* sha: 7dd4284f3b806ab8ff15427853d67ec08cf02dc0f336b94720726f663d16d8b5 */
#if BIND_uv_stream_set_blocking_FUNCTION
#define uv_stream_set_blocking_REQUIRED_ARGC 2
#define uv_stream_set_blocking_OPTIONAL_ARGC 0
/* uv_stream_set_blocking
 *
 * Parameters:
 * - handle: uv_stream_t *
 * - blocking: int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_stream_set_blocking(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_int native_blocking;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &handle, &native_blocking);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvStreamT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvStreamT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_stream_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_stream_t(handle));

  /* Invocation */
  int native_return_value = uv_stream_set_blocking(native_handle, native_blocking);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_strerror */
/* sha: a1c6765204a75da108fec4d22ac9e7ab1b79c0fca553987d572675a48624da38 */
#if BIND_uv_strerror_FUNCTION
#define uv_strerror_REQUIRED_ARGC 1
#define uv_strerror_OPTIONAL_ARGC 0
/* uv_strerror
 *
 * Parameters:
 * - err: int
 * Return Type: const char *
 */
mrb_value
mrb_UV_uv_strerror(mrb_state* mrb, mrb_value self) {
  mrb_int native_err;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_err);

  /* Invocation */
  const char * native_return_value = uv_strerror(native_err);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_tcp_bind */
/* sha: 153efacecf7f0f83d262690c08fa2aab2b1da71121fcab4fc1afd0dd19ca291f */
#if BIND_uv_tcp_bind_FUNCTION
#define uv_tcp_bind_REQUIRED_ARGC 3
#define uv_tcp_bind_OPTIONAL_ARGC 0
/* uv_tcp_bind
 *
 * Parameters:
 * - handle: uv_tcp_t *
 * - addr: const struct sockaddr *
 * - flags: unsigned int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_tcp_bind(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value addr;
  mrb_int native_flags;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi", &handle, &addr, &native_flags);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvTcpT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvTcpT expected");
    return mrb_nil_value();
  }
  TODO_type_check_sockaddr_PTR(addr);

  /* Unbox param: handle */
  uv_tcp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_tcp_t(handle));

  /* Unbox param: addr */
  const struct sockaddr * native_addr = TODO_mruby_unbox_sockaddr_PTR(addr);

  /* Invocation */
  int native_return_value = uv_tcp_bind(native_handle, native_addr, native_flags);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_tcp_connect */
/* sha: c67a03ee6a9d9c3e7a4a548ea89a8010e5e649621c0bef64356c8b8fd4f5e81b */
#if BIND_uv_tcp_connect_FUNCTION
#define uv_tcp_connect_REQUIRED_ARGC 4
#define uv_tcp_connect_OPTIONAL_ARGC 0
/* uv_tcp_connect
 *
 * Parameters:
 * - req: uv_connect_t *
 * - handle: uv_tcp_t *
 * - addr: const struct sockaddr *
 * - cb: uv_connect_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_tcp_connect(mrb_state* mrb, mrb_value self) {
  mrb_value req;
  mrb_value handle;
  mrb_value addr;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &req, &handle, &addr, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, req, UvConnectT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvConnectT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, UvTcpT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvTcpT expected");
    return mrb_nil_value();
  }
  TODO_type_check_sockaddr_PTR(addr);
  TODO_type_check_uv_connect_cb(cb);

  /* Unbox param: req */
  uv_connect_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_connect_t(req));

  /* Unbox param: handle */
  uv_tcp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_tcp_t(handle));

  /* Unbox param: addr */
  const struct sockaddr * native_addr = TODO_mruby_unbox_sockaddr_PTR(addr);

  /* Unbox param: cb */
  uv_connect_cb native_cb = TODO_mruby_unbox_uv_connect_cb(cb);

  /* Invocation */
  int native_return_value = uv_tcp_connect(native_req, native_handle, native_addr, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_tcp_getpeername */
/* sha: f90ec93ef6f26ade0dbd74c355425f59081f681363660ba7b19d3f8d398dcaaf */
#if BIND_uv_tcp_getpeername_FUNCTION
#define uv_tcp_getpeername_REQUIRED_ARGC 3
#define uv_tcp_getpeername_OPTIONAL_ARGC 0
/* uv_tcp_getpeername
 *
 * Parameters:
 * - handle: const uv_tcp_t *
 * - name: struct sockaddr *
 * - namelen: int *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_tcp_getpeername(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value name;
  mrb_value namelen;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &handle, &name, &namelen);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvTcpT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvTcpT expected");
    return mrb_nil_value();
  }
  TODO_type_check_sockaddr_PTR(name);
  TODO_type_check_int_PTR(namelen);

  /* Unbox param: handle */
  const uv_tcp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_tcp_t(handle));

  /* Unbox param: name */
  struct sockaddr * native_name = TODO_mruby_unbox_sockaddr_PTR(name);

  /* Unbox param: namelen */
  int * native_namelen = TODO_mruby_unbox_int_PTR(namelen);

  /* Invocation */
  int native_return_value = uv_tcp_getpeername(native_handle, native_name, native_namelen);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_tcp_getsockname */
/* sha: daf3bab670f5d033cc6680888d572c959a807c2bb9696267c9b0d8ba4d04052a */
#if BIND_uv_tcp_getsockname_FUNCTION
#define uv_tcp_getsockname_REQUIRED_ARGC 3
#define uv_tcp_getsockname_OPTIONAL_ARGC 0
/* uv_tcp_getsockname
 *
 * Parameters:
 * - handle: const uv_tcp_t *
 * - name: struct sockaddr *
 * - namelen: int *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_tcp_getsockname(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value name;
  mrb_value namelen;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &handle, &name, &namelen);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvTcpT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvTcpT expected");
    return mrb_nil_value();
  }
  TODO_type_check_sockaddr_PTR(name);
  TODO_type_check_int_PTR(namelen);

  /* Unbox param: handle */
  const uv_tcp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_tcp_t(handle));

  /* Unbox param: name */
  struct sockaddr * native_name = TODO_mruby_unbox_sockaddr_PTR(name);

  /* Unbox param: namelen */
  int * native_namelen = TODO_mruby_unbox_int_PTR(namelen);

  /* Invocation */
  int native_return_value = uv_tcp_getsockname(native_handle, native_name, native_namelen);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_tcp_init */
/* sha: 6002d03a0ac0251a69b6f64a13ff5b66c7d89aeee1169a0d5ba2ccaf047f09f2 */
#if BIND_uv_tcp_init_FUNCTION
#define uv_tcp_init_REQUIRED_ARGC 2
#define uv_tcp_init_OPTIONAL_ARGC 0
/* uv_tcp_init
 *
 * Parameters:
 * - arg1: uv_loop_t *
 * - handle: uv_tcp_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_tcp_init(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, UvTcpT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvTcpT expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uv_loop_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_loop_t(arg1));

  /* Unbox param: handle */
  uv_tcp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_tcp_t(handle));

  /* Invocation */
  int native_return_value = uv_tcp_init(native_arg1, native_handle);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_tcp_init_ex */
/* sha: 9caec999cc427b7b73f7157833fcfa314ac992fc88cc5cdeb5129050e50b6f53 */
#if BIND_uv_tcp_init_ex_FUNCTION
#define uv_tcp_init_ex_REQUIRED_ARGC 3
#define uv_tcp_init_ex_OPTIONAL_ARGC 0
/* uv_tcp_init_ex
 *
 * Parameters:
 * - arg1: uv_loop_t *
 * - handle: uv_tcp_t *
 * - flags: unsigned int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_tcp_init_ex(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value handle;
  mrb_int native_flags;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi", &arg1, &handle, &native_flags);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, UvTcpT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvTcpT expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uv_loop_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_loop_t(arg1));

  /* Unbox param: handle */
  uv_tcp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_tcp_t(handle));

  /* Invocation */
  int native_return_value = uv_tcp_init_ex(native_arg1, native_handle, native_flags);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_tcp_keepalive */
/* sha: 528db1708fcb0f8998a1bc3246b6ed028cef6bf1d99932174bc34b37bc5d0668 */
#if BIND_uv_tcp_keepalive_FUNCTION
#define uv_tcp_keepalive_REQUIRED_ARGC 3
#define uv_tcp_keepalive_OPTIONAL_ARGC 0
/* uv_tcp_keepalive
 *
 * Parameters:
 * - handle: uv_tcp_t *
 * - enable: int
 * - delay: unsigned int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_tcp_keepalive(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_int native_enable;
  mrb_int native_delay;

  /* Fetch the args */
  mrb_get_args(mrb, "oii", &handle, &native_enable, &native_delay);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvTcpT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvTcpT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_tcp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_tcp_t(handle));

  /* Invocation */
  int native_return_value = uv_tcp_keepalive(native_handle, native_enable, native_delay);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_tcp_nodelay */
/* sha: d217e11b21bdfbc9386652869b703de354c5c9f6df49c9f001b8fd9c3bc2d79c */
#if BIND_uv_tcp_nodelay_FUNCTION
#define uv_tcp_nodelay_REQUIRED_ARGC 2
#define uv_tcp_nodelay_OPTIONAL_ARGC 0
/* uv_tcp_nodelay
 *
 * Parameters:
 * - handle: uv_tcp_t *
 * - enable: int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_tcp_nodelay(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_int native_enable;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &handle, &native_enable);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvTcpT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvTcpT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_tcp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_tcp_t(handle));

  /* Invocation */
  int native_return_value = uv_tcp_nodelay(native_handle, native_enable);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_tcp_open */
/* sha: 11caddf6ecab16db6b64ca3ede48a6d16d8796f23751bab4425074538f29f6c3 */
#if BIND_uv_tcp_open_FUNCTION
#define uv_tcp_open_REQUIRED_ARGC 2
#define uv_tcp_open_OPTIONAL_ARGC 0
/* uv_tcp_open
 *
 * Parameters:
 * - handle: uv_tcp_t *
 * - sock: int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_tcp_open(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_int native_sock;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &handle, &native_sock);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvTcpT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvTcpT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_tcp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_tcp_t(handle));

  /* Invocation */
  int native_return_value = uv_tcp_open(native_handle, native_sock);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_tcp_simultaneous_accepts */
/* sha: 9e2916c45c5323fd7a4738acaca81a5751dbe944e720281e99f5c25fff94a119 */
#if BIND_uv_tcp_simultaneous_accepts_FUNCTION
#define uv_tcp_simultaneous_accepts_REQUIRED_ARGC 2
#define uv_tcp_simultaneous_accepts_OPTIONAL_ARGC 0
/* uv_tcp_simultaneous_accepts
 *
 * Parameters:
 * - handle: uv_tcp_t *
 * - enable: int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_tcp_simultaneous_accepts(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_int native_enable;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &handle, &native_enable);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvTcpT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvTcpT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_tcp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_tcp_t(handle));

  /* Invocation */
  int native_return_value = uv_tcp_simultaneous_accepts(native_handle, native_enable);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_thread_create */
/* sha: 7b22e39f37dceb8d89e76ac374dab1db6bbca7c1d622a89c1fdb854a47ba0094 */
#if BIND_uv_thread_create_FUNCTION
#define uv_thread_create_REQUIRED_ARGC 3
#define uv_thread_create_OPTIONAL_ARGC 0
/* uv_thread_create
 *
 * Parameters:
 * - tid: int *
 * - entry: uv_thread_cb
 * - arg: void *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_thread_create(mrb_state* mrb, mrb_value self) {
  mrb_value tid;
  mrb_value entry;
  mrb_value arg;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &tid, &entry, &arg);

  /* Type checking */
  TODO_type_check_int_PTR(tid);
  TODO_type_check_uv_thread_cb(entry);
  TODO_type_check_void_PTR(arg);

  /* Unbox param: tid */
  int * native_tid = TODO_mruby_unbox_int_PTR(tid);

  /* Unbox param: entry */
  uv_thread_cb native_entry = TODO_mruby_unbox_uv_thread_cb(entry);

  /* Unbox param: arg */
  void * native_arg = TODO_mruby_unbox_void_PTR(arg);

  /* Invocation */
  int native_return_value = uv_thread_create(native_tid, native_entry, native_arg);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_thread_equal */
/* sha: d5d09f72e703887a904466b861a7d5bfdbcb473d47a7a80208d92608a616de02 */
#if BIND_uv_thread_equal_FUNCTION
#define uv_thread_equal_REQUIRED_ARGC 2
#define uv_thread_equal_OPTIONAL_ARGC 0
/* uv_thread_equal
 *
 * Parameters:
 * - t1: const int *
 * - t2: const int *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_thread_equal(mrb_state* mrb, mrb_value self) {
  mrb_value t1;
  mrb_value t2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &t1, &t2);

  /* Type checking */
  TODO_type_check_int_PTR(t1);
  TODO_type_check_int_PTR(t2);

  /* Unbox param: t1 */
  const int * native_t1 = TODO_mruby_unbox_int_PTR(t1);

  /* Unbox param: t2 */
  const int * native_t2 = TODO_mruby_unbox_int_PTR(t2);

  /* Invocation */
  int native_return_value = uv_thread_equal(native_t1, native_t2);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_thread_join */
/* sha: d13e4da39ae0aab5c2442e8170480812514878e095136be69ce675c3c40a0a89 */
#if BIND_uv_thread_join_FUNCTION
#define uv_thread_join_REQUIRED_ARGC 1
#define uv_thread_join_OPTIONAL_ARGC 0
/* uv_thread_join
 *
 * Parameters:
 * - tid: int *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_thread_join(mrb_state* mrb, mrb_value self) {
  mrb_value tid;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &tid);

  /* Type checking */
  TODO_type_check_int_PTR(tid);

  /* Unbox param: tid */
  int * native_tid = TODO_mruby_unbox_int_PTR(tid);

  /* Invocation */
  int native_return_value = uv_thread_join(native_tid);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_thread_self */
/* sha: c753ef135b06d82e127745136ed4e556551f1b5a7b946359448bf4e92ceb70ce */
#if BIND_uv_thread_self_FUNCTION
#define uv_thread_self_REQUIRED_ARGC 0
#define uv_thread_self_OPTIONAL_ARGC 0
/* uv_thread_self
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_UV_uv_thread_self(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int native_return_value = uv_thread_self();

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_timer_again */
/* sha: 622974a88cc32e812c2a4f698e39bc6a7c2b80aff7032200cbb75333c7e5e19c */
#if BIND_uv_timer_again_FUNCTION
#define uv_timer_again_REQUIRED_ARGC 1
#define uv_timer_again_OPTIONAL_ARGC 0
/* uv_timer_again
 *
 * Parameters:
 * - handle: uv_timer_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_timer_again(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvTimerT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvTimerT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_timer_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_timer_t(handle));

  /* Invocation */
  int native_return_value = uv_timer_again(native_handle);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_timer_get_repeat */
/* sha: 3af1854bee7ef4876aaeb1166fad31984fa1776a44c1f813c93140632126558e */
#if BIND_uv_timer_get_repeat_FUNCTION
#define uv_timer_get_repeat_REQUIRED_ARGC 1
#define uv_timer_get_repeat_OPTIONAL_ARGC 0
/* uv_timer_get_repeat
 *
 * Parameters:
 * - handle: const uv_timer_t *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_uv_timer_get_repeat(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvTimerT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvTimerT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  const uv_timer_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_timer_t(handle));

  /* Invocation */
  uint64_t native_return_value = uv_timer_get_repeat(native_handle);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_uint64_t(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_timer_init */
/* sha: 031e6f471810d7fc50774c6c65d0c5d9e2dbc2c3a095e80cd83af7bd548d6fd4 */
#if BIND_uv_timer_init_FUNCTION
#define uv_timer_init_REQUIRED_ARGC 2
#define uv_timer_init_OPTIONAL_ARGC 0
/* uv_timer_init
 *
 * Parameters:
 * - arg1: uv_loop_t *
 * - handle: uv_timer_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_timer_init(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, UvTimerT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvTimerT expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uv_loop_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_loop_t(arg1));

  /* Unbox param: handle */
  uv_timer_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_timer_t(handle));

  /* Invocation */
  int native_return_value = uv_timer_init(native_arg1, native_handle);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_timer_set_repeat */
/* sha: 768a0750f681f0339b2e3b9c5a92fbb7dd1c5330a1e3abb42b29a2d88628070d */
#if BIND_uv_timer_set_repeat_FUNCTION
#define uv_timer_set_repeat_REQUIRED_ARGC 2
#define uv_timer_set_repeat_OPTIONAL_ARGC 0
/* uv_timer_set_repeat
 *
 * Parameters:
 * - handle: uv_timer_t *
 * - repeat: uint64_t
 * Return Type: void
 */
mrb_value
mrb_UV_uv_timer_set_repeat(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value repeat;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &handle, &repeat);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvTimerT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvTimerT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uint64_t(repeat);

  /* Unbox param: handle */
  uv_timer_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_timer_t(handle));

  /* Unbox param: repeat */
  uint64_t native_repeat = TODO_mruby_unbox_uint64_t(repeat);

  /* Invocation */
  uv_timer_set_repeat(native_handle, native_repeat);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_timer_start */
/* sha: 36611bdfb373a27a01cb1997b6dc94d7b59a0dd033d22aa9c1ccb2cbfadefb1c */
#if BIND_uv_timer_start_FUNCTION
#define uv_timer_start_REQUIRED_ARGC 4
#define uv_timer_start_OPTIONAL_ARGC 0
/* uv_timer_start
 *
 * Parameters:
 * - handle: uv_timer_t *
 * - cb: uv_timer_cb
 * - timeout: uint64_t
 * - repeat: uint64_t
 * Return Type: int
 */
mrb_value
mrb_UV_uv_timer_start(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value cb;
  mrb_value timeout;
  mrb_value repeat;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &handle, &cb, &timeout, &repeat);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvTimerT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvTimerT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_timer_cb(cb);
  TODO_type_check_uint64_t(timeout);
  TODO_type_check_uint64_t(repeat);

  /* Unbox param: handle */
  uv_timer_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_timer_t(handle));

  /* Unbox param: cb */
  uv_timer_cb native_cb = TODO_mruby_unbox_uv_timer_cb(cb);

  /* Unbox param: timeout */
  uint64_t native_timeout = TODO_mruby_unbox_uint64_t(timeout);

  /* Unbox param: repeat */
  uint64_t native_repeat = TODO_mruby_unbox_uint64_t(repeat);

  /* Invocation */
  int native_return_value = uv_timer_start(native_handle, native_cb, native_timeout, native_repeat);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_timer_stop */
/* sha: 2057868715e6a172466f118820ef882b65b3781196a2def0920853762f9c50be */
#if BIND_uv_timer_stop_FUNCTION
#define uv_timer_stop_REQUIRED_ARGC 1
#define uv_timer_stop_OPTIONAL_ARGC 0
/* uv_timer_stop
 *
 * Parameters:
 * - handle: uv_timer_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_timer_stop(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvTimerT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvTimerT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_timer_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_timer_t(handle));

  /* Invocation */
  int native_return_value = uv_timer_stop(native_handle);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_try_write */
/* sha: 62e208a376e84fbb9a182778fb536edc6f4b11e8038de34e9f86221f2e25d4e2 */
#if BIND_uv_try_write_FUNCTION
#define uv_try_write_REQUIRED_ARGC 3
#define uv_try_write_OPTIONAL_ARGC 0
/* uv_try_write
 *
 * Parameters:
 * - handle: uv_stream_t *
 * - bufs: const int []
 * - nbufs: unsigned int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_try_write(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value bufs;
  mrb_int native_nbufs;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi", &handle, &bufs, &native_nbufs);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvStreamT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvStreamT expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_[](bufs);

  /* Unbox param: handle */
  uv_stream_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_stream_t(handle));

  /* Unbox param: bufs */
  const int [] native_bufs = TODO_mruby_unbox_int_[](bufs);

  /* Invocation */
  int native_return_value = uv_try_write(native_handle, native_bufs, native_nbufs);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_tty_get_winsize */
/* sha: 1aa1dc5212c2a26c25569889c13928eba10cdf430455befc15e51ba7fb76a234 */
#if BIND_uv_tty_get_winsize_FUNCTION
#define uv_tty_get_winsize_REQUIRED_ARGC 3
#define uv_tty_get_winsize_OPTIONAL_ARGC 0
/* uv_tty_get_winsize
 *
 * Parameters:
 * - arg1: uv_tty_t *
 * - width: int *
 * - height: int *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_tty_get_winsize(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value width;
  mrb_value height;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &width, &height);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvTtyT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvTtyT expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(width);
  TODO_type_check_int_PTR(height);

  /* Unbox param: arg1 */
  uv_tty_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_tty_t(arg1));

  /* Unbox param: width */
  int * native_width = TODO_mruby_unbox_int_PTR(width);

  /* Unbox param: height */
  int * native_height = TODO_mruby_unbox_int_PTR(height);

  /* Invocation */
  int native_return_value = uv_tty_get_winsize(native_arg1, native_width, native_height);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_tty_init */
/* sha: df995fe7e7d73c6536c014a0cbdf3e7b5c800283d36bcb0a1f2233d3ba2f901a */
#if BIND_uv_tty_init_FUNCTION
#define uv_tty_init_REQUIRED_ARGC 4
#define uv_tty_init_OPTIONAL_ARGC 0
/* uv_tty_init
 *
 * Parameters:
 * - arg1: uv_loop_t *
 * - arg2: uv_tty_t *
 * - fd: int
 * - readable: int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_tty_init(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_int native_fd;
  mrb_int native_readable;

  /* Fetch the args */
  mrb_get_args(mrb, "ooii", &arg1, &arg2, &native_fd, &native_readable);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, UvTtyT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvTtyT expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uv_loop_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_loop_t(arg1));

  /* Unbox param: arg2 */
  uv_tty_t * native_arg2 = (mrb_nil_p(arg2) ? NULL : mruby_unbox_uv_tty_t(arg2));

  /* Invocation */
  int native_return_value = uv_tty_init(native_arg1, native_arg2, native_fd, native_readable);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_tty_reset_mode */
/* sha: a0935e5cecba971a6c2dcf8898010de68f111c680bc1e45c3deca1f1bc6f09a5 */
#if BIND_uv_tty_reset_mode_FUNCTION
#define uv_tty_reset_mode_REQUIRED_ARGC 0
#define uv_tty_reset_mode_OPTIONAL_ARGC 0
/* uv_tty_reset_mode
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_UV_uv_tty_reset_mode(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int native_return_value = uv_tty_reset_mode();

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_tty_set_mode */
/* sha: 3629c4412c4c6a9a3147a27faaa3c43eb81e50f32d166bb5f69b53e8aa86ba3c */
#if BIND_uv_tty_set_mode_FUNCTION
#define uv_tty_set_mode_REQUIRED_ARGC 2
#define uv_tty_set_mode_OPTIONAL_ARGC 0
/* uv_tty_set_mode
 *
 * Parameters:
 * - arg1: uv_tty_t *
 * - mode: uv_tty_mode_t
 * Return Type: int
 */
mrb_value
mrb_UV_uv_tty_set_mode(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_mode;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_mode);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvTtyT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvTtyT expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uv_tty_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_tty_t(arg1));

  /* Invocation */
  int native_return_value = uv_tty_set_mode(native_arg1, native_mode);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_udp_bind */
/* sha: fb14945b1ab9b2a1a37a8823dad5f7b70a971d8b497aa9327ace2216ce36b25c */
#if BIND_uv_udp_bind_FUNCTION
#define uv_udp_bind_REQUIRED_ARGC 3
#define uv_udp_bind_OPTIONAL_ARGC 0
/* uv_udp_bind
 *
 * Parameters:
 * - handle: uv_udp_t *
 * - addr: const struct sockaddr *
 * - flags: unsigned int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_udp_bind(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value addr;
  mrb_int native_flags;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi", &handle, &addr, &native_flags);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvUdpT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvUdpT expected");
    return mrb_nil_value();
  }
  TODO_type_check_sockaddr_PTR(addr);

  /* Unbox param: handle */
  uv_udp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_udp_t(handle));

  /* Unbox param: addr */
  const struct sockaddr * native_addr = TODO_mruby_unbox_sockaddr_PTR(addr);

  /* Invocation */
  int native_return_value = uv_udp_bind(native_handle, native_addr, native_flags);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_udp_getsockname */
/* sha: 2e5a4330917e167dc4cb6765a32c143da2851e9c228354529fe8c9c9d2685664 */
#if BIND_uv_udp_getsockname_FUNCTION
#define uv_udp_getsockname_REQUIRED_ARGC 3
#define uv_udp_getsockname_OPTIONAL_ARGC 0
/* uv_udp_getsockname
 *
 * Parameters:
 * - handle: const uv_udp_t *
 * - name: struct sockaddr *
 * - namelen: int *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_udp_getsockname(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value name;
  mrb_value namelen;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &handle, &name, &namelen);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvUdpT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvUdpT expected");
    return mrb_nil_value();
  }
  TODO_type_check_sockaddr_PTR(name);
  TODO_type_check_int_PTR(namelen);

  /* Unbox param: handle */
  const uv_udp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_udp_t(handle));

  /* Unbox param: name */
  struct sockaddr * native_name = TODO_mruby_unbox_sockaddr_PTR(name);

  /* Unbox param: namelen */
  int * native_namelen = TODO_mruby_unbox_int_PTR(namelen);

  /* Invocation */
  int native_return_value = uv_udp_getsockname(native_handle, native_name, native_namelen);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_udp_init */
/* sha: 080fa6e0ee6ac61956c2a3f7999433d5fe750340980b8c5f8f9f1590da3d695d */
#if BIND_uv_udp_init_FUNCTION
#define uv_udp_init_REQUIRED_ARGC 2
#define uv_udp_init_OPTIONAL_ARGC 0
/* uv_udp_init
 *
 * Parameters:
 * - arg1: uv_loop_t *
 * - handle: uv_udp_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_udp_init(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, UvUdpT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvUdpT expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uv_loop_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_loop_t(arg1));

  /* Unbox param: handle */
  uv_udp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_udp_t(handle));

  /* Invocation */
  int native_return_value = uv_udp_init(native_arg1, native_handle);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_udp_init_ex */
/* sha: 362108c1df1f1123d9d91ede79afc6bb114f2ecf6fba40d41f2cbde6bf2e9738 */
#if BIND_uv_udp_init_ex_FUNCTION
#define uv_udp_init_ex_REQUIRED_ARGC 3
#define uv_udp_init_ex_OPTIONAL_ARGC 0
/* uv_udp_init_ex
 *
 * Parameters:
 * - arg1: uv_loop_t *
 * - handle: uv_udp_t *
 * - flags: unsigned int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_udp_init_ex(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value handle;
  mrb_int native_flags;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi", &arg1, &handle, &native_flags);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, UvUdpT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvUdpT expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uv_loop_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_loop_t(arg1));

  /* Unbox param: handle */
  uv_udp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_udp_t(handle));

  /* Invocation */
  int native_return_value = uv_udp_init_ex(native_arg1, native_handle, native_flags);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_udp_open */
/* sha: 0b2856712dff0b04dbd553d3833ade086c19c8862bfcb944314fb1176469c2e8 */
#if BIND_uv_udp_open_FUNCTION
#define uv_udp_open_REQUIRED_ARGC 2
#define uv_udp_open_OPTIONAL_ARGC 0
/* uv_udp_open
 *
 * Parameters:
 * - handle: uv_udp_t *
 * - sock: int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_udp_open(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_int native_sock;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &handle, &native_sock);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvUdpT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvUdpT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_udp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_udp_t(handle));

  /* Invocation */
  int native_return_value = uv_udp_open(native_handle, native_sock);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_udp_recv_start */
/* sha: 62e0583a10e6ac61d887d0ef553363debfcb4068088bf20663ad0d3147e8f8b8 */
#if BIND_uv_udp_recv_start_FUNCTION
#define uv_udp_recv_start_REQUIRED_ARGC 3
#define uv_udp_recv_start_OPTIONAL_ARGC 0
/* uv_udp_recv_start
 *
 * Parameters:
 * - handle: uv_udp_t *
 * - alloc_cb: uv_alloc_cb
 * - recv_cb: uv_udp_recv_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_udp_recv_start(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value alloc_cb;
  mrb_value recv_cb;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &handle, &alloc_cb, &recv_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvUdpT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvUdpT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_alloc_cb(alloc_cb);
  TODO_type_check_uv_udp_recv_cb(recv_cb);

  /* Unbox param: handle */
  uv_udp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_udp_t(handle));

  /* Unbox param: alloc_cb */
  uv_alloc_cb native_alloc_cb = TODO_mruby_unbox_uv_alloc_cb(alloc_cb);

  /* Unbox param: recv_cb */
  uv_udp_recv_cb native_recv_cb = TODO_mruby_unbox_uv_udp_recv_cb(recv_cb);

  /* Invocation */
  int native_return_value = uv_udp_recv_start(native_handle, native_alloc_cb, native_recv_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_udp_recv_stop */
/* sha: b8325bd01e8ab7ec3aefd8bc3ba0424f6e5ab576478d0c834dfc21cc48a2d2bd */
#if BIND_uv_udp_recv_stop_FUNCTION
#define uv_udp_recv_stop_REQUIRED_ARGC 1
#define uv_udp_recv_stop_OPTIONAL_ARGC 0
/* uv_udp_recv_stop
 *
 * Parameters:
 * - handle: uv_udp_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_udp_recv_stop(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvUdpT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvUdpT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_udp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_udp_t(handle));

  /* Invocation */
  int native_return_value = uv_udp_recv_stop(native_handle);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_udp_send */
/* sha: cb977d22912f5ff636777d95b1b3889fad459eb9f4d92ecf04d2def92758d401 */
#if BIND_uv_udp_send_FUNCTION
#define uv_udp_send_REQUIRED_ARGC 6
#define uv_udp_send_OPTIONAL_ARGC 0
/* uv_udp_send
 *
 * Parameters:
 * - req: uv_udp_send_t *
 * - handle: uv_udp_t *
 * - bufs: const int []
 * - nbufs: unsigned int
 * - addr: const struct sockaddr *
 * - send_cb: uv_udp_send_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_udp_send(mrb_state* mrb, mrb_value self) {
  mrb_value req;
  mrb_value handle;
  mrb_value bufs;
  mrb_int native_nbufs;
  mrb_value addr;
  mrb_value send_cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oooioo", &req, &handle, &bufs, &native_nbufs, &addr, &send_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, req, UvUdpSendT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvUdpSendT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, UvUdpT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvUdpT expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_[](bufs);
  TODO_type_check_sockaddr_PTR(addr);
  TODO_type_check_uv_udp_send_cb(send_cb);

  /* Unbox param: req */
  uv_udp_send_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_udp_send_t(req));

  /* Unbox param: handle */
  uv_udp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_udp_t(handle));

  /* Unbox param: bufs */
  const int [] native_bufs = TODO_mruby_unbox_int_[](bufs);

  /* Unbox param: addr */
  const struct sockaddr * native_addr = TODO_mruby_unbox_sockaddr_PTR(addr);

  /* Unbox param: send_cb */
  uv_udp_send_cb native_send_cb = TODO_mruby_unbox_uv_udp_send_cb(send_cb);

  /* Invocation */
  int native_return_value = uv_udp_send(native_req, native_handle, native_bufs, native_nbufs, native_addr, native_send_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_udp_set_broadcast */
/* sha: 100180e5688358fe8b7e5366f277420621a44e8ebd4eb9b2b23b102829546c8f */
#if BIND_uv_udp_set_broadcast_FUNCTION
#define uv_udp_set_broadcast_REQUIRED_ARGC 2
#define uv_udp_set_broadcast_OPTIONAL_ARGC 0
/* uv_udp_set_broadcast
 *
 * Parameters:
 * - handle: uv_udp_t *
 * - on: int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_udp_set_broadcast(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_int native_on;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &handle, &native_on);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvUdpT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvUdpT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_udp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_udp_t(handle));

  /* Invocation */
  int native_return_value = uv_udp_set_broadcast(native_handle, native_on);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_udp_set_membership */
/* sha: cd7b933cdb4bb429bb6d821c6d5ad8fc77038a9e6a65cda233e93014e72badd9 */
#if BIND_uv_udp_set_membership_FUNCTION
#define uv_udp_set_membership_REQUIRED_ARGC 4
#define uv_udp_set_membership_OPTIONAL_ARGC 0
/* uv_udp_set_membership
 *
 * Parameters:
 * - handle: uv_udp_t *
 * - multicast_addr: const char *
 * - interface_addr: const char *
 * - membership: uv_membership
 * Return Type: int
 */
mrb_value
mrb_UV_uv_udp_set_membership(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  char * native_multicast_addr = NULL;
  char * native_interface_addr = NULL;
  mrb_int native_membership;

  /* Fetch the args */
  mrb_get_args(mrb, "ozzi", &handle, &native_multicast_addr, &native_interface_addr, &native_membership);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvUdpT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvUdpT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_udp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_udp_t(handle));

  /* Invocation */
  int native_return_value = uv_udp_set_membership(native_handle, native_multicast_addr, native_interface_addr, native_membership);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_udp_set_multicast_interface */
/* sha: 44dfd9b3c8a1f43a7ed4fe007a361179f9afcbba0f5cf6a4cbec307352c58a70 */
#if BIND_uv_udp_set_multicast_interface_FUNCTION
#define uv_udp_set_multicast_interface_REQUIRED_ARGC 2
#define uv_udp_set_multicast_interface_OPTIONAL_ARGC 0
/* uv_udp_set_multicast_interface
 *
 * Parameters:
 * - handle: uv_udp_t *
 * - interface_addr: const char *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_udp_set_multicast_interface(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  char * native_interface_addr = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &handle, &native_interface_addr);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvUdpT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvUdpT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_udp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_udp_t(handle));

  /* Invocation */
  int native_return_value = uv_udp_set_multicast_interface(native_handle, native_interface_addr);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_udp_set_multicast_loop */
/* sha: d43c631c0c9ed00157ba63ad2e02b32c611b1ce872c2c59a98ce52f170b61720 */
#if BIND_uv_udp_set_multicast_loop_FUNCTION
#define uv_udp_set_multicast_loop_REQUIRED_ARGC 2
#define uv_udp_set_multicast_loop_OPTIONAL_ARGC 0
/* uv_udp_set_multicast_loop
 *
 * Parameters:
 * - handle: uv_udp_t *
 * - on: int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_udp_set_multicast_loop(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_int native_on;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &handle, &native_on);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvUdpT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvUdpT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_udp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_udp_t(handle));

  /* Invocation */
  int native_return_value = uv_udp_set_multicast_loop(native_handle, native_on);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_udp_set_multicast_ttl */
/* sha: ebfaf37f347b9492981f85e08086603e4eed176ac559f6fa1036ccb50e4828d8 */
#if BIND_uv_udp_set_multicast_ttl_FUNCTION
#define uv_udp_set_multicast_ttl_REQUIRED_ARGC 2
#define uv_udp_set_multicast_ttl_OPTIONAL_ARGC 0
/* uv_udp_set_multicast_ttl
 *
 * Parameters:
 * - handle: uv_udp_t *
 * - ttl: int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_udp_set_multicast_ttl(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_int native_ttl;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &handle, &native_ttl);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvUdpT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvUdpT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_udp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_udp_t(handle));

  /* Invocation */
  int native_return_value = uv_udp_set_multicast_ttl(native_handle, native_ttl);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_udp_set_ttl */
/* sha: 80d0538b29b944279f53d3d7d8aac2be88894c43a94d163e56bd2bbd03408a36 */
#if BIND_uv_udp_set_ttl_FUNCTION
#define uv_udp_set_ttl_REQUIRED_ARGC 2
#define uv_udp_set_ttl_OPTIONAL_ARGC 0
/* uv_udp_set_ttl
 *
 * Parameters:
 * - handle: uv_udp_t *
 * - ttl: int
 * Return Type: int
 */
mrb_value
mrb_UV_uv_udp_set_ttl(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_int native_ttl;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &handle, &native_ttl);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvUdpT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvUdpT expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_udp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_udp_t(handle));

  /* Invocation */
  int native_return_value = uv_udp_set_ttl(native_handle, native_ttl);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_udp_try_send */
/* sha: 7db60912b2d951e94c29b3e51465e4eabb5c3262b08e86c3194789d614f6db95 */
#if BIND_uv_udp_try_send_FUNCTION
#define uv_udp_try_send_REQUIRED_ARGC 4
#define uv_udp_try_send_OPTIONAL_ARGC 0
/* uv_udp_try_send
 *
 * Parameters:
 * - handle: uv_udp_t *
 * - bufs: const int []
 * - nbufs: unsigned int
 * - addr: const struct sockaddr *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_udp_try_send(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value bufs;
  mrb_int native_nbufs;
  mrb_value addr;

  /* Fetch the args */
  mrb_get_args(mrb, "ooio", &handle, &bufs, &native_nbufs, &addr);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvUdpT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvUdpT expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_[](bufs);
  TODO_type_check_sockaddr_PTR(addr);

  /* Unbox param: handle */
  uv_udp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_udp_t(handle));

  /* Unbox param: bufs */
  const int [] native_bufs = TODO_mruby_unbox_int_[](bufs);

  /* Unbox param: addr */
  const struct sockaddr * native_addr = TODO_mruby_unbox_sockaddr_PTR(addr);

  /* Invocation */
  int native_return_value = uv_udp_try_send(native_handle, native_bufs, native_nbufs, native_addr);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_unref */
/* sha: 5c1f8c93056635f4c500d3cb8cdac0eb8319e1d115b417668807df164685b353 */
#if BIND_uv_unref_FUNCTION
#define uv_unref_REQUIRED_ARGC 1
#define uv_unref_OPTIONAL_ARGC 0
/* uv_unref
 *
 * Parameters:
 * - arg1: uv_handle_t *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_unref(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvHandleT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvHandleT expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uv_handle_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_handle_t(arg1));

  /* Invocation */
  uv_unref(native_arg1);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_update_time */
/* sha: 109195512e815a196a1babcd4c6edcefb369195bc50cdecb1fc1298aa242ab6f */
#if BIND_uv_update_time_FUNCTION
#define uv_update_time_REQUIRED_ARGC 1
#define uv_update_time_OPTIONAL_ARGC 0
/* uv_update_time
 *
 * Parameters:
 * - arg1: uv_loop_t *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_update_time(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uv_loop_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_loop_t(arg1));

  /* Invocation */
  uv_update_time(native_arg1);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_uptime */
/* sha: 75293f37b5e8dd3ea9a8c1034acb9e9957ba781376a0153ff8d88b80a35de8d6 */
#if BIND_uv_uptime_FUNCTION
#define uv_uptime_REQUIRED_ARGC 1
#define uv_uptime_OPTIONAL_ARGC 0
/* uv_uptime
 *
 * Parameters:
 * - uptime: double *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_uptime(mrb_state* mrb, mrb_value self) {
  mrb_value uptime;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &uptime);

  /* Type checking */
  TODO_type_check_double_PTR(uptime);

  /* Unbox param: uptime */
  double * native_uptime = TODO_mruby_unbox_double_PTR(uptime);

  /* Invocation */
  int native_return_value = uv_uptime(native_uptime);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_version */
/* sha: ddb81311007da82081edca0d6c491b14a763ce7cc03dd341838dc24a7d206288 */
#if BIND_uv_version_FUNCTION
#define uv_version_REQUIRED_ARGC 0
#define uv_version_OPTIONAL_ARGC 0
/* uv_version
 *
 * Parameters: None
 * Return Type: unsigned int
 */
mrb_value
mrb_UV_uv_version(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  unsigned int native_return_value = uv_version();

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_version_string */
/* sha: f7527b23f981aa6e74c8c3f855c7bd29b7aef1d54996c97e808f891e8e082f2b */
#if BIND_uv_version_string_FUNCTION
#define uv_version_string_REQUIRED_ARGC 0
#define uv_version_string_OPTIONAL_ARGC 0
/* uv_version_string
 *
 * Parameters: None
 * Return Type: const char *
 */
mrb_value
mrb_UV_uv_version_string(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  const char * native_return_value = uv_version_string();

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_walk */
/* sha: 71dc31e2eba5c9203d4cc10837f9a251761e61393478983c061bed932e3c0dac */
#if BIND_uv_walk_FUNCTION
#define uv_walk_REQUIRED_ARGC 3
#define uv_walk_OPTIONAL_ARGC 0
/* uv_walk
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - walk_cb: uv_walk_cb
 * - arg: void *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_walk(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value walk_cb;
  mrb_value arg;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &loop, &walk_cb, &arg);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_walk_cb(walk_cb);
  TODO_type_check_void_PTR(arg);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: walk_cb */
  uv_walk_cb native_walk_cb = TODO_mruby_unbox_uv_walk_cb(walk_cb);

  /* Unbox param: arg */
  void * native_arg = TODO_mruby_unbox_void_PTR(arg);

  /* Invocation */
  uv_walk(native_loop, native_walk_cb, native_arg);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_write */
/* sha: 29ef72f573f1c07f497faff3494cbdf3ad494413a21f2d125be53892ce012e69 */
#if BIND_uv_write_FUNCTION
#define uv_write_REQUIRED_ARGC 5
#define uv_write_OPTIONAL_ARGC 0
/* uv_write
 *
 * Parameters:
 * - req: uv_write_t *
 * - handle: uv_stream_t *
 * - bufs: const int []
 * - nbufs: unsigned int
 * - cb: uv_write_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_write(mrb_state* mrb, mrb_value self) {
  mrb_value req;
  mrb_value handle;
  mrb_value bufs;
  mrb_int native_nbufs;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oooio", &req, &handle, &bufs, &native_nbufs, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, req, UvWriteT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvWriteT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, UvStreamT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvStreamT expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_[](bufs);
  TODO_type_check_uv_write_cb(cb);

  /* Unbox param: req */
  uv_write_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_write_t(req));

  /* Unbox param: handle */
  uv_stream_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_stream_t(handle));

  /* Unbox param: bufs */
  const int [] native_bufs = TODO_mruby_unbox_int_[](bufs);

  /* Unbox param: cb */
  uv_write_cb native_cb = TODO_mruby_unbox_uv_write_cb(cb);

  /* Invocation */
  int native_return_value = uv_write(native_req, native_handle, native_bufs, native_nbufs, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_write2 */
/* sha: 4da65331864ac28f8d2af597c9d84c350c0bf7ad7d03fdcaa686de8846426d0c */
#if BIND_uv_write2_FUNCTION
#define uv_write2_REQUIRED_ARGC 6
#define uv_write2_OPTIONAL_ARGC 0
/* uv_write2
 *
 * Parameters:
 * - req: uv_write_t *
 * - handle: uv_stream_t *
 * - bufs: const int []
 * - nbufs: unsigned int
 * - send_handle: uv_stream_t *
 * - cb: uv_write_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_write2(mrb_state* mrb, mrb_value self) {
  mrb_value req;
  mrb_value handle;
  mrb_value bufs;
  mrb_int native_nbufs;
  mrb_value send_handle;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "oooioo", &req, &handle, &bufs, &native_nbufs, &send_handle, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, req, UvWriteT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvWriteT expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, UvStreamT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvStreamT expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_[](bufs);
  if (!mrb_obj_is_kind_of(mrb, send_handle, UvStreamT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvStreamT expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_write_cb(cb);

  /* Unbox param: req */
  uv_write_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_write_t(req));

  /* Unbox param: handle */
  uv_stream_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_stream_t(handle));

  /* Unbox param: bufs */
  const int [] native_bufs = TODO_mruby_unbox_int_[](bufs);

  /* Unbox param: send_handle */
  uv_stream_t * native_send_handle = (mrb_nil_p(send_handle) ? NULL : mruby_unbox_uv_stream_t(send_handle));

  /* Unbox param: cb */
  uv_write_cb native_cb = TODO_mruby_unbox_uv_write_cb(cb);

  /* Invocation */
  int native_return_value = uv_write2(native_req, native_handle, native_bufs, native_nbufs, native_send_handle, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_mruby_libuv_gem_init(mrb_state* mrb) {
  struct RClass* UV_module = mrb_define_module(mrb, "UV");
  mruby_UV_define_macro_constants(mrb);

/* MRUBY_BINDING: class_initializations */
/* sha: 6d5ba94d909e3d03ef2adecd62128ff5d192abfa26fa85541ca01df446daf191 */
  /*
   * Initialize class bindings
   */
#if BIND_SockaddrIn_TYPE
  mrb_UV_SockaddrIn_init(mrb);
#endif
#if BIND_SockaddrIn6_TYPE
  mrb_UV_SockaddrIn6_init(mrb);
#endif
#if BIND_UvAsyncT_TYPE
  mrb_UV_UvAsyncT_init(mrb);
#endif
#if BIND_UvCheckT_TYPE
  mrb_UV_UvCheckT_init(mrb);
#endif
#if BIND_UvConnectT_TYPE
  mrb_UV_UvConnectT_init(mrb);
#endif
#if BIND_UvCpuInfoT_TYPE
  mrb_UV_UvCpuInfoT_init(mrb);
#endif
#if BIND_UvCpuTimesS_TYPE
  mrb_UV_UvCpuTimesS_init(mrb);
#endif
#if BIND_UvDirentT_TYPE
  mrb_UV_UvDirentT_init(mrb);
#endif
#if BIND_UvFsEventT_TYPE
  mrb_UV_UvFsEventT_init(mrb);
#endif
#if BIND_UvFsPollT_TYPE
  mrb_UV_UvFsPollT_init(mrb);
#endif
#if BIND_UvFsT_TYPE
  mrb_UV_UvFsT_init(mrb);
#endif
#if BIND_UvGetaddrinfoT_TYPE
  mrb_UV_UvGetaddrinfoT_init(mrb);
#endif
#if BIND_UvGetnameinfoT_TYPE
  mrb_UV_UvGetnameinfoT_init(mrb);
#endif
#if BIND_UvHandleT_TYPE
  mrb_UV_UvHandleT_init(mrb);
#endif
#if BIND_UvIdleT_TYPE
  mrb_UV_UvIdleT_init(mrb);
#endif
#if BIND_UvInterfaceAddressT_TYPE
  mrb_UV_UvInterfaceAddressT_init(mrb);
#endif
#if BIND_UvLoopT_TYPE
  mrb_UV_UvLoopT_init(mrb);
#endif
#if BIND_UvPipeT_TYPE
  mrb_UV_UvPipeT_init(mrb);
#endif
#if BIND_UvPollT_TYPE
  mrb_UV_UvPollT_init(mrb);
#endif
#if BIND_UvPrepareT_TYPE
  mrb_UV_UvPrepareT_init(mrb);
#endif
#if BIND_UvProcessOptionsS_TYPE
  mrb_UV_UvProcessOptionsS_init(mrb);
#endif
#if BIND_UvProcessT_TYPE
  mrb_UV_UvProcessT_init(mrb);
#endif
#if BIND_UvReqT_TYPE
  mrb_UV_UvReqT_init(mrb);
#endif
#if BIND_UvRusageT_TYPE
  mrb_UV_UvRusageT_init(mrb);
#endif
#if BIND_UvShutdownT_TYPE
  mrb_UV_UvShutdownT_init(mrb);
#endif
#if BIND_UvSignalT_TYPE
  mrb_UV_UvSignalT_init(mrb);
#endif
#if BIND_UvStatT_TYPE
  mrb_UV_UvStatT_init(mrb);
#endif
#if BIND_UvStdioContainerS_TYPE
  mrb_UV_UvStdioContainerS_init(mrb);
#endif
#if BIND_UvStreamT_TYPE
  mrb_UV_UvStreamT_init(mrb);
#endif
#if BIND_UvTcpT_TYPE
  mrb_UV_UvTcpT_init(mrb);
#endif
#if BIND_UvTimerT_TYPE
  mrb_UV_UvTimerT_init(mrb);
#endif
#if BIND_UvTimespecT_TYPE
  mrb_UV_UvTimespecT_init(mrb);
#endif
#if BIND_UvTimevalT_TYPE
  mrb_UV_UvTimevalT_init(mrb);
#endif
#if BIND_UvTtyT_TYPE
  mrb_UV_UvTtyT_init(mrb);
#endif
#if BIND_UvUdpSendT_TYPE
  mrb_UV_UvUdpSendT_init(mrb);
#endif
#if BIND_UvUdpT_TYPE
  mrb_UV_UvUdpT_init(mrb);
#endif
#if BIND_UvWorkT_TYPE
  mrb_UV_UvWorkT_init(mrb);
#endif
#if BIND_UvWriteT_TYPE
  mrb_UV_UvWriteT_init(mrb);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: global_function_definitions */
/* sha: ec44b35785816895773446a0484e39a198290bd55b4ec128a48b82f2bc1348c7 */
  /*
   * Global Functions
   */
#if BIND_uv_accept_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_accept", mrb_UV_uv_accept, MRB_ARGS_ARG(uv_accept_REQUIRED_ARGC, uv_accept_OPTIONAL_ARGC));
#endif
#if BIND_uv_async_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_async_init", mrb_UV_uv_async_init, MRB_ARGS_ARG(uv_async_init_REQUIRED_ARGC, uv_async_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_async_send_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_async_send", mrb_UV_uv_async_send, MRB_ARGS_ARG(uv_async_send_REQUIRED_ARGC, uv_async_send_OPTIONAL_ARGC));
#endif
#if BIND_uv_backend_fd_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_backend_fd", mrb_UV_uv_backend_fd, MRB_ARGS_ARG(uv_backend_fd_REQUIRED_ARGC, uv_backend_fd_OPTIONAL_ARGC));
#endif
#if BIND_uv_backend_timeout_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_backend_timeout", mrb_UV_uv_backend_timeout, MRB_ARGS_ARG(uv_backend_timeout_REQUIRED_ARGC, uv_backend_timeout_OPTIONAL_ARGC));
#endif
#if BIND_uv_barrier_destroy_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_barrier_destroy", mrb_UV_uv_barrier_destroy, MRB_ARGS_ARG(uv_barrier_destroy_REQUIRED_ARGC, uv_barrier_destroy_OPTIONAL_ARGC));
#endif
#if BIND_uv_barrier_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_barrier_init", mrb_UV_uv_barrier_init, MRB_ARGS_ARG(uv_barrier_init_REQUIRED_ARGC, uv_barrier_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_barrier_wait_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_barrier_wait", mrb_UV_uv_barrier_wait, MRB_ARGS_ARG(uv_barrier_wait_REQUIRED_ARGC, uv_barrier_wait_OPTIONAL_ARGC));
#endif
#if BIND_uv_buf_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_buf_init", mrb_UV_uv_buf_init, MRB_ARGS_ARG(uv_buf_init_REQUIRED_ARGC, uv_buf_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_cancel_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_cancel", mrb_UV_uv_cancel, MRB_ARGS_ARG(uv_cancel_REQUIRED_ARGC, uv_cancel_OPTIONAL_ARGC));
#endif
#if BIND_uv_chdir_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_chdir", mrb_UV_uv_chdir, MRB_ARGS_ARG(uv_chdir_REQUIRED_ARGC, uv_chdir_OPTIONAL_ARGC));
#endif
#if BIND_uv_check_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_check_init", mrb_UV_uv_check_init, MRB_ARGS_ARG(uv_check_init_REQUIRED_ARGC, uv_check_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_check_start_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_check_start", mrb_UV_uv_check_start, MRB_ARGS_ARG(uv_check_start_REQUIRED_ARGC, uv_check_start_OPTIONAL_ARGC));
#endif
#if BIND_uv_check_stop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_check_stop", mrb_UV_uv_check_stop, MRB_ARGS_ARG(uv_check_stop_REQUIRED_ARGC, uv_check_stop_OPTIONAL_ARGC));
#endif
#if BIND_uv_close_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_close", mrb_UV_uv_close, MRB_ARGS_ARG(uv_close_REQUIRED_ARGC, uv_close_OPTIONAL_ARGC));
#endif
#if BIND_uv_cond_broadcast_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_cond_broadcast", mrb_UV_uv_cond_broadcast, MRB_ARGS_ARG(uv_cond_broadcast_REQUIRED_ARGC, uv_cond_broadcast_OPTIONAL_ARGC));
#endif
#if BIND_uv_cond_destroy_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_cond_destroy", mrb_UV_uv_cond_destroy, MRB_ARGS_ARG(uv_cond_destroy_REQUIRED_ARGC, uv_cond_destroy_OPTIONAL_ARGC));
#endif
#if BIND_uv_cond_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_cond_init", mrb_UV_uv_cond_init, MRB_ARGS_ARG(uv_cond_init_REQUIRED_ARGC, uv_cond_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_cond_signal_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_cond_signal", mrb_UV_uv_cond_signal, MRB_ARGS_ARG(uv_cond_signal_REQUIRED_ARGC, uv_cond_signal_OPTIONAL_ARGC));
#endif
#if BIND_uv_cond_timedwait_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_cond_timedwait", mrb_UV_uv_cond_timedwait, MRB_ARGS_ARG(uv_cond_timedwait_REQUIRED_ARGC, uv_cond_timedwait_OPTIONAL_ARGC));
#endif
#if BIND_uv_cond_wait_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_cond_wait", mrb_UV_uv_cond_wait, MRB_ARGS_ARG(uv_cond_wait_REQUIRED_ARGC, uv_cond_wait_OPTIONAL_ARGC));
#endif
#if BIND_uv_cpu_info_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_cpu_info", mrb_UV_uv_cpu_info, MRB_ARGS_ARG(uv_cpu_info_REQUIRED_ARGC, uv_cpu_info_OPTIONAL_ARGC));
#endif
#if BIND_uv_cwd_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_cwd", mrb_UV_uv_cwd, MRB_ARGS_ARG(uv_cwd_REQUIRED_ARGC, uv_cwd_OPTIONAL_ARGC));
#endif
#if BIND_uv_default_loop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_default_loop", mrb_UV_uv_default_loop, MRB_ARGS_ARG(uv_default_loop_REQUIRED_ARGC, uv_default_loop_OPTIONAL_ARGC));
#endif
#if BIND_uv_disable_stdio_inheritance_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_disable_stdio_inheritance", mrb_UV_uv_disable_stdio_inheritance, MRB_ARGS_ARG(uv_disable_stdio_inheritance_REQUIRED_ARGC, uv_disable_stdio_inheritance_OPTIONAL_ARGC));
#endif
#if BIND_uv_dlclose_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_dlclose", mrb_UV_uv_dlclose, MRB_ARGS_ARG(uv_dlclose_REQUIRED_ARGC, uv_dlclose_OPTIONAL_ARGC));
#endif
#if BIND_uv_dlerror_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_dlerror", mrb_UV_uv_dlerror, MRB_ARGS_ARG(uv_dlerror_REQUIRED_ARGC, uv_dlerror_OPTIONAL_ARGC));
#endif
#if BIND_uv_dlopen_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_dlopen", mrb_UV_uv_dlopen, MRB_ARGS_ARG(uv_dlopen_REQUIRED_ARGC, uv_dlopen_OPTIONAL_ARGC));
#endif
#if BIND_uv_dlsym_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_dlsym", mrb_UV_uv_dlsym, MRB_ARGS_ARG(uv_dlsym_REQUIRED_ARGC, uv_dlsym_OPTIONAL_ARGC));
#endif
#if BIND_uv_err_name_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_err_name", mrb_UV_uv_err_name, MRB_ARGS_ARG(uv_err_name_REQUIRED_ARGC, uv_err_name_OPTIONAL_ARGC));
#endif
#if BIND_uv_exepath_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_exepath", mrb_UV_uv_exepath, MRB_ARGS_ARG(uv_exepath_REQUIRED_ARGC, uv_exepath_OPTIONAL_ARGC));
#endif
#if BIND_uv_fileno_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fileno", mrb_UV_uv_fileno, MRB_ARGS_ARG(uv_fileno_REQUIRED_ARGC, uv_fileno_OPTIONAL_ARGC));
#endif
#if BIND_uv_free_cpu_info_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_free_cpu_info", mrb_UV_uv_free_cpu_info, MRB_ARGS_ARG(uv_free_cpu_info_REQUIRED_ARGC, uv_free_cpu_info_OPTIONAL_ARGC));
#endif
#if BIND_uv_free_interface_addresses_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_free_interface_addresses", mrb_UV_uv_free_interface_addresses, MRB_ARGS_ARG(uv_free_interface_addresses_REQUIRED_ARGC, uv_free_interface_addresses_OPTIONAL_ARGC));
#endif
#if BIND_uv_freeaddrinfo_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_freeaddrinfo", mrb_UV_uv_freeaddrinfo, MRB_ARGS_ARG(uv_freeaddrinfo_REQUIRED_ARGC, uv_freeaddrinfo_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_access_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_access", mrb_UV_uv_fs_access, MRB_ARGS_ARG(uv_fs_access_REQUIRED_ARGC, uv_fs_access_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_chmod_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_chmod", mrb_UV_uv_fs_chmod, MRB_ARGS_ARG(uv_fs_chmod_REQUIRED_ARGC, uv_fs_chmod_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_chown_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_chown", mrb_UV_uv_fs_chown, MRB_ARGS_ARG(uv_fs_chown_REQUIRED_ARGC, uv_fs_chown_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_close_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_close", mrb_UV_uv_fs_close, MRB_ARGS_ARG(uv_fs_close_REQUIRED_ARGC, uv_fs_close_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_event_getpath_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_event_getpath", mrb_UV_uv_fs_event_getpath, MRB_ARGS_ARG(uv_fs_event_getpath_REQUIRED_ARGC, uv_fs_event_getpath_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_event_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_event_init", mrb_UV_uv_fs_event_init, MRB_ARGS_ARG(uv_fs_event_init_REQUIRED_ARGC, uv_fs_event_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_event_start_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_event_start", mrb_UV_uv_fs_event_start, MRB_ARGS_ARG(uv_fs_event_start_REQUIRED_ARGC, uv_fs_event_start_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_event_stop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_event_stop", mrb_UV_uv_fs_event_stop, MRB_ARGS_ARG(uv_fs_event_stop_REQUIRED_ARGC, uv_fs_event_stop_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_fchmod_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_fchmod", mrb_UV_uv_fs_fchmod, MRB_ARGS_ARG(uv_fs_fchmod_REQUIRED_ARGC, uv_fs_fchmod_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_fchown_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_fchown", mrb_UV_uv_fs_fchown, MRB_ARGS_ARG(uv_fs_fchown_REQUIRED_ARGC, uv_fs_fchown_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_fdatasync_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_fdatasync", mrb_UV_uv_fs_fdatasync, MRB_ARGS_ARG(uv_fs_fdatasync_REQUIRED_ARGC, uv_fs_fdatasync_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_fstat_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_fstat", mrb_UV_uv_fs_fstat, MRB_ARGS_ARG(uv_fs_fstat_REQUIRED_ARGC, uv_fs_fstat_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_fsync_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_fsync", mrb_UV_uv_fs_fsync, MRB_ARGS_ARG(uv_fs_fsync_REQUIRED_ARGC, uv_fs_fsync_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_ftruncate_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_ftruncate", mrb_UV_uv_fs_ftruncate, MRB_ARGS_ARG(uv_fs_ftruncate_REQUIRED_ARGC, uv_fs_ftruncate_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_futime_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_futime", mrb_UV_uv_fs_futime, MRB_ARGS_ARG(uv_fs_futime_REQUIRED_ARGC, uv_fs_futime_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_link_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_link", mrb_UV_uv_fs_link, MRB_ARGS_ARG(uv_fs_link_REQUIRED_ARGC, uv_fs_link_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_lstat_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_lstat", mrb_UV_uv_fs_lstat, MRB_ARGS_ARG(uv_fs_lstat_REQUIRED_ARGC, uv_fs_lstat_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_mkdir_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_mkdir", mrb_UV_uv_fs_mkdir, MRB_ARGS_ARG(uv_fs_mkdir_REQUIRED_ARGC, uv_fs_mkdir_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_mkdtemp_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_mkdtemp", mrb_UV_uv_fs_mkdtemp, MRB_ARGS_ARG(uv_fs_mkdtemp_REQUIRED_ARGC, uv_fs_mkdtemp_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_open_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_open", mrb_UV_uv_fs_open, MRB_ARGS_ARG(uv_fs_open_REQUIRED_ARGC, uv_fs_open_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_poll_getpath_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_poll_getpath", mrb_UV_uv_fs_poll_getpath, MRB_ARGS_ARG(uv_fs_poll_getpath_REQUIRED_ARGC, uv_fs_poll_getpath_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_poll_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_poll_init", mrb_UV_uv_fs_poll_init, MRB_ARGS_ARG(uv_fs_poll_init_REQUIRED_ARGC, uv_fs_poll_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_poll_start_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_poll_start", mrb_UV_uv_fs_poll_start, MRB_ARGS_ARG(uv_fs_poll_start_REQUIRED_ARGC, uv_fs_poll_start_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_poll_stop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_poll_stop", mrb_UV_uv_fs_poll_stop, MRB_ARGS_ARG(uv_fs_poll_stop_REQUIRED_ARGC, uv_fs_poll_stop_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_read_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_read", mrb_UV_uv_fs_read, MRB_ARGS_ARG(uv_fs_read_REQUIRED_ARGC, uv_fs_read_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_readlink_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_readlink", mrb_UV_uv_fs_readlink, MRB_ARGS_ARG(uv_fs_readlink_REQUIRED_ARGC, uv_fs_readlink_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_realpath_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_realpath", mrb_UV_uv_fs_realpath, MRB_ARGS_ARG(uv_fs_realpath_REQUIRED_ARGC, uv_fs_realpath_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_rename_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_rename", mrb_UV_uv_fs_rename, MRB_ARGS_ARG(uv_fs_rename_REQUIRED_ARGC, uv_fs_rename_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_req_cleanup_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_req_cleanup", mrb_UV_uv_fs_req_cleanup, MRB_ARGS_ARG(uv_fs_req_cleanup_REQUIRED_ARGC, uv_fs_req_cleanup_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_rmdir_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_rmdir", mrb_UV_uv_fs_rmdir, MRB_ARGS_ARG(uv_fs_rmdir_REQUIRED_ARGC, uv_fs_rmdir_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_scandir_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_scandir", mrb_UV_uv_fs_scandir, MRB_ARGS_ARG(uv_fs_scandir_REQUIRED_ARGC, uv_fs_scandir_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_scandir_next_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_scandir_next", mrb_UV_uv_fs_scandir_next, MRB_ARGS_ARG(uv_fs_scandir_next_REQUIRED_ARGC, uv_fs_scandir_next_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_sendfile_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_sendfile", mrb_UV_uv_fs_sendfile, MRB_ARGS_ARG(uv_fs_sendfile_REQUIRED_ARGC, uv_fs_sendfile_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_stat_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_stat", mrb_UV_uv_fs_stat, MRB_ARGS_ARG(uv_fs_stat_REQUIRED_ARGC, uv_fs_stat_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_symlink_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_symlink", mrb_UV_uv_fs_symlink, MRB_ARGS_ARG(uv_fs_symlink_REQUIRED_ARGC, uv_fs_symlink_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_unlink_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_unlink", mrb_UV_uv_fs_unlink, MRB_ARGS_ARG(uv_fs_unlink_REQUIRED_ARGC, uv_fs_unlink_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_utime_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_utime", mrb_UV_uv_fs_utime, MRB_ARGS_ARG(uv_fs_utime_REQUIRED_ARGC, uv_fs_utime_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_write_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_fs_write", mrb_UV_uv_fs_write, MRB_ARGS_ARG(uv_fs_write_REQUIRED_ARGC, uv_fs_write_OPTIONAL_ARGC));
#endif
#if BIND_uv_get_free_memory_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_get_free_memory", mrb_UV_uv_get_free_memory, MRB_ARGS_ARG(uv_get_free_memory_REQUIRED_ARGC, uv_get_free_memory_OPTIONAL_ARGC));
#endif
#if BIND_uv_get_process_title_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_get_process_title", mrb_UV_uv_get_process_title, MRB_ARGS_ARG(uv_get_process_title_REQUIRED_ARGC, uv_get_process_title_OPTIONAL_ARGC));
#endif
#if BIND_uv_get_total_memory_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_get_total_memory", mrb_UV_uv_get_total_memory, MRB_ARGS_ARG(uv_get_total_memory_REQUIRED_ARGC, uv_get_total_memory_OPTIONAL_ARGC));
#endif
#if BIND_uv_getaddrinfo_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_getaddrinfo", mrb_UV_uv_getaddrinfo, MRB_ARGS_ARG(uv_getaddrinfo_REQUIRED_ARGC, uv_getaddrinfo_OPTIONAL_ARGC));
#endif
#if BIND_uv_getnameinfo_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_getnameinfo", mrb_UV_uv_getnameinfo, MRB_ARGS_ARG(uv_getnameinfo_REQUIRED_ARGC, uv_getnameinfo_OPTIONAL_ARGC));
#endif
#if BIND_uv_getrusage_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_getrusage", mrb_UV_uv_getrusage, MRB_ARGS_ARG(uv_getrusage_REQUIRED_ARGC, uv_getrusage_OPTIONAL_ARGC));
#endif
#if BIND_uv_guess_handle_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_guess_handle", mrb_UV_uv_guess_handle, MRB_ARGS_ARG(uv_guess_handle_REQUIRED_ARGC, uv_guess_handle_OPTIONAL_ARGC));
#endif
#if BIND_uv_handle_size_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_handle_size", mrb_UV_uv_handle_size, MRB_ARGS_ARG(uv_handle_size_REQUIRED_ARGC, uv_handle_size_OPTIONAL_ARGC));
#endif
#if BIND_uv_has_ref_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_has_ref", mrb_UV_uv_has_ref, MRB_ARGS_ARG(uv_has_ref_REQUIRED_ARGC, uv_has_ref_OPTIONAL_ARGC));
#endif
#if BIND_uv_hrtime_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_hrtime", mrb_UV_uv_hrtime, MRB_ARGS_ARG(uv_hrtime_REQUIRED_ARGC, uv_hrtime_OPTIONAL_ARGC));
#endif
#if BIND_uv_idle_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_idle_init", mrb_UV_uv_idle_init, MRB_ARGS_ARG(uv_idle_init_REQUIRED_ARGC, uv_idle_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_idle_start_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_idle_start", mrb_UV_uv_idle_start, MRB_ARGS_ARG(uv_idle_start_REQUIRED_ARGC, uv_idle_start_OPTIONAL_ARGC));
#endif
#if BIND_uv_idle_stop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_idle_stop", mrb_UV_uv_idle_stop, MRB_ARGS_ARG(uv_idle_stop_REQUIRED_ARGC, uv_idle_stop_OPTIONAL_ARGC));
#endif
#if BIND_uv_inet_ntop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_inet_ntop", mrb_UV_uv_inet_ntop, MRB_ARGS_ARG(uv_inet_ntop_REQUIRED_ARGC, uv_inet_ntop_OPTIONAL_ARGC));
#endif
#if BIND_uv_inet_pton_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_inet_pton", mrb_UV_uv_inet_pton, MRB_ARGS_ARG(uv_inet_pton_REQUIRED_ARGC, uv_inet_pton_OPTIONAL_ARGC));
#endif
#if BIND_uv_interface_addresses_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_interface_addresses", mrb_UV_uv_interface_addresses, MRB_ARGS_ARG(uv_interface_addresses_REQUIRED_ARGC, uv_interface_addresses_OPTIONAL_ARGC));
#endif
#if BIND_uv_ip4_addr_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_ip4_addr", mrb_UV_uv_ip4_addr, MRB_ARGS_ARG(uv_ip4_addr_REQUIRED_ARGC, uv_ip4_addr_OPTIONAL_ARGC));
#endif
#if BIND_uv_ip4_name_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_ip4_name", mrb_UV_uv_ip4_name, MRB_ARGS_ARG(uv_ip4_name_REQUIRED_ARGC, uv_ip4_name_OPTIONAL_ARGC));
#endif
#if BIND_uv_ip6_addr_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_ip6_addr", mrb_UV_uv_ip6_addr, MRB_ARGS_ARG(uv_ip6_addr_REQUIRED_ARGC, uv_ip6_addr_OPTIONAL_ARGC));
#endif
#if BIND_uv_ip6_name_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_ip6_name", mrb_UV_uv_ip6_name, MRB_ARGS_ARG(uv_ip6_name_REQUIRED_ARGC, uv_ip6_name_OPTIONAL_ARGC));
#endif
#if BIND_uv_is_active_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_is_active", mrb_UV_uv_is_active, MRB_ARGS_ARG(uv_is_active_REQUIRED_ARGC, uv_is_active_OPTIONAL_ARGC));
#endif
#if BIND_uv_is_closing_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_is_closing", mrb_UV_uv_is_closing, MRB_ARGS_ARG(uv_is_closing_REQUIRED_ARGC, uv_is_closing_OPTIONAL_ARGC));
#endif
#if BIND_uv_is_readable_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_is_readable", mrb_UV_uv_is_readable, MRB_ARGS_ARG(uv_is_readable_REQUIRED_ARGC, uv_is_readable_OPTIONAL_ARGC));
#endif
#if BIND_uv_is_writable_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_is_writable", mrb_UV_uv_is_writable, MRB_ARGS_ARG(uv_is_writable_REQUIRED_ARGC, uv_is_writable_OPTIONAL_ARGC));
#endif
#if BIND_uv_key_create_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_key_create", mrb_UV_uv_key_create, MRB_ARGS_ARG(uv_key_create_REQUIRED_ARGC, uv_key_create_OPTIONAL_ARGC));
#endif
#if BIND_uv_key_delete_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_key_delete", mrb_UV_uv_key_delete, MRB_ARGS_ARG(uv_key_delete_REQUIRED_ARGC, uv_key_delete_OPTIONAL_ARGC));
#endif
#if BIND_uv_key_get_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_key_get", mrb_UV_uv_key_get, MRB_ARGS_ARG(uv_key_get_REQUIRED_ARGC, uv_key_get_OPTIONAL_ARGC));
#endif
#if BIND_uv_key_set_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_key_set", mrb_UV_uv_key_set, MRB_ARGS_ARG(uv_key_set_REQUIRED_ARGC, uv_key_set_OPTIONAL_ARGC));
#endif
#if BIND_uv_kill_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_kill", mrb_UV_uv_kill, MRB_ARGS_ARG(uv_kill_REQUIRED_ARGC, uv_kill_OPTIONAL_ARGC));
#endif
#if BIND_uv_listen_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_listen", mrb_UV_uv_listen, MRB_ARGS_ARG(uv_listen_REQUIRED_ARGC, uv_listen_OPTIONAL_ARGC));
#endif
#if BIND_uv_loadavg_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_loadavg", mrb_UV_uv_loadavg, MRB_ARGS_ARG(uv_loadavg_REQUIRED_ARGC, uv_loadavg_OPTIONAL_ARGC));
#endif
#if BIND_uv_loop_alive_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_loop_alive", mrb_UV_uv_loop_alive, MRB_ARGS_ARG(uv_loop_alive_REQUIRED_ARGC, uv_loop_alive_OPTIONAL_ARGC));
#endif
#if BIND_uv_loop_close_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_loop_close", mrb_UV_uv_loop_close, MRB_ARGS_ARG(uv_loop_close_REQUIRED_ARGC, uv_loop_close_OPTIONAL_ARGC));
#endif
#if BIND_uv_loop_configure_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_loop_configure", mrb_UV_uv_loop_configure, MRB_ARGS_ARG(uv_loop_configure_REQUIRED_ARGC, uv_loop_configure_OPTIONAL_ARGC));
#endif
#if BIND_uv_loop_delete_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_loop_delete", mrb_UV_uv_loop_delete, MRB_ARGS_ARG(uv_loop_delete_REQUIRED_ARGC, uv_loop_delete_OPTIONAL_ARGC));
#endif
#if BIND_uv_loop_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_loop_init", mrb_UV_uv_loop_init, MRB_ARGS_ARG(uv_loop_init_REQUIRED_ARGC, uv_loop_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_loop_new_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_loop_new", mrb_UV_uv_loop_new, MRB_ARGS_ARG(uv_loop_new_REQUIRED_ARGC, uv_loop_new_OPTIONAL_ARGC));
#endif
#if BIND_uv_loop_size_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_loop_size", mrb_UV_uv_loop_size, MRB_ARGS_ARG(uv_loop_size_REQUIRED_ARGC, uv_loop_size_OPTIONAL_ARGC));
#endif
#if BIND_uv_mutex_destroy_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_mutex_destroy", mrb_UV_uv_mutex_destroy, MRB_ARGS_ARG(uv_mutex_destroy_REQUIRED_ARGC, uv_mutex_destroy_OPTIONAL_ARGC));
#endif
#if BIND_uv_mutex_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_mutex_init", mrb_UV_uv_mutex_init, MRB_ARGS_ARG(uv_mutex_init_REQUIRED_ARGC, uv_mutex_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_mutex_lock_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_mutex_lock", mrb_UV_uv_mutex_lock, MRB_ARGS_ARG(uv_mutex_lock_REQUIRED_ARGC, uv_mutex_lock_OPTIONAL_ARGC));
#endif
#if BIND_uv_mutex_trylock_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_mutex_trylock", mrb_UV_uv_mutex_trylock, MRB_ARGS_ARG(uv_mutex_trylock_REQUIRED_ARGC, uv_mutex_trylock_OPTIONAL_ARGC));
#endif
#if BIND_uv_mutex_unlock_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_mutex_unlock", mrb_UV_uv_mutex_unlock, MRB_ARGS_ARG(uv_mutex_unlock_REQUIRED_ARGC, uv_mutex_unlock_OPTIONAL_ARGC));
#endif
#if BIND_uv_now_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_now", mrb_UV_uv_now, MRB_ARGS_ARG(uv_now_REQUIRED_ARGC, uv_now_OPTIONAL_ARGC));
#endif
#if BIND_uv_once_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_once", mrb_UV_uv_once, MRB_ARGS_ARG(uv_once_REQUIRED_ARGC, uv_once_OPTIONAL_ARGC));
#endif
#if BIND_uv_os_homedir_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_os_homedir", mrb_UV_uv_os_homedir, MRB_ARGS_ARG(uv_os_homedir_REQUIRED_ARGC, uv_os_homedir_OPTIONAL_ARGC));
#endif
#if BIND_uv_pipe_bind_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_pipe_bind", mrb_UV_uv_pipe_bind, MRB_ARGS_ARG(uv_pipe_bind_REQUIRED_ARGC, uv_pipe_bind_OPTIONAL_ARGC));
#endif
#if BIND_uv_pipe_connect_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_pipe_connect", mrb_UV_uv_pipe_connect, MRB_ARGS_ARG(uv_pipe_connect_REQUIRED_ARGC, uv_pipe_connect_OPTIONAL_ARGC));
#endif
#if BIND_uv_pipe_getpeername_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_pipe_getpeername", mrb_UV_uv_pipe_getpeername, MRB_ARGS_ARG(uv_pipe_getpeername_REQUIRED_ARGC, uv_pipe_getpeername_OPTIONAL_ARGC));
#endif
#if BIND_uv_pipe_getsockname_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_pipe_getsockname", mrb_UV_uv_pipe_getsockname, MRB_ARGS_ARG(uv_pipe_getsockname_REQUIRED_ARGC, uv_pipe_getsockname_OPTIONAL_ARGC));
#endif
#if BIND_uv_pipe_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_pipe_init", mrb_UV_uv_pipe_init, MRB_ARGS_ARG(uv_pipe_init_REQUIRED_ARGC, uv_pipe_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_pipe_open_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_pipe_open", mrb_UV_uv_pipe_open, MRB_ARGS_ARG(uv_pipe_open_REQUIRED_ARGC, uv_pipe_open_OPTIONAL_ARGC));
#endif
#if BIND_uv_pipe_pending_count_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_pipe_pending_count", mrb_UV_uv_pipe_pending_count, MRB_ARGS_ARG(uv_pipe_pending_count_REQUIRED_ARGC, uv_pipe_pending_count_OPTIONAL_ARGC));
#endif
#if BIND_uv_pipe_pending_instances_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_pipe_pending_instances", mrb_UV_uv_pipe_pending_instances, MRB_ARGS_ARG(uv_pipe_pending_instances_REQUIRED_ARGC, uv_pipe_pending_instances_OPTIONAL_ARGC));
#endif
#if BIND_uv_pipe_pending_type_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_pipe_pending_type", mrb_UV_uv_pipe_pending_type, MRB_ARGS_ARG(uv_pipe_pending_type_REQUIRED_ARGC, uv_pipe_pending_type_OPTIONAL_ARGC));
#endif
#if BIND_uv_poll_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_poll_init", mrb_UV_uv_poll_init, MRB_ARGS_ARG(uv_poll_init_REQUIRED_ARGC, uv_poll_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_poll_init_socket_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_poll_init_socket", mrb_UV_uv_poll_init_socket, MRB_ARGS_ARG(uv_poll_init_socket_REQUIRED_ARGC, uv_poll_init_socket_OPTIONAL_ARGC));
#endif
#if BIND_uv_poll_start_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_poll_start", mrb_UV_uv_poll_start, MRB_ARGS_ARG(uv_poll_start_REQUIRED_ARGC, uv_poll_start_OPTIONAL_ARGC));
#endif
#if BIND_uv_poll_stop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_poll_stop", mrb_UV_uv_poll_stop, MRB_ARGS_ARG(uv_poll_stop_REQUIRED_ARGC, uv_poll_stop_OPTIONAL_ARGC));
#endif
#if BIND_uv_prepare_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_prepare_init", mrb_UV_uv_prepare_init, MRB_ARGS_ARG(uv_prepare_init_REQUIRED_ARGC, uv_prepare_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_prepare_start_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_prepare_start", mrb_UV_uv_prepare_start, MRB_ARGS_ARG(uv_prepare_start_REQUIRED_ARGC, uv_prepare_start_OPTIONAL_ARGC));
#endif
#if BIND_uv_prepare_stop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_prepare_stop", mrb_UV_uv_prepare_stop, MRB_ARGS_ARG(uv_prepare_stop_REQUIRED_ARGC, uv_prepare_stop_OPTIONAL_ARGC));
#endif
#if BIND_uv_print_active_handles_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_print_active_handles", mrb_UV_uv_print_active_handles, MRB_ARGS_ARG(uv_print_active_handles_REQUIRED_ARGC, uv_print_active_handles_OPTIONAL_ARGC));
#endif
#if BIND_uv_print_all_handles_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_print_all_handles", mrb_UV_uv_print_all_handles, MRB_ARGS_ARG(uv_print_all_handles_REQUIRED_ARGC, uv_print_all_handles_OPTIONAL_ARGC));
#endif
#if BIND_uv_process_kill_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_process_kill", mrb_UV_uv_process_kill, MRB_ARGS_ARG(uv_process_kill_REQUIRED_ARGC, uv_process_kill_OPTIONAL_ARGC));
#endif
#if BIND_uv_queue_work_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_queue_work", mrb_UV_uv_queue_work, MRB_ARGS_ARG(uv_queue_work_REQUIRED_ARGC, uv_queue_work_OPTIONAL_ARGC));
#endif
#if BIND_uv_read_start_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_read_start", mrb_UV_uv_read_start, MRB_ARGS_ARG(uv_read_start_REQUIRED_ARGC, uv_read_start_OPTIONAL_ARGC));
#endif
#if BIND_uv_read_stop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_read_stop", mrb_UV_uv_read_stop, MRB_ARGS_ARG(uv_read_stop_REQUIRED_ARGC, uv_read_stop_OPTIONAL_ARGC));
#endif
#if BIND_uv_recv_buffer_size_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_recv_buffer_size", mrb_UV_uv_recv_buffer_size, MRB_ARGS_ARG(uv_recv_buffer_size_REQUIRED_ARGC, uv_recv_buffer_size_OPTIONAL_ARGC));
#endif
#if BIND_uv_ref_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_ref", mrb_UV_uv_ref, MRB_ARGS_ARG(uv_ref_REQUIRED_ARGC, uv_ref_OPTIONAL_ARGC));
#endif
#if BIND_uv_replace_allocator_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_replace_allocator", mrb_UV_uv_replace_allocator, MRB_ARGS_ARG(uv_replace_allocator_REQUIRED_ARGC, uv_replace_allocator_OPTIONAL_ARGC));
#endif
#if BIND_uv_req_size_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_req_size", mrb_UV_uv_req_size, MRB_ARGS_ARG(uv_req_size_REQUIRED_ARGC, uv_req_size_OPTIONAL_ARGC));
#endif
#if BIND_uv_resident_set_memory_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_resident_set_memory", mrb_UV_uv_resident_set_memory, MRB_ARGS_ARG(uv_resident_set_memory_REQUIRED_ARGC, uv_resident_set_memory_OPTIONAL_ARGC));
#endif
#if BIND_uv_run_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_run", mrb_UV_uv_run, MRB_ARGS_ARG(uv_run_REQUIRED_ARGC, uv_run_OPTIONAL_ARGC));
#endif
#if BIND_uv_rwlock_destroy_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_rwlock_destroy", mrb_UV_uv_rwlock_destroy, MRB_ARGS_ARG(uv_rwlock_destroy_REQUIRED_ARGC, uv_rwlock_destroy_OPTIONAL_ARGC));
#endif
#if BIND_uv_rwlock_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_rwlock_init", mrb_UV_uv_rwlock_init, MRB_ARGS_ARG(uv_rwlock_init_REQUIRED_ARGC, uv_rwlock_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_rwlock_rdlock_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_rwlock_rdlock", mrb_UV_uv_rwlock_rdlock, MRB_ARGS_ARG(uv_rwlock_rdlock_REQUIRED_ARGC, uv_rwlock_rdlock_OPTIONAL_ARGC));
#endif
#if BIND_uv_rwlock_rdunlock_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_rwlock_rdunlock", mrb_UV_uv_rwlock_rdunlock, MRB_ARGS_ARG(uv_rwlock_rdunlock_REQUIRED_ARGC, uv_rwlock_rdunlock_OPTIONAL_ARGC));
#endif
#if BIND_uv_rwlock_tryrdlock_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_rwlock_tryrdlock", mrb_UV_uv_rwlock_tryrdlock, MRB_ARGS_ARG(uv_rwlock_tryrdlock_REQUIRED_ARGC, uv_rwlock_tryrdlock_OPTIONAL_ARGC));
#endif
#if BIND_uv_rwlock_trywrlock_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_rwlock_trywrlock", mrb_UV_uv_rwlock_trywrlock, MRB_ARGS_ARG(uv_rwlock_trywrlock_REQUIRED_ARGC, uv_rwlock_trywrlock_OPTIONAL_ARGC));
#endif
#if BIND_uv_rwlock_wrlock_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_rwlock_wrlock", mrb_UV_uv_rwlock_wrlock, MRB_ARGS_ARG(uv_rwlock_wrlock_REQUIRED_ARGC, uv_rwlock_wrlock_OPTIONAL_ARGC));
#endif
#if BIND_uv_rwlock_wrunlock_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_rwlock_wrunlock", mrb_UV_uv_rwlock_wrunlock, MRB_ARGS_ARG(uv_rwlock_wrunlock_REQUIRED_ARGC, uv_rwlock_wrunlock_OPTIONAL_ARGC));
#endif
#if BIND_uv_sem_destroy_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_sem_destroy", mrb_UV_uv_sem_destroy, MRB_ARGS_ARG(uv_sem_destroy_REQUIRED_ARGC, uv_sem_destroy_OPTIONAL_ARGC));
#endif
#if BIND_uv_sem_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_sem_init", mrb_UV_uv_sem_init, MRB_ARGS_ARG(uv_sem_init_REQUIRED_ARGC, uv_sem_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_sem_post_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_sem_post", mrb_UV_uv_sem_post, MRB_ARGS_ARG(uv_sem_post_REQUIRED_ARGC, uv_sem_post_OPTIONAL_ARGC));
#endif
#if BIND_uv_sem_trywait_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_sem_trywait", mrb_UV_uv_sem_trywait, MRB_ARGS_ARG(uv_sem_trywait_REQUIRED_ARGC, uv_sem_trywait_OPTIONAL_ARGC));
#endif
#if BIND_uv_sem_wait_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_sem_wait", mrb_UV_uv_sem_wait, MRB_ARGS_ARG(uv_sem_wait_REQUIRED_ARGC, uv_sem_wait_OPTIONAL_ARGC));
#endif
#if BIND_uv_send_buffer_size_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_send_buffer_size", mrb_UV_uv_send_buffer_size, MRB_ARGS_ARG(uv_send_buffer_size_REQUIRED_ARGC, uv_send_buffer_size_OPTIONAL_ARGC));
#endif
#if BIND_uv_set_process_title_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_set_process_title", mrb_UV_uv_set_process_title, MRB_ARGS_ARG(uv_set_process_title_REQUIRED_ARGC, uv_set_process_title_OPTIONAL_ARGC));
#endif
#if BIND_uv_setup_args_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_setup_args", mrb_UV_uv_setup_args, MRB_ARGS_ARG(uv_setup_args_REQUIRED_ARGC, uv_setup_args_OPTIONAL_ARGC));
#endif
#if BIND_uv_signal_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_signal_init", mrb_UV_uv_signal_init, MRB_ARGS_ARG(uv_signal_init_REQUIRED_ARGC, uv_signal_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_signal_start_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_signal_start", mrb_UV_uv_signal_start, MRB_ARGS_ARG(uv_signal_start_REQUIRED_ARGC, uv_signal_start_OPTIONAL_ARGC));
#endif
#if BIND_uv_signal_stop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_signal_stop", mrb_UV_uv_signal_stop, MRB_ARGS_ARG(uv_signal_stop_REQUIRED_ARGC, uv_signal_stop_OPTIONAL_ARGC));
#endif
#if BIND_uv_spawn_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_spawn", mrb_UV_uv_spawn, MRB_ARGS_ARG(uv_spawn_REQUIRED_ARGC, uv_spawn_OPTIONAL_ARGC));
#endif
#if BIND_uv_stop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_stop", mrb_UV_uv_stop, MRB_ARGS_ARG(uv_stop_REQUIRED_ARGC, uv_stop_OPTIONAL_ARGC));
#endif
#if BIND_uv_stream_set_blocking_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_stream_set_blocking", mrb_UV_uv_stream_set_blocking, MRB_ARGS_ARG(uv_stream_set_blocking_REQUIRED_ARGC, uv_stream_set_blocking_OPTIONAL_ARGC));
#endif
#if BIND_uv_strerror_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_strerror", mrb_UV_uv_strerror, MRB_ARGS_ARG(uv_strerror_REQUIRED_ARGC, uv_strerror_OPTIONAL_ARGC));
#endif
#if BIND_uv_tcp_bind_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_tcp_bind", mrb_UV_uv_tcp_bind, MRB_ARGS_ARG(uv_tcp_bind_REQUIRED_ARGC, uv_tcp_bind_OPTIONAL_ARGC));
#endif
#if BIND_uv_tcp_connect_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_tcp_connect", mrb_UV_uv_tcp_connect, MRB_ARGS_ARG(uv_tcp_connect_REQUIRED_ARGC, uv_tcp_connect_OPTIONAL_ARGC));
#endif
#if BIND_uv_tcp_getpeername_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_tcp_getpeername", mrb_UV_uv_tcp_getpeername, MRB_ARGS_ARG(uv_tcp_getpeername_REQUIRED_ARGC, uv_tcp_getpeername_OPTIONAL_ARGC));
#endif
#if BIND_uv_tcp_getsockname_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_tcp_getsockname", mrb_UV_uv_tcp_getsockname, MRB_ARGS_ARG(uv_tcp_getsockname_REQUIRED_ARGC, uv_tcp_getsockname_OPTIONAL_ARGC));
#endif
#if BIND_uv_tcp_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_tcp_init", mrb_UV_uv_tcp_init, MRB_ARGS_ARG(uv_tcp_init_REQUIRED_ARGC, uv_tcp_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_tcp_init_ex_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_tcp_init_ex", mrb_UV_uv_tcp_init_ex, MRB_ARGS_ARG(uv_tcp_init_ex_REQUIRED_ARGC, uv_tcp_init_ex_OPTIONAL_ARGC));
#endif
#if BIND_uv_tcp_keepalive_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_tcp_keepalive", mrb_UV_uv_tcp_keepalive, MRB_ARGS_ARG(uv_tcp_keepalive_REQUIRED_ARGC, uv_tcp_keepalive_OPTIONAL_ARGC));
#endif
#if BIND_uv_tcp_nodelay_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_tcp_nodelay", mrb_UV_uv_tcp_nodelay, MRB_ARGS_ARG(uv_tcp_nodelay_REQUIRED_ARGC, uv_tcp_nodelay_OPTIONAL_ARGC));
#endif
#if BIND_uv_tcp_open_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_tcp_open", mrb_UV_uv_tcp_open, MRB_ARGS_ARG(uv_tcp_open_REQUIRED_ARGC, uv_tcp_open_OPTIONAL_ARGC));
#endif
#if BIND_uv_tcp_simultaneous_accepts_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_tcp_simultaneous_accepts", mrb_UV_uv_tcp_simultaneous_accepts, MRB_ARGS_ARG(uv_tcp_simultaneous_accepts_REQUIRED_ARGC, uv_tcp_simultaneous_accepts_OPTIONAL_ARGC));
#endif
#if BIND_uv_thread_create_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_thread_create", mrb_UV_uv_thread_create, MRB_ARGS_ARG(uv_thread_create_REQUIRED_ARGC, uv_thread_create_OPTIONAL_ARGC));
#endif
#if BIND_uv_thread_equal_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_thread_equal", mrb_UV_uv_thread_equal, MRB_ARGS_ARG(uv_thread_equal_REQUIRED_ARGC, uv_thread_equal_OPTIONAL_ARGC));
#endif
#if BIND_uv_thread_join_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_thread_join", mrb_UV_uv_thread_join, MRB_ARGS_ARG(uv_thread_join_REQUIRED_ARGC, uv_thread_join_OPTIONAL_ARGC));
#endif
#if BIND_uv_thread_self_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_thread_self", mrb_UV_uv_thread_self, MRB_ARGS_ARG(uv_thread_self_REQUIRED_ARGC, uv_thread_self_OPTIONAL_ARGC));
#endif
#if BIND_uv_timer_again_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_timer_again", mrb_UV_uv_timer_again, MRB_ARGS_ARG(uv_timer_again_REQUIRED_ARGC, uv_timer_again_OPTIONAL_ARGC));
#endif
#if BIND_uv_timer_get_repeat_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_timer_get_repeat", mrb_UV_uv_timer_get_repeat, MRB_ARGS_ARG(uv_timer_get_repeat_REQUIRED_ARGC, uv_timer_get_repeat_OPTIONAL_ARGC));
#endif
#if BIND_uv_timer_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_timer_init", mrb_UV_uv_timer_init, MRB_ARGS_ARG(uv_timer_init_REQUIRED_ARGC, uv_timer_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_timer_set_repeat_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_timer_set_repeat", mrb_UV_uv_timer_set_repeat, MRB_ARGS_ARG(uv_timer_set_repeat_REQUIRED_ARGC, uv_timer_set_repeat_OPTIONAL_ARGC));
#endif
#if BIND_uv_timer_start_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_timer_start", mrb_UV_uv_timer_start, MRB_ARGS_ARG(uv_timer_start_REQUIRED_ARGC, uv_timer_start_OPTIONAL_ARGC));
#endif
#if BIND_uv_timer_stop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_timer_stop", mrb_UV_uv_timer_stop, MRB_ARGS_ARG(uv_timer_stop_REQUIRED_ARGC, uv_timer_stop_OPTIONAL_ARGC));
#endif
#if BIND_uv_try_write_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_try_write", mrb_UV_uv_try_write, MRB_ARGS_ARG(uv_try_write_REQUIRED_ARGC, uv_try_write_OPTIONAL_ARGC));
#endif
#if BIND_uv_tty_get_winsize_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_tty_get_winsize", mrb_UV_uv_tty_get_winsize, MRB_ARGS_ARG(uv_tty_get_winsize_REQUIRED_ARGC, uv_tty_get_winsize_OPTIONAL_ARGC));
#endif
#if BIND_uv_tty_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_tty_init", mrb_UV_uv_tty_init, MRB_ARGS_ARG(uv_tty_init_REQUIRED_ARGC, uv_tty_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_tty_reset_mode_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_tty_reset_mode", mrb_UV_uv_tty_reset_mode, MRB_ARGS_ARG(uv_tty_reset_mode_REQUIRED_ARGC, uv_tty_reset_mode_OPTIONAL_ARGC));
#endif
#if BIND_uv_tty_set_mode_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_tty_set_mode", mrb_UV_uv_tty_set_mode, MRB_ARGS_ARG(uv_tty_set_mode_REQUIRED_ARGC, uv_tty_set_mode_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_bind_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_udp_bind", mrb_UV_uv_udp_bind, MRB_ARGS_ARG(uv_udp_bind_REQUIRED_ARGC, uv_udp_bind_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_getsockname_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_udp_getsockname", mrb_UV_uv_udp_getsockname, MRB_ARGS_ARG(uv_udp_getsockname_REQUIRED_ARGC, uv_udp_getsockname_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_udp_init", mrb_UV_uv_udp_init, MRB_ARGS_ARG(uv_udp_init_REQUIRED_ARGC, uv_udp_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_init_ex_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_udp_init_ex", mrb_UV_uv_udp_init_ex, MRB_ARGS_ARG(uv_udp_init_ex_REQUIRED_ARGC, uv_udp_init_ex_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_open_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_udp_open", mrb_UV_uv_udp_open, MRB_ARGS_ARG(uv_udp_open_REQUIRED_ARGC, uv_udp_open_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_recv_start_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_udp_recv_start", mrb_UV_uv_udp_recv_start, MRB_ARGS_ARG(uv_udp_recv_start_REQUIRED_ARGC, uv_udp_recv_start_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_recv_stop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_udp_recv_stop", mrb_UV_uv_udp_recv_stop, MRB_ARGS_ARG(uv_udp_recv_stop_REQUIRED_ARGC, uv_udp_recv_stop_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_send_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_udp_send", mrb_UV_uv_udp_send, MRB_ARGS_ARG(uv_udp_send_REQUIRED_ARGC, uv_udp_send_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_set_broadcast_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_udp_set_broadcast", mrb_UV_uv_udp_set_broadcast, MRB_ARGS_ARG(uv_udp_set_broadcast_REQUIRED_ARGC, uv_udp_set_broadcast_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_set_membership_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_udp_set_membership", mrb_UV_uv_udp_set_membership, MRB_ARGS_ARG(uv_udp_set_membership_REQUIRED_ARGC, uv_udp_set_membership_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_set_multicast_interface_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_udp_set_multicast_interface", mrb_UV_uv_udp_set_multicast_interface, MRB_ARGS_ARG(uv_udp_set_multicast_interface_REQUIRED_ARGC, uv_udp_set_multicast_interface_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_set_multicast_loop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_udp_set_multicast_loop", mrb_UV_uv_udp_set_multicast_loop, MRB_ARGS_ARG(uv_udp_set_multicast_loop_REQUIRED_ARGC, uv_udp_set_multicast_loop_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_set_multicast_ttl_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_udp_set_multicast_ttl", mrb_UV_uv_udp_set_multicast_ttl, MRB_ARGS_ARG(uv_udp_set_multicast_ttl_REQUIRED_ARGC, uv_udp_set_multicast_ttl_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_set_ttl_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_udp_set_ttl", mrb_UV_uv_udp_set_ttl, MRB_ARGS_ARG(uv_udp_set_ttl_REQUIRED_ARGC, uv_udp_set_ttl_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_try_send_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_udp_try_send", mrb_UV_uv_udp_try_send, MRB_ARGS_ARG(uv_udp_try_send_REQUIRED_ARGC, uv_udp_try_send_OPTIONAL_ARGC));
#endif
#if BIND_uv_unref_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_unref", mrb_UV_uv_unref, MRB_ARGS_ARG(uv_unref_REQUIRED_ARGC, uv_unref_OPTIONAL_ARGC));
#endif
#if BIND_uv_update_time_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_update_time", mrb_UV_uv_update_time, MRB_ARGS_ARG(uv_update_time_REQUIRED_ARGC, uv_update_time_OPTIONAL_ARGC));
#endif
#if BIND_uv_uptime_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_uptime", mrb_UV_uv_uptime, MRB_ARGS_ARG(uv_uptime_REQUIRED_ARGC, uv_uptime_OPTIONAL_ARGC));
#endif
#if BIND_uv_version_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_version", mrb_UV_uv_version, MRB_ARGS_ARG(uv_version_REQUIRED_ARGC, uv_version_OPTIONAL_ARGC));
#endif
#if BIND_uv_version_string_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_version_string", mrb_UV_uv_version_string, MRB_ARGS_ARG(uv_version_string_REQUIRED_ARGC, uv_version_string_OPTIONAL_ARGC));
#endif
#if BIND_uv_walk_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_walk", mrb_UV_uv_walk, MRB_ARGS_ARG(uv_walk_REQUIRED_ARGC, uv_walk_OPTIONAL_ARGC));
#endif
#if BIND_uv_write_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_write", mrb_UV_uv_write, MRB_ARGS_ARG(uv_write_REQUIRED_ARGC, uv_write_OPTIONAL_ARGC));
#endif
#if BIND_uv_write2_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uv_write2", mrb_UV_uv_write2, MRB_ARGS_ARG(uv_write2_REQUIRED_ARGC, uv_write2_OPTIONAL_ARGC));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: custom_module_init */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

}

void mrb_mruby_libuv_gem_final(mrb_state* mrb){
/* MRUBY_BINDING: custom_module_final */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#ifdef __cplusplus
}
#endif
