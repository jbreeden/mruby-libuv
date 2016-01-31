#include "mruby_UV.h"

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

#ifdef __cplusplus
extern "C" {
#endif

/* MRUBY_BINDING: uv_accept */
/* sha: 3de90275390e97af51afdba2b1e0d7630c523d18016ddff70a93f89482bd81cc */
#if BIND_uv_accept_FUNCTION
#define uv_accept_REQUIRED_ARGC 2
#define uv_accept_OPTIONAL_ARGC 0
/* int uv_accept(uv_stream_t * server, uv_stream_t * client) */
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
/* uv_async_init(uv_loop_t *, uv_async_t *, uv_async_cb) */
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
/* sha: 1d712f4f2c790f56631e802b4e7ecbe403a212f5e91396e3479121c76537c926 */
#if BIND_uv_async_send_FUNCTION
#define uv_async_send_REQUIRED_ARGC 1
#define uv_async_send_OPTIONAL_ARGC 0
/* int uv_async_send(uv_async_t * async) */
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
/* sha: 376f301fed9f513160e84f74a975f18008c4c79bedf9027e7e4e854d7fc89959 */
#if BIND_uv_backend_fd_FUNCTION
#define uv_backend_fd_REQUIRED_ARGC 1
#define uv_backend_fd_OPTIONAL_ARGC 0
/* int uv_backend_fd(const uv_loop_t * arg1) */
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
/* sha: 2c6a5e5093c16686dd3e4b3873e380faf3467d39aa99857d1dfd3e3ba69d8266 */
#if BIND_uv_backend_timeout_FUNCTION
#define uv_backend_timeout_REQUIRED_ARGC 1
#define uv_backend_timeout_OPTIONAL_ARGC 0
/* int uv_backend_timeout(const uv_loop_t * arg1) */
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
/* sha: 8cd24ff2a3e42ed59fcd394c7288a219f79bc28a9a784417c22eea88cd489678 */
#if BIND_uv_barrier_destroy_FUNCTION
#define uv_barrier_destroy_REQUIRED_ARGC 1
#define uv_barrier_destroy_OPTIONAL_ARGC 0
/* void uv_barrier_destroy(uv_barrier_t * barrier) */
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
/* sha: 943a2394c09652914e8f1acfc300f2a51bef6d35a0a2b631fac03ddb65e27b67 */
#if BIND_uv_barrier_init_FUNCTION
#define uv_barrier_init_REQUIRED_ARGC 2
#define uv_barrier_init_OPTIONAL_ARGC 0
/* int uv_barrier_init(uv_barrier_t * barrier, unsigned int count) */
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
/* sha: 5a15695a2e3fcef5b2a618e441edfa8ceb058cd5fde54f999dc952a729ec0a17 */
#if BIND_uv_barrier_wait_FUNCTION
#define uv_barrier_wait_REQUIRED_ARGC 1
#define uv_barrier_wait_OPTIONAL_ARGC 0
/* int uv_barrier_wait(uv_barrier_t * barrier) */
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
/* sha: 6aef2f89f5e696989f01fb86de3ab50867f50608aa3eb925022b29bc3f3bd8e1 */
#if BIND_uv_buf_init_FUNCTION
#define uv_buf_init_REQUIRED_ARGC 2
#define uv_buf_init_OPTIONAL_ARGC 0
/* uv_buf_t uv_buf_init(char * base, unsigned int len) */
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
/* sha: 712e626e86a1d1b9b2fa0408d712ab4db1c46039c76ba96ffdd17774d8af58d2 */
#if BIND_uv_cancel_FUNCTION
#define uv_cancel_REQUIRED_ARGC 1
#define uv_cancel_OPTIONAL_ARGC 0
/* int uv_cancel(uv_req_t * req) */
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
/* sha: 55086389a20e91049dfaa9a254040f3ea1e8c8ef2171e037b7a72579ea1b69d3 */
#if BIND_uv_chdir_FUNCTION
#define uv_chdir_REQUIRED_ARGC 1
#define uv_chdir_OPTIONAL_ARGC 0
/* int uv_chdir(const char * dir) */
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
/* sha: 9e9739344ea1cb6f773e9f527c51a27e7fcacf7adfd74fce685230090f8262ab */
#if BIND_uv_check_init_FUNCTION
#define uv_check_init_REQUIRED_ARGC 2
#define uv_check_init_OPTIONAL_ARGC 0
/* int uv_check_init(uv_loop_t * arg1, uv_check_t * check) */
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
/* int uv_check_start(uv_check_t * check, uv_check_cb cb) */
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
/* sha: 2fb4686ec7573cd8633b903e5be3d9e549b56e807d8e97b49fe807ef1244519c */
#if BIND_uv_check_stop_FUNCTION
#define uv_check_stop_REQUIRED_ARGC 1
#define uv_check_stop_OPTIONAL_ARGC 0
/* int uv_check_stop(uv_check_t * check) */
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
/* sha: 1131175d2deb6a5e17283a611050c5a56f34f748f07ed7b5efa7b67b49157d8f */
#if BIND_uv_cond_broadcast_FUNCTION
#define uv_cond_broadcast_REQUIRED_ARGC 1
#define uv_cond_broadcast_OPTIONAL_ARGC 0
/* void uv_cond_broadcast(uv_cond_t * cond) */
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
/* sha: 5c439b9fdabf62a0a8c87a1ec8f6a494f6abe3d306e6c903d00ae848bd70e2fe */
#if BIND_uv_cond_destroy_FUNCTION
#define uv_cond_destroy_REQUIRED_ARGC 1
#define uv_cond_destroy_OPTIONAL_ARGC 0
/* void uv_cond_destroy(uv_cond_t * cond) */
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
/* sha: c43dc8d86e431f7a179891e0a80b91ce3032a48b1ff5d602945b0fef80edc0e2 */
#if BIND_uv_cond_init_FUNCTION
#define uv_cond_init_REQUIRED_ARGC 1
#define uv_cond_init_OPTIONAL_ARGC 0
/* int uv_cond_init(uv_cond_t * cond) */
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
/* sha: 9f384c974238cde4e163fecc1670e40e22999429dd4489af48d41818f39ada11 */
#if BIND_uv_cond_signal_FUNCTION
#define uv_cond_signal_REQUIRED_ARGC 1
#define uv_cond_signal_OPTIONAL_ARGC 0
/* void uv_cond_signal(uv_cond_t * cond) */
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
/* sha: 06516b2ee764e0e8b82c5dc57ca7e82c43ce2ea2b4063d58083394b9314fea40 */
#if BIND_uv_cond_timedwait_FUNCTION
#define uv_cond_timedwait_REQUIRED_ARGC 3
#define uv_cond_timedwait_OPTIONAL_ARGC 0
/* int uv_cond_timedwait(uv_cond_t * cond, uv_mutex_t * mutex, uint64_t timeout) */
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
/* sha: 91be2c2a225d9ee57d823de42b0906af5f3d64d49fd44534a8c90be306b13277 */
#if BIND_uv_cond_wait_FUNCTION
#define uv_cond_wait_REQUIRED_ARGC 2
#define uv_cond_wait_OPTIONAL_ARGC 0
/* void uv_cond_wait(uv_cond_t * cond, uv_mutex_t * mutex) */
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
/* sha: 3cceda0f9249aadc44e03bbf249361c0fdbab9aa8e5547f5257b65e62db08ceb */
#if BIND_uv_cpu_info_FUNCTION
#define uv_cpu_info_REQUIRED_ARGC 2
#define uv_cpu_info_OPTIONAL_ARGC 0
/* int uv_cpu_info(uv_cpu_info_t ** cpu_infos, int * count) */
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
/* int uv_cwd(char * buffer, size_t * size) */
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
/* uv_loop_t * uv_default_loop() */
mrb_value
mrb_UV_uv_default_loop(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uv_loop_t * native_return_value = uv_default_loop();
  
  /* Box the return value */
  mrb_value return_value = mruby_box_uv_loop_t(mrb, native_return_value);
  
  INIT_LOOP_DATA(native_return_value, return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_disable_stdio_inheritance */
/* sha: fe464f9c09618b290b754ce9323dbda5004c58dbc2ec9fcbee206c52bcd7f82c */
#if BIND_uv_disable_stdio_inheritance_FUNCTION
#define uv_disable_stdio_inheritance_REQUIRED_ARGC 0
#define uv_disable_stdio_inheritance_OPTIONAL_ARGC 0
/* void uv_disable_stdio_inheritance() */
mrb_value
mrb_UV_uv_disable_stdio_inheritance(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  uv_disable_stdio_inheritance();

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_dlclose */
/* sha: c0e1f2a414b41e3dacfab1cbfd0eb8e3a6322f1f538bd47c2b05a28e97f94966 */
#if BIND_uv_dlclose_FUNCTION
#define uv_dlclose_REQUIRED_ARGC 1
#define uv_dlclose_OPTIONAL_ARGC 0
/* void uv_dlclose(uv_lib_t * lib) */
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
/* sha: a5da2afc608932aa49d1dbcec963381c93d350755018b7f250882ada43eab7c0 */
#if BIND_uv_dlerror_FUNCTION
#define uv_dlerror_REQUIRED_ARGC 1
#define uv_dlerror_OPTIONAL_ARGC 0
/* const char * uv_dlerror(const uv_lib_t * lib) */
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
/* sha: c379f5b620d0c6181fd180814a93e297a373d54b8433ac235ee36405aa04ad8b */
#if BIND_uv_dlopen_FUNCTION
#define uv_dlopen_REQUIRED_ARGC 2
#define uv_dlopen_OPTIONAL_ARGC 0
/* int uv_dlopen(const char * filename, uv_lib_t * lib) */
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
/* sha: 41e5e75394e72bc7e4ae73d04d55f4959a4b393994e6841bfee51350c1b485fa */
#if BIND_uv_dlsym_FUNCTION
#define uv_dlsym_REQUIRED_ARGC 3
#define uv_dlsym_OPTIONAL_ARGC 0
/* int uv_dlsym(uv_lib_t * lib, const char * name, void ** ptr) */
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
/* sha: b7d23cf00f489ee5e00a0f31b5d0c818c86318e972195229893f5b0a1469155b */
#if BIND_uv_err_name_FUNCTION
#define uv_err_name_REQUIRED_ARGC 1
#define uv_err_name_OPTIONAL_ARGC 0
/* const char * uv_err_name(int err) */
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
/* int uv_exepath(char *, size_t *) */
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
/* sha: 5091067de5b07fad1e2c79c6e7b431993385be6d3e99b86052f5c8f028c87b3a */
#if BIND_uv_fileno_FUNCTION
#define uv_fileno_REQUIRED_ARGC 2
#define uv_fileno_OPTIONAL_ARGC 0
/* int uv_fileno(const uv_handle_t * handle, uv_os_fd_t * fd) */
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
/* sha: aa4d5af536dc1ce5b0c3971c9dc78e17726d5a8fa3182bf902c7be18cd76467d */
#if BIND_uv_free_cpu_info_FUNCTION
#define uv_free_cpu_info_REQUIRED_ARGC 2
#define uv_free_cpu_info_OPTIONAL_ARGC 0
/* void uv_free_cpu_info(uv_cpu_info_t * cpu_infos, int count) */
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
/* sha: 03360cf3d7fd6e99e70a2efe9b2e1881393119e79913c328b5b3df172cbff327 */
#if BIND_uv_free_interface_addresses_FUNCTION
#define uv_free_interface_addresses_REQUIRED_ARGC 2
#define uv_free_interface_addresses_OPTIONAL_ARGC 0
/* void uv_free_interface_addresses(uv_interface_address_t * addresses, int count) */
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
/* sha: d10b03d042a35b871e25a251fe0e98d31ff62c241c6f73857d283c4ff0186bde */
#if BIND_uv_freeaddrinfo_FUNCTION
#define uv_freeaddrinfo_REQUIRED_ARGC 1
#define uv_freeaddrinfo_OPTIONAL_ARGC 0
/* void uv_freeaddrinfo(struct addrinfo * ai) */
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
/* int uv_fs_access(uv_loop_t *, uv_fs_t *, const char *, int, uv_fs_cb) */
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
/* int uv_fs_chown(uv_loop_t *, uv_fs_t *, const char *, uv_uid_t, uv_gid_t, uv_fs_cb) */
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
/* int uv_fs_close(uv_loop_t *, uv_fs_t *, uv_file, uv_fs_cb) */
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
/* sha: 6b54484104d5d88b46d38b7a185436b78dfe0e2333a8e4edce69e4391f701049 */
#if BIND_uv_fs_event_init_FUNCTION
#define uv_fs_event_init_REQUIRED_ARGC 2
#define uv_fs_event_init_OPTIONAL_ARGC 0
/* int uv_fs_event_init(uv_loop_t * loop, uv_fs_event_t * handle) */
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
/* sha: 48f271de6aa6f9a8f4f1812377060ba8cb5e6f4ef60b1ddfe718981ff4d70865 */
#if BIND_uv_fs_event_stop_FUNCTION
#define uv_fs_event_stop_REQUIRED_ARGC 1
#define uv_fs_event_stop_OPTIONAL_ARGC 0
/* int uv_fs_event_stop(uv_fs_event_t * handle) */
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
/* int uv_fs_fchmod(uv_loop_t * loop, uv_fs_t * req, uv_file file, int mode, uv_fs_cb cb) */
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
/* int uv_fs_ftruncate(uv_loop_t *, uv_fs_t *, uv_file, int64_t, uv_fs_cb) */
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
/* int uv_fs_link(uv_loop_t *, uv_fs_t *, const char *, const char *, uv_fs_cb) */
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
/* sha: 7dd2d6141e695119436a808edf9b8053e0aa6735bab926fd79feb8e57f3b1be1 */
#if BIND_uv_fs_poll_init_FUNCTION
#define uv_fs_poll_init_REQUIRED_ARGC 2
#define uv_fs_poll_init_OPTIONAL_ARGC 0
/* int uv_fs_poll_init(uv_loop_t * loop, uv_fs_poll_t * handle) */
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
/* sha: 8c91945d2e494467fef1f7899bd528f4463b254d421b8aee0fc48e1e95129ddf */
#if BIND_uv_fs_poll_stop_FUNCTION
#define uv_fs_poll_stop_REQUIRED_ARGC 1
#define uv_fs_poll_stop_OPTIONAL_ARGC 0
/* int uv_fs_poll_stop(uv_fs_poll_t * handle) */
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
# undef BIND_uv_fs_realpath_FUNCTION
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
/* sha: 9131167ba57e767fce0ebcca6bfd4491bd9c93fa6d8edf42a8a831520746a0b7 */
#if BIND_uv_fs_req_cleanup_FUNCTION
#define uv_fs_req_cleanup_REQUIRED_ARGC 1
#define uv_fs_req_cleanup_OPTIONAL_ARGC 0
/* void uv_fs_req_cleanup(uv_fs_t * req) */
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
/* sha: 141a62f6e9faa15f4b55e5d5d3d5cd737268e5db0d7670abf8ef256693894db3 */
#if BIND_uv_fs_scandir_next_FUNCTION
#define uv_fs_scandir_next_REQUIRED_ARGC 2
#define uv_fs_scandir_next_OPTIONAL_ARGC 0
/* int uv_fs_scandir_next(uv_fs_t * req, uv_dirent_t * ent) */
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
  mrb_value buf;
  mrb_int native_offset;
  mrb_value native_cb;
  uv_fs_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooiSi|&", &loop, &req, &native_file, &buf, &native_offset, &native_cb);

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
  uv_buf_t native_buf = mruby_uv_prepare_write_buf(mrb, req, buf);

  /* Invocation */
  int native_return_value = uv_fs_write(native_loop, native_req, native_file, &native_buf, 1, native_offset, thunk);

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
/* sha: 17b513e4456448cedcc89da2bf7d1139b7935d2a1a9b99d3e70534fdf334b941 */
#if BIND_uv_get_process_title_FUNCTION
#define uv_get_process_title_REQUIRED_ARGC 2
#define uv_get_process_title_OPTIONAL_ARGC 0
/* int uv_get_process_title(char * buffer, size_t size) */
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
#define uv_getaddrinfo_REQUIRED_ARGC 4
#define uv_getaddrinfo_OPTIONAL_ARGC 2
/* int uv_getaddrinfo(uv_loop_t *, uv_getaddrinfo_t * req, uv_getaddrinfo_cb cb, const char *, const char *, const struct addrinfo *) */
mrb_value
mrb_UV_uv_getaddrinfo(mrb_state* mrb, mrb_value self) {
  mrb_value loop = mrb_nil_value();
  mrb_value req = mrb_nil_value();
  mrb_value getaddrinfo_cb = mrb_nil_value();
  char * native_node = NULL;
  char * native_service = NULL;
  mrb_value hints = mrb_nil_value();

  /* Fetch the args */
  mrb_get_args(mrb, "oozz|o&", &loop, &req, &native_node, &native_service, &hints, &getaddrinfo_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, Getaddrinfo_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Getaddrinfo expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, hints, Addrinfo_class(mrb)) && !mrb_nil_p(hints)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Addrinfo expected");
    return mrb_nil_value();
  }
  uv_getaddrinfo_cb thunk = NULL;
  if (!mrb_nil_p(getaddrinfo_cb)) {
    thunk = mruby_uv_getaddrinfo_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_getaddrinfo_cb_thunk", getaddrinfo_cb)
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
/* sha: 976d528602c2951be3cc2609b512c07fdf7676731c8b80a53e39dc989d321168 */
#if BIND_uv_getnameinfo_FUNCTION
#define uv_getnameinfo_REQUIRED_ARGC 3
#define uv_getnameinfo_OPTIONAL_ARGC 2
/* int uv_getnameinfo(uv_loop_t * loop, uv_getnameinfo_t * req, uv_getnameinfo_cb getnameinfo_cb, const struct sockaddr * addr, int flags) */
mrb_value
mrb_UV_uv_getnameinfo(mrb_state* mrb, mrb_value self) {
  mrb_value loop;
  mrb_value req;
  mrb_value getnameinfo_cb;
  mrb_value addr;
  mrb_int native_flags = 0;
  uv_getnameinfo_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo|i&", &loop, &req, &addr, &native_flags, &getnameinfo_cb);
  
  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, req, Getnameinfo_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Getnameinfo expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, addr, Sockaddr_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sockaddr expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(getnameinfo_cb)) {
    thunk = mruby_uv_getnameinfo_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_getnameinfo_cb_thunk", getnameinfo_cb);
  }
  

  /* Unbox param: loop */
  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  /* Unbox param: req */
  uv_getnameinfo_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_getnameinfo_t(req));

  /* Unbox param: addr */
  const struct sockaddr * native_addr = (mrb_nil_p(addr) ? NULL : mruby_unbox_sockaddr(addr));

  /* Invocation */
  int native_return_value = uv_getnameinfo(native_loop, native_req, thunk, native_addr, native_flags);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_getrusage */
/* sha: 014e3da4cf78dfa3e1e12f4b8523c72f2f3c2d157f7fe920c0e00519509f1c97 */
#if BIND_uv_getrusage_FUNCTION
#define uv_getrusage_REQUIRED_ARGC 1
#define uv_getrusage_OPTIONAL_ARGC 0
/* int uv_getrusage(uv_rusage_t * rusage) */
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
/* sha: c945daa47070ae793ec93f17018bf67781c69f410c6503f4d5bd2aa199e47262 */
#if BIND_uv_guess_handle_FUNCTION
#define uv_guess_handle_REQUIRED_ARGC 1
#define uv_guess_handle_OPTIONAL_ARGC 0
/* uv_handle_type uv_guess_handle(uv_file file) */
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
/* sha: 4275962ef7d1a888881396f912f6fab74f3248b600bd277db0c36879564ca38e */
#if BIND_uv_handle_size_FUNCTION
#define uv_handle_size_REQUIRED_ARGC 1
#define uv_handle_size_OPTIONAL_ARGC 0
/* size_t uv_handle_size(uv_handle_type type) */
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
/* sha: 73799bc30c244e335139aee34226310fca93bc726653acb3e73a884a24918ffb */
#if BIND_uv_has_ref_FUNCTION
#define uv_has_ref_REQUIRED_ARGC 1
#define uv_has_ref_OPTIONAL_ARGC 0
/* int uv_has_ref(const uv_handle_t * arg1) */
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
/* sha: 9265ee6b76416b51b810404928323de035e7405e5882a8d999c0b0d654a95eb8 */
#if BIND_uv_hrtime_FUNCTION
#define uv_hrtime_REQUIRED_ARGC 0
#define uv_hrtime_OPTIONAL_ARGC 0
/* uint64_t uv_hrtime() */
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
/* sha: 56b097d4e17fe66d7311843e71e3288acf5666acc5c45d4a3549f5431b46adf2 */
#if BIND_uv_idle_init_FUNCTION
#define uv_idle_init_REQUIRED_ARGC 2
#define uv_idle_init_OPTIONAL_ARGC 0
/* int uv_idle_init(uv_loop_t * arg1, uv_idle_t * idle) */
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
/* sha: 82941aea4266143cf7e6669457935876f83106b9e81b22671b72abf659e0beb7 */
#if BIND_uv_idle_stop_FUNCTION
#define uv_idle_stop_REQUIRED_ARGC 1
#define uv_idle_stop_OPTIONAL_ARGC 0
/* int uv_idle_stop(uv_idle_t * idle) */
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
/* sha: fd596f7f32c64ec51f3a1a566f6af9dd85974f798d1963662c4d27ca3beeb76a */
#if BIND_uv_inet_ntop_FUNCTION
#define uv_inet_ntop_REQUIRED_ARGC 4
#define uv_inet_ntop_OPTIONAL_ARGC 0
/* int uv_inet_ntop(int af, const void * src, char * dst, size_t size) */
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
/* sha: 202e32a7cf527e57c1166a077036b8b7b00fa020760ca20095dcdf5337566684 */
#if BIND_uv_inet_pton_FUNCTION
#define uv_inet_pton_REQUIRED_ARGC 3
#define uv_inet_pton_OPTIONAL_ARGC 0
/* int uv_inet_pton(int af, const char * src, void * dst) */
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
/* sha: e3764606779d7dfdc22f37c29fc792b8bd890acc967625ac9154cd23d4f44af2 */
#if BIND_uv_interface_addresses_FUNCTION
#define uv_interface_addresses_REQUIRED_ARGC 2
#define uv_interface_addresses_OPTIONAL_ARGC 0
/* int uv_interface_addresses(uv_interface_address_t ** addresses, int * count) */
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
/* sha: 3df5ed690eb48d94bee35db2066b81a8473a4efb201e309117da715384789532 */
#if BIND_uv_ip4_addr_FUNCTION
#define uv_ip4_addr_REQUIRED_ARGC 2
#define uv_ip4_addr_OPTIONAL_ARGC 0
/* int uv_ip4_addr(const char * ip, int port, struct sockaddr_in * addr) */
mrb_value
mrb_UV_uv_ip4_addr(mrb_state* mrb, mrb_value self) {
  char * native_ip = NULL;
  mrb_int native_port;

  /* Fetch the args */
  mrb_get_args(mrb, "zi", &native_ip, &native_port);

  /* Unbox param: addr */
  sockaddr_in * native_addr = (sockaddr_in*)calloc(1, sizeof(sockaddr_in));

  /* Invocation */
  int native_return_value = uv_ip4_addr(native_ip, native_port, native_addr);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  /* Box out params */
  mrb_value addr = mruby_giftwrap_sockaddr_in(mrb, native_addr);
  
  mrb_value results = mrb_ary_new(mrb);
  mrb_ary_push(mrb, results, return_value);
  if (native_return_value == 0) {
    mrb_ary_push(mrb, results, addr);
  } else {
    mrb_ary_push(mrb, results, mrb_nil_value());
  }
  
  return results;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_ip4_name */
/* sha: dfa5f4ded29979462720a96e76207533569d9eee5db1649227847b2cab8891bd */
#if BIND_uv_ip4_name_FUNCTION
#define uv_ip4_name_REQUIRED_ARGC 1
#define uv_ip4_name_OPTIONAL_ARGC 0
/* int uv_ip4_name(const struct sockaddr_in * src, char * dst, size_t size) */
mrb_value
mrb_UV_uv_ip4_name(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SockaddrIn_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SockaddrIn expected");
    return mrb_nil_value();
  }

  /* Unbox param: src */
  const struct sockaddr_in * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_sockaddr_in(src));

  /* Invocation */
  
  /* 45 is the max size... rounding up a tad */
  char * native_dst = (char*)calloc(101, sizeof(char));
  int native_return_value = uv_ip4_name(native_src, native_dst, 100);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  /* Box the out params */
  mrb_value dst = mrb_str_new_cstr(mrb, native_dst);
  free(native_dst);
  
  mrb_value results = mrb_ary_new(mrb);
  mrb_ary_push(mrb, results, return_value);
  mrb_ary_push(mrb, results, dst);
  
  return results;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_ip6_addr */
/* sha: b6b420a11408c258dce1f27bbc8477741a32c439aff75318522e347cae192ec3 */
#if BIND_uv_ip6_addr_FUNCTION
#define uv_ip6_addr_REQUIRED_ARGC 2
#define uv_ip6_addr_OPTIONAL_ARGC 0
/* int uv_ip6_addr(const char * ip, int port, struct sockaddr_in6 * addr) */
mrb_value
mrb_UV_uv_ip6_addr(mrb_state* mrb, mrb_value self) {
  char * native_ip = NULL;
  mrb_int native_port;

  /* Fetch the args */
  mrb_get_args(mrb, "zi", &native_ip, &native_port);

  /* Unbox param: addr */
  struct sockaddr_in6 * native_addr = (sockaddr_in6*)calloc(1, sizeof(sockaddr_in6));

  /* Invocation */
  int native_return_value = uv_ip6_addr(native_ip, native_port, native_addr);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  /* Box the out params */
  mrb_value addr = mruby_giftwrap_sockaddr_in6(mrb, native_addr);
  
  mrb_value results = mrb_ary_new(mrb);
  mrb_ary_push(mrb, results, return_value);
  if (native_return_value == 0) {
    mrb_ary_push(mrb, results, addr);
  } else {
    mrb_ary_push(mrb, results, mrb_nil_value());
  }
  
  return results;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_ip6_name */
/* sha: b8e0325e627b810c8760bff2210db35bf53bd813a2f377ea8e872965c3897253 */
#if BIND_uv_ip6_name_FUNCTION
#define uv_ip6_name_REQUIRED_ARGC 1
#define uv_ip6_name_OPTIONAL_ARGC 0
/* int uv_ip6_name(const struct sockaddr_in6 * src, char * dst, size_t size) */
mrb_value
mrb_UV_uv_ip6_name(mrb_state* mrb, mrb_value self) {
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &src);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, src, SockaddrIn6_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SockaddrIn6 expected");
    return mrb_nil_value();
  }

  /* Unbox param: src */
  const struct sockaddr_in6 * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_sockaddr_in6(src));

  /* Invocation */
  char * native_dst = (char*)calloc(101, sizeof(char));
  int native_return_value = uv_ip6_name(native_src, native_dst, 100);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  /* Box the out params */
  mrb_value dst = mrb_str_new_cstr(mrb, native_dst);
  free(native_dst);
  
  mrb_value results = mrb_ary_new(mrb);
  mrb_ary_push(mrb, results, return_value);
  mrb_ary_push(mrb, results, dst);
  
  return results;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_is_active */
/* sha: c9ac06904db6f99b8fded47adba31467249086e262b08dd20e0c11ffb40c267c */
#if BIND_uv_is_active_FUNCTION
#define uv_is_active_REQUIRED_ARGC 1
#define uv_is_active_OPTIONAL_ARGC 0
/* int uv_is_active(const uv_handle_t * handle) */
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
/* sha: 9790b4d8a18be24e8ae960394db1ec97760d4d412c9005d795f15e6bc9785df6 */
#if BIND_uv_is_closing_FUNCTION
#define uv_is_closing_REQUIRED_ARGC 1
#define uv_is_closing_OPTIONAL_ARGC 0
/* int uv_is_closing(const uv_handle_t * handle) */
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
/* sha: 934ab6b8104e7ef1abb03e2f4a5562ff068c83e6fa61904f49a28c5d127ca9e3 */
#if BIND_uv_is_readable_FUNCTION
#define uv_is_readable_REQUIRED_ARGC 1
#define uv_is_readable_OPTIONAL_ARGC 0
/* int uv_is_readable(const uv_stream_t * handle) */
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
/* sha: 69daa9326df8dd634f4836b07adf5bcf414780c80c68a01092272456001db051 */
#if BIND_uv_is_writable_FUNCTION
#define uv_is_writable_REQUIRED_ARGC 1
#define uv_is_writable_OPTIONAL_ARGC 0
/* int uv_is_writable(const uv_stream_t * handle) */
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
/* sha: 7b4f9fa71c37ca5ce710e5e0bec06beb6fe3b366ba0166c117bc94b1b6fa6660 */
#if BIND_uv_key_create_FUNCTION
#define uv_key_create_REQUIRED_ARGC 1
#define uv_key_create_OPTIONAL_ARGC 0
/* int uv_key_create(uv_key_t * key) */
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
/* sha: f03a8a2e526576df6d624539f3d94000f9441a698524e116ceefe8f8ccb1325d */
#if BIND_uv_key_delete_FUNCTION
#define uv_key_delete_REQUIRED_ARGC 1
#define uv_key_delete_OPTIONAL_ARGC 0
/* void uv_key_delete(uv_key_t * key) */
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
/* sha: 18622590ca0a4d1464ea2606b631bdb6e9ea1f1d6771ea341baf05d842838802 */
#if BIND_uv_key_get_FUNCTION
#define uv_key_get_REQUIRED_ARGC 1
#define uv_key_get_OPTIONAL_ARGC 0
/* void * uv_key_get(uv_key_t * key) */
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
/* sha: 9de7dd94a8fd8fc317f2e2a4db8d41cc53c515faaf7f5d415389c8b2de4e04fd */
#if BIND_uv_key_set_FUNCTION
#define uv_key_set_REQUIRED_ARGC 2
#define uv_key_set_OPTIONAL_ARGC 0
/* void uv_key_set(uv_key_t * key, void * value) */
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
/* sha: ed6eff42a52e451a8c6dcd1d3f68097361e413d90d751d63e0e6611f0e9fda1b */
#if BIND_uv_kill_FUNCTION
#define uv_kill_REQUIRED_ARGC 2
#define uv_kill_OPTIONAL_ARGC 0
/* int uv_kill(int pid, int signum) */
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
/* sha: 282595ca6babb1dab130425804cea4f772409b3892b19a9376c8302f0290440d */
#if BIND_uv_loadavg_FUNCTION
#define uv_loadavg_REQUIRED_ARGC 1
#define uv_loadavg_OPTIONAL_ARGC 0
/* void uv_loadavg(double [3] avg) */
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
/* sha: 76917df9ce4898923edb9076aad24bae9ce0e4d2b380a51f41b19ae5c3ecc13c */
#if BIND_uv_loop_alive_FUNCTION
#define uv_loop_alive_REQUIRED_ARGC 1
#define uv_loop_alive_OPTIONAL_ARGC 0
/* int uv_loop_alive(const uv_loop_t * loop) */
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
/* sha: e5343b32cac2855c394f6d5e699f1662539a64bb2aafc70bf0e34863ab6e4733 */
#if BIND_uv_loop_close_FUNCTION
#define uv_loop_close_REQUIRED_ARGC 1
#define uv_loop_close_OPTIONAL_ARGC 0
/* int uv_loop_close(uv_loop_t * loop) */
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
/* sha: 40a28f8300b4d312debec6fce1e1c57f44863a128b22e2e3042ffd2b2f268c4a */
#if BIND_uv_loop_configure_FUNCTION
#define uv_loop_configure_REQUIRED_ARGC 2
#define uv_loop_configure_OPTIONAL_ARGC 0
/* int uv_loop_configure(uv_loop_t * loop, uv_loop_option option) */
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
/* sha: be7751866ea295ef82b91df82ac4290ce2fdbef7ea13a2d19b9010cf99478dda */
#if BIND_uv_loop_delete_FUNCTION
#define uv_loop_delete_REQUIRED_ARGC 1
#define uv_loop_delete_OPTIONAL_ARGC 0
/* void uv_loop_delete(uv_loop_t * arg1) */
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
/* sha: 4df764b419aa654ba27c61cf883223ccbc3bb5508bdc5747a047ddba2275065a */
#if BIND_uv_loop_init_FUNCTION
#define uv_loop_init_REQUIRED_ARGC 1
#define uv_loop_init_OPTIONAL_ARGC 0
/* int uv_loop_init(uv_loop_t * loop) */
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
/* sha: 012142ccb9f3f9c43e8fa3ca71f37dafcd890a958b2024a0be21c89fa4e3c67f */
#if BIND_uv_loop_new_FUNCTION
#define uv_loop_new_REQUIRED_ARGC 0
#define uv_loop_new_OPTIONAL_ARGC 0
/* uv_loop_t * uv_loop_new() */
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
/* sha: 91d838b0c4739c58032e3728d1deaa1e70a7a434c383cd91203f9e285511f544 */
#if BIND_uv_loop_size_FUNCTION
#define uv_loop_size_REQUIRED_ARGC 0
#define uv_loop_size_OPTIONAL_ARGC 0
/* size_t uv_loop_size() */
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
/* sha: b611ef17678d82d04eee809153a7318824904e1e453a40cdeb454e968e1931f6 */
#if BIND_uv_mutex_destroy_FUNCTION
#define uv_mutex_destroy_REQUIRED_ARGC 1
#define uv_mutex_destroy_OPTIONAL_ARGC 0
/* void uv_mutex_destroy(uv_mutex_t * handle) */
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
/* sha: 56f18e29458d7e61dd3154afc98acdd23b89cf78d06f9a866894d3fb2f704244 */
#if BIND_uv_mutex_init_FUNCTION
#define uv_mutex_init_REQUIRED_ARGC 1
#define uv_mutex_init_OPTIONAL_ARGC 0
/* int uv_mutex_init(uv_mutex_t * handle) */
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
/* sha: c9feb02ea93eb2c02b39ef26c359f9665023003e9967c5ef3b8440521ba420d1 */
#if BIND_uv_mutex_lock_FUNCTION
#define uv_mutex_lock_REQUIRED_ARGC 1
#define uv_mutex_lock_OPTIONAL_ARGC 0
/* void uv_mutex_lock(uv_mutex_t * handle) */
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
/* sha: 2e14e450f3f98472616126f3ea43ef08cf1a766d6d9ddeb7e6f74ba7a5dc25ae */
#if BIND_uv_mutex_trylock_FUNCTION
#define uv_mutex_trylock_REQUIRED_ARGC 1
#define uv_mutex_trylock_OPTIONAL_ARGC 0
/* int uv_mutex_trylock(uv_mutex_t * handle) */
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
/* sha: 9fbb358bb8cfbf2696d6acb96c71cdd4f1cb7a1efbd520b6b35b76f6cd4fd709 */
#if BIND_uv_mutex_unlock_FUNCTION
#define uv_mutex_unlock_REQUIRED_ARGC 1
#define uv_mutex_unlock_OPTIONAL_ARGC 0
/* void uv_mutex_unlock(uv_mutex_t * handle) */
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
/* sha: f36a15d384e7a3ab99d5cf2da6a79b25673a3c2790dff2c81280685460fefd2b */
#if BIND_uv_now_FUNCTION
#define uv_now_REQUIRED_ARGC 1
#define uv_now_OPTIONAL_ARGC 0
/* uint64_t uv_now(const uv_loop_t * arg1) */
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
/* sha: 39ce53065ced4241ce239c1c2419c259452fe1e20a7874544e2a5560d3d289da */
#if BIND_uv_once_FUNCTION
#define uv_once_REQUIRED_ARGC 2
#define uv_once_OPTIONAL_ARGC 0
/* void uv_once(uv_once_t * guard, void (*)(void) callback) */
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
/* sha: 2c26c2622650df8db4f55fb58d9e62cb62ddafe648d5444d6ca21bf6c7837698 */
#if BIND_uv_pipe_bind_FUNCTION
#define uv_pipe_bind_REQUIRED_ARGC 2
#define uv_pipe_bind_OPTIONAL_ARGC 0
/* int uv_pipe_bind(uv_pipe_t * handle, const char * name) */
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
/* sha: 8d5822776419f48eb070cac2834db5b4bf2ffe151bbd91f652b584daaef74347 */
#if BIND_uv_pipe_connect_FUNCTION
#define uv_pipe_connect_REQUIRED_ARGC 4
#define uv_pipe_connect_OPTIONAL_ARGC 0
/* void uv_pipe_connect(uv_connect_t * req, uv_pipe_t * handle, const char * name, uv_connect_cb cb) */
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
/* sha: 334c43cd126db1791c1959f98c8da16e0da32807aeabaea3b115207e6ad1e4ed */
#if BIND_uv_pipe_getpeername_FUNCTION
#define uv_pipe_getpeername_REQUIRED_ARGC 1
#define uv_pipe_getpeername_OPTIONAL_ARGC 0
/* int uv_pipe_getpeername(const uv_pipe_t * handle, char * buffer, size_t * size) */
mrb_value
mrb_UV_uv_pipe_getpeername(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, Pipe_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Pipe expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  const uv_pipe_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_pipe_t(handle));

  /* Invocation */
  char * native_name = (char*)calloc(1025, sizeof(char));
  size_t size = 0;
  int native_return_value = uv_pipe_getpeername(native_handle, native_name, &size);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  /* Box the out param */
  mrb_value name = mrb_nil_value();
  if (native_return_value == 0) {
    name = mrb_str_new(mrb, native_name, size);
  }
  free(native_name);
  
  mrb_value results = mrb_ary_new(mrb);
  mrb_ary_push(mrb, results, return_value);
  mrb_ary_push(mrb, results, name);
  return results;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_pipe_getsockname */
/* sha: 8ccf666165a7f25ea63991357bc708a6c859e88c5e2bfa239b6a0a67ab389fdf */
#if BIND_uv_pipe_getsockname_FUNCTION
#define uv_pipe_getsockname_REQUIRED_ARGC 1
#define uv_pipe_getsockname_OPTIONAL_ARGC 0
/* int uv_pipe_getsockname(const uv_pipe_t * handle, char * buffer, size_t * size) */
mrb_value
mrb_UV_uv_pipe_getsockname(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, Pipe_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Pipe expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  const uv_pipe_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_pipe_t(handle));

  /* Invocation */
  char * native_name = (char*)calloc(1025, sizeof(char));
  size_t size = 0;
  int native_return_value = uv_pipe_getsockname(native_handle, native_name, &size);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  /* Box the out param */
  mrb_value name = mrb_nil_value();
  if (native_return_value == 0) {
    name = mrb_str_new(mrb, native_name, size);
  }
  free(native_name);
  
  mrb_value results = mrb_ary_new(mrb);
  mrb_ary_push(mrb, results, return_value);
  mrb_ary_push(mrb, results, name);
  return results;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_pipe_init */
/* sha: 13f4c5a30589e4a6eee8ebb2da5d2ed1492b68648d89c963e79946b94dfcc580 */
#if BIND_uv_pipe_init_FUNCTION
#define uv_pipe_init_REQUIRED_ARGC 3
#define uv_pipe_init_OPTIONAL_ARGC 0
/* int uv_pipe_init(uv_loop_t * arg1, uv_pipe_t * handle, int ipc) */
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
/* sha: 2afb4b747a3b348e7c9b628781f8082c193ccf62c61c14430d32ace172020fb3 */
#if BIND_uv_pipe_open_FUNCTION
#define uv_pipe_open_REQUIRED_ARGC 2
#define uv_pipe_open_OPTIONAL_ARGC 0
/* int uv_pipe_open(uv_pipe_t * arg1, uv_file file) */
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
/* sha: 7f74f97ad4c4b628da3f58e4e2a029dd6575fd8f380ae1ead45a9600aeab553b */
#if BIND_uv_pipe_pending_count_FUNCTION
#define uv_pipe_pending_count_REQUIRED_ARGC 1
#define uv_pipe_pending_count_OPTIONAL_ARGC 0
/* int uv_pipe_pending_count(uv_pipe_t * handle) */
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
/* sha: f8fe139e5b6fe4251475ca8e9fbdca36bffb125201bfd48bacfbaf9377963263 */
#if BIND_uv_pipe_pending_instances_FUNCTION
#define uv_pipe_pending_instances_REQUIRED_ARGC 2
#define uv_pipe_pending_instances_OPTIONAL_ARGC 0
/* void uv_pipe_pending_instances(uv_pipe_t * handle, int count) */
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
/* sha: 1bfd503e5ea67dda0f5be95f474e82d8d362f8d8eeb99d1d75b952fa7bdc6513 */
#if BIND_uv_pipe_pending_type_FUNCTION
#define uv_pipe_pending_type_REQUIRED_ARGC 1
#define uv_pipe_pending_type_OPTIONAL_ARGC 0
/* uv_handle_type uv_pipe_pending_type(uv_pipe_t * handle) */
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
/* sha: d4bf79e82ecac8e1eeab2bc0162296735e56f916bbe8f01d4aa59008d55c0294 */
#if BIND_uv_poll_init_FUNCTION
#define uv_poll_init_REQUIRED_ARGC 3
#define uv_poll_init_OPTIONAL_ARGC 0
/* int uv_poll_init(uv_loop_t * loop, uv_poll_t * handle, int fd) */
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
/* sha: ea0f6325271a1d4899c20ab2fcb79214f2dc8ea7c35172ce3bfdb7a773aedd92 */
#if BIND_uv_poll_init_socket_FUNCTION
#define uv_poll_init_socket_REQUIRED_ARGC 3
#define uv_poll_init_socket_OPTIONAL_ARGC 0
/* int uv_poll_init_socket(uv_loop_t * loop, uv_poll_t * handle, uv_os_sock_t socket) */
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
/* sha: c3849e2f15c523af2ff7ae8dae7e5574dd03a1f0e2b59c15f65abc58ee7e9b5e */
#if BIND_uv_poll_stop_FUNCTION
#define uv_poll_stop_REQUIRED_ARGC 1
#define uv_poll_stop_OPTIONAL_ARGC 0
/* int uv_poll_stop(uv_poll_t * handle) */
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
/* sha: 614e59be43f75e607d97387c0155bc68a2df103a61512037f06d5ef21d64343b */
#if BIND_uv_prepare_init_FUNCTION
#define uv_prepare_init_REQUIRED_ARGC 2
#define uv_prepare_init_OPTIONAL_ARGC 0
/* int uv_prepare_init(uv_loop_t * arg1, uv_prepare_t * prepare) */
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
/* sha: 078f44a0636f63f173c14eba6d894201ff9ef3c274c78d720da5e32b7735106c */
#if BIND_uv_prepare_stop_FUNCTION
#define uv_prepare_stop_REQUIRED_ARGC 1
#define uv_prepare_stop_OPTIONAL_ARGC 0
/* int uv_prepare_stop(uv_prepare_t * prepare) */
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
/* sha: 7d94b826365a8805287b87345ff9c589d8ddbee5e7ffd57c308262b9d1ddd0cf */
#if BIND_uv_print_active_handles_FUNCTION
#define uv_print_active_handles_REQUIRED_ARGC 2
#define uv_print_active_handles_OPTIONAL_ARGC 0
/* void uv_print_active_handles(uv_loop_t * loop, FILE * stream) */
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
/* sha: 44415e89778a217856309284e167da5a228a6890926c156c7705b57d4697606d */
#if BIND_uv_print_all_handles_FUNCTION
#define uv_print_all_handles_REQUIRED_ARGC 2
#define uv_print_all_handles_OPTIONAL_ARGC 0
/* void uv_print_all_handles(uv_loop_t * loop, FILE * stream) */
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
/* sha: ba5f6242f4179a0ca78f16a48f5ad10db3eec9424083588c3bb05554207178be */
#if BIND_uv_process_kill_FUNCTION
#define uv_process_kill_REQUIRED_ARGC 2
#define uv_process_kill_OPTIONAL_ARGC 0
/* int uv_process_kill(uv_process_t * arg1, int signum) */
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
/* sha: 6add56e31780d1898d10aed2af6a75e6ca871bcf1ee90d8eed2ec84c9a24c0f2 */
#if BIND_uv_queue_work_FUNCTION
#define uv_queue_work_REQUIRED_ARGC 4
#define uv_queue_work_OPTIONAL_ARGC 0
/* int uv_queue_work(uv_loop_t * loop, uv_work_t * req, uv_work_cb work_cb, uv_after_work_cb after_work_cb) */
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
/* sha: c488b93dcb79b66fa520b144e14af402a308fa7f7a440e8871f29f60e860be3a */
#if BIND_uv_read_stop_FUNCTION
#define uv_read_stop_REQUIRED_ARGC 1
#define uv_read_stop_OPTIONAL_ARGC 0
/* int uv_read_stop(uv_stream_t * arg1) */
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
/* sha: 60149328ea71831e7800e8df8187351eb1628b0bfce8480d1c1d5001976ca22a */
#if BIND_uv_recv_buffer_size_FUNCTION
#define uv_recv_buffer_size_REQUIRED_ARGC 2
#define uv_recv_buffer_size_OPTIONAL_ARGC 0
/* int uv_recv_buffer_size(uv_handle_t * handle, int * value) */
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
/* sha: 9de477152f606cf25f7c6fc52cd4d6de5421a760c799ad0f6a25ed9daadafd60 */
#if BIND_uv_ref_FUNCTION
#define uv_ref_REQUIRED_ARGC 1
#define uv_ref_OPTIONAL_ARGC 0
/* void uv_ref(uv_handle_t * arg1) */
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
/* sha: 84388deae99ba5f526f2d31e03219803b4b8e2ce4a4f7560b0627a700770c46f */
#if BIND_uv_replace_allocator_FUNCTION
#define uv_replace_allocator_REQUIRED_ARGC 4
#define uv_replace_allocator_OPTIONAL_ARGC 0
/* int uv_replace_allocator(uv_malloc_func malloc_func, uv_realloc_func realloc_func, uv_calloc_func calloc_func, uv_free_func free_func) */
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
/* sha: f7f14bb071b25d9b4f572f48df2d875e8f5549ed6d4fc0415cbc4d58d8f62b6e */
#if BIND_uv_req_size_FUNCTION
#define uv_req_size_REQUIRED_ARGC 1
#define uv_req_size_OPTIONAL_ARGC 0
/* size_t uv_req_size(uv_req_type type) */
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
/* sha: eb7f33b02cc74d73ea6dae72f396cc9b237de9aa840adcc0cf8bab4f04ae0df4 */
#if BIND_uv_resident_set_memory_FUNCTION
#define uv_resident_set_memory_REQUIRED_ARGC 1
#define uv_resident_set_memory_OPTIONAL_ARGC 0
/* int uv_resident_set_memory(size_t * rss) */
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
#define uv_run_REQUIRED_ARGC 0
#define uv_run_OPTIONAL_ARGC 2
/* uv_run
 *
 * Parameters:
 * - arg1: uv_loop_t *
 * - mode: uv_run_mode
 * Return Type: int
 */
mrb_value
mrb_UV_uv_run(mrb_state* mrb, mrb_value self) {
  mrb_value arg1 = mrb_nil_value();
  mrb_int native_mode = UV_RUN_DEFAULT;

  /* Fetch the args */
  mrb_get_args(mrb, "|oi", &arg1, &native_mode);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Loop_class(mrb)) && !mrb_nil_p(arg1)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  uv_loop_t * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_uv_loop_t(arg1));
  if (native_arg1 == NULL) {
    native_arg1 = uv_default_loop();
  }

  /* Invocation */
  int native_return_value = uv_run(native_arg1, native_mode);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_rwlock_destroy */
/* sha: fd9a37f12ecda7bfa55cf3ee7bcf5a85a259dc053a3f29bb14c715a8a8f222d9 */
#if BIND_uv_rwlock_destroy_FUNCTION
#define uv_rwlock_destroy_REQUIRED_ARGC 1
#define uv_rwlock_destroy_OPTIONAL_ARGC 0
/* void uv_rwlock_destroy(uv_rwlock_t * rwlock) */
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
/* sha: 1f0a4cad261cc34a9bcb33494894b931a908b06081384d008ce7875dcadb1d89 */
#if BIND_uv_rwlock_init_FUNCTION
#define uv_rwlock_init_REQUIRED_ARGC 1
#define uv_rwlock_init_OPTIONAL_ARGC 0
/* int uv_rwlock_init(uv_rwlock_t * rwlock) */
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
/* sha: 4c8df3b10c5b1915507437a7a99b56693bc99f2cf38f2d0d10f6f9d44692b850 */
#if BIND_uv_rwlock_rdlock_FUNCTION
#define uv_rwlock_rdlock_REQUIRED_ARGC 1
#define uv_rwlock_rdlock_OPTIONAL_ARGC 0
/* void uv_rwlock_rdlock(uv_rwlock_t * rwlock) */
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
/* sha: a3f9ba55487380c920fca4c9123ddf36eb6b1e23f072d0e93eeef4d07a9edc32 */
#if BIND_uv_rwlock_rdunlock_FUNCTION
#define uv_rwlock_rdunlock_REQUIRED_ARGC 1
#define uv_rwlock_rdunlock_OPTIONAL_ARGC 0
/* void uv_rwlock_rdunlock(uv_rwlock_t * rwlock) */
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
/* sha: a64c09ab1579d49496019a3cbaba6a491c374b8ee707bbc5f2c601a525c646da */
#if BIND_uv_rwlock_tryrdlock_FUNCTION
#define uv_rwlock_tryrdlock_REQUIRED_ARGC 1
#define uv_rwlock_tryrdlock_OPTIONAL_ARGC 0
/* int uv_rwlock_tryrdlock(uv_rwlock_t * rwlock) */
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
/* sha: 67b4b13f63153c4129f3bd860a2c0717409629590e1fcf6f824b306c16977724 */
#if BIND_uv_rwlock_trywrlock_FUNCTION
#define uv_rwlock_trywrlock_REQUIRED_ARGC 1
#define uv_rwlock_trywrlock_OPTIONAL_ARGC 0
/* int uv_rwlock_trywrlock(uv_rwlock_t * rwlock) */
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
/* sha: 6e146f25df91c0d43ff7ac6d6d8a31af6430c188c0f4603086ea572c2f321d1b */
#if BIND_uv_rwlock_wrlock_FUNCTION
#define uv_rwlock_wrlock_REQUIRED_ARGC 1
#define uv_rwlock_wrlock_OPTIONAL_ARGC 0
/* void uv_rwlock_wrlock(uv_rwlock_t * rwlock) */
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
/* sha: 0fc5debe5b84587cdd64aee7d55fc18877a8a39382a1eb74d466e8ece775a0d6 */
#if BIND_uv_rwlock_wrunlock_FUNCTION
#define uv_rwlock_wrunlock_REQUIRED_ARGC 1
#define uv_rwlock_wrunlock_OPTIONAL_ARGC 0
/* void uv_rwlock_wrunlock(uv_rwlock_t * rwlock) */
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
/* sha: 8f7de5d2505daddb064eeab9810ff9ed96a4a7e1730b845843099430bf874830 */
#if BIND_uv_sem_destroy_FUNCTION
#define uv_sem_destroy_REQUIRED_ARGC 1
#define uv_sem_destroy_OPTIONAL_ARGC 0
/* void uv_sem_destroy(uv_sem_t * sem) */
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
/* sha: 63b2f87b0dd2c3a0006dfe77e03d91a43c09b142886319ab73798846565fbfd0 */
#if BIND_uv_sem_init_FUNCTION
#define uv_sem_init_REQUIRED_ARGC 2
#define uv_sem_init_OPTIONAL_ARGC 0
/* int uv_sem_init(uv_sem_t * sem, unsigned int value) */
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
/* sha: 10acd1184e2c25b4a835131a37b0d4e6d6720b3a0b2087ac1b0aebe7c2fea734 */
#if BIND_uv_sem_post_FUNCTION
#define uv_sem_post_REQUIRED_ARGC 1
#define uv_sem_post_OPTIONAL_ARGC 0
/* void uv_sem_post(uv_sem_t * sem) */
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
/* sha: 23e6c8748b6ff4b7ac2b93ea8e4b770bf68e315829b9c4865a6f04363fbc6d47 */
#if BIND_uv_sem_trywait_FUNCTION
#define uv_sem_trywait_REQUIRED_ARGC 1
#define uv_sem_trywait_OPTIONAL_ARGC 0
/* int uv_sem_trywait(uv_sem_t * sem) */
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
/* sha: 851f0398c71c59eaf72cb0fde277f552a63b89eea74a52be8ab08a44ff4bbec5 */
#if BIND_uv_sem_wait_FUNCTION
#define uv_sem_wait_REQUIRED_ARGC 1
#define uv_sem_wait_OPTIONAL_ARGC 0
/* void uv_sem_wait(uv_sem_t * sem) */
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
/* sha: 3a230b2b72e2fec16db3599238514bbeb74adc9c40a7bb332d99cbeb3c2b180d */
#if BIND_uv_send_buffer_size_FUNCTION
#define uv_send_buffer_size_REQUIRED_ARGC 2
#define uv_send_buffer_size_OPTIONAL_ARGC 0
/* int uv_send_buffer_size(uv_handle_t * handle, int * value) */
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
/* sha: c40765c08d2249e459230538851589aafd4740f0a033c61832e9b44d9cb32d39 */
#if BIND_uv_set_process_title_FUNCTION
#define uv_set_process_title_REQUIRED_ARGC 1
#define uv_set_process_title_OPTIONAL_ARGC 0
/* int uv_set_process_title(const char * title) */
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
/* sha: 4a7c868934c33713005df5b5670e212404533dc4a459c8bccb5843362471e08b */
#if BIND_uv_setup_args_FUNCTION
#define uv_setup_args_REQUIRED_ARGC 2
#define uv_setup_args_OPTIONAL_ARGC 0
/* char ** uv_setup_args(int argc, char ** argv) */
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
/* sha: 184efa868e1355c675d6a7aa54ff1fe0303c7583ce879a88887e1572d6697292 */
#if BIND_uv_shutdown_FUNCTION
#define uv_shutdown_REQUIRED_ARGC 3
#define uv_shutdown_OPTIONAL_ARGC 0
/* int uv_shutdown(uv_shutdown_t * req, uv_stream_t * handle, uv_shutdown_cb cb) */
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
/* sha: 94dba3aef8061112b461c8236ea64c5f07974354f510e782d10656799a7c21fe */
#if BIND_uv_signal_init_FUNCTION
#define uv_signal_init_REQUIRED_ARGC 2
#define uv_signal_init_OPTIONAL_ARGC 0
/* int uv_signal_init(uv_loop_t * loop, uv_signal_t * handle) */
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
/* sha: b6c167afa8e061404468e9e9af3176173c17c6b72fd4fb44e91dc64e7d694c45 */
#if BIND_uv_signal_stop_FUNCTION
#define uv_signal_stop_REQUIRED_ARGC 1
#define uv_signal_stop_OPTIONAL_ARGC 0
/* int uv_signal_stop(uv_signal_t * handle) */
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
/* sha: b7b6f614f436071af6aa06113e4ab49cc137c1b1b791be36053c84b31b871b22 */
#if BIND_uv_spawn_FUNCTION
#define uv_spawn_REQUIRED_ARGC 3
#define uv_spawn_OPTIONAL_ARGC 0
/* int uv_spawn(uv_loop_t * loop, uv_process_t * handle, const uv_process_options_t * options) */
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
  uv_process_options_t * native_options = mruby_unbox_uv_process_options_t(mrb, options);
  mrb_value cb = mrb_iv_get(mrb, options, mrb_intern_cstr(mrb, "@exit_cb"));

  /* Prepare for thunk. No init call for uv_process_t, so assign the loop reference here */
  native_handle->loop = native_loop;
  MRUBY_UV_PREPARE_HANDLE_THUNK(handle, "@mruby_uv_exit_cb_thunk", cb);

  /* Invocation */
  int native_return_value = uv_spawn(native_loop, native_handle, native_options);
  
  if (native_options->args != NULL) {
    /* Array of pointers to ruby internal char *, no need to free the strings. */
    free(native_options->args);
  }
  if (native_options->env != NULL) {
    /* Array of pointers to ruby internal char *, no need to free the strings. */
    free(native_options->env);
  }
  if (native_options->stdio != NULL) {
    /* Array of actual objects (not pointer), so no need to free elements separately */
    free(native_options->stdio);
  }
  free(native_options);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_stop */
/* sha: d02ead5c418137368b764b010ca6527346a30c778c597b7c56ae542940938ff2 */
#if BIND_uv_stop_FUNCTION
#define uv_stop_REQUIRED_ARGC 1
#define uv_stop_OPTIONAL_ARGC 0
/* void uv_stop(uv_loop_t * arg1) */
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
/* sha: 76f921afa943169db0c6ba53183fca837db790c2f3d20942fc918062e60a795a */
#if BIND_uv_stream_set_blocking_FUNCTION
#define uv_stream_set_blocking_REQUIRED_ARGC 2
#define uv_stream_set_blocking_OPTIONAL_ARGC 0
/* int uv_stream_set_blocking(uv_stream_t * handle, int blocking) */
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
/* sha: 82a58abb6b7dbd8a152d08c2d038560f1a51b03d0966185f6c6945e1b906a9de */
#if BIND_uv_strerror_FUNCTION
#define uv_strerror_REQUIRED_ARGC 1
#define uv_strerror_OPTIONAL_ARGC 0
/* const char * uv_strerror(int err) */
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
/* sha: 3c088df73c78c65e777e8d6a1f88725a2d7b093d2fd0783627982c1c4bcdb2ef */
#if BIND_uv_tcp_bind_FUNCTION
#define uv_tcp_bind_REQUIRED_ARGC 3
#define uv_tcp_bind_OPTIONAL_ARGC 0
/* int uv_tcp_bind(uv_tcp_t * handle, const struct sockaddr * addr, unsigned int flags) */
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
  if (!mrb_obj_is_kind_of(mrb, addr, Sockaddr_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sockaddr expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_tcp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_tcp_t(handle));

  /* Unbox param: addr */
  const struct sockaddr * native_addr = (mrb_nil_p(addr) ? NULL : mruby_unbox_sockaddr(addr));

  /* Invocation */
  int native_return_value = uv_tcp_bind(native_handle, native_addr, native_flags);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_tcp_connect */
/* sha: 3b37dd025e7855cc6f4cbfc8e930f9b593de206802c0350764ebd8b29545ff45 */
#if BIND_uv_tcp_connect_FUNCTION
#define uv_tcp_connect_REQUIRED_ARGC 3
#define uv_tcp_connect_OPTIONAL_ARGC 1
/* int uv_tcp_connect(uv_connect_t * req, uv_tcp_t * handle, const struct sockaddr * addr, uv_connect_cb cb) */
mrb_value
mrb_UV_uv_tcp_connect(mrb_state* mrb, mrb_value self) {
  mrb_value req;
  mrb_value handle;
  mrb_value addr;
  mrb_value cb = mrb_nil_value();
  uv_connect_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo|&", &req, &handle, &addr, &cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, req, Connect_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Connect expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, TCP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TCP expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, addr, Sockaddr_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sockaddr expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(cb)) {
    thunk = mruby_uv_connect_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_connect_cb_thunk", cb);
  }

  /* Unbox param: req */
  uv_connect_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_connect_t(req));

  /* Unbox param: handle */
  uv_tcp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_tcp_t(handle));

  /* Unbox param: addr */
  const struct sockaddr * native_addr = (mrb_nil_p(addr) ? NULL : mruby_unbox_sockaddr(addr));

  /* Invocation */
  int native_return_value = uv_tcp_connect(native_req, native_handle, native_addr, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_tcp_getpeername */
/* sha: 49205c8eccd8613fae63f46ccdceec3c4e7ec97474a7654fd37175b5acd53405 */
#if BIND_uv_tcp_getpeername_FUNCTION
#define uv_tcp_getpeername_REQUIRED_ARGC 1
#define uv_tcp_getpeername_OPTIONAL_ARGC 0
/* int uv_tcp_getpeername(const uv_tcp_t * handle, struct sockaddr * name, int * namelen) */
mrb_value
mrb_UV_uv_tcp_getpeername(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, TCP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TCP expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  const uv_tcp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_tcp_t(handle));

  /* Invocation */
  sockaddr_storage * native_addr = (sockaddr_storage*)calloc(1, sizeof(sockaddr_storage));
  int size = 0;
  int native_return_value = uv_tcp_getpeername(native_handle, (struct sockaddr *)native_addr, &size);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  /* Box the out param */
  mrb_value addr = mrb_nil_value();
  if (native_return_value == 0) {
    if (size == sizeof(sockaddr_in)) {
      addr = mruby_giftwrap_sockaddr_in(mrb, (sockaddr_in*)native_addr);
    } else if (size == sizeof(sockaddr_in6)) {
      addr = mruby_giftwrap_sockaddr_in6(mrb, (sockaddr_in6*)native_addr);
    }
  }
  
  mrb_value results = mrb_ary_new(mrb);
  mrb_ary_push(mrb, results, return_value);
  mrb_ary_push(mrb, results, addr);
  return results;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_tcp_getsockname */
/* sha: f34e1a9923bf8f1874ccd8417514ece984fd97e1a25e626ba7a17e89c701fc87 */
#if BIND_uv_tcp_getsockname_FUNCTION
#define uv_tcp_getsockname_REQUIRED_ARGC 1
#define uv_tcp_getsockname_OPTIONAL_ARGC 0
/* int uv_tcp_getsockname(const uv_tcp_t * handle, struct sockaddr * name, int * namelen) */
mrb_value
mrb_UV_uv_tcp_getsockname(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, TCP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TCP expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  const uv_tcp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_tcp_t(handle));

  /* Invocation */
  sockaddr_storage * native_addr = (sockaddr_storage*)calloc(1, sizeof(sockaddr_storage));
  int size = 0;
  int native_return_value = uv_tcp_getsockname(native_handle, (struct sockaddr *)native_addr, &size);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  /* Box the out param */
  mrb_value addr = mrb_nil_value();
  if (native_return_value == 0) {
    if (size == sizeof(sockaddr_in)) {
      addr = mruby_giftwrap_sockaddr_in(mrb, (sockaddr_in*)native_addr);
    } else if (size == sizeof(sockaddr_in6)) {
      addr = mruby_giftwrap_sockaddr_in6(mrb, (sockaddr_in6*)native_addr);
    }
  }
  
  mrb_value results = mrb_ary_new(mrb);
  mrb_ary_push(mrb, results, return_value);
  mrb_ary_push(mrb, results, addr);
  return results;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_tcp_init */
/* sha: a2ee82783c2e62de3312d1d9fdc81a97a8bcd0ab3f0db21119a5dbcc97ac6a6c */
#if BIND_uv_tcp_init_FUNCTION
#define uv_tcp_init_REQUIRED_ARGC 2
#define uv_tcp_init_OPTIONAL_ARGC 0
/* int uv_tcp_init(uv_loop_t * arg1, uv_tcp_t * handle) */
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
/* sha: 985ff9a31fe1a6ad18fa6af27e7a03ae7afd2bb5488f7584f7cd784937500c49 */
#if BIND_uv_tcp_init_ex_FUNCTION
#define uv_tcp_init_ex_REQUIRED_ARGC 3
#define uv_tcp_init_ex_OPTIONAL_ARGC 0
/* int uv_tcp_init_ex(uv_loop_t * arg1, uv_tcp_t * handle, unsigned int flags) */
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
/* sha: 8a235c04a76444a6a1d5b0dfb8729bab81fa06485ba1f33e4657b740128f1053 */
#if BIND_uv_tcp_keepalive_FUNCTION
#define uv_tcp_keepalive_REQUIRED_ARGC 3
#define uv_tcp_keepalive_OPTIONAL_ARGC 0
/* int uv_tcp_keepalive(uv_tcp_t * handle, int enable, unsigned int delay) */
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
/* sha: f597ea7b52bce762412c18f93e485eb62d8f65729002524f7f68a9244dd46127 */
#if BIND_uv_tcp_nodelay_FUNCTION
#define uv_tcp_nodelay_REQUIRED_ARGC 2
#define uv_tcp_nodelay_OPTIONAL_ARGC 0
/* int uv_tcp_nodelay(uv_tcp_t * handle, int enable) */
mrb_value
mrb_UV_uv_tcp_nodelay(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_bool native_enable;

  /* Fetch the args */
  mrb_get_args(mrb, "ob", &handle, &native_enable);

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
/* sha: 3621afb2b6e264ff03a19c5224de18aeaabe2ad9a0bf82e13c302779d5911a7a */
#if BIND_uv_tcp_open_FUNCTION
#define uv_tcp_open_REQUIRED_ARGC 2
#define uv_tcp_open_OPTIONAL_ARGC 0
/* int uv_tcp_open(uv_tcp_t * handle, uv_os_sock_t sock) */
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
/* sha: 47e7d1ab873857e4226f81448700886ed60eb753754109bebb5e976bb07eff0c */
#if BIND_uv_tcp_simultaneous_accepts_FUNCTION
#define uv_tcp_simultaneous_accepts_REQUIRED_ARGC 2
#define uv_tcp_simultaneous_accepts_OPTIONAL_ARGC 0
/* int uv_tcp_simultaneous_accepts(uv_tcp_t * handle, int enable) */
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
/* sha: eccd972f9f368637459d7a667ab5fa0d2399b7434ce6dc8ae8b144c0ed733853 */
#if BIND_uv_thread_create_FUNCTION
#define uv_thread_create_REQUIRED_ARGC 3
#define uv_thread_create_OPTIONAL_ARGC 0
/* int uv_thread_create(uv_thread_t * tid, uv_thread_cb entry, void * arg) */
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
/* sha: d0904a3dbb2f12cf6f35b69a9e457c16a5c16cce9efebee45429e36f2a8d68a5 */
#if BIND_uv_thread_equal_FUNCTION
#define uv_thread_equal_REQUIRED_ARGC 2
#define uv_thread_equal_OPTIONAL_ARGC 0
/* int uv_thread_equal(const uv_thread_t * t1, const uv_thread_t * t2) */
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
/* sha: 17a4a073f7e008e1e33c64249ffc7bae0b708afef7ed67e6245ab5f8d9ef0193 */
#if BIND_uv_thread_join_FUNCTION
#define uv_thread_join_REQUIRED_ARGC 1
#define uv_thread_join_OPTIONAL_ARGC 0
/* int uv_thread_join(uv_thread_t * tid) */
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
/* sha: c83f84e40800c4b00eb5d91c6a6f477245f5bd7bb08df7e1ea9eb6e6a8a89a2a */
#if BIND_uv_thread_self_FUNCTION
#define uv_thread_self_REQUIRED_ARGC 0
#define uv_thread_self_OPTIONAL_ARGC 0
/* uv_thread_t uv_thread_self() */
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
/* sha: bd50f972e3f5c8202cdd8e3c0d1db271828869d87fcc82e088f599a3753fb1f9 */
#if BIND_uv_timer_again_FUNCTION
#define uv_timer_again_REQUIRED_ARGC 1
#define uv_timer_again_OPTIONAL_ARGC 0
/* int uv_timer_again(uv_timer_t * handle) */
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
/* sha: d1f1fa87eb85e27c8476ee28e67df12a61cfc3bfd2d8ae77f30f745bcb98bcd8 */
#if BIND_uv_timer_get_repeat_FUNCTION
#define uv_timer_get_repeat_REQUIRED_ARGC 1
#define uv_timer_get_repeat_OPTIONAL_ARGC 0
/* uint64_t uv_timer_get_repeat(const uv_timer_t * handle) */
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
/* sha: 66417dd08d42df8cfadb18bb1a640be2764ea27d88736c8ab96939e7fa0b856f */
#if BIND_uv_timer_init_FUNCTION
#define uv_timer_init_REQUIRED_ARGC 2
#define uv_timer_init_OPTIONAL_ARGC 0
/* int uv_timer_init(uv_loop_t * arg1, uv_timer_t * handle) */
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
/* sha: a6180a2914555523f79120a73d3f9b423ae2815f15cb4258d3ebfba30dd6a2d3 */
#if BIND_uv_timer_set_repeat_FUNCTION
#define uv_timer_set_repeat_REQUIRED_ARGC 2
#define uv_timer_set_repeat_OPTIONAL_ARGC 0
/* void uv_timer_set_repeat(uv_timer_t * handle, uint64_t repeat) */
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
/* sha: c76056ba0ba6f0622704aafe57cf336b1f008c9b67295c6dd567d0099b50b2a8 */
#if BIND_uv_timer_stop_FUNCTION
#define uv_timer_stop_REQUIRED_ARGC 1
#define uv_timer_stop_OPTIONAL_ARGC 0
/* int uv_timer_stop(uv_timer_t * handle) */
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
/* sha: cbfe3681817701bc446116411e912d3c1a4a7b6b1dc818c56afd00556001906d */
#if BIND_uv_try_write_FUNCTION
#define uv_try_write_REQUIRED_ARGC 2
#define uv_try_write_OPTIONAL_ARGC 0
/* uv_try_write
 *
 * Parameters:
 * - handle: uv_stream_t *
 * - bufs: const uv_buf_t []
 * Return Type: int
 */
mrb_value
mrb_UV_uv_try_write(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value bufs;

  /* Fetch the args */
  mrb_get_args(mrb, "oS", &handle, &bufs);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, Stream_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Stream expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_stream_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_stream_t(handle));

  /* Unbox param: bufs */
  uv_buf_t native_bufs = MRUBY_UV_PREPARE_WRITE_BUF(handle, bufs);

  /* Invocation */
  int native_return_value = uv_try_write(native_handle, &native_bufs, 1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_tty_get_winsize */
/* sha: e11c73d8a5d0679cdbd783e09418738400a139b0e632890e775664386eba335b */
#if BIND_uv_tty_get_winsize_FUNCTION
#define uv_tty_get_winsize_REQUIRED_ARGC 3
#define uv_tty_get_winsize_OPTIONAL_ARGC 0
/* int uv_tty_get_winsize(uv_tty_t * arg1, int * width, int * height) */
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
/* sha: 04aa1bd6f76482c3bae3da123c5e54a30a074127556cbec5c5e158a77f6a5060 */
#if BIND_uv_tty_init_FUNCTION
#define uv_tty_init_REQUIRED_ARGC 4
#define uv_tty_init_OPTIONAL_ARGC 0
/* int uv_tty_init(uv_loop_t * arg1, uv_tty_t * arg2, uv_file fd, int readable) */
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
/* sha: 5fb36793fac46b15a104ddc028d4a3d4d8bce129d3fef6e9b060adabf1b9cb26 */
#if BIND_uv_tty_reset_mode_FUNCTION
#define uv_tty_reset_mode_REQUIRED_ARGC 0
#define uv_tty_reset_mode_OPTIONAL_ARGC 0
/* int uv_tty_reset_mode() */
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
/* sha: 0449cc2ae115850e822e6cfed177d7f19b7750fcc2e11e426cdc2da7d5b907b7 */
#if BIND_uv_tty_set_mode_FUNCTION
#define uv_tty_set_mode_REQUIRED_ARGC 2
#define uv_tty_set_mode_OPTIONAL_ARGC 0
/* int uv_tty_set_mode(uv_tty_t * arg1, uv_tty_mode_t mode) */
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
/* sha: e00599300fc4ee12f18f239a1b2bcc4bfbc07b4c615062560ec06276ff9d3593 */
#if BIND_uv_udp_bind_FUNCTION
#define uv_udp_bind_REQUIRED_ARGC 3
#define uv_udp_bind_OPTIONAL_ARGC 0
/* int uv_udp_bind(uv_udp_t * handle, const struct sockaddr * addr, unsigned int flags) */
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
  if (!mrb_obj_is_kind_of(mrb, addr, Sockaddr_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sockaddr expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  uv_udp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_udp_t(handle));

  /* Unbox param: addr */
  const struct sockaddr * native_addr = (mrb_nil_p(addr) ? NULL : mruby_unbox_sockaddr(addr));

  /* Invocation */
  int native_return_value = uv_udp_bind(native_handle, native_addr, native_flags);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_udp_getsockname */
/* sha: ff0d87e5816025d51f17f3b5185ac4a89b5f78b4f5747375a47ce8157fd5a7ed */
#if BIND_uv_udp_getsockname_FUNCTION
#define uv_udp_getsockname_REQUIRED_ARGC 1
#define uv_udp_getsockname_OPTIONAL_ARGC 0
/* int uv_udp_getsockname(const uv_udp_t * handle, struct sockaddr * name, int * namelen) */
mrb_value
mrb_UV_uv_udp_getsockname(mrb_state* mrb, mrb_value self) {
  mrb_value handle;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &handle);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UDP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UDP expected");
    return mrb_nil_value();
  }

  /* Unbox param: handle */
  const uv_udp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_udp_t(handle));

  /* Invocation */
  sockaddr_storage * native_addr = (sockaddr_storage*)calloc(1, sizeof(sockaddr_storage));
  int size = 0;
  int native_return_value = uv_udp_getsockname(native_handle, (struct sockaddr *)native_addr, &size);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  /* Box the out param */
  mrb_value addr = mrb_nil_value();
  if (native_return_value == 0) {
    if (size == sizeof(sockaddr_in)) {
      addr = mruby_giftwrap_sockaddr_in(mrb, (sockaddr_in*)native_addr);
    } else if (size == sizeof(sockaddr_in6)) {
      addr = mruby_giftwrap_sockaddr_in6(mrb, (sockaddr_in6*)native_addr);
    }
  }
  
  mrb_value results = mrb_ary_new(mrb);
  mrb_ary_push(mrb, results, return_value);
  mrb_ary_push(mrb, results, addr);
  return results;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_udp_init */
/* sha: 6cce7f03bd01d1526e4a2a628674f8017e7007a4d3661887fa74378bf79762bb */
#if BIND_uv_udp_init_FUNCTION
#define uv_udp_init_REQUIRED_ARGC 2
#define uv_udp_init_OPTIONAL_ARGC 0
/* int uv_udp_init(uv_loop_t * arg1, uv_udp_t * handle) */
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
/* sha: 03344eca2456510e7e8470e2a1c744ede378cc568c192aee53434fc102981e82 */
#if BIND_uv_udp_init_ex_FUNCTION
#define uv_udp_init_ex_REQUIRED_ARGC 3
#define uv_udp_init_ex_OPTIONAL_ARGC 0
/* int uv_udp_init_ex(uv_loop_t * arg1, uv_udp_t * handle, unsigned int flags) */
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
/* sha: cbf7bfb393855069b6786c566bf4907d174480bbba3d430d425617e24fddb5db */
#if BIND_uv_udp_open_FUNCTION
#define uv_udp_open_REQUIRED_ARGC 2
#define uv_udp_open_OPTIONAL_ARGC 0
/* int uv_udp_open(uv_udp_t * handle, uv_os_sock_t sock) */
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
/* sha: 275188f01081f25b9eb238255daf0a1cab38b4db938772a1fd7a657ae221433c */
#if BIND_uv_udp_recv_start_FUNCTION
#define uv_udp_recv_start_REQUIRED_ARGC 3
#define uv_udp_recv_start_OPTIONAL_ARGC 0
/* int uv_udp_recv_start(uv_udp_t * handle, uv_alloc_cb alloc_cb, uv_udp_recv_cb recv_cb) */
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
/* sha: 3671383d2dd53c6810a443fc81c69f766bd6f20c47fa6302c4c0490e09bc76d8 */
#if BIND_uv_udp_recv_stop_FUNCTION
#define uv_udp_recv_stop_REQUIRED_ARGC 1
#define uv_udp_recv_stop_OPTIONAL_ARGC 0
/* int uv_udp_recv_stop(uv_udp_t * handle) */
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
/* sha: 42357214e0657648a68d557f0ecb7365f417146ab23708c7304c236d1a91801d */
#if BIND_uv_udp_send_FUNCTION
#define uv_udp_send_REQUIRED_ARGC 5
#define uv_udp_send_OPTIONAL_ARGC 0
/* uv_udp_send
 *
 * Parameters:
 * - req: uv_udp_send_t *
 * - handle: uv_udp_t *
 * - bufs: const uv_buf_t []
 * - addr: const struct sockaddr *
 * - send_cb: uv_udp_send_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_udp_send(mrb_state* mrb, mrb_value self) {
  mrb_value req;
  mrb_value handle;
  mrb_value bufs;
  mrb_value addr;
  mrb_value send_cb;

  /* Fetch the args */
  mrb_get_args(mrb, "ooSoo", &req, &handle, &bufs, &addr, &send_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, req, UDPSend_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UDPSend expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, UDP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UDP expected");
    return mrb_nil_value();
  }
  TODO_type_check_sockaddr_PTR(addr);
  TODO_type_check_uv_udp_send_cb(send_cb);

  /* Unbox param: req */
  uv_udp_send_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_udp_send_t(req));

  /* Unbox param: handle */
  uv_udp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_udp_t(handle));

  /* Unbox param: bufs */
  uv_buf_t native_bufs = MRUBY_UV_PREPARE_WRITE_BUF(req, bufs);

  /* Unbox param: addr */
  const struct sockaddr * native_addr = TODO_mruby_unbox_sockaddr_PTR(addr);

  /* Unbox param: send_cb */
  uv_udp_send_cb native_send_cb = TODO_mruby_unbox_uv_udp_send_cb(send_cb);

  /* Invocation */
  int native_return_value = uv_udp_send(native_req, native_handle, &native_bufs, 1, native_addr, native_send_cb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_udp_set_broadcast */
/* sha: 4240ab826ccb57e0a00d85b543d079d04f9462fbc187e41b5d0eba1efc85f9e7 */
#if BIND_uv_udp_set_broadcast_FUNCTION
#define uv_udp_set_broadcast_REQUIRED_ARGC 2
#define uv_udp_set_broadcast_OPTIONAL_ARGC 0
/* int uv_udp_set_broadcast(uv_udp_t * handle, int on) */
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
/* sha: aeb40bf2f050fd541b0e7e8cb17a76e5326fdbcc1afc7e2ef8f844af7a1dafc1 */
#if BIND_uv_udp_set_membership_FUNCTION
#define uv_udp_set_membership_REQUIRED_ARGC 4
#define uv_udp_set_membership_OPTIONAL_ARGC 0
/* int uv_udp_set_membership(uv_udp_t * handle, const char * multicast_addr, const char * interface_addr, uv_membership membership) */
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
/* sha: 9685aa8413691fad0778814a6cf2cd4091a83c0b6a6cae9ff535f328c03a224a */
#if BIND_uv_udp_set_multicast_interface_FUNCTION
#define uv_udp_set_multicast_interface_REQUIRED_ARGC 2
#define uv_udp_set_multicast_interface_OPTIONAL_ARGC 0
/* int uv_udp_set_multicast_interface(uv_udp_t * handle, const char * interface_addr) */
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
/* sha: 1b52d579255ad531e8fa8435b7478de9d38a6ffbbf85bb357928e4a22bc3154d */
#if BIND_uv_udp_set_multicast_loop_FUNCTION
#define uv_udp_set_multicast_loop_REQUIRED_ARGC 2
#define uv_udp_set_multicast_loop_OPTIONAL_ARGC 0
/* int uv_udp_set_multicast_loop(uv_udp_t * handle, int on) */
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
/* sha: f57300d6b3cea2795eba46e79321c1bd971dd0a5c6fa87d1b92fe3ebac133000 */
#if BIND_uv_udp_set_multicast_ttl_FUNCTION
#define uv_udp_set_multicast_ttl_REQUIRED_ARGC 2
#define uv_udp_set_multicast_ttl_OPTIONAL_ARGC 0
/* int uv_udp_set_multicast_ttl(uv_udp_t * handle, int ttl) */
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
/* sha: 3b7f44d29d125ae3cbaf7e6e485f91d9fb2bcf23321bfeb5f62859ea19b7fc46 */
#if BIND_uv_udp_set_ttl_FUNCTION
#define uv_udp_set_ttl_REQUIRED_ARGC 2
#define uv_udp_set_ttl_OPTIONAL_ARGC 0
/* int uv_udp_set_ttl(uv_udp_t * handle, int ttl) */
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
/* sha: 2673af9e5299ffd1804ac508c298ed4bb379097eeb490c6f82970491faac26d0 */
#if BIND_uv_udp_try_send_FUNCTION
#define uv_udp_try_send_REQUIRED_ARGC 3
#define uv_udp_try_send_OPTIONAL_ARGC 0
/* uv_udp_try_send
 *
 * Parameters:
 * - handle: uv_udp_t *
 * - bufs: const uv_buf_t []
 * - addr: const struct sockaddr *
 * Return Type: int
 */
mrb_value
mrb_UV_uv_udp_try_send(mrb_state* mrb, mrb_value self) {
  mrb_value handle;
  mrb_value bufs;
  mrb_value addr;

  /* Fetch the args */
  mrb_get_args(mrb, "oSo", &handle, &bufs, &addr);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UDP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UDP expected");
    return mrb_nil_value();
  }
  TODO_type_check_sockaddr_PTR(addr);

  /* Unbox param: handle */
  uv_udp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_udp_t(handle));

  /* Unbox param: bufs */
  uv_buf_t native_bufs = MRUBY_UV_PREPARE_WRITE_BUF(handle, bufs);

  /* Unbox param: addr */
  const struct sockaddr * native_addr = TODO_mruby_unbox_sockaddr_PTR(addr);

  /* Invocation */
  int native_return_value = uv_udp_try_send(native_handle, &native_bufs, 1, native_addr);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_unref */
/* sha: 1d08ca4532e7453c83ef1a68c6947f34f44f521311f178d4ab4f9b5a4d2dae85 */
#if BIND_uv_unref_FUNCTION
#define uv_unref_REQUIRED_ARGC 1
#define uv_unref_OPTIONAL_ARGC 0
/* void uv_unref(uv_handle_t * arg1) */
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
/* sha: fa1ffe3cd96948b780c22d7d1694222d6a6dab0a30d65883ebc593776b4afbc1 */
#if BIND_uv_update_time_FUNCTION
#define uv_update_time_REQUIRED_ARGC 1
#define uv_update_time_OPTIONAL_ARGC 0
/* void uv_update_time(uv_loop_t * arg1) */
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
/* sha: 507204cc4dd8f9d11c4cc7420b3cfb1b1c74caa38f6073e84a53c06198bfc82b */
#if BIND_uv_uptime_FUNCTION
#define uv_uptime_REQUIRED_ARGC 1
#define uv_uptime_OPTIONAL_ARGC 0
/* int uv_uptime(double * uptime) */
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
/* sha: 4aeb4019bf59f028277caa39fa801c8078bcf47b005e6eb20a0b18cf20d6188f */
#if BIND_uv_version_FUNCTION
#define uv_version_REQUIRED_ARGC 0
#define uv_version_OPTIONAL_ARGC 0
/* unsigned int uv_version() */
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
/* sha: 791cf4a6872acfdaf2587e8ea80934414687f4df6f341cae778a5d593365316f */
#if BIND_uv_version_string_FUNCTION
#define uv_version_string_REQUIRED_ARGC 0
#define uv_version_string_OPTIONAL_ARGC 0
/* const char * uv_version_string() */
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
/* sha: bed77802b461b88b159244a889a670bae1e9793c26c2cc8b0101a22dfad33de1 */
#if BIND_uv_walk_FUNCTION
#define uv_walk_REQUIRED_ARGC 3
#define uv_walk_OPTIONAL_ARGC 0
/* void uv_walk(uv_loop_t * loop, uv_walk_cb walk_cb, void * arg) */
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
/* sha: f2a1d0eb52e60c4be9f46f533c32df68be22dcdd35c776db773ee6e56bd03c5a */
#if BIND_uv_write_FUNCTION
#define uv_write_REQUIRED_ARGC 4
#define uv_write_OPTIONAL_ARGC 0
/* uv_write
 *
 * Parameters:
 * - req: uv_write_t *
 * - handle: uv_stream_t *
 * - bufs: const uv_buf_t []
 * - cb: uv_write_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_write(mrb_state* mrb, mrb_value self) {
  mrb_value req;
  mrb_value handle;
  mrb_value bufs;
  mrb_value native_cb;
  uv_write_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooS&", &req, &handle, &bufs, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, req, Write_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Write expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, Stream_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Stream expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_write_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_write_cb_thunk", native_cb);
  }
  

  /* Unbox param: req */
  uv_write_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_write_t(req));

  /* Unbox param: handle */
  uv_stream_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_stream_t(handle));

  /* Unbox param: bufs */
  uv_buf_t native_bufs = MRUBY_UV_PREPARE_WRITE_BUF(req, bufs);

  /* Invocation */
  int native_return_value = uv_write(native_req, native_handle, &native_bufs, 1, thunk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: uv_write2 */
/* sha: dcf9c70c710f8d728ef368e62b9af51bc20afab23402ad656a44f96b5b36e9a2 */
#if BIND_uv_write2_FUNCTION
#define uv_write2_REQUIRED_ARGC 4
#define uv_write2_OPTIONAL_ARGC 1
/* uv_write2
 *
 * Parameters:
 * - req: uv_write_t *
 * - handle: uv_stream_t *
 * - bufs: const uv_buf_t []
 * - send_handle: uv_stream_t *
 * - cb: uv_write_cb
 * Return Type: int
 */
mrb_value
mrb_UV_uv_write2(mrb_state* mrb, mrb_value self) {
  mrb_value req;
  mrb_value handle;
  mrb_value bufs;
  mrb_value send_handle;
  mrb_value native_cb;
  uv_write_cb thunk = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooSo|&", &req, &handle, &bufs, &send_handle, &native_cb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, req, Write_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Write expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, handle, Stream_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Stream expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, send_handle, Stream_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Stream expected");
    return mrb_nil_value();
  }
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_write_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(req, "@mruby_uv_write_cb_thunk", native_cb);
  }
  

  /* Unbox param: req */
  uv_write_t * native_req = (mrb_nil_p(req) ? NULL : mruby_unbox_uv_write_t(req));

  /* Unbox param: handle */
  uv_stream_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_stream_t(handle));

  /* Unbox param: bufs */
  uv_buf_t native_bufs = MRUBY_UV_PREPARE_WRITE_BUF(req, bufs);

  /* Unbox param: send_handle */
  uv_stream_t * native_send_handle = (mrb_nil_p(send_handle) ? NULL : mruby_unbox_uv_stream_t(send_handle));

  /* Invocation */
  int native_return_value = uv_write2(native_req, native_handle, &native_bufs, 1, native_send_handle, thunk);

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
#if BIND_Stream_TYPE
  mrb_UV_Stream_init(mrb);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: class_initializations */
/* sha: 715ea1e478c9bd100d8449cb6a1a743a242aa55eaf3ff75307afc06e10cc8742 */
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
#if BIND_Sockaddr_TYPE
  mrb_UV_Sockaddr_init(mrb);
#endif
#if BIND_SockaddrIn_TYPE
  mrb_UV_SockaddrIn_init(mrb);
#endif
#if BIND_SockaddrIn6_TYPE
  mrb_UV_SockaddrIn6_init(mrb);
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
