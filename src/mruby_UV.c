#include "mruby_UV.h"

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

#ifdef __cplusplus
extern "C" {
#endif

/* MRUBY_BINDING: uv_accept */
/* sha: ba8e76d4236d057fac5989ca67ea4de98f6382167d1a53fc4c6562362cea57d7 */
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
  if (!mrb_obj_is_kind_of(mrb, server, Stream_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Stream expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, client, Stream_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Stream expected");
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

// TODO: Maybe when we start using multiple event loops

// mrb_value
// mrb_UV_uv_async_init(mrb_state* mrb, mrb_value self) {
//   mrb_value arg1;
//   mrb_value async;
//   mrb_value async_cb;
// 
//   /* Fetch the args */
//   mrb_get_args(mrb, "oo&", &arg1, &async, &async_cb);
// 
//   /* Type checking */
//   if (!mrb_obj_is_kind_of(mrb, arg1, Loop_class(mrb))) {
//     mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
//     return mrb_nil_value();
//   }
//   if (!mrb_obj_is_kind_of(mrb, async, Async_class(mrb))) {
//     mrb_raise(mrb, E_TYPE_ERROR, "Async expected");
//     return mrb_nil_value();
//   }
//   if (mrb_nil_p(async_cb)) {
//     mrb_raise(mrb, E_ARGUMENT_ERROR, "uv_async_init requires a block");
//     return mrb_nil_value();
//   }
//   mrb_iv_set(mrb, async, mrb_intern_cstr(mrb, "@mruby_uv_async_cb_thunk"), async_cb);
// 
//   /* Unbox param: arg1 */
//   uv_loop_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_loop_t(arg1));
// 
//   /* Unbox param: async */
//   uv_async_t * native_async = (mrb_nil_p(async) ? NULL : mruby_unbox_uv_async_t(async));
// 
//   /* Invocation */
//   int native_return_value = uv_async_init(native_arg1, native_async, mruby_uv_async_cb_thunk);
// 
//   /* Box the return value */
//   mrb_value return_value = mrb_fixnum_value(native_return_value);
//   
//   return return_value;
// }
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_async_send */
/* sha: f6ccf490fc855e801f12bedc79b58a08203d01db1683ef09f7f029ca7ac7a121 */
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
  if (!mrb_obj_is_kind_of(mrb, async, Async_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Async expected");
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
/* sha: 86f0cdabef329cced2b6e58cdff4d416c0601fb5166ba6f93686b7523e945155 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
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
/* sha: c7ccdcd6b820fd66953c5064208ab046af3a750c121bdae8b555118ffa13de07 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
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
/* sha: e37fed6791c3d0ff876a9b3e390e69ab6efcb0c74e6daa91e40952f7f480d3e9 */
#if BIND_uv_barrier_destroy_FUNCTION
#define uv_barrier_destroy_REQUIRED_ARGC 1
#define uv_barrier_destroy_OPTIONAL_ARGC 0
/* uv_barrier_destroy
 *
 * Parameters:
 * - barrier: uv_barrier_t *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_barrier_destroy(mrb_state* mrb, mrb_value self) {
  mrb_value barrier;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &barrier);

  /* Type checking */
  TODO_type_check_uv_barrier_t_PTR(barrier);

  /* Unbox param: barrier */
  uv_barrier_t * native_barrier = TODO_mruby_unbox_uv_barrier_t_PTR(barrier);

  /* Invocation */
  uv_barrier_destroy(native_barrier);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_barrier_init */
/* sha: bb30df6783fe486d5b14e142807ebeef5933a57c18ee4f58fb5712b4e4f8a4d7 */
#if BIND_uv_barrier_init_FUNCTION
#define uv_barrier_init_REQUIRED_ARGC 2
#define uv_barrier_init_OPTIONAL_ARGC 0
/* uv_barrier_init
 *
 * Parameters:
 * - barrier: uv_barrier_t *
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
  TODO_type_check_uv_barrier_t_PTR(barrier);

  /* Unbox param: barrier */
  uv_barrier_t * native_barrier = TODO_mruby_unbox_uv_barrier_t_PTR(barrier);

  /* Invocation */
  int native_return_value = uv_barrier_init(native_barrier, native_count);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_barrier_wait */
/* sha: c2544a8e8c88786f6eadcd16ce786789f7056352d4d254207c5bf2b42f09de66 */
#if BIND_uv_barrier_wait_FUNCTION
#define uv_barrier_wait_REQUIRED_ARGC 1
#define uv_barrier_wait_OPTIONAL_ARGC 0
/* uv_barrier_wait
 *
 * Parameters:
 * - barrier: uv_barrier_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_barrier_wait(mrb_state* mrb, mrb_value self) {
  mrb_value barrier;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &barrier);

  /* Type checking */
  TODO_type_check_uv_barrier_t_PTR(barrier);

  /* Unbox param: barrier */
  uv_barrier_t * native_barrier = TODO_mruby_unbox_uv_barrier_t_PTR(barrier);

  /* Invocation */
  int native_return_value = uv_barrier_wait(native_barrier);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_buf_init */
/* sha: ec7981885716e43d174fd5619a32729065a7080ac04801046ff695cc74ce721b */
#if BIND_uv_buf_init_FUNCTION
#define uv_buf_init_REQUIRED_ARGC 2
#define uv_buf_init_OPTIONAL_ARGC 0
/* uv_buf_init
 *
 * Parameters:
 * - base: char *
 * - len: unsigned int
 * Return Type: uv_buf_t
 */
mrb_value
mrb_UV_uv_buf_init(mrb_state* mrb, mrb_value self) {
  mrb_value base;
  mrb_int native_len;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &base, &native_len);

  /* Type checking */
  TODO_type_check_char_PTR(base);

  /* Unbox param: base */
  char * native_base = TODO_mruby_unbox_char_PTR(base);

  /* Invocation */
  uv_buf_t native_return_value = uv_buf_init(native_base, native_len);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_uv_buf_t(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_cancel */
/* sha: 444386381037c4fbd5e0f1c7591bd88e8bab7265c125a234e34480b88c8f4e9b */
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
  if (!mrb_obj_is_kind_of(mrb, req, Req_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Req expected");
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
/* sha: 36fcc0aa180a5cf0bb3b1fcef9772675e47787ccbe99df8513d9ce0fa55ee76d */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, check, Check_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Check expected");
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
  mrb_get_args(mrb, "o&", &check, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, check, Check_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Check expected");
    return mrb_nil_value();
  }
  if (mrb_nil_p(cb)) {
    mrb_raise(mrb, E_ARGUMENT_ERROR, "uv_check_start requires a block");
    return mrb_nil_value();
  }
  MRUBY_UV_PREPARE_HANDLE_THUNK(check, "@mruby_uv_check_cb_thunk", cb);
  
  /* Unbox param: check */
  uv_check_t * native_check = (mrb_nil_p(check) ? NULL : mruby_unbox_uv_check_t(check));

  /* Invocation */
  int native_return_value = uv_check_start(native_check, mruby_uv_check_cb_thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_check_stop */
/* sha: cb5f481f33e51d413ae5eb609250efd5f6770ac99a9a10f010975369b4bc60a8 */
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
  if (!mrb_obj_is_kind_of(mrb, check, Check_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Check expected");
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
#define uv_close_REQUIRED_ARGC 1
#define uv_close_OPTIONAL_ARGC 1
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
  mrb_value cb = mrb_nil_value();

  /* Fetch the args */
  mrb_get_args(mrb, "o|&", &handle, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, Handle_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Handle expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(cb)) {
    MRUBY_UV_PREPARE_HANDLE_THUNK(handle, "@mruby_uv_close_cb_thunk", cb);
  }

  /* Unbox param: handle */
  uv_handle_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_handle_t(handle));
  
  /* Invocation */
  uv_close(native_handle, mruby_uv_close_cb_thunk);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_cond_broadcast */
/* sha: b0588a51fdc625137c6ccb590d1bf4e54f97d947f95847dc0ca22cefa3bbc51e */
#if BIND_uv_cond_broadcast_FUNCTION
#define uv_cond_broadcast_REQUIRED_ARGC 1
#define uv_cond_broadcast_OPTIONAL_ARGC 0
/* uv_cond_broadcast
 *
 * Parameters:
 * - cond: uv_cond_t *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_cond_broadcast(mrb_state* mrb, mrb_value self) {
  mrb_value cond;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &cond);

  /* Type checking */
  TODO_type_check_uv_cond_t_PTR(cond);

  /* Unbox param: cond */
  uv_cond_t * native_cond = TODO_mruby_unbox_uv_cond_t_PTR(cond);

  /* Invocation */
  uv_cond_broadcast(native_cond);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_cond_destroy */
/* sha: 25d40866a85b391c7ff37ee954b1023518834223464b3f4f7554b048ccb90673 */
#if BIND_uv_cond_destroy_FUNCTION
#define uv_cond_destroy_REQUIRED_ARGC 1
#define uv_cond_destroy_OPTIONAL_ARGC 0
/* uv_cond_destroy
 *
 * Parameters:
 * - cond: uv_cond_t *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_cond_destroy(mrb_state* mrb, mrb_value self) {
  mrb_value cond;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &cond);

  /* Type checking */
  TODO_type_check_uv_cond_t_PTR(cond);

  /* Unbox param: cond */
  uv_cond_t * native_cond = TODO_mruby_unbox_uv_cond_t_PTR(cond);

  /* Invocation */
  uv_cond_destroy(native_cond);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_cond_init */
/* sha: aef65fa7003d9856394884295d6a33e8c4a4dae4b3ba46a68889bdbb348e15a5 */
#if BIND_uv_cond_init_FUNCTION
#define uv_cond_init_REQUIRED_ARGC 1
#define uv_cond_init_OPTIONAL_ARGC 0
/* uv_cond_init
 *
 * Parameters:
 * - cond: uv_cond_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_cond_init(mrb_state* mrb, mrb_value self) {
  mrb_value cond;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &cond);

  /* Type checking */
  TODO_type_check_uv_cond_t_PTR(cond);

  /* Unbox param: cond */
  uv_cond_t * native_cond = TODO_mruby_unbox_uv_cond_t_PTR(cond);

  /* Invocation */
  int native_return_value = uv_cond_init(native_cond);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_cond_signal */
/* sha: 7057fae5f803adb3c6ff8b72b232eb4bdca3d8477baf167381dc44230d377b82 */
#if BIND_uv_cond_signal_FUNCTION
#define uv_cond_signal_REQUIRED_ARGC 1
#define uv_cond_signal_OPTIONAL_ARGC 0
/* uv_cond_signal
 *
 * Parameters:
 * - cond: uv_cond_t *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_cond_signal(mrb_state* mrb, mrb_value self) {
  mrb_value cond;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &cond);

  /* Type checking */
  TODO_type_check_uv_cond_t_PTR(cond);

  /* Unbox param: cond */
  uv_cond_t * native_cond = TODO_mruby_unbox_uv_cond_t_PTR(cond);

  /* Invocation */
  uv_cond_signal(native_cond);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_cond_timedwait */
/* sha: e224f2e833db21456f63eb2f3e164f4fd7eb6c34e27e4eae023b951acbc6e7aa */
#if BIND_uv_cond_timedwait_FUNCTION
#define uv_cond_timedwait_REQUIRED_ARGC 3
#define uv_cond_timedwait_OPTIONAL_ARGC 0
/* uv_cond_timedwait
 *
 * Parameters:
 * - cond: uv_cond_t *
 * - mutex: uv_mutex_t *
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
  TODO_type_check_uv_cond_t_PTR(cond);
  TODO_type_check_uv_mutex_t_PTR(mutex);
  TODO_type_check_uint64_t(timeout);

  /* Unbox param: cond */
  uv_cond_t * native_cond = TODO_mruby_unbox_uv_cond_t_PTR(cond);

  /* Unbox param: mutex */
  uv_mutex_t * native_mutex = TODO_mruby_unbox_uv_mutex_t_PTR(mutex);

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
/* sha: 66c4f7420ab34a2942f3e05e405753f06692ace12b4885c6f287f86ae5d8f9bf */
#if BIND_uv_cond_wait_FUNCTION
#define uv_cond_wait_REQUIRED_ARGC 2
#define uv_cond_wait_OPTIONAL_ARGC 0
/* uv_cond_wait
 *
 * Parameters:
 * - cond: uv_cond_t *
 * - mutex: uv_mutex_t *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_cond_wait(mrb_state* mrb, mrb_value self) {
  mrb_value cond;
  mrb_value mutex;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &cond, &mutex);

  /* Type checking */
  TODO_type_check_uv_cond_t_PTR(cond);
  TODO_type_check_uv_mutex_t_PTR(mutex);

  /* Unbox param: cond */
  uv_cond_t * native_cond = TODO_mruby_unbox_uv_cond_t_PTR(cond);

  /* Unbox param: mutex */
  uv_mutex_t * native_mutex = TODO_mruby_unbox_uv_mutex_t_PTR(mutex);

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
#define uv_cwd_REQUIRED_ARGC 0
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
  char * native_buffer = calloc(MRUBY_UV_PATH_BUF_SIZE, sizeof(char));
  size_t native_size = MRUBY_UV_PATH_BUF_SIZE;
  
  /* Invocation */
  mrb_value return_value = mrb_nil_value();
  if (0 == uv_cwd(native_buffer, &native_size)) {
    return_value = mrb_str_new_cstr(mrb, native_buffer);
  }
  free(native_buffer);
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
  
  INIT_LOOP_DATA(native_return_value, mrb, return_value);
  
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
/* sha: 0e7f987b12a344e541f0897ab1706ac802b3509825b936dc061fe50c54842bce */
#if BIND_uv_dlclose_FUNCTION
#define uv_dlclose_REQUIRED_ARGC 1
#define uv_dlclose_OPTIONAL_ARGC 0
/* uv_dlclose
 *
 * Parameters:
 * - lib: uv_lib_t *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_dlclose(mrb_state* mrb, mrb_value self) {
  mrb_value lib;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &lib);

  /* Type checking */
  TODO_type_check_uv_lib_t_PTR(lib);

  /* Unbox param: lib */
  uv_lib_t * native_lib = TODO_mruby_unbox_uv_lib_t_PTR(lib);

  /* Invocation */
  uv_dlclose(native_lib);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_dlerror */
/* sha: bbaca1426ecddee9950be429bf7633461904053ded4b1f35808a5a460d0fac1b */
#if BIND_uv_dlerror_FUNCTION
#define uv_dlerror_REQUIRED_ARGC 1
#define uv_dlerror_OPTIONAL_ARGC 0
/* uv_dlerror
 *
 * Parameters:
 * - lib: const uv_lib_t *
 * Return Type: const char *
 */
mrb_value
mrb_UV_uv_dlerror(mrb_state* mrb, mrb_value self) {
  mrb_value lib;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &lib);

  /* Type checking */
  TODO_type_check_uv_lib_t_PTR(lib);

  /* Unbox param: lib */
  const uv_lib_t * native_lib = TODO_mruby_unbox_uv_lib_t_PTR(lib);

  /* Invocation */
  const char * native_return_value = uv_dlerror(native_lib);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_dlopen */
/* sha: 2d39e454dfb83faad75b33d8e17af648bc98955d302a8e485eeda312debcb22e */
#if BIND_uv_dlopen_FUNCTION
#define uv_dlopen_REQUIRED_ARGC 2
#define uv_dlopen_OPTIONAL_ARGC 0
/* uv_dlopen
 *
 * Parameters:
 * - filename: const char *
 * - lib: uv_lib_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_dlopen(mrb_state* mrb, mrb_value self) {
  char * native_filename = NULL;
  mrb_value lib;

  /* Fetch the args */
  mrb_get_args(mrb, "zo", &native_filename, &lib);

  /* Type checking */
  TODO_type_check_uv_lib_t_PTR(lib);

  /* Unbox param: lib */
  uv_lib_t * native_lib = TODO_mruby_unbox_uv_lib_t_PTR(lib);

  /* Invocation */
  int native_return_value = uv_dlopen(native_filename, native_lib);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_dlsym */
/* sha: 4369d9422785d473b1605cd5b31ce8288dff1dc805d741313c7c1eddfeece9ca */
#if BIND_uv_dlsym_FUNCTION
#define uv_dlsym_REQUIRED_ARGC 3
#define uv_dlsym_OPTIONAL_ARGC 0
/* uv_dlsym
 *
 * Parameters:
 * - lib: uv_lib_t *
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
  TODO_type_check_uv_lib_t_PTR(lib);
  TODO_type_check_void_PTR_PTR(ptr);

  /* Unbox param: lib */
  uv_lib_t * native_lib = TODO_mruby_unbox_uv_lib_t_PTR(lib);

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
#define uv_exepath_REQUIRED_ARGC 0
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
  char * native_buffer = (char*)calloc(MRUBY_UV_PATH_BUF_SIZE, sizeof(char));
  size_t size = MRUBY_UV_PATH_BUF_SIZE;
  
  mrb_value result = mrb_nil_value();
  if (0 == uv_exepath(native_buffer, &size)) {
    result = mrb_str_new_cstr(mrb, native_buffer);
  }
  
  free(native_buffer);
  return result;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fileno */
/* sha: e852c4cd3b33f3d0aa22a873d54f839d7156af6a0823e2efdd3406475bcd0a27 */
#if BIND_uv_fileno_FUNCTION
#define uv_fileno_REQUIRED_ARGC 2
#define uv_fileno_OPTIONAL_ARGC 0
/* uv_fileno
 *
 * Parameters:
 * - handle: const uv_handle_t *
 * - fd: uv_os_fd_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fileno(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value fd;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &handle, &fd);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, Handle_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Handle expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_os_fd_t_PTR(fd);

  /* Unbox param: handle */
  const uv_handle_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_handle_t(handle));

  /* Unbox param: fd */
  uv_os_fd_t * native_fd = TODO_mruby_unbox_uv_os_fd_t_PTR(fd);

  /* Invocation */
  int native_return_value = uv_fileno(native_handle, native_fd);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_free_cpu_info */
/* sha: e006daf887b2204f55c3973e3f71f95324c7289012b07e6dd214e4d42323e8c2 */
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
  if (!mrb_obj_is_kind_of(mrb, cpu_infos, CPUInfo_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "CPUInfo expected");
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
/* sha: bd97ad66cdee4a0950f486eb9b88b03e2f79380c41d96119371945df02b999de */
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
  if (!mrb_obj_is_kind_of(mrb, addresses, InterfaceAddress_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "InterfaceAddress expected");
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
/* sha: a87282605872315ae629bbd140ecc748a3fbb6d872c83e4926041fc7caa1e3ac */
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
  if (!mrb_obj_is_kind_of(mrb, ai, Addrinfo_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Addrinfo expected");
    return mrb_nil_value();
  }

  /* Unbox param: ai */
  struct addrinfo * native_ai = (mrb_nil_p(ai) ? NULL : mruby_unbox_addrinfo(ai));

  /* Invocation */
  uv_freeaddrinfo(native_ai);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_access */
/* sha: b41bd246caa016f9d02ef849b57cb426ea1e4f6e626a9ad93a7f67b77cfda42c */
#if BIND_uv_fs_access_FUNCTION
#define uv_fs_access_REQUIRED_ARGC 4
#define uv_fs_access_OPTIONAL_ARGC 1
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
  mrb_value native_cb;
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oozi|&", &loop, &req, &native_path, &native_mode, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Invocation */
  int native_return_value = uv_fs_access(native_loop, native_req, native_path, native_mode, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_chmod */
/* sha: cb23ca45e61ca75d512bde56097353455096ef6fd7c7ea53faf3823adcc2742c */
#if BIND_uv_fs_chmod_FUNCTION
#define uv_fs_chmod_REQUIRED_ARGC 4
#define uv_fs_chmod_OPTIONAL_ARGC 1
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
  mrb_value native_cb;
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oozi|&", &loop, &req, &native_path, &native_mode, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Invocation */
  int native_return_value = uv_fs_chmod(native_loop, native_req, native_path, native_mode, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_chown */
/* sha: 3f9923be6e0d3e4b3c74e249615734278c2134767625b157373a789731a24adc */
#if BIND_uv_fs_chown_FUNCTION
#define uv_fs_chown_REQUIRED_ARGC 5
#define uv_fs_chown_OPTIONAL_ARGC 1
/* uv_fs_chown
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - path: const char *
 * - uid: uv_uid_t
 * - gid: uv_gid_t
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_chown(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  char * native_path = NULL;
  mrb_value uid;
  mrb_value gid;
  mrb_value native_cb;
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oozoo|&", &loop, &req, &native_path, &uid, &gid, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_uid_t(uid);
  TODO_type_check_uv_gid_t(gid);
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: uid */
  uv_uid_t native_uid = TODO_mruby_unbox_uv_uid_t(uid);

  /* Unbox param: gid */
  uv_gid_t native_gid = TODO_mruby_unbox_uv_gid_t(gid);

  /* Invocation */
  int native_return_value = uv_fs_chown(native_loop, native_req, native_path, native_uid, native_gid, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_close */
/* sha: 62c7b9d990943491e315b12de1d788730e8a87d42825d2dbf12f315edb8aed99 */
#if BIND_uv_fs_close_FUNCTION
#define uv_fs_close_REQUIRED_ARGC 3
#define uv_fs_close_OPTIONAL_ARGC 1
/* uv_fs_close
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - file: uv_file
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_close(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  mrb_int native_file;
  mrb_value native_cb;
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi|&", &loop, &req, &native_file, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Invocation */
  int native_return_value = uv_fs_close(native_loop, native_req, native_file, thunk);

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

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, FSEvent_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FSEvent expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_fs_event_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_fs_event_t(handle));

  size_t native_size = 1024;
  char * native_buffer = (char*)calloc(native_size, sizeof(char));

  /* Invocation */
  if (0 == uv_fs_event_getpath(native_handle, native_buffer, &native_size)) {
    mrb_value result = mrb_str_new(mrb, native_buffer, native_size);
    free(native_buffer);
    return result;
  } else {
    /* xxx: Raise the errno somehow */
    return mrb_nil_value();
  }
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_event_init */
/* sha: 4c06a816c1a0cd0c0a393333aec9cee8675fef8774c471739b4a66090dc7b286 */
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
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, FSEvent_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FSEvent expected");
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
  mrb_get_args(mrb, "ozi&", &handle, &native_path, &native_flags, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, FSEvent_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FSEvent expected");
    return mrb_nil_value();
  }
  if (mrb_nil_p(cb)) {
    mrb_raise(mrb, E_ARGUMENT_ERROR, "uv_fs_event_start requires a block");
    return mrb_nil_value();
  }
  MRUBY_UV_PREPARE_HANDLE_THUNK(handle, "@mruby_uv_fs_event_cb_thunk", cb);

  /* Unbox param: handle */
  uv_fs_event_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_fs_event_t(handle));

  /* Invocation */
  int native_return_value = uv_fs_event_start(native_handle, mruby_uv_fs_event_cb_thunk, native_path, native_flags);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_event_stop */
/* sha: 01c276b14769e21c2fecca921b30273b2f24ae82d2cae05e429629b12539c70c */
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
  if (!mrb_obj_is_kind_of(mrb, handle, FSEvent_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FSEvent expected");
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
/* sha: 63356045b0a41e3de27c59e9d9025f26de11bf1ea468c1d6ddbbcaef7b350fc3 */
#if BIND_uv_fs_fchmod_FUNCTION
#define uv_fs_fchmod_REQUIRED_ARGC 4
#define uv_fs_fchmod_OPTIONAL_ARGC 1
/* uv_fs_fchmod
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - file: uv_file
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
  mrb_value native_cb;
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooii|&", &loop, &req, &native_file, &native_mode, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Invocation */
  int native_return_value = uv_fs_fchmod(native_loop, native_req, native_file, native_mode, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_fchown */
/* sha: 996e5e21b11ba0c7d4b2aea38eaf3ade4d7927100c390a276fa44052bb717505 */
#if BIND_uv_fs_fchown_FUNCTION
#define uv_fs_fchown_REQUIRED_ARGC 5
#define uv_fs_fchown_OPTIONAL_ARGC 1
/* uv_fs_fchown
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - file: uv_file
 * - uid: uv_uid_t
 * - gid: uv_gid_t
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_fchown(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  mrb_int native_file;
  mrb_value uid;
  mrb_value gid;
  mrb_value native_cb;
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooioo|&", &loop, &req, &native_file, &uid, &gid, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_uid_t(uid);
  TODO_type_check_uv_gid_t(gid);
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: uid */
  uv_uid_t native_uid = TODO_mruby_unbox_uv_uid_t(uid);

  /* Unbox param: gid */
  uv_gid_t native_gid = TODO_mruby_unbox_uv_gid_t(gid);

  /* Invocation */
  int native_return_value = uv_fs_fchown(native_loop, native_req, native_file, native_uid, native_gid, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_fdatasync */
/* sha: eee6fd2fb71c87d09af9044fbe192d97bf608a11029f8f68aef08b4274653537 */
#if BIND_uv_fs_fdatasync_FUNCTION
#define uv_fs_fdatasync_REQUIRED_ARGC 3
#define uv_fs_fdatasync_OPTIONAL_ARGC 1
/* uv_fs_fdatasync
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - file: uv_file
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_fdatasync(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  mrb_int native_file;
  mrb_value native_cb;
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi|&", &loop, &req, &native_file, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Invocation */
  int native_return_value = uv_fs_fdatasync(native_loop, native_req, native_file, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_fstat */
/* sha: 62643c60742b9f935a4cc95a05967949385ea8c0d0fbf3e387818c57606d2a1d */
#if BIND_uv_fs_fstat_FUNCTION
#define uv_fs_fstat_REQUIRED_ARGC 3
#define uv_fs_fstat_OPTIONAL_ARGC 1
/* uv_fs_fstat
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - file: uv_file
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_fstat(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  mrb_int native_file;
  mrb_value native_cb;
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi|&", &loop, &req, &native_file, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Invocation */
  int native_return_value = uv_fs_fstat(native_loop, native_req, native_file, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_fsync */
/* sha: 57c4734236e17d0a9b8383b9ca362855a5da0892a58bd62d82c5ffeb690e98eb */
#if BIND_uv_fs_fsync_FUNCTION
#define uv_fs_fsync_REQUIRED_ARGC 1
#define uv_fs_fsync_OPTIONAL_ARGC 3
/* uv_fs_fsync
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - file: uv_file
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_fsync(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  mrb_int native_file;
  mrb_value native_cb;
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi|&", &loop, &req, &native_file, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Invocation */
  int native_return_value = uv_fs_fsync(native_loop, native_req, native_file, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_ftruncate */
/* sha: c6b9043e10dd66595255972584d67b4000b6155d84d63d6672ff29fe5ae45c30 */
#if BIND_uv_fs_ftruncate_FUNCTION
#define uv_fs_ftruncate_REQUIRED_ARGC 4
#define uv_fs_ftruncate_OPTIONAL_ARGC 1
/* uv_fs_ftruncate
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - file: uv_file
 * - offset: int64_t
 * - cb: uv_fs_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_fs_ftruncate(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  mrb_int native_file;
  mrb_int native_offset;
  mrb_value native_cb;
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooii|&", &loop, &req, &native_file, &native_offset, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: offset */
  int64_t native_offset = TODO_mruby_unbox_int64_t(offset);

  /* Invocation */
  int native_return_value = uv_fs_ftruncate(native_loop, native_req, native_file, native_offset, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_futime */
/* sha: 8bf26565c6ae5108c817c9bd94c6cfbde7d202954d0eb8f175a6ff8388281342 */
#if BIND_uv_fs_futime_FUNCTION
#define uv_fs_futime_REQUIRED_ARGC 5
#define uv_fs_futime_OPTIONAL_ARGC 1
/* uv_fs_futime
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - file: uv_file
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
  mrb_value native_cb;
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooiff|&", &loop, &req, &native_file, &native_atime, &native_mtime, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Invocation */
  int native_return_value = uv_fs_futime(native_loop, native_req, native_file, native_atime, native_mtime, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_link */
/* sha: 7a297bef452060f0cd5f7c21fb3f670c0ff14a4373aa43e3d83ee362c84bef91 */
#if BIND_uv_fs_link_FUNCTION
#define uv_fs_link_REQUIRED_ARGC 4
#define uv_fs_link_OPTIONAL_ARGC 1
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
  mrb_value native_cb;
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oozz|&", &loop, &req, &native_path, &native_new_path, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Invocation */
  int native_return_value = uv_fs_link(native_loop, native_req, native_path, native_new_path, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_lstat */
/* sha: b4b35d122a363ca917a6bcb2d8968fcaf2707e68ba08d194bd123ab95685f93a */
#if BIND_uv_fs_lstat_FUNCTION
#define uv_fs_lstat_REQUIRED_ARGC 3
#define uv_fs_lstat_OPTIONAL_ARGC 1
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
  mrb_value native_cb;
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooz|&", &loop, &req, &native_path, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Invocation */
  int native_return_value = uv_fs_lstat(native_loop, native_req, native_path, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_mkdir */
/* sha: c79c79fc7b678c60db2d17fecdeeb103912ca376156568cec3e7b00aacaa7b83 */
#if BIND_uv_fs_mkdir_FUNCTION
#define uv_fs_mkdir_REQUIRED_ARGC 4
#define uv_fs_mkdir_OPTIONAL_ARGC 1
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
  mrb_value native_cb = mrb_nil_value();
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oozi|&", &loop, &req, &native_path, &native_mode, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Invocation */
  int native_return_value = uv_fs_mkdir(native_loop, native_req, native_path, native_mode, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_mkdtemp */
/* sha: 7a8c0e3feb72352396e71131051a988120b737aeb1435efffbf98773d3c31649 */
#if BIND_uv_fs_mkdtemp_FUNCTION
#define uv_fs_mkdtemp_REQUIRED_ARGC 3
#define uv_fs_mkdtemp_OPTIONAL_ARGC 1
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
  mrb_value native_cb = mrb_nil_value();
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooz|&", &loop, &req, &native_tpl, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Invocation */
  int native_return_value = uv_fs_mkdtemp(native_loop, native_req, native_tpl, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_open */
/* sha: 4cfe1f520e1d48eb5e632d9e621c46d74374e94cb213e6bf9bbd8528ec4ca309 */
#if BIND_uv_fs_open_FUNCTION
#define uv_fs_open_REQUIRED_ARGC 5
#define uv_fs_open_OPTIONAL_ARGC 1
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
  mrb_value native_cb = mrb_nil_value();
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oozii|&", &loop, &req, &native_path, &native_flags, &native_mode, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Invocation */
  int native_return_value = uv_fs_open(native_loop, native_req, native_path, native_flags, native_mode, thunk);
  
  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_poll_getpath */
/* sha: e0ad3e0d6b93637c8a3300a0fa95cd1dabb7b26cd7f3b2aa36be80655cf93f46 */
#if BIND_uv_fs_poll_getpath_FUNCTION
#define uv_fs_poll_getpath_REQUIRED_ARGC 1
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

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, FSPoll_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FSPoll expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_fs_poll_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_fs_poll_t(handle));

  size_t native_size = 1024;
  char * native_buffer = (char*)calloc(native_size, sizeof(char));

  /* Invocation */
  if (0 == uv_fs_poll_getpath(native_handle, native_buffer, &native_size)) {
    mrb_value result = mrb_str_new(mrb, native_buffer, native_size);
    free(native_buffer);
    return result;
  } else {
    /* xxx: Raise the errno somehow */
    return mrb_nil_value();
  }
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_poll_init */
/* sha: fbbbc9365b9b7b75dd8f6bcb3d56881d46b66275fc4c31413e01e16a6ee7c83c */
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
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, FSPoll_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FSPoll expected");
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
  mrb_get_args(mrb, "ozi&", &handle, &native_path, &native_interval, &poll_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, FSPoll_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FSPoll expected");
    return mrb_nil_value();
  }
  if (mrb_nil_p(poll_cb)) {
    mrb_raise(mrb, E_ARGUMENT_ERROR, "uv_fs_poll_start requires a block");
    return mrb_nil_value();
  }
  MRUBY_UV_PREPARE_HANDLE_THUNK(handle, "@mruby_uv_fs_poll_cb_thunk", poll_cb);

  /* Unbox param: handle */
  uv_fs_poll_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_fs_poll_t(handle));

  /* Invocation */
  int native_return_value = uv_fs_poll_start(native_handle, mruby_uv_fs_poll_cb_thunk, native_path, native_interval);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_poll_stop */
/* sha: 6afff6f0db7e3549fc70b680d9718ca84709ad6ba6e272d399480b094291f0ca */
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
  if (!mrb_obj_is_kind_of(mrb, handle, FSPoll_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FSPoll expected");
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
/* sha: cb30ff0868074ce5ba2893c71b763a6f6dfda4853ac4763e7c091bac7be9e53e */
#if BIND_uv_fs_read_FUNCTION
#define uv_fs_read_REQUIRED_ARGC 5
#define uv_fs_read_OPTIONAL_ARGC 1
/* uv_fs_read
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - file: uv_file
 * - bufs: const uv_buf_t []
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
  mrb_int native_size;
  mrb_int native_offset;
  mrb_value native_cb = mrb_nil_value();
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooiii|&", &loop, &req, &native_file, &native_size, &native_offset, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Initialize the read buf */
  uv_buf_t * buf = &((uv_fs_and_buf_t*)native_req)->buf;
  if (buf->base != NULL) {
    mrb_raise(mrb, E_RUNTIME_ERROR, "[Bug in mruby-libuv] FS should have had buffer freed in callback thunk.");
    return mrb_nil_value();
  }
  buf->len = native_size;
  buf->base = (char*)calloc(native_size, sizeof(char));

  /* Invocation */
  int native_return_value = uv_fs_read(native_loop, native_req, native_file, buf, 1, native_offset, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_readlink */
/* sha: 79daa7402353b82d6a3ca3b00bec74e47202c27dd58a7b73dc249830e9df5385 */
#if BIND_uv_fs_readlink_FUNCTION
#define uv_fs_readlink_REQUIRED_ARGC 3
#define uv_fs_readlink_OPTIONAL_ARGC 1
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
  mrb_value native_cb = mrb_nil_value();
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooz|&", &loop, &req, &native_path, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Invocation */
  int native_return_value = uv_fs_readlink(native_loop, native_req, native_path, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_realpath */
/* sha: 7316da826adac8ab585a34c035d58a8483f2f00c8be1bd577b53122324ef222a */
#if UV_VERSION_MAJOR <= 1 && UV_VERSION_MINOR < 8
# define BIND_uv_fs_realpath_FUNCTION FALSE
#endif
#if BIND_uv_fs_realpath_FUNCTION
#define uv_fs_realpath_REQUIRED_ARGC 3
#define uv_fs_realpath_OPTIONAL_ARGC 1
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
  mrb_value native_cb;
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooz|&", &loop, &req, &native_path, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Invocation */
  int native_return_value = uv_fs_realpath(native_loop, native_req, native_path, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_rename */
/* sha: ef3bba3d64bdbc43c9d34666edd7eea440a4999fabc2a5aebe7c8f2d1a3bfc62 */
#if BIND_uv_fs_rename_FUNCTION
#define uv_fs_rename_REQUIRED_ARGC 4
#define uv_fs_rename_OPTIONAL_ARGC 1
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
  mrb_value native_cb = mrb_nil_value();
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oozz|&", &loop, &req, &native_path, &native_new_path, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Invocation */
  int native_return_value = uv_fs_rename(native_loop, native_req, native_path, native_new_path, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_req_cleanup */
/* sha: f29a5a9aad642b7ccb6248ede4757b927962f86e87777d510c8b62766a850090 */
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
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
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
/* sha: 1ba06d59cfa9263669f857084937453974671b8d32003b61fa7e4271c5dcd476 */
#if BIND_uv_fs_rmdir_FUNCTION
#define uv_fs_rmdir_REQUIRED_ARGC 3
#define uv_fs_rmdir_OPTIONAL_ARGC 1
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
  mrb_value native_cb = mrb_nil_value();
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooz|&", &loop, &req, &native_path, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Invocation */
  int native_return_value = uv_fs_rmdir(native_loop, native_req, native_path, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_scandir */
/* sha: 0867d369815b10f2cd343bca56fe2a77d4cc16e73704eebe3a95bc7a64e1d3e2 */
#if BIND_uv_fs_scandir_FUNCTION
#define uv_fs_scandir_REQUIRED_ARGC 4
#define uv_fs_scandir_OPTIONAL_ARGC 1
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
  mrb_value native_cb = mrb_nil_value();
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oozi|&", &loop, &req, &native_path, &native_flags, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Invocation */
  int native_return_value = uv_fs_scandir(native_loop, native_req, native_path, native_flags, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_scandir_next */
/* sha: dd9024215d5bb0c32e7a6999f66f3e0acfee9f64e6e61f82521efd7766b602a6 */
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
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, ent, Dirent_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Dirent expected");
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
/* sha: 607c407f24c207dea932f1742aa3c2b333515854c37d7f50554d987b976ef102 */
#if BIND_uv_fs_sendfile_FUNCTION
#define uv_fs_sendfile_REQUIRED_ARGC 6
#define uv_fs_sendfile_OPTIONAL_ARGC 1
/* uv_fs_sendfile
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - out_fd: uv_file
 * - in_fd: uv_file
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
  mrb_int native_in_offset;
  mrb_int native_length;
  mrb_value native_cb = mrb_nil_value();
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooiioi|&", &loop, &req, &native_out_fd, &native_in_fd, &native_in_offset, &native_length, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Invocation */
  int native_return_value = uv_fs_sendfile(native_loop, native_req, native_out_fd, native_in_fd, native_in_offset, native_length, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_stat */
/* sha: 24bc2cd231dbc26ae01df89051a06b4481e61818b2363cfbaac23c66a2f7aff3 */
#if BIND_uv_fs_stat_FUNCTION
#define uv_fs_stat_REQUIRED_ARGC 3
#define uv_fs_stat_OPTIONAL_ARGC 1
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
  mrb_value native_cb = mrb_nil_value();
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooz|&", &loop, &req, &native_path, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Invocation */
  int native_return_value = uv_fs_stat(native_loop, native_req, native_path, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_symlink */
/* sha: caad841842462c4f619e23a87a1fc9ab0d07ea3bf47644387d3f3f27299178e9 */
#if BIND_uv_fs_symlink_FUNCTION
#define uv_fs_symlink_REQUIRED_ARGC 5
#define uv_fs_symlink_OPTIONAL_ARGC 1
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
  mrb_value native_cb = mrb_nil_value();
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oozzi|&", &loop, &req, &native_path, &native_new_path, &native_flags, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Invocation */
  int native_return_value = uv_fs_symlink(native_loop, native_req, native_path, native_new_path, native_flags, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_unlink */
/* sha: c0cd3b275ebaf56f3a557e146b01f84e5475c7ee492df674e33cd0251e9e654a */
#if BIND_uv_fs_unlink_FUNCTION
#define uv_fs_unlink_REQUIRED_ARGC 3
#define uv_fs_unlink_OPTIONAL_ARGC 1
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
  mrb_value native_cb;
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooz|&", &loop, &req, &native_path, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Invocation */
  int native_return_value = uv_fs_unlink(native_loop, native_req, native_path, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_utime */
/* sha: acc2640df84fe65bf8801afad19d61a68c5b91992ffe0b41c38459019c51e723 */
#if BIND_uv_fs_utime_FUNCTION
#define uv_fs_utime_REQUIRED_ARGC 5
#define uv_fs_utime_OPTIONAL_ARGC 1
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
  mrb_value native_cb;
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oozff|&", &loop, &req, &native_path, &native_atime, &native_mtime, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Invocation */
  int native_return_value = uv_fs_utime(native_loop, native_req, native_path, native_atime, native_mtime, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_fs_write */
/* sha: 4bd17bad6df67e0589ccfa4f93019edd3c11218c1081ae692ba7b2789f73ff8e */
#if BIND_uv_fs_write_FUNCTION
#define uv_fs_write_REQUIRED_ARGC 5
#define uv_fs_write_OPTIONAL_ARGC 1
/* uv_fs_write
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - req: uv_fs_t *
 * - file: uv_file
 * - bufs: const uv_buf_t []
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
  char * native_buf = NULL;
  mrb_int native_buf_len = 0;
  mrb_int native_offset;
  mrb_value native_cb;
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooisi|&", &loop, &req, &native_file, &native_buf, &native_buf_len, &native_offset, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, FS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FS expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_fs_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_fs_t(req));

  /* Unbox param: bufs */
  uv_buf_t buf;
  buf.len = native_buf_len;
  buf.base = native_buf;

  /* Invocation */
  int native_return_value = uv_fs_write(native_loop, native_req, native_file, &buf, 1, native_offset, thunk);

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
  if (native_return_value > MRB_INT_MAX) {
    mrb_raise(mrb, mrb_class_get(mrb, "RangeError"), "Out of range");
    return mrb_nil_value();
  }
  return mrb_fixnum_value(native_return_value);
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
  
  if (native_return_value > MRB_INT_MAX) {
    mrb_raise(mrb, mrb_class_get(mrb, "RangeError"), "Out of range");
    return mrb_nil_value();
  }
  return mrb_fixnum_value(native_return_value);
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_getaddrinfo */
/* sha: db80218c1eeaa7d42dab43ec450b7356e7258c8ae07c2f11ad97ed930b0349e0 */
#if BIND_uv_getaddrinfo_FUNCTION
#define uv_getaddrinfo_REQUIRED_ARGC 5
#define uv_getaddrinfo_OPTIONAL_ARGC 1
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
  mrb_get_args(mrb, "ooozz|o&", &loop, &req, &native_node, &native_service, &hints, &getaddrinfo_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, Getaddrinfo_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Getaddrinfo expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, Getaddrinfo_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Getaddrinfo expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, hints, Addrinfo_class(mrb)) || mrb_nil_p(hints)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Addrinfo expected");
    return mrb_nil_value();
  }
  uv_getaddrinfo_cb thunk = NULL;
  if (!mrb_nil_p(getaddrinfo_cb)) {
    thunk = mruby_uv_getaddrinfo_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_getaddrinfo_cb_thunk", /* TODO XXX */)
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_getaddrinfo_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_getaddrinfo_t(req));

  /* Unbox param: hints */
  const struct addrinfo * native_hints = (mrb_nil_p(hints) ? NULL : mruby_unbox_addrinfo(hints));

  /* Invocation */
  int native_return_value = uv_getaddrinfo(native_loop, native_req, thunk, native_node, native_service, native_hints);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_getnameinfo */
/* sha: f97cf565f89a022a13207a95fcafbb69963503d839de4cbb576d3ece53367edc */
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
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, Getnameinfo_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Getnameinfo expected");
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
/* sha: 397c3b343f51eeb9f3254f30b6fa9951717c092e292ccd0d26a17ab1b1dfefd2 */
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
  if (!mrb_obj_is_kind_of(mrb, rusage, RUsage_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "RUsage expected");
    return mrb_nil_value();
  }

  /* Unbox param: rusage */
  uv_rusage_t * native_rusage = (mrb_nil_p(rusage) ? NULL : mruby_unbox_uv_rusage_t(rusage));

  /* Invocation */
  int native_return_value = uv_getrusage(native_rusage);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_guess_handle */
/* sha: d1b97ff30511f27b3a2a818c968020633b1c8d9f60f99e2d0e30919f9642da35 */
#if BIND_uv_guess_handle_FUNCTION
#define uv_guess_handle_REQUIRED_ARGC 1
#define uv_guess_handle_OPTIONAL_ARGC 0
/* uv_guess_handle
 *
 * Parameters:
 * - file: uv_file
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
/* sha: f7c5a796f3e507a37708fe519a8aa11a6b00d7c85b08b3ff5938ceb22bf9e0c2 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Handle_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Handle expected");
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
/* sha: 54b289be62adbea8a5684cb59c344c9fa870d1bc22444be16c9a29505fbaa94f */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, idle, Idle_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Idle expected");
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
  mrb_get_args(mrb, "o&", &idle, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, idle, Idle_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Idle expected");
    return mrb_nil_value();
  }
  if (mrb_nil_p(cb)) {
    mrb_raise(mrb, E_ARGUMENT_ERROR, "uv_idle_start requires a block");
    return mrb_nil_value();
  }
  MRUBY_UV_PREPARE_HANDLE_THUNK(idle, "@mruby_uv_idle_cb_thunk", cb);

  /* Unbox param: idle */
  uv_idle_t * native_idle = (mrb_nil_p(idle) ? NULL : mruby_unbox_uv_idle_t(idle));

  /* Invocation */
  int native_return_value = uv_idle_start(native_idle, mruby_uv_idle_cb_thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_idle_stop */
/* sha: b4b4a35898bf065ed9b97c14ed8670da3deb9d974bcd78b23895e90307a63da8 */
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
  if (!mrb_obj_is_kind_of(mrb, idle, Idle_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Idle expected");
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
/* sha: 585a32cd72b9144d7b0ae8c9279b0636a6796152598243bbc4fae8e736ab7f67 */
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
  TODO_type_check_sockaddr_in_PTR(addr);

  /* Unbox param: addr */
  struct sockaddr_in * native_addr = TODO_mruby_unbox_sockaddr_in_PTR(addr);

  /* Invocation */
  int native_return_value = uv_ip4_addr(native_ip, native_port, native_addr);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_ip4_name */
/* sha: 894602d660871cffda2ae7df05c8679af5dda1089365dc6c07ff38b3089bbd1a */
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
  TODO_type_check_sockaddr_in_PTR(src);
  TODO_type_check_char_PTR(dst);

  /* Unbox param: src */
  const struct sockaddr_in * native_src = TODO_mruby_unbox_sockaddr_in_PTR(src);

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
/* sha: fe32e856fed738febb7b6388b6c918a041c584c2ff2501e32c7d225a98006cba */
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
  TODO_type_check_sockaddr_in6_PTR(addr);

  /* Unbox param: addr */
  struct sockaddr_in6 * native_addr = TODO_mruby_unbox_sockaddr_in6_PTR(addr);

  /* Invocation */
  int native_return_value = uv_ip6_addr(native_ip, native_port, native_addr);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_ip6_name */
/* sha: fa43fa0c28834606eef9a70290d9951fd314ebd0f8d2d68a8f90114e0a3734d8 */
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
  TODO_type_check_sockaddr_in6_PTR(src);
  TODO_type_check_char_PTR(dst);

  /* Unbox param: src */
  const struct sockaddr_in6 * native_src = TODO_mruby_unbox_sockaddr_in6_PTR(src);

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
/* sha: 0c63bfa6ad750c5963c328c183ce82135e561fc7ca07f52355b5405489209c29 */
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
  if (!mrb_obj_is_kind_of(mrb, handle, Handle_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Handle expected");
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
/* sha: 4d31adbe8df06881059dbdeda138bee796081310367b05833224df3576dd99fe */
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
  if (!mrb_obj_is_kind_of(mrb, handle, Handle_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Handle expected");
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
/* sha: 3295cd97358decdcdc771dfd7a29f9ba1aa829b4e211136045767a33bb2814ad */
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
  if (!mrb_obj_is_kind_of(mrb, handle, Stream_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Stream expected");
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
/* sha: 11383f922d6f4bae6db9c750aaff52a536ae734bcb0dfeffe0672e53f2cea78c */
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
  if (!mrb_obj_is_kind_of(mrb, handle, Stream_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Stream expected");
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
/* sha: 2938bfd557104b5aca2771116b31e0d70a9434a970861b71a3104458afedfa9b */
#if BIND_uv_key_create_FUNCTION
#define uv_key_create_REQUIRED_ARGC 1
#define uv_key_create_OPTIONAL_ARGC 0
/* uv_key_create
 *
 * Parameters:
 * - key: uv_key_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_key_create(mrb_state* mrb, mrb_value self) {
  mrb_value key;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &key);

  /* Type checking */
  TODO_type_check_uv_key_t_PTR(key);

  /* Unbox param: key */
  uv_key_t * native_key = TODO_mruby_unbox_uv_key_t_PTR(key);

  /* Invocation */
  int native_return_value = uv_key_create(native_key);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_key_delete */
/* sha: 9757536bb352b24598c98ea63595d420d314fd17a7c5f9748f3a14b518714926 */
#if BIND_uv_key_delete_FUNCTION
#define uv_key_delete_REQUIRED_ARGC 1
#define uv_key_delete_OPTIONAL_ARGC 0
/* uv_key_delete
 *
 * Parameters:
 * - key: uv_key_t *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_key_delete(mrb_state* mrb, mrb_value self) {
  mrb_value key;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &key);

  /* Type checking */
  TODO_type_check_uv_key_t_PTR(key);

  /* Unbox param: key */
  uv_key_t * native_key = TODO_mruby_unbox_uv_key_t_PTR(key);

  /* Invocation */
  uv_key_delete(native_key);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_key_get */
/* sha: e559cbfd41cb32c686081dd26bb4d266d93fa6b1333fb2eb1457266ed9ae7457 */
#if BIND_uv_key_get_FUNCTION
#define uv_key_get_REQUIRED_ARGC 1
#define uv_key_get_OPTIONAL_ARGC 0
/* uv_key_get
 *
 * Parameters:
 * - key: uv_key_t *
 * Return Type: void *
 */
mrb_value
mrb_UV_uv_key_get(mrb_state* mrb, mrb_value self) {
  mrb_value key;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &key);

  /* Type checking */
  TODO_type_check_uv_key_t_PTR(key);

  /* Unbox param: key */
  uv_key_t * native_key = TODO_mruby_unbox_uv_key_t_PTR(key);

  /* Invocation */
  void * native_return_value = uv_key_get(native_key);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_key_set */
/* sha: d5a5a3408132664f651d95f375dea43bedfd5a8574a26975593821da98f0724b */
#if BIND_uv_key_set_FUNCTION
#define uv_key_set_REQUIRED_ARGC 2
#define uv_key_set_OPTIONAL_ARGC 0
/* uv_key_set
 *
 * Parameters:
 * - key: uv_key_t *
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
  TODO_type_check_uv_key_t_PTR(key);
  TODO_type_check_void_PTR(value);

  /* Unbox param: key */
  uv_key_t * native_key = TODO_mruby_unbox_uv_key_t_PTR(key);

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
  mrb_get_args(mrb, "oi&", &stream, &native_backlog, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, stream, Stream_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Stream expected");
    return mrb_nil_value();
  }
  if (mrb_nil_p(cb)) {
    mrb_raise(mrb, E_ARGUMENT_ERROR, "uv_listen requires a block");
    return mrb_nil_value();
  }
  MRUBY_UV_PREPARE_HANDLE_THUNK(stream, "@mruby_uv_connection_cb_thunk", cb);

  /* Unbox param: stream */
  uv_stream_t * native_stream = (mrb_nil_p(stream) ? NULL : mruby_unbox_uv_stream_t(stream));

  /* Invocation */
  int native_return_value = uv_listen(native_stream, native_backlog, mruby_uv_connection_cb_thunk);

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
/* sha: f71d805620e3b7c1fa4e0d43e6e7200a5e9619672b9ef30aba8cdf9c0433903e */
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
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
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
/* sha: 09ccb8e395a8b9f40d86ab7f553aceb272325d966de8fcf243befc88db60dabd */
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
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
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
/* sha: 9239036cf7ae74188cf207476e0babad002cb1e96e51993abaa1dade61bb308a */
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
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
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
/* sha: 755e9c36cd51db190696c5fb49da2bb2714e6b0fee9ef4ff60e5e1d0e8ad1319 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
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
/* sha: 4273effcc2eb3a571d66a7802fd8aabcfb0d798e283f83943c9ba83ddd106466 */
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
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
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
/* sha: 03e81b5cdb42e25224c646eeb87594c1337ae5cb6b8c57b4f4fa90ca5685efb9 */
#if BIND_uv_mutex_destroy_FUNCTION
#define uv_mutex_destroy_REQUIRED_ARGC 1
#define uv_mutex_destroy_OPTIONAL_ARGC 0
/* uv_mutex_destroy
 *
 * Parameters:
 * - handle: uv_mutex_t *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_mutex_destroy(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  TODO_type_check_uv_mutex_t_PTR(handle);

  /* Unbox param: handle */
  uv_mutex_t * native_handle = TODO_mruby_unbox_uv_mutex_t_PTR(handle);

  /* Invocation */
  uv_mutex_destroy(native_handle);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_mutex_init */
/* sha: 56c107a11b5781edc936f6ca6a5b2eaea7d4c6558c6002b6d2a1f0a50512035d */
#if BIND_uv_mutex_init_FUNCTION
#define uv_mutex_init_REQUIRED_ARGC 1
#define uv_mutex_init_OPTIONAL_ARGC 0
/* uv_mutex_init
 *
 * Parameters:
 * - handle: uv_mutex_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_mutex_init(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  TODO_type_check_uv_mutex_t_PTR(handle);

  /* Unbox param: handle */
  uv_mutex_t * native_handle = TODO_mruby_unbox_uv_mutex_t_PTR(handle);

  /* Invocation */
  int native_return_value = uv_mutex_init(native_handle);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_mutex_lock */
/* sha: 925967d81c2172fbe3a209c0dbcf1b49c9d1f3cd29c89ce7599ee9638073c2ed */
#if BIND_uv_mutex_lock_FUNCTION
#define uv_mutex_lock_REQUIRED_ARGC 1
#define uv_mutex_lock_OPTIONAL_ARGC 0
/* uv_mutex_lock
 *
 * Parameters:
 * - handle: uv_mutex_t *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_mutex_lock(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  TODO_type_check_uv_mutex_t_PTR(handle);

  /* Unbox param: handle */
  uv_mutex_t * native_handle = TODO_mruby_unbox_uv_mutex_t_PTR(handle);

  /* Invocation */
  uv_mutex_lock(native_handle);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_mutex_trylock */
/* sha: 1ee32d1ad351016a0811d5bccdeed58a6e4c2f1f3c5b03ec75d5aace2b044a54 */
#if BIND_uv_mutex_trylock_FUNCTION
#define uv_mutex_trylock_REQUIRED_ARGC 1
#define uv_mutex_trylock_OPTIONAL_ARGC 0
/* uv_mutex_trylock
 *
 * Parameters:
 * - handle: uv_mutex_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_mutex_trylock(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  TODO_type_check_uv_mutex_t_PTR(handle);

  /* Unbox param: handle */
  uv_mutex_t * native_handle = TODO_mruby_unbox_uv_mutex_t_PTR(handle);

  /* Invocation */
  int native_return_value = uv_mutex_trylock(native_handle);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_mutex_unlock */
/* sha: e87b14b97b23ee3cfa17851b4c25df60c155b128df6b899badd69a84b8312379 */
#if BIND_uv_mutex_unlock_FUNCTION
#define uv_mutex_unlock_REQUIRED_ARGC 1
#define uv_mutex_unlock_OPTIONAL_ARGC 0
/* uv_mutex_unlock
 *
 * Parameters:
 * - handle: uv_mutex_t *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_mutex_unlock(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  TODO_type_check_uv_mutex_t_PTR(handle);

  /* Unbox param: handle */
  uv_mutex_t * native_handle = TODO_mruby_unbox_uv_mutex_t_PTR(handle);

  /* Invocation */
  uv_mutex_unlock(native_handle);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_now */
/* sha: 8e1011557cbcf4f708d4ab6e1d3b421d0a5627de023d70e4eef4659f60eb68d4 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
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
/* sha: cb5088fd385e84ae0fa1287005ef015c92e7418dd6d40818e86e2d4e831f5905 */
#if BIND_uv_once_FUNCTION
#define uv_once_REQUIRED_ARGC 2
#define uv_once_OPTIONAL_ARGC 0
/* uv_once
 *
 * Parameters:
 * - guard: uv_once_t *
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
  TODO_type_check_uv_once_t_PTR(guard);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(callback);

  /* Unbox param: guard */
  uv_once_t * native_guard = TODO_mruby_unbox_uv_once_t_PTR(guard);

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
#define uv_os_homedir_REQUIRED_ARGC 0
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
  /* Should be enough space... */
  size_t native_size = 1024;
  char * native_buffer = (char*)calloc(native_size, sizeof(char));

  /* Invocation */
  if (uv_os_homedir(native_buffer, &native_size)) {
    return mrb_nil_value();
  } else {
    mrb_value result = mrb_str_new(mrb, native_buffer, native_size);
    free(native_buffer);
    return result;
  }
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_pipe_bind */
/* sha: f4d37a2b6aab27cea41062c338dd58feaacf781e5cd0bc2cfdd11f4c4086da03 */
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
  if (!mrb_obj_is_kind_of(mrb, handle, Pipe_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Pipe expected");
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
/* sha: de2941eabbf35f6e206bc0cd2503a913972f7d25da705b243c8ec7abeedf7838 */
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
  if (!mrb_obj_is_kind_of(mrb, req, Connect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Connect expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, Pipe_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Pipe expected");
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
/* sha: 0aa064eadec6a2eddff97c3bf7822c0ea030c6bf7db6c684017190bccd3473e9 */
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
  if (!mrb_obj_is_kind_of(mrb, handle, Pipe_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Pipe expected");
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
/* sha: af348b01ff411a7229135da4962ffabf87ddadee572dd8381446998890af0e84 */
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
  if (!mrb_obj_is_kind_of(mrb, handle, Pipe_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Pipe expected");
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
/* sha: 15d9dd3867207829dc2b5c738328b22f1b31e86aaa83ce229ed29d4e63b628df */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, Pipe_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Pipe expected");
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
/* sha: 950e8677ff09a1a7b13e42aef6cbd9518a9ae0ff6d116b2dd17ac077a10bed31 */
#if BIND_uv_pipe_open_FUNCTION
#define uv_pipe_open_REQUIRED_ARGC 2
#define uv_pipe_open_OPTIONAL_ARGC 0
/* uv_pipe_open
 *
 * Parameters:
 * - arg1: uv_pipe_t *
 * - file: uv_file
 * Return Type: int
 */
mrb_value
mrb_UV_uv_pipe_open(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_file;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_file);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Pipe_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Pipe expected");
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
/* sha: 15db514023e759a55d1f78cdfb14ad7468693ef83c6f842096df293269c4bdf4 */
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
  if (!mrb_obj_is_kind_of(mrb, handle, Pipe_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Pipe expected");
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
/* sha: a61367975293ba0bd14309bb47490cbde1aeba197be9d3932cbf6285e886926c */
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
  if (!mrb_obj_is_kind_of(mrb, handle, Pipe_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Pipe expected");
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
/* sha: 254bb32a0a6e708c7ffb86b6c3f1170bab0ac9b76a25adb10500367b35acc7ce */
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
  if (!mrb_obj_is_kind_of(mrb, handle, Pipe_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Pipe expected");
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
/* sha: 1c1d883442c975eac82b1fa834dd001609d7ef505102709e2d896496300e5079 */
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
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, Poll_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Poll expected");
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
/* sha: 3fc4962991fa7f99181b24839d74d855c763f869fb9f1168cc7d7bc9e222e67c */
#if BIND_uv_poll_init_socket_FUNCTION
#define uv_poll_init_socket_REQUIRED_ARGC 3
#define uv_poll_init_socket_OPTIONAL_ARGC 0
/* uv_poll_init_socket
 *
 * Parameters:
 * - loop: uv_loop_t *
 * - handle: uv_poll_t *
 * - socket: uv_os_sock_t
 * Return Type: int
 */
mrb_value
mrb_UV_uv_poll_init_socket(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value handle;
  mrb_value socket;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &loop, &handle, &socket);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, Poll_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Poll expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_os_sock_t(socket);

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: handle */
  uv_poll_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_poll_t(handle));

  /* Unbox param: socket */
  uv_os_sock_t native_socket = TODO_mruby_unbox_uv_os_sock_t(socket);

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
  mrb_get_args(mrb, "oi&", &handle, &native_events, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, Poll_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Poll expected");
    return mrb_nil_value();
  }
  if (mrb_nil_p(cb)) {
    mrb_raise(mrb, E_ARGUMENT_ERROR, "uv_poll_start requires a block");
    return mrb_nil_value();
  }
  MRUBY_UV_PREPARE_HANDLE_THUNK(handle, "@mruby_uv_poll_cb_thunk", cb);

  /* Unbox param: handle */
  uv_poll_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_poll_t(handle));

  /* Invocation */
  int native_return_value = uv_poll_start(native_handle, native_events, mruby_uv_poll_cb_thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_poll_stop */
/* sha: 4fcba36334ffe58353fbe0ce34072b2f49a1c63abfba8d889e8acd045fe1ee8f */
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
  if (!mrb_obj_is_kind_of(mrb, handle, Poll_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Poll expected");
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
/* sha: cd73f00d7b4a4bd1783eac4652f71ec5429b7c5a5a077a89e9d3957bd3e49c26 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, prepare, Prepare_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Prepare expected");
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
  mrb_get_args(mrb, "o&", &prepare, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, prepare, Prepare_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Prepare expected");
    return mrb_nil_value();
  }
  if (mrb_nil_p(cb)) {
    mrb_raise(mrb, E_ARGUMENT_ERROR, "uv_prepare_start requires a block");
    return mrb_nil_value();
  }
  MRUBY_UV_PREPARE_HANDLE_THUNK(prepare, "@mruby_uv_prepare_cb_thunk", cb);

  /* Unbox param: prepare */
  uv_prepare_t * native_prepare = (mrb_nil_p(prepare) ? NULL : mruby_unbox_uv_prepare_t(prepare));

  /* Invocation */
  int native_return_value = uv_prepare_start(native_prepare, mruby_uv_prepare_cb_thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_prepare_stop */
/* sha: c07c8ee1594bf7c6e2422d109b65f455d6f85b1aacbc5f6ab63d4dbf0d644346 */
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
  if (!mrb_obj_is_kind_of(mrb, prepare, Prepare_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Prepare expected");
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
/* sha: 277a7c041193f92ded58e599d87f4b9d429877d8ee32e3a5817ac45284407b64 */
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
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
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
/* sha: f347dde3419ad8a503e609aa324e0bf5b72e8453497736fa3a119396adc2725f */
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
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
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
/* sha: 7cb4c1a8ffb04a862c4d7feacbadd70fe067b9e49c9e6a31b2ebae2f0b96dd3d */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Process_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Process expected");
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
/* sha: 99c002e4da27eeaf92673dee3ddb9642e80cbb600a6b35cf07c7e739e5545fb5 */
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
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, Work_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Work expected");
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
#define uv_read_start_REQUIRED_ARGC 2
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
  mrb_value stream;
  mrb_value read_cb;

  /* Fetch the args */
  mrb_get_args(mrb, "o&", &stream, &read_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, stream, Stream_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Stream expected");
    return mrb_nil_value();
  }
  if (mrb_nil_p(read_cb)) {
    mrb_raise(mrb, E_ARGUMENT_ERROR, "uv_read_start requires a block");
    return mrb_nil_value();
  }
  MRUBY_UV_PREPARE_HANDLE_THUNK(stream, "@mruby_uv_read_cb_thunk", read_cb);

  /* Unbox param: stream */
  uv_stream_t * native_stream = (mrb_nil_p(stream) ? NULL : mruby_unbox_uv_stream_t(stream));
  
  /* Invocation */
  int native_return_value = uv_read_start(native_stream, mruby_uv_alloc_cb, mruby_uv_read_cb_thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_read_stop */
/* sha: 06010047ad712b70d2338c39fbfe48b8f6bdc40c1c79790ee454b0c3d7ae036b */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Stream_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Stream expected");
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
/* sha: e6337a4b8795a882f14aa8dc0eb2464c71f443824b2df5aa5a60bb4770858dbd */
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
  if (!mrb_obj_is_kind_of(mrb, handle, Handle_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Handle expected");
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
/* sha: 419f2693228b3494aa753fe1c6aad8b1c490b84228847d23a9dbe731a1aa1735 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Handle_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Handle expected");
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
#define uv_run_REQUIRED_ARGC 1
#define uv_run_OPTIONAL_ARGC 1
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
  mrb_int native_mode = UV_RUN_DEFAULT;

  /* Fetch the args */
  mrb_get_args(mrb, "o|i", &arg1, &native_mode);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
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
/* sha: 96f36a84464142f3c43e052082175f6a08c198f80df16d904787ada32adc8102 */
#if BIND_uv_rwlock_destroy_FUNCTION
#define uv_rwlock_destroy_REQUIRED_ARGC 1
#define uv_rwlock_destroy_OPTIONAL_ARGC 0
/* uv_rwlock_destroy
 *
 * Parameters:
 * - rwlock: uv_rwlock_t *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_rwlock_destroy(mrb_state* mrb, mrb_value self) {
  mrb_value rwlock;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &rwlock);

  /* Type checking */
  TODO_type_check_uv_rwlock_t_PTR(rwlock);

  /* Unbox param: rwlock */
  uv_rwlock_t * native_rwlock = TODO_mruby_unbox_uv_rwlock_t_PTR(rwlock);

  /* Invocation */
  uv_rwlock_destroy(native_rwlock);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_rwlock_init */
/* sha: e7d83a4613962fdd9e205a896c746da87b456b00f3e494eba20f592c3dd95ac8 */
#if BIND_uv_rwlock_init_FUNCTION
#define uv_rwlock_init_REQUIRED_ARGC 1
#define uv_rwlock_init_OPTIONAL_ARGC 0
/* uv_rwlock_init
 *
 * Parameters:
 * - rwlock: uv_rwlock_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_rwlock_init(mrb_state* mrb, mrb_value self) {
  mrb_value rwlock;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &rwlock);

  /* Type checking */
  TODO_type_check_uv_rwlock_t_PTR(rwlock);

  /* Unbox param: rwlock */
  uv_rwlock_t * native_rwlock = TODO_mruby_unbox_uv_rwlock_t_PTR(rwlock);

  /* Invocation */
  int native_return_value = uv_rwlock_init(native_rwlock);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_rwlock_rdlock */
/* sha: 7db9dac5c5ddc9f8a8cc043da60c94c91218481e502c100656e5fb546d5ec185 */
#if BIND_uv_rwlock_rdlock_FUNCTION
#define uv_rwlock_rdlock_REQUIRED_ARGC 1
#define uv_rwlock_rdlock_OPTIONAL_ARGC 0
/* uv_rwlock_rdlock
 *
 * Parameters:
 * - rwlock: uv_rwlock_t *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_rwlock_rdlock(mrb_state* mrb, mrb_value self) {
  mrb_value rwlock;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &rwlock);

  /* Type checking */
  TODO_type_check_uv_rwlock_t_PTR(rwlock);

  /* Unbox param: rwlock */
  uv_rwlock_t * native_rwlock = TODO_mruby_unbox_uv_rwlock_t_PTR(rwlock);

  /* Invocation */
  uv_rwlock_rdlock(native_rwlock);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_rwlock_rdunlock */
/* sha: 645eea99ef2b9efb346a104b17c1eb46af95471d9cd9f51f31d0aa3edc8c178e */
#if BIND_uv_rwlock_rdunlock_FUNCTION
#define uv_rwlock_rdunlock_REQUIRED_ARGC 1
#define uv_rwlock_rdunlock_OPTIONAL_ARGC 0
/* uv_rwlock_rdunlock
 *
 * Parameters:
 * - rwlock: uv_rwlock_t *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_rwlock_rdunlock(mrb_state* mrb, mrb_value self) {
  mrb_value rwlock;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &rwlock);

  /* Type checking */
  TODO_type_check_uv_rwlock_t_PTR(rwlock);

  /* Unbox param: rwlock */
  uv_rwlock_t * native_rwlock = TODO_mruby_unbox_uv_rwlock_t_PTR(rwlock);

  /* Invocation */
  uv_rwlock_rdunlock(native_rwlock);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_rwlock_tryrdlock */
/* sha: e072e9108d8c1b20cddba2a8455ff5f814a3c82c5e352aa5e170c576410d9e67 */
#if BIND_uv_rwlock_tryrdlock_FUNCTION
#define uv_rwlock_tryrdlock_REQUIRED_ARGC 1
#define uv_rwlock_tryrdlock_OPTIONAL_ARGC 0
/* uv_rwlock_tryrdlock
 *
 * Parameters:
 * - rwlock: uv_rwlock_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_rwlock_tryrdlock(mrb_state* mrb, mrb_value self) {
  mrb_value rwlock;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &rwlock);

  /* Type checking */
  TODO_type_check_uv_rwlock_t_PTR(rwlock);

  /* Unbox param: rwlock */
  uv_rwlock_t * native_rwlock = TODO_mruby_unbox_uv_rwlock_t_PTR(rwlock);

  /* Invocation */
  int native_return_value = uv_rwlock_tryrdlock(native_rwlock);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_rwlock_trywrlock */
/* sha: 14015d8bb1e0cb5be5fad4303cfe7c57d8c27c7491cfb9e146a016fe6f70b295 */
#if BIND_uv_rwlock_trywrlock_FUNCTION
#define uv_rwlock_trywrlock_REQUIRED_ARGC 1
#define uv_rwlock_trywrlock_OPTIONAL_ARGC 0
/* uv_rwlock_trywrlock
 *
 * Parameters:
 * - rwlock: uv_rwlock_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_rwlock_trywrlock(mrb_state* mrb, mrb_value self) {
  mrb_value rwlock;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &rwlock);

  /* Type checking */
  TODO_type_check_uv_rwlock_t_PTR(rwlock);

  /* Unbox param: rwlock */
  uv_rwlock_t * native_rwlock = TODO_mruby_unbox_uv_rwlock_t_PTR(rwlock);

  /* Invocation */
  int native_return_value = uv_rwlock_trywrlock(native_rwlock);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_rwlock_wrlock */
/* sha: 79130b9d39584af90d233516c90d19060b2db5d45d17f5fca46b013ce90d44d1 */
#if BIND_uv_rwlock_wrlock_FUNCTION
#define uv_rwlock_wrlock_REQUIRED_ARGC 1
#define uv_rwlock_wrlock_OPTIONAL_ARGC 0
/* uv_rwlock_wrlock
 *
 * Parameters:
 * - rwlock: uv_rwlock_t *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_rwlock_wrlock(mrb_state* mrb, mrb_value self) {
  mrb_value rwlock;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &rwlock);

  /* Type checking */
  TODO_type_check_uv_rwlock_t_PTR(rwlock);

  /* Unbox param: rwlock */
  uv_rwlock_t * native_rwlock = TODO_mruby_unbox_uv_rwlock_t_PTR(rwlock);

  /* Invocation */
  uv_rwlock_wrlock(native_rwlock);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_rwlock_wrunlock */
/* sha: 2b12732a7507edaa57e681ca176f320d764ea49d6da3b4170d37d6554ea91bb6 */
#if BIND_uv_rwlock_wrunlock_FUNCTION
#define uv_rwlock_wrunlock_REQUIRED_ARGC 1
#define uv_rwlock_wrunlock_OPTIONAL_ARGC 0
/* uv_rwlock_wrunlock
 *
 * Parameters:
 * - rwlock: uv_rwlock_t *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_rwlock_wrunlock(mrb_state* mrb, mrb_value self) {
  mrb_value rwlock;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &rwlock);

  /* Type checking */
  TODO_type_check_uv_rwlock_t_PTR(rwlock);

  /* Unbox param: rwlock */
  uv_rwlock_t * native_rwlock = TODO_mruby_unbox_uv_rwlock_t_PTR(rwlock);

  /* Invocation */
  uv_rwlock_wrunlock(native_rwlock);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_sem_destroy */
/* sha: 8d5125092b13f8f5cb9b8966fda35b199fb6d092ffe21dbb4d8e3dd43e3306e3 */
#if BIND_uv_sem_destroy_FUNCTION
#define uv_sem_destroy_REQUIRED_ARGC 1
#define uv_sem_destroy_OPTIONAL_ARGC 0
/* uv_sem_destroy
 *
 * Parameters:
 * - sem: uv_sem_t *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_sem_destroy(mrb_state* mrb, mrb_value self) {
  mrb_value sem;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &sem);

  /* Type checking */
  TODO_type_check_uv_sem_t_PTR(sem);

  /* Unbox param: sem */
  uv_sem_t * native_sem = TODO_mruby_unbox_uv_sem_t_PTR(sem);

  /* Invocation */
  uv_sem_destroy(native_sem);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_sem_init */
/* sha: 65ffa864cfdbd60d93c44f0149247f587dea4518b2b2b6d0c673cafa0a00833a */
#if BIND_uv_sem_init_FUNCTION
#define uv_sem_init_REQUIRED_ARGC 2
#define uv_sem_init_OPTIONAL_ARGC 0
/* uv_sem_init
 *
 * Parameters:
 * - sem: uv_sem_t *
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
  TODO_type_check_uv_sem_t_PTR(sem);

  /* Unbox param: sem */
  uv_sem_t * native_sem = TODO_mruby_unbox_uv_sem_t_PTR(sem);

  /* Invocation */
  int native_return_value = uv_sem_init(native_sem, native_value);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_sem_post */
/* sha: 7346cd3fd3dbe8872cd780ac3214aa28264ee6de2a3fa96d04d498627a205e5a */
#if BIND_uv_sem_post_FUNCTION
#define uv_sem_post_REQUIRED_ARGC 1
#define uv_sem_post_OPTIONAL_ARGC 0
/* uv_sem_post
 *
 * Parameters:
 * - sem: uv_sem_t *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_sem_post(mrb_state* mrb, mrb_value self) {
  mrb_value sem;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &sem);

  /* Type checking */
  TODO_type_check_uv_sem_t_PTR(sem);

  /* Unbox param: sem */
  uv_sem_t * native_sem = TODO_mruby_unbox_uv_sem_t_PTR(sem);

  /* Invocation */
  uv_sem_post(native_sem);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_sem_trywait */
/* sha: 9206fa007d3b2d6fba190456f101138961ac2ddb70c533b402fc692f0615e6be */
#if BIND_uv_sem_trywait_FUNCTION
#define uv_sem_trywait_REQUIRED_ARGC 1
#define uv_sem_trywait_OPTIONAL_ARGC 0
/* uv_sem_trywait
 *
 * Parameters:
 * - sem: uv_sem_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_sem_trywait(mrb_state* mrb, mrb_value self) {
  mrb_value sem;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &sem);

  /* Type checking */
  TODO_type_check_uv_sem_t_PTR(sem);

  /* Unbox param: sem */
  uv_sem_t * native_sem = TODO_mruby_unbox_uv_sem_t_PTR(sem);

  /* Invocation */
  int native_return_value = uv_sem_trywait(native_sem);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_sem_wait */
/* sha: 278f326d74423ec4ed4bb9e7c01973492415201f2a0f27d8d37a7352f0b984da */
#if BIND_uv_sem_wait_FUNCTION
#define uv_sem_wait_REQUIRED_ARGC 1
#define uv_sem_wait_OPTIONAL_ARGC 0
/* uv_sem_wait
 *
 * Parameters:
 * - sem: uv_sem_t *
 * Return Type: void
 */
mrb_value
mrb_UV_uv_sem_wait(mrb_state* mrb, mrb_value self) {
  mrb_value sem;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &sem);

  /* Type checking */
  TODO_type_check_uv_sem_t_PTR(sem);

  /* Unbox param: sem */
  uv_sem_t * native_sem = TODO_mruby_unbox_uv_sem_t_PTR(sem);

  /* Invocation */
  uv_sem_wait(native_sem);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_send_buffer_size */
/* sha: 69a4723a6acb228808a4731f758a0b7f5f56df615c7f62c23695aaa295d58ad2 */
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
  if (!mrb_obj_is_kind_of(mrb, handle, Handle_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Handle expected");
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

/* MRUBY_BINDING: uv_shutdown */
/* sha: 3a6972eae758cecfeeb85e72d7e1ff1303247251bd58e2f4a7fe4d6e8dd8c144 */
#if BIND_uv_shutdown_FUNCTION
#define uv_shutdown_REQUIRED_ARGC 3
#define uv_shutdown_OPTIONAL_ARGC 0
/* uv_shutdown
 *
 * Parameters:
 * - req: uv_shutdown_t *
 * - handle: uv_stream_t *
 * - cb: uv_shutdown_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_shutdown(mrb_state* mrb, mrb_value self) {
  mrb_value req;
  mrb_value handle;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &req, &handle, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, req, Shutdown_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Shutdown expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, Stream_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Stream expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_shutdown_cb(cb);

  /* Unbox param: req */
  uv_shutdown_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_shutdown_t(req));

  /* Unbox param: handle */
  uv_stream_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_stream_t(handle));

  /* Unbox param: cb */
  uv_shutdown_cb native_cb = TODO_mruby_unbox_uv_shutdown_cb(cb);

  /* Invocation */
  int native_return_value = uv_shutdown(native_req, native_handle, native_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_signal_init */
/* sha: d6647c619c9a9bb32e9551ac00a535fe02161aa1415bb69a57091a2d3c9c22a8 */
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
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, Signal_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signal expected");
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
  mrb_get_args(mrb, "oi&", &handle, &native_signum, &signal_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, Signal_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signal expected");
    return mrb_nil_value();
  }
  if (mrb_nil_p(signal_cb)) {
    mrb_raise(mrb, E_ARGUMENT_ERROR, "uv_signal_start requires a block");
    return mrb_nil_value();
  }
  MRUBY_UV_PREPARE_HANDLE_THUNK(handle, "@mruby_uv_signal_cb_thunk", signal_cb);

  /* Unbox param: handle */
  uv_signal_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_signal_t(handle));

  /* Invocation */
  int native_return_value = uv_signal_start(native_handle, mruby_uv_signal_cb_thunk, native_signum);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_signal_stop */
/* sha: 9f63b57a80a2ea0556dd475a9e74afd02e67354b5a73e19d6e41ca5784254fde */
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
  if (!mrb_obj_is_kind_of(mrb, handle, Signal_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signal expected");
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
/* sha: bf07238a6017150b5000882e1e2461565887c69a7e09c0659c9d32f0ba269be0 */
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
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, Process_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Process expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, options, ProcessOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "ProcessOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: handle */
  uv_process_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_process_t(handle));

  /* Unbox param: options */
  const uv_process_options_t * native_options = (mrb_nil_p(options) ? NULL : mruby_unbox_uv_process_options_t(options));

  /* Invocation */
  int native_return_value = uv_spawn(native_loop, native_handle, native_options);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_stop */
/* sha: d54bbd7bf5e48948ca4a486d389a7ab700cd47f6296641fd36d157d3f9e737b6 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
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
/* sha: ff1818e38df3890143a92a99779aa191c12de4d1f69cda1a9b381415ae6f7811 */
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
  if (!mrb_obj_is_kind_of(mrb, handle, Stream_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Stream expected");
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
/* sha: 740a018dbd5b796b411f88c0cf43b5ffd5f546dea31c4ce85558fd45d7a580d1 */
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
  if (!mrb_obj_is_kind_of(mrb, handle, TCP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TCP expected");
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
/* sha: 6e11e4139c32ee3442bc54e8c87ecced94ce04e44939fc6865b35d54c07d3856 */
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
  if (!mrb_obj_is_kind_of(mrb, req, Connect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Connect expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, TCP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TCP expected");
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
/* sha: b5201cfa22c2b416143b14330f33f6b2d8bc64bfbe18d94d3e66e633356a0321 */
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
  if (!mrb_obj_is_kind_of(mrb, handle, TCP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TCP expected");
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
/* sha: 615162f2c8564caaa6a9433717bb8be5659dd95bbb9340ec4fabc8b6c7f5f3d3 */
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
  if (!mrb_obj_is_kind_of(mrb, handle, TCP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TCP expected");
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
/* sha: 6ee825f12bf7587ce3189b1c5d762400614b488265c66b4413fa7a7983db170f */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, TCP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TCP expected");
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
/* sha: de0f76dc0eb8275e437014af33bfc0d5715c6d405fe3c317917025d0a80a8b9c */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, TCP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TCP expected");
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
/* sha: ae595937cd7b8a58410b629cfce0627aa624ab7952f87a45607caacc2fce25ce */
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
  if (!mrb_obj_is_kind_of(mrb, handle, TCP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TCP expected");
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
/* sha: 169d09d0e0e66412451e37f8a1057ce09d7f0a39dae67f297012e2216b63a1b6 */
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
  if (!mrb_obj_is_kind_of(mrb, handle, TCP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TCP expected");
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
/* sha: b3b77d1e2ce65962e8b403c4f81975b7669d2b95fe424f010f9a0c50d2f8b7bb */
#if BIND_uv_tcp_open_FUNCTION
#define uv_tcp_open_REQUIRED_ARGC 2
#define uv_tcp_open_OPTIONAL_ARGC 0
/* uv_tcp_open
 *
 * Parameters:
 * - handle: uv_tcp_t *
 * - sock: uv_os_sock_t
 * Return Type: int
 */
mrb_value
mrb_UV_uv_tcp_open(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value sock;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &handle, &sock);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, TCP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TCP expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_os_sock_t(sock);

  /* Unbox param: handle */
  uv_tcp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_tcp_t(handle));

  /* Unbox param: sock */
  uv_os_sock_t native_sock = TODO_mruby_unbox_uv_os_sock_t(sock);

  /* Invocation */
  int native_return_value = uv_tcp_open(native_handle, native_sock);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_tcp_simultaneous_accepts */
/* sha: b5441fc458af2b334b84d78955bf5b28e27597ebe248c40c8492fe9bb50d8097 */
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
  if (!mrb_obj_is_kind_of(mrb, handle, TCP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TCP expected");
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
/* sha: 67dc48521009f2001e436b14a306433cf17e5a85ebe51e85ece88d9e02a50b51 */
#if BIND_uv_thread_create_FUNCTION
#define uv_thread_create_REQUIRED_ARGC 3
#define uv_thread_create_OPTIONAL_ARGC 0
/* uv_thread_create
 *
 * Parameters:
 * - tid: uv_thread_t *
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
  TODO_type_check_uv_thread_t_PTR(tid);
  TODO_type_check_uv_thread_cb(entry);
  TODO_type_check_void_PTR(arg);

  /* Unbox param: tid */
  uv_thread_t * native_tid = TODO_mruby_unbox_uv_thread_t_PTR(tid);

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
/* sha: 894fec8218ae34ce13ae7a52fd081eed6c25452efd34560d7786cc3a12e2f838 */
#if BIND_uv_thread_equal_FUNCTION
#define uv_thread_equal_REQUIRED_ARGC 2
#define uv_thread_equal_OPTIONAL_ARGC 0
/* uv_thread_equal
 *
 * Parameters:
 * - t1: const uv_thread_t *
 * - t2: const uv_thread_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_thread_equal(mrb_state* mrb, mrb_value self) {
  mrb_value t1;
  mrb_value t2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &t1, &t2);

  /* Type checking */
  TODO_type_check_uv_thread_t_PTR(t1);
  TODO_type_check_uv_thread_t_PTR(t2);

  /* Unbox param: t1 */
  const uv_thread_t * native_t1 = TODO_mruby_unbox_uv_thread_t_PTR(t1);

  /* Unbox param: t2 */
  const uv_thread_t * native_t2 = TODO_mruby_unbox_uv_thread_t_PTR(t2);

  /* Invocation */
  int native_return_value = uv_thread_equal(native_t1, native_t2);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_thread_join */
/* sha: f0e937aa881526346fe9b259bbd5836bb65cf128473e936b4bf1f281b30d921a */
#if BIND_uv_thread_join_FUNCTION
#define uv_thread_join_REQUIRED_ARGC 1
#define uv_thread_join_OPTIONAL_ARGC 0
/* uv_thread_join
 *
 * Parameters:
 * - tid: uv_thread_t *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_thread_join(mrb_state* mrb, mrb_value self) {
  mrb_value tid;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &tid);

  /* Type checking */
  TODO_type_check_uv_thread_t_PTR(tid);

  /* Unbox param: tid */
  uv_thread_t * native_tid = TODO_mruby_unbox_uv_thread_t_PTR(tid);

  /* Invocation */
  int native_return_value = uv_thread_join(native_tid);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_thread_self */
/* sha: aef7fc40f72b7b58a60fd89568eda5fc3ea67f8271cb5f33ec91ccfdcfe7433b */
#if BIND_uv_thread_self_FUNCTION
#define uv_thread_self_REQUIRED_ARGC 0
#define uv_thread_self_OPTIONAL_ARGC 0
/* uv_thread_self
 *
 * Parameters: None
 * Return Type: uv_thread_t
 */
mrb_value
mrb_UV_uv_thread_self(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uv_thread_t native_return_value = uv_thread_self();

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_uv_thread_t(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_timer_again */
/* sha: 0cc018a1f24154b86706e076bb54c015f5fe9ad12e1f5fdfa31fcd33eb9af5e2 */
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
  if (!mrb_obj_is_kind_of(mrb, handle, Timer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Timer expected");
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
/* sha: 606ee4d9e41a1853fdff48f15529cd178311e695c8ca0650839f77afae3ac5b3 */
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
  if (!mrb_obj_is_kind_of(mrb, handle, Timer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Timer expected");
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
/* sha: d6c9b4b22861004c96613926b3597e9bf74fb5f98b7cb92c37b134f9781940ff */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, Timer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Timer expected");
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
/* sha: c18e13020cd65a7a874dc325432668aa4f4fb57af2ad5428a332595f81fddd6e */
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
  if (!mrb_obj_is_kind_of(mrb, handle, Timer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Timer expected");
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
  mrb_int native_timeout;
  mrb_int native_repeat;

  /* Fetch the args */
  mrb_get_args(mrb, "oii&", &handle, &native_timeout, &native_repeat, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, Timer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Timer expected");
    return mrb_nil_value();
  }
  if (mrb_nil_p(cb)) {
    mrb_raise(mrb, E_ARGUMENT_ERROR, "uv_timer_start requires a block");
    return mrb_nil_value();
  }
  MRUBY_UV_PREPARE_HANDLE_THUNK(handle, "@mruby_uv_timer_cb_thunk", cb);  

  /* Unbox param: handle */
  uv_timer_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_timer_t(handle));

  /* Invocation */
  int native_return_value = uv_timer_start(native_handle, mruby_uv_timer_cb_thunk, native_timeout, native_repeat);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_timer_stop */
/* sha: 2b1949b639302e7a6b017640a2d331ded0f2f5380245c1404827f96bee11e906 */
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
  if (!mrb_obj_is_kind_of(mrb, handle, Timer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Timer expected");
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
/* sha: 32be551c2c4a68002c571661dcc1281bc05ebfe4d43130f3efbfac7612e32933 */
#if BIND_uv_try_write_FUNCTION
#define uv_try_write_REQUIRED_ARGC 3
#define uv_try_write_OPTIONAL_ARGC 0
/* uv_try_write
 *
 * Parameters:
 * - handle: uv_stream_t *
 * - bufs: const uv_buf_t []
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
  if (!mrb_obj_is_kind_of(mrb, handle, Stream_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Stream expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_buf_t_[](bufs);

  /* Unbox param: handle */
  uv_stream_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_stream_t(handle));

  /* Unbox param: bufs */
  const uv_buf_t [] native_bufs = TODO_mruby_unbox_uv_buf_t_[](bufs);

  /* Invocation */
  int native_return_value = uv_try_write(native_handle, native_bufs, native_nbufs);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_tty_get_winsize */
/* sha: 8fb68040a4993ad083494ccad535dc5b21785ab1a96d1045066b059039af980c */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, TTY_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TTY expected");
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
/* sha: 0c5d5ca5d64d798ffd75492e495a9730edbf8e0f67aef4e5f8ab35dcba9c28b6 */
#if BIND_uv_tty_init_FUNCTION
#define uv_tty_init_REQUIRED_ARGC 4
#define uv_tty_init_OPTIONAL_ARGC 0
/* uv_tty_init
 *
 * Parameters:
 * - arg1: uv_loop_t *
 * - arg2: uv_tty_t *
 * - fd: uv_file
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, TTY_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TTY expected");
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
/* sha: 4dde683d8aba2c4dba5ce1ca3b292be6e3ff2a9d864ab9849f570c87259d6b90 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, TTY_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TTY expected");
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
/* sha: e235a0f231e7639d089278fea9e38c3e5f955edaa7d5d29f7b27e226cadde504 */
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
  if (!mrb_obj_is_kind_of(mrb, handle, UDP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UDP expected");
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
/* sha: 49ed15cbbe31e2213589711a4dd04d450fa570abd573fd2b1210d23708a55e9c */
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
  if (!mrb_obj_is_kind_of(mrb, handle, UDP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UDP expected");
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
/* sha: 158f2ea608323de0db9c3ecb71b79feac02b42e8660c758c147be297fa23e93d */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, UDP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UDP expected");
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
/* sha: 52e1f67e3afe8da4145740d09fc097e91ad5cd312538dcb30601f29b2f606d64 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, UDP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UDP expected");
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
/* sha: 1b7b99f53e383779933aa5ba9521115b8b92a3c25f5eb20c3816ad6c227635f2 */
#if BIND_uv_udp_open_FUNCTION
#define uv_udp_open_REQUIRED_ARGC 2
#define uv_udp_open_OPTIONAL_ARGC 0
/* uv_udp_open
 *
 * Parameters:
 * - handle: uv_udp_t *
 * - sock: uv_os_sock_t
 * Return Type: int
 */
mrb_value
mrb_UV_uv_udp_open(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value sock;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &handle, &sock);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UDP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UDP expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_os_sock_t(sock);

  /* Unbox param: handle */
  uv_udp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_udp_t(handle));

  /* Unbox param: sock */
  uv_os_sock_t native_sock = TODO_mruby_unbox_uv_os_sock_t(sock);

  /* Invocation */
  int native_return_value = uv_udp_open(native_handle, native_sock);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_udp_recv_start */
/* sha: 20470a1f65b39c0b80a7be4856886e505a0771e91c651c9e46f1eb49ff0b5522 */
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
  if (!mrb_obj_is_kind_of(mrb, handle, UDP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UDP expected");
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
/* sha: 06985c6d1cd446359044e03ba43e4095978281f015c35616115b6f9f425f655a */
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
  if (!mrb_obj_is_kind_of(mrb, handle, UDP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UDP expected");
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
/* sha: b84de8f0dc3158ffb71ec8880c6957632ad621b4e992e97f35159627ed3e4e3c */
#if BIND_uv_udp_send_FUNCTION
#define uv_udp_send_REQUIRED_ARGC 6
#define uv_udp_send_OPTIONAL_ARGC 0
/* uv_udp_send
 *
 * Parameters:
 * - req: uv_udp_send_t *
 * - handle: uv_udp_t *
 * - bufs: const uv_buf_t []
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
  if (!mrb_obj_is_kind_of(mrb, req, UDPSend_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UDPSend expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, UDP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UDP expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_buf_t_[](bufs);
  TODO_type_check_sockaddr_PTR(addr);
  TODO_type_check_uv_udp_send_cb(send_cb);

  /* Unbox param: req */
  uv_udp_send_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_udp_send_t(req));

  /* Unbox param: handle */
  uv_udp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_udp_t(handle));

  /* Unbox param: bufs */
  const uv_buf_t [] native_bufs = TODO_mruby_unbox_uv_buf_t_[](bufs);

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
/* sha: 888a8bae55d7fa451b4cf069ddcb3dd84f05bd871815c7961478b07c262d3679 */
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
  if (!mrb_obj_is_kind_of(mrb, handle, UDP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UDP expected");
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
/* sha: 0536d185fde28b57d87ecf467cdbdf921820a6058819e11c28ba0f2e16746e95 */
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
  if (!mrb_obj_is_kind_of(mrb, handle, UDP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UDP expected");
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
/* sha: 8b7efea8d32d377983b0646312754da107c2d3912ede12e86be09f37f29a35b0 */
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
  if (!mrb_obj_is_kind_of(mrb, handle, UDP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UDP expected");
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
/* sha: ed62d5826be1c315aa5ad724f23c1a2bff7861e9c7a5b94309c5c369da4de825 */
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
  if (!mrb_obj_is_kind_of(mrb, handle, UDP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UDP expected");
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
/* sha: f9cd97e72e62a8fa21d513d20ef7b66d4706bd1ce89f351537a6c0bdc04a0928 */
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
  if (!mrb_obj_is_kind_of(mrb, handle, UDP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UDP expected");
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
/* sha: 807c6693a569c65f1a70ff4b1f68c624f17f8149ff48becdd469751dab41414c */
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
  if (!mrb_obj_is_kind_of(mrb, handle, UDP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UDP expected");
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
/* sha: 77a3f7b1ce1cc72ea36d4c74c928055929eb4695a5e7f905b0ee87fd46722293 */
#if BIND_uv_udp_try_send_FUNCTION
#define uv_udp_try_send_REQUIRED_ARGC 4
#define uv_udp_try_send_OPTIONAL_ARGC 0
/* uv_udp_try_send
 *
 * Parameters:
 * - handle: uv_udp_t *
 * - bufs: const uv_buf_t []
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
  if (!mrb_obj_is_kind_of(mrb, handle, UDP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UDP expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_buf_t_[](bufs);
  TODO_type_check_sockaddr_PTR(addr);

  /* Unbox param: handle */
  uv_udp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_udp_t(handle));

  /* Unbox param: bufs */
  const uv_buf_t [] native_bufs = TODO_mruby_unbox_uv_buf_t_[](bufs);

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
/* sha: ff976d43240f176c697f2bd3565a3e5b67c86c25913c7709465930153a0a0977 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Handle_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Handle expected");
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
/* sha: e3f0f5c7b033a468768b29a2716abfa900f160897cda00e2c1f7075224170dec */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
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
/* sha: 8e2b2b3e49fc539ec97c89fb4576849ed55e11fa2e74a43b427b5ca080442423 */
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
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
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
/* sha: 0f6f5ea899b10513fd603bb44a455621d422361359f4d6fa55be86238eba7e22 */
#if BIND_uv_write_FUNCTION
#define uv_write_REQUIRED_ARGC 5
#define uv_write_OPTIONAL_ARGC 0
/* uv_write
 *
 * Parameters:
 * - req: uv_write_t *
 * - handle: uv_stream_t *
 * - bufs: const uv_buf_t []
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
  if (!mrb_obj_is_kind_of(mrb, req, Write_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Write expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, Stream_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Stream expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_buf_t_[](bufs);
  TODO_type_check_uv_write_cb(cb);

  /* Unbox param: req */
  uv_write_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_write_t(req));

  /* Unbox param: handle */
  uv_stream_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_stream_t(handle));

  /* Unbox param: bufs */
  const uv_buf_t [] native_bufs = TODO_mruby_unbox_uv_buf_t_[](bufs);

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
/* sha: 3601ef15dc6d2f1aa27b2f2a0962781388b27ee168d615a7c40302be63e5bc3a */
#if BIND_uv_write2_FUNCTION
#define uv_write2_REQUIRED_ARGC 6
#define uv_write2_OPTIONAL_ARGC 0
/* uv_write2
 *
 * Parameters:
 * - req: uv_write_t *
 * - handle: uv_stream_t *
 * - bufs: const uv_buf_t []
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
  if (!mrb_obj_is_kind_of(mrb, req, Write_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Write expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, Stream_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Stream expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_buf_t_[](bufs);
  if (!mrb_obj_is_kind_of(mrb, send_handle, Stream_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Stream expected");
    return mrb_nil_value();
  }
  TODO_type_check_uv_write_cb(cb);

  /* Unbox param: req */
  uv_write_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_write_t(req));

  /* Unbox param: handle */
  uv_stream_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_stream_t(handle));

  /* Unbox param: bufs */
  const uv_buf_t [] native_bufs = TODO_mruby_unbox_uv_buf_t_[](bufs);

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
/* MRUBY_BINDING: pre_module_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
  
  struct RClass* UV_module = mrb_define_module(mrb, "UV");
  mruby_UV_define_macro_constants(mrb);
  mruby_UV_define_enum_constants(mrb);

/* MRUBY_BINDING: pre_class_initializations */
/* sha: user_defined */
#if BIND_Handle_TYPE
  mrb_UV_Handle_init(mrb);
#endif
#if BIND_Req_TYPE
  mrb_UV_Req_init(mrb);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: class_initializations */
/* sha: 406dfe30f03f9d7afb50617f0262bf705ee011b3fce4bc5fda0c501ba4dc0223 */
#if BIND_Addrinfo_TYPE
  mrb_UV_Addrinfo_init(mrb);
#endif
#if BIND_Async_TYPE
  mrb_UV_Async_init(mrb);
#endif
#if BIND_Check_TYPE
  mrb_UV_Check_init(mrb);
#endif
#if BIND_Connect_TYPE
  mrb_UV_Connect_init(mrb);
#endif
#if BIND_CPUInfo_TYPE
  mrb_UV_CPUInfo_init(mrb);
#endif
#if BIND_CPUTimes_TYPE
  mrb_UV_CPUTimes_init(mrb);
#endif
#if BIND_Dirent_TYPE
  mrb_UV_Dirent_init(mrb);
#endif
#if BIND_FS_TYPE
  mrb_UV_FS_init(mrb);
#endif
#if BIND_FSEvent_TYPE
  mrb_UV_FSEvent_init(mrb);
#endif
#if BIND_FSPoll_TYPE
  mrb_UV_FSPoll_init(mrb);
#endif
#if BIND_Getaddrinfo_TYPE
  mrb_UV_Getaddrinfo_init(mrb);
#endif
#if BIND_Getnameinfo_TYPE
  mrb_UV_Getnameinfo_init(mrb);
#endif
#if BIND_Handle_TYPE
  mrb_UV_Handle_init(mrb);
#endif
#if BIND_Idle_TYPE
  mrb_UV_Idle_init(mrb);
#endif
#if BIND_InterfaceAddress_TYPE
  mrb_UV_InterfaceAddress_init(mrb);
#endif
#if BIND_Loop_TYPE
  mrb_UV_Loop_init(mrb);
#endif
#if BIND_Pipe_TYPE
  mrb_UV_Pipe_init(mrb);
#endif
#if BIND_Poll_TYPE
  mrb_UV_Poll_init(mrb);
#endif
#if BIND_Prepare_TYPE
  mrb_UV_Prepare_init(mrb);
#endif
#if BIND_Process_TYPE
  mrb_UV_Process_init(mrb);
#endif
#if BIND_ProcessOptions_TYPE
  mrb_UV_ProcessOptions_init(mrb);
#endif
#if BIND_Req_TYPE
  mrb_UV_Req_init(mrb);
#endif
#if BIND_RUsage_TYPE
  mrb_UV_RUsage_init(mrb);
#endif
#if BIND_Shutdown_TYPE
  mrb_UV_Shutdown_init(mrb);
#endif
#if BIND_Signal_TYPE
  mrb_UV_Signal_init(mrb);
#endif
#if BIND_Stat_TYPE
  mrb_UV_Stat_init(mrb);
#endif
#if BIND_STDIOContainer_TYPE
  mrb_UV_STDIOContainer_init(mrb);
#endif
#if BIND_Stream_TYPE
  mrb_UV_Stream_init(mrb);
#endif
#if BIND_TCP_TYPE
  mrb_UV_TCP_init(mrb);
#endif
#if BIND_Timer_TYPE
  mrb_UV_Timer_init(mrb);
#endif
#if BIND_Timespec_TYPE
  mrb_UV_Timespec_init(mrb);
#endif
#if BIND_Timeval_TYPE
  mrb_UV_Timeval_init(mrb);
#endif
#if BIND_TTY_TYPE
  mrb_UV_TTY_init(mrb);
#endif
#if BIND_UDP_TYPE
  mrb_UV_UDP_init(mrb);
#endif
#if BIND_UDPSend_TYPE
  mrb_UV_UDPSend_init(mrb);
#endif
#if BIND_Work_TYPE
  mrb_UV_Work_init(mrb);
#endif
#if BIND_Write_TYPE
  mrb_UV_Write_init(mrb);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: pre_global_function_initializations */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: global_function_definitions */
/* sha: 217b7bb83bdc7d73aaa38688a3a622d41500e2c0427124b9b6e58e0d4cbf71d6 */
  /*
   * Global Functions
   */
#if BIND_uv_accept_FUNCTION
  mrb_define_class_method(mrb, UV_module, "accept", mrb_UV_uv_accept, MRB_ARGS_ARG(uv_accept_REQUIRED_ARGC, uv_accept_OPTIONAL_ARGC));
#endif
#if BIND_uv_async_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "async_init", mrb_UV_uv_async_init, MRB_ARGS_ARG(uv_async_init_REQUIRED_ARGC, uv_async_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_async_send_FUNCTION
  mrb_define_class_method(mrb, UV_module, "async_send", mrb_UV_uv_async_send, MRB_ARGS_ARG(uv_async_send_REQUIRED_ARGC, uv_async_send_OPTIONAL_ARGC));
#endif
#if BIND_uv_backend_fd_FUNCTION
  mrb_define_class_method(mrb, UV_module, "backend_fd", mrb_UV_uv_backend_fd, MRB_ARGS_ARG(uv_backend_fd_REQUIRED_ARGC, uv_backend_fd_OPTIONAL_ARGC));
#endif
#if BIND_uv_backend_timeout_FUNCTION
  mrb_define_class_method(mrb, UV_module, "backend_timeout", mrb_UV_uv_backend_timeout, MRB_ARGS_ARG(uv_backend_timeout_REQUIRED_ARGC, uv_backend_timeout_OPTIONAL_ARGC));
#endif
#if BIND_uv_barrier_destroy_FUNCTION
  mrb_define_class_method(mrb, UV_module, "barrier_destroy", mrb_UV_uv_barrier_destroy, MRB_ARGS_ARG(uv_barrier_destroy_REQUIRED_ARGC, uv_barrier_destroy_OPTIONAL_ARGC));
#endif
#if BIND_uv_barrier_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "barrier_init", mrb_UV_uv_barrier_init, MRB_ARGS_ARG(uv_barrier_init_REQUIRED_ARGC, uv_barrier_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_barrier_wait_FUNCTION
  mrb_define_class_method(mrb, UV_module, "barrier_wait", mrb_UV_uv_barrier_wait, MRB_ARGS_ARG(uv_barrier_wait_REQUIRED_ARGC, uv_barrier_wait_OPTIONAL_ARGC));
#endif
#if BIND_uv_buf_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "buf_init", mrb_UV_uv_buf_init, MRB_ARGS_ARG(uv_buf_init_REQUIRED_ARGC, uv_buf_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_cancel_FUNCTION
  mrb_define_class_method(mrb, UV_module, "cancel", mrb_UV_uv_cancel, MRB_ARGS_ARG(uv_cancel_REQUIRED_ARGC, uv_cancel_OPTIONAL_ARGC));
#endif
#if BIND_uv_chdir_FUNCTION
  mrb_define_class_method(mrb, UV_module, "chdir", mrb_UV_uv_chdir, MRB_ARGS_ARG(uv_chdir_REQUIRED_ARGC, uv_chdir_OPTIONAL_ARGC));
#endif
#if BIND_uv_check_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "check_init", mrb_UV_uv_check_init, MRB_ARGS_ARG(uv_check_init_REQUIRED_ARGC, uv_check_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_check_start_FUNCTION
  mrb_define_class_method(mrb, UV_module, "check_start", mrb_UV_uv_check_start, MRB_ARGS_ARG(uv_check_start_REQUIRED_ARGC, uv_check_start_OPTIONAL_ARGC));
#endif
#if BIND_uv_check_stop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "check_stop", mrb_UV_uv_check_stop, MRB_ARGS_ARG(uv_check_stop_REQUIRED_ARGC, uv_check_stop_OPTIONAL_ARGC));
#endif
#if BIND_uv_close_FUNCTION
  mrb_define_class_method(mrb, UV_module, "close", mrb_UV_uv_close, MRB_ARGS_ARG(uv_close_REQUIRED_ARGC, uv_close_OPTIONAL_ARGC));
#endif
#if BIND_uv_cond_broadcast_FUNCTION
  mrb_define_class_method(mrb, UV_module, "cond_broadcast", mrb_UV_uv_cond_broadcast, MRB_ARGS_ARG(uv_cond_broadcast_REQUIRED_ARGC, uv_cond_broadcast_OPTIONAL_ARGC));
#endif
#if BIND_uv_cond_destroy_FUNCTION
  mrb_define_class_method(mrb, UV_module, "cond_destroy", mrb_UV_uv_cond_destroy, MRB_ARGS_ARG(uv_cond_destroy_REQUIRED_ARGC, uv_cond_destroy_OPTIONAL_ARGC));
#endif
#if BIND_uv_cond_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "cond_init", mrb_UV_uv_cond_init, MRB_ARGS_ARG(uv_cond_init_REQUIRED_ARGC, uv_cond_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_cond_signal_FUNCTION
  mrb_define_class_method(mrb, UV_module, "cond_signal", mrb_UV_uv_cond_signal, MRB_ARGS_ARG(uv_cond_signal_REQUIRED_ARGC, uv_cond_signal_OPTIONAL_ARGC));
#endif
#if BIND_uv_cond_timedwait_FUNCTION
  mrb_define_class_method(mrb, UV_module, "cond_timedwait", mrb_UV_uv_cond_timedwait, MRB_ARGS_ARG(uv_cond_timedwait_REQUIRED_ARGC, uv_cond_timedwait_OPTIONAL_ARGC));
#endif
#if BIND_uv_cond_wait_FUNCTION
  mrb_define_class_method(mrb, UV_module, "cond_wait", mrb_UV_uv_cond_wait, MRB_ARGS_ARG(uv_cond_wait_REQUIRED_ARGC, uv_cond_wait_OPTIONAL_ARGC));
#endif
#if BIND_uv_cpu_info_FUNCTION
  mrb_define_class_method(mrb, UV_module, "cpu_info", mrb_UV_uv_cpu_info, MRB_ARGS_ARG(uv_cpu_info_REQUIRED_ARGC, uv_cpu_info_OPTIONAL_ARGC));
#endif
#if BIND_uv_cwd_FUNCTION
  mrb_define_class_method(mrb, UV_module, "cwd", mrb_UV_uv_cwd, MRB_ARGS_ARG(uv_cwd_REQUIRED_ARGC, uv_cwd_OPTIONAL_ARGC));
#endif
#if BIND_uv_default_loop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "default_loop", mrb_UV_uv_default_loop, MRB_ARGS_ARG(uv_default_loop_REQUIRED_ARGC, uv_default_loop_OPTIONAL_ARGC));
#endif
#if BIND_uv_disable_stdio_inheritance_FUNCTION
  mrb_define_class_method(mrb, UV_module, "disable_stdio_inheritance", mrb_UV_uv_disable_stdio_inheritance, MRB_ARGS_ARG(uv_disable_stdio_inheritance_REQUIRED_ARGC, uv_disable_stdio_inheritance_OPTIONAL_ARGC));
#endif
#if BIND_uv_dlclose_FUNCTION
  mrb_define_class_method(mrb, UV_module, "dlclose", mrb_UV_uv_dlclose, MRB_ARGS_ARG(uv_dlclose_REQUIRED_ARGC, uv_dlclose_OPTIONAL_ARGC));
#endif
#if BIND_uv_dlerror_FUNCTION
  mrb_define_class_method(mrb, UV_module, "dlerror", mrb_UV_uv_dlerror, MRB_ARGS_ARG(uv_dlerror_REQUIRED_ARGC, uv_dlerror_OPTIONAL_ARGC));
#endif
#if BIND_uv_dlopen_FUNCTION
  mrb_define_class_method(mrb, UV_module, "dlopen", mrb_UV_uv_dlopen, MRB_ARGS_ARG(uv_dlopen_REQUIRED_ARGC, uv_dlopen_OPTIONAL_ARGC));
#endif
#if BIND_uv_dlsym_FUNCTION
  mrb_define_class_method(mrb, UV_module, "dlsym", mrb_UV_uv_dlsym, MRB_ARGS_ARG(uv_dlsym_REQUIRED_ARGC, uv_dlsym_OPTIONAL_ARGC));
#endif
#if BIND_uv_err_name_FUNCTION
  mrb_define_class_method(mrb, UV_module, "err_name", mrb_UV_uv_err_name, MRB_ARGS_ARG(uv_err_name_REQUIRED_ARGC, uv_err_name_OPTIONAL_ARGC));
#endif
#if BIND_uv_exepath_FUNCTION
  mrb_define_class_method(mrb, UV_module, "exepath", mrb_UV_uv_exepath, MRB_ARGS_ARG(uv_exepath_REQUIRED_ARGC, uv_exepath_OPTIONAL_ARGC));
#endif
#if BIND_uv_fileno_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fileno", mrb_UV_uv_fileno, MRB_ARGS_ARG(uv_fileno_REQUIRED_ARGC, uv_fileno_OPTIONAL_ARGC));
#endif
#if BIND_uv_free_cpu_info_FUNCTION
  mrb_define_class_method(mrb, UV_module, "free_cpu_info", mrb_UV_uv_free_cpu_info, MRB_ARGS_ARG(uv_free_cpu_info_REQUIRED_ARGC, uv_free_cpu_info_OPTIONAL_ARGC));
#endif
#if BIND_uv_free_interface_addresses_FUNCTION
  mrb_define_class_method(mrb, UV_module, "free_interface_addresses", mrb_UV_uv_free_interface_addresses, MRB_ARGS_ARG(uv_free_interface_addresses_REQUIRED_ARGC, uv_free_interface_addresses_OPTIONAL_ARGC));
#endif
#if BIND_uv_freeaddrinfo_FUNCTION
  mrb_define_class_method(mrb, UV_module, "freeaddrinfo", mrb_UV_uv_freeaddrinfo, MRB_ARGS_ARG(uv_freeaddrinfo_REQUIRED_ARGC, uv_freeaddrinfo_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_access_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_access", mrb_UV_uv_fs_access, MRB_ARGS_ARG(uv_fs_access_REQUIRED_ARGC, uv_fs_access_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_chmod_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_chmod", mrb_UV_uv_fs_chmod, MRB_ARGS_ARG(uv_fs_chmod_REQUIRED_ARGC, uv_fs_chmod_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_chown_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_chown", mrb_UV_uv_fs_chown, MRB_ARGS_ARG(uv_fs_chown_REQUIRED_ARGC, uv_fs_chown_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_close_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_close", mrb_UV_uv_fs_close, MRB_ARGS_ARG(uv_fs_close_REQUIRED_ARGC, uv_fs_close_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_event_getpath_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_event_getpath", mrb_UV_uv_fs_event_getpath, MRB_ARGS_ARG(uv_fs_event_getpath_REQUIRED_ARGC, uv_fs_event_getpath_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_event_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_event_init", mrb_UV_uv_fs_event_init, MRB_ARGS_ARG(uv_fs_event_init_REQUIRED_ARGC, uv_fs_event_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_event_start_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_event_start", mrb_UV_uv_fs_event_start, MRB_ARGS_ARG(uv_fs_event_start_REQUIRED_ARGC, uv_fs_event_start_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_event_stop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_event_stop", mrb_UV_uv_fs_event_stop, MRB_ARGS_ARG(uv_fs_event_stop_REQUIRED_ARGC, uv_fs_event_stop_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_fchmod_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_fchmod", mrb_UV_uv_fs_fchmod, MRB_ARGS_ARG(uv_fs_fchmod_REQUIRED_ARGC, uv_fs_fchmod_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_fchown_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_fchown", mrb_UV_uv_fs_fchown, MRB_ARGS_ARG(uv_fs_fchown_REQUIRED_ARGC, uv_fs_fchown_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_fdatasync_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_fdatasync", mrb_UV_uv_fs_fdatasync, MRB_ARGS_ARG(uv_fs_fdatasync_REQUIRED_ARGC, uv_fs_fdatasync_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_fstat_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_fstat", mrb_UV_uv_fs_fstat, MRB_ARGS_ARG(uv_fs_fstat_REQUIRED_ARGC, uv_fs_fstat_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_fsync_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_fsync", mrb_UV_uv_fs_fsync, MRB_ARGS_ARG(uv_fs_fsync_REQUIRED_ARGC, uv_fs_fsync_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_ftruncate_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_ftruncate", mrb_UV_uv_fs_ftruncate, MRB_ARGS_ARG(uv_fs_ftruncate_REQUIRED_ARGC, uv_fs_ftruncate_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_futime_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_futime", mrb_UV_uv_fs_futime, MRB_ARGS_ARG(uv_fs_futime_REQUIRED_ARGC, uv_fs_futime_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_link_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_link", mrb_UV_uv_fs_link, MRB_ARGS_ARG(uv_fs_link_REQUIRED_ARGC, uv_fs_link_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_lstat_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_lstat", mrb_UV_uv_fs_lstat, MRB_ARGS_ARG(uv_fs_lstat_REQUIRED_ARGC, uv_fs_lstat_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_mkdir_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_mkdir", mrb_UV_uv_fs_mkdir, MRB_ARGS_ARG(uv_fs_mkdir_REQUIRED_ARGC, uv_fs_mkdir_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_mkdtemp_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_mkdtemp", mrb_UV_uv_fs_mkdtemp, MRB_ARGS_ARG(uv_fs_mkdtemp_REQUIRED_ARGC, uv_fs_mkdtemp_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_open_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_open", mrb_UV_uv_fs_open, MRB_ARGS_ARG(uv_fs_open_REQUIRED_ARGC, uv_fs_open_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_poll_getpath_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_poll_getpath", mrb_UV_uv_fs_poll_getpath, MRB_ARGS_ARG(uv_fs_poll_getpath_REQUIRED_ARGC, uv_fs_poll_getpath_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_poll_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_poll_init", mrb_UV_uv_fs_poll_init, MRB_ARGS_ARG(uv_fs_poll_init_REQUIRED_ARGC, uv_fs_poll_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_poll_start_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_poll_start", mrb_UV_uv_fs_poll_start, MRB_ARGS_ARG(uv_fs_poll_start_REQUIRED_ARGC, uv_fs_poll_start_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_poll_stop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_poll_stop", mrb_UV_uv_fs_poll_stop, MRB_ARGS_ARG(uv_fs_poll_stop_REQUIRED_ARGC, uv_fs_poll_stop_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_read_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_read", mrb_UV_uv_fs_read, MRB_ARGS_ARG(uv_fs_read_REQUIRED_ARGC, uv_fs_read_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_readlink_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_readlink", mrb_UV_uv_fs_readlink, MRB_ARGS_ARG(uv_fs_readlink_REQUIRED_ARGC, uv_fs_readlink_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_realpath_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_realpath", mrb_UV_uv_fs_realpath, MRB_ARGS_ARG(uv_fs_realpath_REQUIRED_ARGC, uv_fs_realpath_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_rename_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_rename", mrb_UV_uv_fs_rename, MRB_ARGS_ARG(uv_fs_rename_REQUIRED_ARGC, uv_fs_rename_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_req_cleanup_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_req_cleanup", mrb_UV_uv_fs_req_cleanup, MRB_ARGS_ARG(uv_fs_req_cleanup_REQUIRED_ARGC, uv_fs_req_cleanup_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_rmdir_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_rmdir", mrb_UV_uv_fs_rmdir, MRB_ARGS_ARG(uv_fs_rmdir_REQUIRED_ARGC, uv_fs_rmdir_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_scandir_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_scandir", mrb_UV_uv_fs_scandir, MRB_ARGS_ARG(uv_fs_scandir_REQUIRED_ARGC, uv_fs_scandir_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_scandir_next_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_scandir_next", mrb_UV_uv_fs_scandir_next, MRB_ARGS_ARG(uv_fs_scandir_next_REQUIRED_ARGC, uv_fs_scandir_next_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_sendfile_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_sendfile", mrb_UV_uv_fs_sendfile, MRB_ARGS_ARG(uv_fs_sendfile_REQUIRED_ARGC, uv_fs_sendfile_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_stat_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_stat", mrb_UV_uv_fs_stat, MRB_ARGS_ARG(uv_fs_stat_REQUIRED_ARGC, uv_fs_stat_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_symlink_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_symlink", mrb_UV_uv_fs_symlink, MRB_ARGS_ARG(uv_fs_symlink_REQUIRED_ARGC, uv_fs_symlink_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_unlink_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_unlink", mrb_UV_uv_fs_unlink, MRB_ARGS_ARG(uv_fs_unlink_REQUIRED_ARGC, uv_fs_unlink_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_utime_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_utime", mrb_UV_uv_fs_utime, MRB_ARGS_ARG(uv_fs_utime_REQUIRED_ARGC, uv_fs_utime_OPTIONAL_ARGC));
#endif
#if BIND_uv_fs_write_FUNCTION
  mrb_define_class_method(mrb, UV_module, "fs_write", mrb_UV_uv_fs_write, MRB_ARGS_ARG(uv_fs_write_REQUIRED_ARGC, uv_fs_write_OPTIONAL_ARGC));
#endif
#if BIND_uv_get_free_memory_FUNCTION
  mrb_define_class_method(mrb, UV_module, "get_free_memory", mrb_UV_uv_get_free_memory, MRB_ARGS_ARG(uv_get_free_memory_REQUIRED_ARGC, uv_get_free_memory_OPTIONAL_ARGC));
#endif
#if BIND_uv_get_process_title_FUNCTION
  mrb_define_class_method(mrb, UV_module, "get_process_title", mrb_UV_uv_get_process_title, MRB_ARGS_ARG(uv_get_process_title_REQUIRED_ARGC, uv_get_process_title_OPTIONAL_ARGC));
#endif
#if BIND_uv_get_total_memory_FUNCTION
  mrb_define_class_method(mrb, UV_module, "get_total_memory", mrb_UV_uv_get_total_memory, MRB_ARGS_ARG(uv_get_total_memory_REQUIRED_ARGC, uv_get_total_memory_OPTIONAL_ARGC));
#endif
#if BIND_uv_getaddrinfo_FUNCTION
  mrb_define_class_method(mrb, UV_module, "getaddrinfo", mrb_UV_uv_getaddrinfo, MRB_ARGS_ARG(uv_getaddrinfo_REQUIRED_ARGC, uv_getaddrinfo_OPTIONAL_ARGC));
#endif
#if BIND_uv_getnameinfo_FUNCTION
  mrb_define_class_method(mrb, UV_module, "getnameinfo", mrb_UV_uv_getnameinfo, MRB_ARGS_ARG(uv_getnameinfo_REQUIRED_ARGC, uv_getnameinfo_OPTIONAL_ARGC));
#endif
#if BIND_uv_getrusage_FUNCTION
  mrb_define_class_method(mrb, UV_module, "getrusage", mrb_UV_uv_getrusage, MRB_ARGS_ARG(uv_getrusage_REQUIRED_ARGC, uv_getrusage_OPTIONAL_ARGC));
#endif
#if BIND_uv_guess_handle_FUNCTION
  mrb_define_class_method(mrb, UV_module, "guess_handle", mrb_UV_uv_guess_handle, MRB_ARGS_ARG(uv_guess_handle_REQUIRED_ARGC, uv_guess_handle_OPTIONAL_ARGC));
#endif
#if BIND_uv_handle_size_FUNCTION
  mrb_define_class_method(mrb, UV_module, "handle_size", mrb_UV_uv_handle_size, MRB_ARGS_ARG(uv_handle_size_REQUIRED_ARGC, uv_handle_size_OPTIONAL_ARGC));
#endif
#if BIND_uv_has_ref_FUNCTION
  mrb_define_class_method(mrb, UV_module, "has_ref", mrb_UV_uv_has_ref, MRB_ARGS_ARG(uv_has_ref_REQUIRED_ARGC, uv_has_ref_OPTIONAL_ARGC));
#endif
#if BIND_uv_hrtime_FUNCTION
  mrb_define_class_method(mrb, UV_module, "hrtime", mrb_UV_uv_hrtime, MRB_ARGS_ARG(uv_hrtime_REQUIRED_ARGC, uv_hrtime_OPTIONAL_ARGC));
#endif
#if BIND_uv_idle_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "idle_init", mrb_UV_uv_idle_init, MRB_ARGS_ARG(uv_idle_init_REQUIRED_ARGC, uv_idle_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_idle_start_FUNCTION
  mrb_define_class_method(mrb, UV_module, "idle_start", mrb_UV_uv_idle_start, MRB_ARGS_ARG(uv_idle_start_REQUIRED_ARGC, uv_idle_start_OPTIONAL_ARGC));
#endif
#if BIND_uv_idle_stop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "idle_stop", mrb_UV_uv_idle_stop, MRB_ARGS_ARG(uv_idle_stop_REQUIRED_ARGC, uv_idle_stop_OPTIONAL_ARGC));
#endif
#if BIND_uv_inet_ntop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "inet_ntop", mrb_UV_uv_inet_ntop, MRB_ARGS_ARG(uv_inet_ntop_REQUIRED_ARGC, uv_inet_ntop_OPTIONAL_ARGC));
#endif
#if BIND_uv_inet_pton_FUNCTION
  mrb_define_class_method(mrb, UV_module, "inet_pton", mrb_UV_uv_inet_pton, MRB_ARGS_ARG(uv_inet_pton_REQUIRED_ARGC, uv_inet_pton_OPTIONAL_ARGC));
#endif
#if BIND_uv_interface_addresses_FUNCTION
  mrb_define_class_method(mrb, UV_module, "interface_addresses", mrb_UV_uv_interface_addresses, MRB_ARGS_ARG(uv_interface_addresses_REQUIRED_ARGC, uv_interface_addresses_OPTIONAL_ARGC));
#endif
#if BIND_uv_ip4_addr_FUNCTION
  mrb_define_class_method(mrb, UV_module, "ip4_addr", mrb_UV_uv_ip4_addr, MRB_ARGS_ARG(uv_ip4_addr_REQUIRED_ARGC, uv_ip4_addr_OPTIONAL_ARGC));
#endif
#if BIND_uv_ip4_name_FUNCTION
  mrb_define_class_method(mrb, UV_module, "ip4_name", mrb_UV_uv_ip4_name, MRB_ARGS_ARG(uv_ip4_name_REQUIRED_ARGC, uv_ip4_name_OPTIONAL_ARGC));
#endif
#if BIND_uv_ip6_addr_FUNCTION
  mrb_define_class_method(mrb, UV_module, "ip6_addr", mrb_UV_uv_ip6_addr, MRB_ARGS_ARG(uv_ip6_addr_REQUIRED_ARGC, uv_ip6_addr_OPTIONAL_ARGC));
#endif
#if BIND_uv_ip6_name_FUNCTION
  mrb_define_class_method(mrb, UV_module, "ip6_name", mrb_UV_uv_ip6_name, MRB_ARGS_ARG(uv_ip6_name_REQUIRED_ARGC, uv_ip6_name_OPTIONAL_ARGC));
#endif
#if BIND_uv_is_active_FUNCTION
  mrb_define_class_method(mrb, UV_module, "is_active", mrb_UV_uv_is_active, MRB_ARGS_ARG(uv_is_active_REQUIRED_ARGC, uv_is_active_OPTIONAL_ARGC));
#endif
#if BIND_uv_is_closing_FUNCTION
  mrb_define_class_method(mrb, UV_module, "is_closing", mrb_UV_uv_is_closing, MRB_ARGS_ARG(uv_is_closing_REQUIRED_ARGC, uv_is_closing_OPTIONAL_ARGC));
#endif
#if BIND_uv_is_readable_FUNCTION
  mrb_define_class_method(mrb, UV_module, "is_readable", mrb_UV_uv_is_readable, MRB_ARGS_ARG(uv_is_readable_REQUIRED_ARGC, uv_is_readable_OPTIONAL_ARGC));
#endif
#if BIND_uv_is_writable_FUNCTION
  mrb_define_class_method(mrb, UV_module, "is_writable", mrb_UV_uv_is_writable, MRB_ARGS_ARG(uv_is_writable_REQUIRED_ARGC, uv_is_writable_OPTIONAL_ARGC));
#endif
#if BIND_uv_key_create_FUNCTION
  mrb_define_class_method(mrb, UV_module, "key_create", mrb_UV_uv_key_create, MRB_ARGS_ARG(uv_key_create_REQUIRED_ARGC, uv_key_create_OPTIONAL_ARGC));
#endif
#if BIND_uv_key_delete_FUNCTION
  mrb_define_class_method(mrb, UV_module, "key_delete", mrb_UV_uv_key_delete, MRB_ARGS_ARG(uv_key_delete_REQUIRED_ARGC, uv_key_delete_OPTIONAL_ARGC));
#endif
#if BIND_uv_key_get_FUNCTION
  mrb_define_class_method(mrb, UV_module, "key_get", mrb_UV_uv_key_get, MRB_ARGS_ARG(uv_key_get_REQUIRED_ARGC, uv_key_get_OPTIONAL_ARGC));
#endif
#if BIND_uv_key_set_FUNCTION
  mrb_define_class_method(mrb, UV_module, "key_set", mrb_UV_uv_key_set, MRB_ARGS_ARG(uv_key_set_REQUIRED_ARGC, uv_key_set_OPTIONAL_ARGC));
#endif
#if BIND_uv_kill_FUNCTION
  mrb_define_class_method(mrb, UV_module, "kill", mrb_UV_uv_kill, MRB_ARGS_ARG(uv_kill_REQUIRED_ARGC, uv_kill_OPTIONAL_ARGC));
#endif
#if BIND_uv_listen_FUNCTION
  mrb_define_class_method(mrb, UV_module, "listen", mrb_UV_uv_listen, MRB_ARGS_ARG(uv_listen_REQUIRED_ARGC, uv_listen_OPTIONAL_ARGC));
#endif
#if BIND_uv_loadavg_FUNCTION
  mrb_define_class_method(mrb, UV_module, "loadavg", mrb_UV_uv_loadavg, MRB_ARGS_ARG(uv_loadavg_REQUIRED_ARGC, uv_loadavg_OPTIONAL_ARGC));
#endif
#if BIND_uv_loop_alive_FUNCTION
  mrb_define_class_method(mrb, UV_module, "loop_alive", mrb_UV_uv_loop_alive, MRB_ARGS_ARG(uv_loop_alive_REQUIRED_ARGC, uv_loop_alive_OPTIONAL_ARGC));
#endif
#if BIND_uv_loop_close_FUNCTION
  mrb_define_class_method(mrb, UV_module, "loop_close", mrb_UV_uv_loop_close, MRB_ARGS_ARG(uv_loop_close_REQUIRED_ARGC, uv_loop_close_OPTIONAL_ARGC));
#endif
#if BIND_uv_loop_configure_FUNCTION
  mrb_define_class_method(mrb, UV_module, "loop_configure", mrb_UV_uv_loop_configure, MRB_ARGS_ARG(uv_loop_configure_REQUIRED_ARGC, uv_loop_configure_OPTIONAL_ARGC));
#endif
#if BIND_uv_loop_delete_FUNCTION
  mrb_define_class_method(mrb, UV_module, "loop_delete", mrb_UV_uv_loop_delete, MRB_ARGS_ARG(uv_loop_delete_REQUIRED_ARGC, uv_loop_delete_OPTIONAL_ARGC));
#endif
#if BIND_uv_loop_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "loop_init", mrb_UV_uv_loop_init, MRB_ARGS_ARG(uv_loop_init_REQUIRED_ARGC, uv_loop_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_loop_new_FUNCTION
  mrb_define_class_method(mrb, UV_module, "loop_new", mrb_UV_uv_loop_new, MRB_ARGS_ARG(uv_loop_new_REQUIRED_ARGC, uv_loop_new_OPTIONAL_ARGC));
#endif
#if BIND_uv_loop_size_FUNCTION
  mrb_define_class_method(mrb, UV_module, "loop_size", mrb_UV_uv_loop_size, MRB_ARGS_ARG(uv_loop_size_REQUIRED_ARGC, uv_loop_size_OPTIONAL_ARGC));
#endif
#if BIND_uv_mutex_destroy_FUNCTION
  mrb_define_class_method(mrb, UV_module, "mutex_destroy", mrb_UV_uv_mutex_destroy, MRB_ARGS_ARG(uv_mutex_destroy_REQUIRED_ARGC, uv_mutex_destroy_OPTIONAL_ARGC));
#endif
#if BIND_uv_mutex_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "mutex_init", mrb_UV_uv_mutex_init, MRB_ARGS_ARG(uv_mutex_init_REQUIRED_ARGC, uv_mutex_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_mutex_lock_FUNCTION
  mrb_define_class_method(mrb, UV_module, "mutex_lock", mrb_UV_uv_mutex_lock, MRB_ARGS_ARG(uv_mutex_lock_REQUIRED_ARGC, uv_mutex_lock_OPTIONAL_ARGC));
#endif
#if BIND_uv_mutex_trylock_FUNCTION
  mrb_define_class_method(mrb, UV_module, "mutex_trylock", mrb_UV_uv_mutex_trylock, MRB_ARGS_ARG(uv_mutex_trylock_REQUIRED_ARGC, uv_mutex_trylock_OPTIONAL_ARGC));
#endif
#if BIND_uv_mutex_unlock_FUNCTION
  mrb_define_class_method(mrb, UV_module, "mutex_unlock", mrb_UV_uv_mutex_unlock, MRB_ARGS_ARG(uv_mutex_unlock_REQUIRED_ARGC, uv_mutex_unlock_OPTIONAL_ARGC));
#endif
#if BIND_uv_now_FUNCTION
  mrb_define_class_method(mrb, UV_module, "now", mrb_UV_uv_now, MRB_ARGS_ARG(uv_now_REQUIRED_ARGC, uv_now_OPTIONAL_ARGC));
#endif
#if BIND_uv_once_FUNCTION
  mrb_define_class_method(mrb, UV_module, "once", mrb_UV_uv_once, MRB_ARGS_ARG(uv_once_REQUIRED_ARGC, uv_once_OPTIONAL_ARGC));
#endif
#if BIND_uv_os_homedir_FUNCTION
  mrb_define_class_method(mrb, UV_module, "os_homedir", mrb_UV_uv_os_homedir, MRB_ARGS_ARG(uv_os_homedir_REQUIRED_ARGC, uv_os_homedir_OPTIONAL_ARGC));
#endif
#if BIND_uv_pipe_bind_FUNCTION
  mrb_define_class_method(mrb, UV_module, "pipe_bind", mrb_UV_uv_pipe_bind, MRB_ARGS_ARG(uv_pipe_bind_REQUIRED_ARGC, uv_pipe_bind_OPTIONAL_ARGC));
#endif
#if BIND_uv_pipe_connect_FUNCTION
  mrb_define_class_method(mrb, UV_module, "pipe_connect", mrb_UV_uv_pipe_connect, MRB_ARGS_ARG(uv_pipe_connect_REQUIRED_ARGC, uv_pipe_connect_OPTIONAL_ARGC));
#endif
#if BIND_uv_pipe_getpeername_FUNCTION
  mrb_define_class_method(mrb, UV_module, "pipe_getpeername", mrb_UV_uv_pipe_getpeername, MRB_ARGS_ARG(uv_pipe_getpeername_REQUIRED_ARGC, uv_pipe_getpeername_OPTIONAL_ARGC));
#endif
#if BIND_uv_pipe_getsockname_FUNCTION
  mrb_define_class_method(mrb, UV_module, "pipe_getsockname", mrb_UV_uv_pipe_getsockname, MRB_ARGS_ARG(uv_pipe_getsockname_REQUIRED_ARGC, uv_pipe_getsockname_OPTIONAL_ARGC));
#endif
#if BIND_uv_pipe_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "pipe_init", mrb_UV_uv_pipe_init, MRB_ARGS_ARG(uv_pipe_init_REQUIRED_ARGC, uv_pipe_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_pipe_open_FUNCTION
  mrb_define_class_method(mrb, UV_module, "pipe_open", mrb_UV_uv_pipe_open, MRB_ARGS_ARG(uv_pipe_open_REQUIRED_ARGC, uv_pipe_open_OPTIONAL_ARGC));
#endif
#if BIND_uv_pipe_pending_count_FUNCTION
  mrb_define_class_method(mrb, UV_module, "pipe_pending_count", mrb_UV_uv_pipe_pending_count, MRB_ARGS_ARG(uv_pipe_pending_count_REQUIRED_ARGC, uv_pipe_pending_count_OPTIONAL_ARGC));
#endif
#if BIND_uv_pipe_pending_instances_FUNCTION
  mrb_define_class_method(mrb, UV_module, "pipe_pending_instances", mrb_UV_uv_pipe_pending_instances, MRB_ARGS_ARG(uv_pipe_pending_instances_REQUIRED_ARGC, uv_pipe_pending_instances_OPTIONAL_ARGC));
#endif
#if BIND_uv_pipe_pending_type_FUNCTION
  mrb_define_class_method(mrb, UV_module, "pipe_pending_type", mrb_UV_uv_pipe_pending_type, MRB_ARGS_ARG(uv_pipe_pending_type_REQUIRED_ARGC, uv_pipe_pending_type_OPTIONAL_ARGC));
#endif
#if BIND_uv_poll_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "poll_init", mrb_UV_uv_poll_init, MRB_ARGS_ARG(uv_poll_init_REQUIRED_ARGC, uv_poll_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_poll_init_socket_FUNCTION
  mrb_define_class_method(mrb, UV_module, "poll_init_socket", mrb_UV_uv_poll_init_socket, MRB_ARGS_ARG(uv_poll_init_socket_REQUIRED_ARGC, uv_poll_init_socket_OPTIONAL_ARGC));
#endif
#if BIND_uv_poll_start_FUNCTION
  mrb_define_class_method(mrb, UV_module, "poll_start", mrb_UV_uv_poll_start, MRB_ARGS_ARG(uv_poll_start_REQUIRED_ARGC, uv_poll_start_OPTIONAL_ARGC));
#endif
#if BIND_uv_poll_stop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "poll_stop", mrb_UV_uv_poll_stop, MRB_ARGS_ARG(uv_poll_stop_REQUIRED_ARGC, uv_poll_stop_OPTIONAL_ARGC));
#endif
#if BIND_uv_prepare_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "prepare_init", mrb_UV_uv_prepare_init, MRB_ARGS_ARG(uv_prepare_init_REQUIRED_ARGC, uv_prepare_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_prepare_start_FUNCTION
  mrb_define_class_method(mrb, UV_module, "prepare_start", mrb_UV_uv_prepare_start, MRB_ARGS_ARG(uv_prepare_start_REQUIRED_ARGC, uv_prepare_start_OPTIONAL_ARGC));
#endif
#if BIND_uv_prepare_stop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "prepare_stop", mrb_UV_uv_prepare_stop, MRB_ARGS_ARG(uv_prepare_stop_REQUIRED_ARGC, uv_prepare_stop_OPTIONAL_ARGC));
#endif
#if BIND_uv_print_active_handles_FUNCTION
  mrb_define_class_method(mrb, UV_module, "print_active_handles", mrb_UV_uv_print_active_handles, MRB_ARGS_ARG(uv_print_active_handles_REQUIRED_ARGC, uv_print_active_handles_OPTIONAL_ARGC));
#endif
#if BIND_uv_print_all_handles_FUNCTION
  mrb_define_class_method(mrb, UV_module, "print_all_handles", mrb_UV_uv_print_all_handles, MRB_ARGS_ARG(uv_print_all_handles_REQUIRED_ARGC, uv_print_all_handles_OPTIONAL_ARGC));
#endif
#if BIND_uv_process_kill_FUNCTION
  mrb_define_class_method(mrb, UV_module, "process_kill", mrb_UV_uv_process_kill, MRB_ARGS_ARG(uv_process_kill_REQUIRED_ARGC, uv_process_kill_OPTIONAL_ARGC));
#endif
#if BIND_uv_queue_work_FUNCTION
  mrb_define_class_method(mrb, UV_module, "queue_work", mrb_UV_uv_queue_work, MRB_ARGS_ARG(uv_queue_work_REQUIRED_ARGC, uv_queue_work_OPTIONAL_ARGC));
#endif
#if BIND_uv_read_start_FUNCTION
  mrb_define_class_method(mrb, UV_module, "read_start", mrb_UV_uv_read_start, MRB_ARGS_ARG(uv_read_start_REQUIRED_ARGC, uv_read_start_OPTIONAL_ARGC));
#endif
#if BIND_uv_read_stop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "read_stop", mrb_UV_uv_read_stop, MRB_ARGS_ARG(uv_read_stop_REQUIRED_ARGC, uv_read_stop_OPTIONAL_ARGC));
#endif
#if BIND_uv_recv_buffer_size_FUNCTION
  mrb_define_class_method(mrb, UV_module, "recv_buffer_size", mrb_UV_uv_recv_buffer_size, MRB_ARGS_ARG(uv_recv_buffer_size_REQUIRED_ARGC, uv_recv_buffer_size_OPTIONAL_ARGC));
#endif
#if BIND_uv_ref_FUNCTION
  mrb_define_class_method(mrb, UV_module, "ref", mrb_UV_uv_ref, MRB_ARGS_ARG(uv_ref_REQUIRED_ARGC, uv_ref_OPTIONAL_ARGC));
#endif
#if BIND_uv_replace_allocator_FUNCTION
  mrb_define_class_method(mrb, UV_module, "replace_allocator", mrb_UV_uv_replace_allocator, MRB_ARGS_ARG(uv_replace_allocator_REQUIRED_ARGC, uv_replace_allocator_OPTIONAL_ARGC));
#endif
#if BIND_uv_req_size_FUNCTION
  mrb_define_class_method(mrb, UV_module, "req_size", mrb_UV_uv_req_size, MRB_ARGS_ARG(uv_req_size_REQUIRED_ARGC, uv_req_size_OPTIONAL_ARGC));
#endif
#if BIND_uv_resident_set_memory_FUNCTION
  mrb_define_class_method(mrb, UV_module, "resident_set_memory", mrb_UV_uv_resident_set_memory, MRB_ARGS_ARG(uv_resident_set_memory_REQUIRED_ARGC, uv_resident_set_memory_OPTIONAL_ARGC));
#endif
#if BIND_uv_run_FUNCTION
  mrb_define_class_method(mrb, UV_module, "run", mrb_UV_uv_run, MRB_ARGS_ARG(uv_run_REQUIRED_ARGC, uv_run_OPTIONAL_ARGC));
#endif
#if BIND_uv_rwlock_destroy_FUNCTION
  mrb_define_class_method(mrb, UV_module, "rwlock_destroy", mrb_UV_uv_rwlock_destroy, MRB_ARGS_ARG(uv_rwlock_destroy_REQUIRED_ARGC, uv_rwlock_destroy_OPTIONAL_ARGC));
#endif
#if BIND_uv_rwlock_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "rwlock_init", mrb_UV_uv_rwlock_init, MRB_ARGS_ARG(uv_rwlock_init_REQUIRED_ARGC, uv_rwlock_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_rwlock_rdlock_FUNCTION
  mrb_define_class_method(mrb, UV_module, "rwlock_rdlock", mrb_UV_uv_rwlock_rdlock, MRB_ARGS_ARG(uv_rwlock_rdlock_REQUIRED_ARGC, uv_rwlock_rdlock_OPTIONAL_ARGC));
#endif
#if BIND_uv_rwlock_rdunlock_FUNCTION
  mrb_define_class_method(mrb, UV_module, "rwlock_rdunlock", mrb_UV_uv_rwlock_rdunlock, MRB_ARGS_ARG(uv_rwlock_rdunlock_REQUIRED_ARGC, uv_rwlock_rdunlock_OPTIONAL_ARGC));
#endif
#if BIND_uv_rwlock_tryrdlock_FUNCTION
  mrb_define_class_method(mrb, UV_module, "rwlock_tryrdlock", mrb_UV_uv_rwlock_tryrdlock, MRB_ARGS_ARG(uv_rwlock_tryrdlock_REQUIRED_ARGC, uv_rwlock_tryrdlock_OPTIONAL_ARGC));
#endif
#if BIND_uv_rwlock_trywrlock_FUNCTION
  mrb_define_class_method(mrb, UV_module, "rwlock_trywrlock", mrb_UV_uv_rwlock_trywrlock, MRB_ARGS_ARG(uv_rwlock_trywrlock_REQUIRED_ARGC, uv_rwlock_trywrlock_OPTIONAL_ARGC));
#endif
#if BIND_uv_rwlock_wrlock_FUNCTION
  mrb_define_class_method(mrb, UV_module, "rwlock_wrlock", mrb_UV_uv_rwlock_wrlock, MRB_ARGS_ARG(uv_rwlock_wrlock_REQUIRED_ARGC, uv_rwlock_wrlock_OPTIONAL_ARGC));
#endif
#if BIND_uv_rwlock_wrunlock_FUNCTION
  mrb_define_class_method(mrb, UV_module, "rwlock_wrunlock", mrb_UV_uv_rwlock_wrunlock, MRB_ARGS_ARG(uv_rwlock_wrunlock_REQUIRED_ARGC, uv_rwlock_wrunlock_OPTIONAL_ARGC));
#endif
#if BIND_uv_sem_destroy_FUNCTION
  mrb_define_class_method(mrb, UV_module, "sem_destroy", mrb_UV_uv_sem_destroy, MRB_ARGS_ARG(uv_sem_destroy_REQUIRED_ARGC, uv_sem_destroy_OPTIONAL_ARGC));
#endif
#if BIND_uv_sem_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "sem_init", mrb_UV_uv_sem_init, MRB_ARGS_ARG(uv_sem_init_REQUIRED_ARGC, uv_sem_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_sem_post_FUNCTION
  mrb_define_class_method(mrb, UV_module, "sem_post", mrb_UV_uv_sem_post, MRB_ARGS_ARG(uv_sem_post_REQUIRED_ARGC, uv_sem_post_OPTIONAL_ARGC));
#endif
#if BIND_uv_sem_trywait_FUNCTION
  mrb_define_class_method(mrb, UV_module, "sem_trywait", mrb_UV_uv_sem_trywait, MRB_ARGS_ARG(uv_sem_trywait_REQUIRED_ARGC, uv_sem_trywait_OPTIONAL_ARGC));
#endif
#if BIND_uv_sem_wait_FUNCTION
  mrb_define_class_method(mrb, UV_module, "sem_wait", mrb_UV_uv_sem_wait, MRB_ARGS_ARG(uv_sem_wait_REQUIRED_ARGC, uv_sem_wait_OPTIONAL_ARGC));
#endif
#if BIND_uv_send_buffer_size_FUNCTION
  mrb_define_class_method(mrb, UV_module, "send_buffer_size", mrb_UV_uv_send_buffer_size, MRB_ARGS_ARG(uv_send_buffer_size_REQUIRED_ARGC, uv_send_buffer_size_OPTIONAL_ARGC));
#endif
#if BIND_uv_set_process_title_FUNCTION
  mrb_define_class_method(mrb, UV_module, "set_process_title", mrb_UV_uv_set_process_title, MRB_ARGS_ARG(uv_set_process_title_REQUIRED_ARGC, uv_set_process_title_OPTIONAL_ARGC));
#endif
#if BIND_uv_setup_args_FUNCTION
  mrb_define_class_method(mrb, UV_module, "setup_args", mrb_UV_uv_setup_args, MRB_ARGS_ARG(uv_setup_args_REQUIRED_ARGC, uv_setup_args_OPTIONAL_ARGC));
#endif
#if BIND_uv_shutdown_FUNCTION
  mrb_define_class_method(mrb, UV_module, "shutdown", mrb_UV_uv_shutdown, MRB_ARGS_ARG(uv_shutdown_REQUIRED_ARGC, uv_shutdown_OPTIONAL_ARGC));
#endif
#if BIND_uv_signal_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "signal_init", mrb_UV_uv_signal_init, MRB_ARGS_ARG(uv_signal_init_REQUIRED_ARGC, uv_signal_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_signal_start_FUNCTION
  mrb_define_class_method(mrb, UV_module, "signal_start", mrb_UV_uv_signal_start, MRB_ARGS_ARG(uv_signal_start_REQUIRED_ARGC, uv_signal_start_OPTIONAL_ARGC));
#endif
#if BIND_uv_signal_stop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "signal_stop", mrb_UV_uv_signal_stop, MRB_ARGS_ARG(uv_signal_stop_REQUIRED_ARGC, uv_signal_stop_OPTIONAL_ARGC));
#endif
#if BIND_uv_spawn_FUNCTION
  mrb_define_class_method(mrb, UV_module, "spawn", mrb_UV_uv_spawn, MRB_ARGS_ARG(uv_spawn_REQUIRED_ARGC, uv_spawn_OPTIONAL_ARGC));
#endif
#if BIND_uv_stop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "stop", mrb_UV_uv_stop, MRB_ARGS_ARG(uv_stop_REQUIRED_ARGC, uv_stop_OPTIONAL_ARGC));
#endif
#if BIND_uv_stream_set_blocking_FUNCTION
  mrb_define_class_method(mrb, UV_module, "stream_set_blocking", mrb_UV_uv_stream_set_blocking, MRB_ARGS_ARG(uv_stream_set_blocking_REQUIRED_ARGC, uv_stream_set_blocking_OPTIONAL_ARGC));
#endif
#if BIND_uv_strerror_FUNCTION
  mrb_define_class_method(mrb, UV_module, "strerror", mrb_UV_uv_strerror, MRB_ARGS_ARG(uv_strerror_REQUIRED_ARGC, uv_strerror_OPTIONAL_ARGC));
#endif
#if BIND_uv_tcp_bind_FUNCTION
  mrb_define_class_method(mrb, UV_module, "tcp_bind", mrb_UV_uv_tcp_bind, MRB_ARGS_ARG(uv_tcp_bind_REQUIRED_ARGC, uv_tcp_bind_OPTIONAL_ARGC));
#endif
#if BIND_uv_tcp_connect_FUNCTION
  mrb_define_class_method(mrb, UV_module, "tcp_connect", mrb_UV_uv_tcp_connect, MRB_ARGS_ARG(uv_tcp_connect_REQUIRED_ARGC, uv_tcp_connect_OPTIONAL_ARGC));
#endif
#if BIND_uv_tcp_getpeername_FUNCTION
  mrb_define_class_method(mrb, UV_module, "tcp_getpeername", mrb_UV_uv_tcp_getpeername, MRB_ARGS_ARG(uv_tcp_getpeername_REQUIRED_ARGC, uv_tcp_getpeername_OPTIONAL_ARGC));
#endif
#if BIND_uv_tcp_getsockname_FUNCTION
  mrb_define_class_method(mrb, UV_module, "tcp_getsockname", mrb_UV_uv_tcp_getsockname, MRB_ARGS_ARG(uv_tcp_getsockname_REQUIRED_ARGC, uv_tcp_getsockname_OPTIONAL_ARGC));
#endif
#if BIND_uv_tcp_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "tcp_init", mrb_UV_uv_tcp_init, MRB_ARGS_ARG(uv_tcp_init_REQUIRED_ARGC, uv_tcp_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_tcp_init_ex_FUNCTION
  mrb_define_class_method(mrb, UV_module, "tcp_init_ex", mrb_UV_uv_tcp_init_ex, MRB_ARGS_ARG(uv_tcp_init_ex_REQUIRED_ARGC, uv_tcp_init_ex_OPTIONAL_ARGC));
#endif
#if BIND_uv_tcp_keepalive_FUNCTION
  mrb_define_class_method(mrb, UV_module, "tcp_keepalive", mrb_UV_uv_tcp_keepalive, MRB_ARGS_ARG(uv_tcp_keepalive_REQUIRED_ARGC, uv_tcp_keepalive_OPTIONAL_ARGC));
#endif
#if BIND_uv_tcp_nodelay_FUNCTION
  mrb_define_class_method(mrb, UV_module, "tcp_nodelay", mrb_UV_uv_tcp_nodelay, MRB_ARGS_ARG(uv_tcp_nodelay_REQUIRED_ARGC, uv_tcp_nodelay_OPTIONAL_ARGC));
#endif
#if BIND_uv_tcp_open_FUNCTION
  mrb_define_class_method(mrb, UV_module, "tcp_open", mrb_UV_uv_tcp_open, MRB_ARGS_ARG(uv_tcp_open_REQUIRED_ARGC, uv_tcp_open_OPTIONAL_ARGC));
#endif
#if BIND_uv_tcp_simultaneous_accepts_FUNCTION
  mrb_define_class_method(mrb, UV_module, "tcp_simultaneous_accepts", mrb_UV_uv_tcp_simultaneous_accepts, MRB_ARGS_ARG(uv_tcp_simultaneous_accepts_REQUIRED_ARGC, uv_tcp_simultaneous_accepts_OPTIONAL_ARGC));
#endif
#if BIND_uv_thread_create_FUNCTION
  mrb_define_class_method(mrb, UV_module, "thread_create", mrb_UV_uv_thread_create, MRB_ARGS_ARG(uv_thread_create_REQUIRED_ARGC, uv_thread_create_OPTIONAL_ARGC));
#endif
#if BIND_uv_thread_equal_FUNCTION
  mrb_define_class_method(mrb, UV_module, "thread_equal", mrb_UV_uv_thread_equal, MRB_ARGS_ARG(uv_thread_equal_REQUIRED_ARGC, uv_thread_equal_OPTIONAL_ARGC));
#endif
#if BIND_uv_thread_join_FUNCTION
  mrb_define_class_method(mrb, UV_module, "thread_join", mrb_UV_uv_thread_join, MRB_ARGS_ARG(uv_thread_join_REQUIRED_ARGC, uv_thread_join_OPTIONAL_ARGC));
#endif
#if BIND_uv_thread_self_FUNCTION
  mrb_define_class_method(mrb, UV_module, "thread_self", mrb_UV_uv_thread_self, MRB_ARGS_ARG(uv_thread_self_REQUIRED_ARGC, uv_thread_self_OPTIONAL_ARGC));
#endif
#if BIND_uv_timer_again_FUNCTION
  mrb_define_class_method(mrb, UV_module, "timer_again", mrb_UV_uv_timer_again, MRB_ARGS_ARG(uv_timer_again_REQUIRED_ARGC, uv_timer_again_OPTIONAL_ARGC));
#endif
#if BIND_uv_timer_get_repeat_FUNCTION
  mrb_define_class_method(mrb, UV_module, "timer_get_repeat", mrb_UV_uv_timer_get_repeat, MRB_ARGS_ARG(uv_timer_get_repeat_REQUIRED_ARGC, uv_timer_get_repeat_OPTIONAL_ARGC));
#endif
#if BIND_uv_timer_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "timer_init", mrb_UV_uv_timer_init, MRB_ARGS_ARG(uv_timer_init_REQUIRED_ARGC, uv_timer_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_timer_set_repeat_FUNCTION
  mrb_define_class_method(mrb, UV_module, "timer_set_repeat", mrb_UV_uv_timer_set_repeat, MRB_ARGS_ARG(uv_timer_set_repeat_REQUIRED_ARGC, uv_timer_set_repeat_OPTIONAL_ARGC));
#endif
#if BIND_uv_timer_start_FUNCTION
  mrb_define_class_method(mrb, UV_module, "timer_start", mrb_UV_uv_timer_start, MRB_ARGS_ARG(uv_timer_start_REQUIRED_ARGC, uv_timer_start_OPTIONAL_ARGC));
#endif
#if BIND_uv_timer_stop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "timer_stop", mrb_UV_uv_timer_stop, MRB_ARGS_ARG(uv_timer_stop_REQUIRED_ARGC, uv_timer_stop_OPTIONAL_ARGC));
#endif
#if BIND_uv_try_write_FUNCTION
  mrb_define_class_method(mrb, UV_module, "try_write", mrb_UV_uv_try_write, MRB_ARGS_ARG(uv_try_write_REQUIRED_ARGC, uv_try_write_OPTIONAL_ARGC));
#endif
#if BIND_uv_tty_get_winsize_FUNCTION
  mrb_define_class_method(mrb, UV_module, "tty_get_winsize", mrb_UV_uv_tty_get_winsize, MRB_ARGS_ARG(uv_tty_get_winsize_REQUIRED_ARGC, uv_tty_get_winsize_OPTIONAL_ARGC));
#endif
#if BIND_uv_tty_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "tty_init", mrb_UV_uv_tty_init, MRB_ARGS_ARG(uv_tty_init_REQUIRED_ARGC, uv_tty_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_tty_reset_mode_FUNCTION
  mrb_define_class_method(mrb, UV_module, "tty_reset_mode", mrb_UV_uv_tty_reset_mode, MRB_ARGS_ARG(uv_tty_reset_mode_REQUIRED_ARGC, uv_tty_reset_mode_OPTIONAL_ARGC));
#endif
#if BIND_uv_tty_set_mode_FUNCTION
  mrb_define_class_method(mrb, UV_module, "tty_set_mode", mrb_UV_uv_tty_set_mode, MRB_ARGS_ARG(uv_tty_set_mode_REQUIRED_ARGC, uv_tty_set_mode_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_bind_FUNCTION
  mrb_define_class_method(mrb, UV_module, "udp_bind", mrb_UV_uv_udp_bind, MRB_ARGS_ARG(uv_udp_bind_REQUIRED_ARGC, uv_udp_bind_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_getsockname_FUNCTION
  mrb_define_class_method(mrb, UV_module, "udp_getsockname", mrb_UV_uv_udp_getsockname, MRB_ARGS_ARG(uv_udp_getsockname_REQUIRED_ARGC, uv_udp_getsockname_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_init_FUNCTION
  mrb_define_class_method(mrb, UV_module, "udp_init", mrb_UV_uv_udp_init, MRB_ARGS_ARG(uv_udp_init_REQUIRED_ARGC, uv_udp_init_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_init_ex_FUNCTION
  mrb_define_class_method(mrb, UV_module, "udp_init_ex", mrb_UV_uv_udp_init_ex, MRB_ARGS_ARG(uv_udp_init_ex_REQUIRED_ARGC, uv_udp_init_ex_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_open_FUNCTION
  mrb_define_class_method(mrb, UV_module, "udp_open", mrb_UV_uv_udp_open, MRB_ARGS_ARG(uv_udp_open_REQUIRED_ARGC, uv_udp_open_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_recv_start_FUNCTION
  mrb_define_class_method(mrb, UV_module, "udp_recv_start", mrb_UV_uv_udp_recv_start, MRB_ARGS_ARG(uv_udp_recv_start_REQUIRED_ARGC, uv_udp_recv_start_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_recv_stop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "udp_recv_stop", mrb_UV_uv_udp_recv_stop, MRB_ARGS_ARG(uv_udp_recv_stop_REQUIRED_ARGC, uv_udp_recv_stop_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_send_FUNCTION
  mrb_define_class_method(mrb, UV_module, "udp_send", mrb_UV_uv_udp_send, MRB_ARGS_ARG(uv_udp_send_REQUIRED_ARGC, uv_udp_send_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_set_broadcast_FUNCTION
  mrb_define_class_method(mrb, UV_module, "udp_set_broadcast", mrb_UV_uv_udp_set_broadcast, MRB_ARGS_ARG(uv_udp_set_broadcast_REQUIRED_ARGC, uv_udp_set_broadcast_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_set_membership_FUNCTION
  mrb_define_class_method(mrb, UV_module, "udp_set_membership", mrb_UV_uv_udp_set_membership, MRB_ARGS_ARG(uv_udp_set_membership_REQUIRED_ARGC, uv_udp_set_membership_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_set_multicast_interface_FUNCTION
  mrb_define_class_method(mrb, UV_module, "udp_set_multicast_interface", mrb_UV_uv_udp_set_multicast_interface, MRB_ARGS_ARG(uv_udp_set_multicast_interface_REQUIRED_ARGC, uv_udp_set_multicast_interface_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_set_multicast_loop_FUNCTION
  mrb_define_class_method(mrb, UV_module, "udp_set_multicast_loop", mrb_UV_uv_udp_set_multicast_loop, MRB_ARGS_ARG(uv_udp_set_multicast_loop_REQUIRED_ARGC, uv_udp_set_multicast_loop_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_set_multicast_ttl_FUNCTION
  mrb_define_class_method(mrb, UV_module, "udp_set_multicast_ttl", mrb_UV_uv_udp_set_multicast_ttl, MRB_ARGS_ARG(uv_udp_set_multicast_ttl_REQUIRED_ARGC, uv_udp_set_multicast_ttl_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_set_ttl_FUNCTION
  mrb_define_class_method(mrb, UV_module, "udp_set_ttl", mrb_UV_uv_udp_set_ttl, MRB_ARGS_ARG(uv_udp_set_ttl_REQUIRED_ARGC, uv_udp_set_ttl_OPTIONAL_ARGC));
#endif
#if BIND_uv_udp_try_send_FUNCTION
  mrb_define_class_method(mrb, UV_module, "udp_try_send", mrb_UV_uv_udp_try_send, MRB_ARGS_ARG(uv_udp_try_send_REQUIRED_ARGC, uv_udp_try_send_OPTIONAL_ARGC));
#endif
#if BIND_uv_unref_FUNCTION
  mrb_define_class_method(mrb, UV_module, "unref", mrb_UV_uv_unref, MRB_ARGS_ARG(uv_unref_REQUIRED_ARGC, uv_unref_OPTIONAL_ARGC));
#endif
#if BIND_uv_update_time_FUNCTION
  mrb_define_class_method(mrb, UV_module, "update_time", mrb_UV_uv_update_time, MRB_ARGS_ARG(uv_update_time_REQUIRED_ARGC, uv_update_time_OPTIONAL_ARGC));
#endif
#if BIND_uv_uptime_FUNCTION
  mrb_define_class_method(mrb, UV_module, "uptime", mrb_UV_uv_uptime, MRB_ARGS_ARG(uv_uptime_REQUIRED_ARGC, uv_uptime_OPTIONAL_ARGC));
#endif
#if BIND_uv_version_FUNCTION
  mrb_define_class_method(mrb, UV_module, "version", mrb_UV_uv_version, MRB_ARGS_ARG(uv_version_REQUIRED_ARGC, uv_version_OPTIONAL_ARGC));
#endif
#if BIND_uv_version_string_FUNCTION
  mrb_define_class_method(mrb, UV_module, "version_string", mrb_UV_uv_version_string, MRB_ARGS_ARG(uv_version_string_REQUIRED_ARGC, uv_version_string_OPTIONAL_ARGC));
#endif
#if BIND_uv_walk_FUNCTION
  mrb_define_class_method(mrb, UV_module, "walk", mrb_UV_uv_walk, MRB_ARGS_ARG(uv_walk_REQUIRED_ARGC, uv_walk_OPTIONAL_ARGC));
#endif
#if BIND_uv_write_FUNCTION
  mrb_define_class_method(mrb, UV_module, "write", mrb_UV_uv_write, MRB_ARGS_ARG(uv_write_REQUIRED_ARGC, uv_write_OPTIONAL_ARGC));
#endif
#if BIND_uv_write2_FUNCTION
  mrb_define_class_method(mrb, UV_module, "write2", mrb_UV_uv_write2, MRB_ARGS_ARG(uv_write2_REQUIRED_ARGC, uv_write2_OPTIONAL_ARGC));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: post_module_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

void mrb_mruby_libuv_gem_final(mrb_state* mrb){
/* MRUBY_BINDING: module_final */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */

#ifdef __cplusplus
}
#endif
