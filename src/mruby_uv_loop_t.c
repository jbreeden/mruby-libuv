/*
 * uv_loop_t
 * Defined in file uv.h @ line 1446
 */

#include "mruby_UV.h"

#if BIND_Loop_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Loop::initialize */
/* sha: 90ca5e02212e9eaa4f53f3358ca8df68df444bb3db14eba6f2047a0ea47408aa */
#if BIND_Loop_INITIALIZE
mrb_value
mrb_UV_Loop_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  uv_loop_t* native_object = (uv_loop_t*)calloc(1, sizeof(uv_loop_t));
  mruby_gift_uv_loop_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Loop::data_reader */
/* sha: 0fd2e9bb306e8ef628063a43342c934a55092d4798db408751f27ebc326be8a7 */
#if BIND_Loop_data_FIELD_READER
/* get_data
 *
 * Return Type: void *
 */
mrb_value
mrb_UV_Loop_get_data(mrb_state* mrb, mrb_value self) {
  uv_loop_t * native_self = mruby_unbox_uv_loop_t(self);

  void * native_data = native_self->data;

  mrb_value data = TODO_mruby_box_void_PTR(mrb, native_data);

  return data;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Loop::data_writer */
/* sha: 2616ffd83ef1f9ddd056b98aa993fb2ee7a33994a0ed191cf54030ecff06c344 */
#if BIND_Loop_data_FIELD_WRITER
/* set_data
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_UV_Loop_set_data(mrb_state* mrb, mrb_value self) {
  uv_loop_t * native_self = mruby_unbox_uv_loop_t(self);
  mrb_value data;

  mrb_get_args(mrb, "o", &data);

  /* type checking */
  TODO_type_check_void_PTR(data);

  void * native_data = TODO_mruby_unbox_void_PTR(data);

  native_self->data = native_data;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Loop::active_handles_reader */
/* sha: 2c8ce49a9f7bfca199c2efa64b0a2aa2b77e609f6116974428aea62ddf1d96c0 */
#if BIND_Loop_active_handles_FIELD_READER
/* get_active_handles
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_UV_Loop_get_active_handles(mrb_state* mrb, mrb_value self) {
  uv_loop_t * native_self = mruby_unbox_uv_loop_t(self);

  unsigned int native_active_handles = native_self->active_handles;

  mrb_value active_handles = mrb_fixnum_value(native_active_handles);

  return active_handles;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Loop::active_handles_writer */
/* sha: 5e82c0fa7c29f8609714c4e4887cc26bcb0cf6b1daa7dcd8af4322b613807115 */
#if BIND_Loop_active_handles_FIELD_WRITER
/* set_active_handles
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_UV_Loop_set_active_handles(mrb_state* mrb, mrb_value self) {
  uv_loop_t * native_self = mruby_unbox_uv_loop_t(self);
  mrb_int native_active_handles;

  mrb_get_args(mrb, "i", &native_active_handles);

  native_self->active_handles = native_active_handles;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Loop::handle_queue_reader */
/* sha: a211c63b4b01ad582672dfa7e87248beaf4cb6ef43054aa6e39462d87941f929 */
#if BIND_Loop_handle_queue_FIELD_READER
/* get_handle_queue
 *
 * Return Type: void *[2]
 */
mrb_value
mrb_UV_Loop_get_handle_queue(mrb_state* mrb, mrb_value self) {
  uv_loop_t * native_self = mruby_unbox_uv_loop_t(self);

  void *[2] native_handle_queue = native_self->handle_queue;

  mrb_value handle_queue = TODO_mruby_box_void_PTR_[2](mrb, native_handle_queue);

  return handle_queue;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Loop::handle_queue_writer */
/* sha: 33c03a8d61523c6c9ad7cfe37289fe548c80b61528211b213b5540ef322e9b4c */
#if BIND_Loop_handle_queue_FIELD_WRITER
/* set_handle_queue
 *
 * Parameters:
 * - value: void *[2]
 */
mrb_value
mrb_UV_Loop_set_handle_queue(mrb_state* mrb, mrb_value self) {
  uv_loop_t * native_self = mruby_unbox_uv_loop_t(self);
  mrb_value handle_queue;

  mrb_get_args(mrb, "o", &handle_queue);

  /* type checking */
  TODO_type_check_void_PTR_[2](handle_queue);

  void *[2] native_handle_queue = TODO_mruby_unbox_void_PTR_[2](handle_queue);

  native_self->handle_queue = native_handle_queue;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Loop::active_reqs_reader */
/* sha: 4171fdd323e7a10f8c41efa21b1b61d2dc730831ed4ad374907be70982fc92a8 */
#if BIND_Loop_active_reqs_FIELD_READER
/* get_active_reqs
 *
 * Return Type: void *[2]
 */
mrb_value
mrb_UV_Loop_get_active_reqs(mrb_state* mrb, mrb_value self) {
  uv_loop_t * native_self = mruby_unbox_uv_loop_t(self);

  void *[2] native_active_reqs = native_self->active_reqs;

  mrb_value active_reqs = TODO_mruby_box_void_PTR_[2](mrb, native_active_reqs);

  return active_reqs;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Loop::active_reqs_writer */
/* sha: afa08ee2b50e67c1414d7e00fbc5702ca034019d5ca99640466392b959a6ddcd */
#if BIND_Loop_active_reqs_FIELD_WRITER
/* set_active_reqs
 *
 * Parameters:
 * - value: void *[2]
 */
mrb_value
mrb_UV_Loop_set_active_reqs(mrb_state* mrb, mrb_value self) {
  uv_loop_t * native_self = mruby_unbox_uv_loop_t(self);
  mrb_value active_reqs;

  mrb_get_args(mrb, "o", &active_reqs);

  /* type checking */
  TODO_type_check_void_PTR_[2](active_reqs);

  void *[2] native_active_reqs = TODO_mruby_unbox_void_PTR_[2](active_reqs);

  native_self->active_reqs = native_active_reqs;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Loop::stop_flag_reader */
/* sha: dd6afc6b4abae3ee67bfa11040b66e9bb54615e3ce365f12bfcd0d7eed7bb8eb */
#if BIND_Loop_stop_flag_FIELD_READER
/* get_stop_flag
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_UV_Loop_get_stop_flag(mrb_state* mrb, mrb_value self) {
  uv_loop_t * native_self = mruby_unbox_uv_loop_t(self);

  unsigned int native_stop_flag = native_self->stop_flag;

  mrb_value stop_flag = mrb_fixnum_value(native_stop_flag);

  return stop_flag;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Loop::stop_flag_writer */
/* sha: 8bb6499389dc3928c15cbbe92a396436420aaaded78f649e2d06284a3bac838a */
#if BIND_Loop_stop_flag_FIELD_WRITER
/* set_stop_flag
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_UV_Loop_set_stop_flag(mrb_state* mrb, mrb_value self) {
  uv_loop_t * native_self = mruby_unbox_uv_loop_t(self);
  mrb_int native_stop_flag;

  mrb_get_args(mrb, "i", &native_stop_flag);

  native_self->stop_flag = native_stop_flag;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Loop_init(mrb_state* mrb) {
/* MRUBY_BINDING: Loop::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Loop::class_definition */
/* sha: ae672e12d76f8403e99992fce64c82f57b15f7ae46c8761b8cda6ba715efdc4a */
  struct RClass* Loop_class = mrb_define_class_under(mrb, UV_module(mrb), "Loop", mrb->object_class);
  MRB_SET_INSTANCE_TT(Loop_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Loop::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Loop::class_method_definitions */
/* sha: b594926200680a3a209d3ad00e7fd3b32744a36fa7b522fc07a2ab2ed8347ef5 */
#if BIND_Loop_INITIALIZE
  mrb_define_method(mrb, Loop_class, "initialize", mrb_UV_Loop_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Loop::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Loop::attr_definitions */
/* sha: 2a59af1e55f610115598fe01e6e02612848feb61784aeec01c94c1a84e7d5a62 */
  /*
   * Fields
   */
#if BIND_Loop_data_FIELD_READER
  mrb_define_method(mrb, Loop_class, "data", mrb_UV_Loop_get_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Loop_data_FIELD_WRITER
  mrb_define_method(mrb, Loop_class, "data=", mrb_UV_Loop_set_data, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Loop_active_handles_FIELD_READER
  mrb_define_method(mrb, Loop_class, "active_handles", mrb_UV_Loop_get_active_handles, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Loop_active_handles_FIELD_WRITER
  mrb_define_method(mrb, Loop_class, "active_handles=", mrb_UV_Loop_set_active_handles, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Loop_handle_queue_FIELD_READER
  mrb_define_method(mrb, Loop_class, "handle_queue", mrb_UV_Loop_get_handle_queue, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Loop_handle_queue_FIELD_WRITER
  mrb_define_method(mrb, Loop_class, "handle_queue=", mrb_UV_Loop_set_handle_queue, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Loop_active_reqs_FIELD_READER
  mrb_define_method(mrb, Loop_class, "active_reqs", mrb_UV_Loop_get_active_reqs, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Loop_active_reqs_FIELD_WRITER
  mrb_define_method(mrb, Loop_class, "active_reqs=", mrb_UV_Loop_set_active_reqs, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Loop_stop_flag_FIELD_READER
  mrb_define_method(mrb, Loop_class, "stop_flag", mrb_UV_Loop_get_stop_flag, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Loop_stop_flag_FIELD_WRITER
  mrb_define_method(mrb, Loop_class, "stop_flag=", mrb_UV_Loop_set_stop_flag, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Loop::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Loop::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Loop::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
