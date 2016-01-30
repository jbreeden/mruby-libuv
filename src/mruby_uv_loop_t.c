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
  uv_loop_t* native_object = (uv_loop_t*)calloc(1, sizeof(uv_loop_t));
  uv_loop_init(native_object);
  mruby_gift_uv_loop_t_data_ptr(self, native_object);
  INIT_LOOP_DATA(native_object, self);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Loop::data_reader */
/* sha: 0bc9f39a0cb330261fd2d4151fe2dfc1ea964b343843342ab1b766c2fbcaf171 */
#if BIND_Loop_data_FIELD_READER
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
/* sha: 98d0c8e41d468a2dd88dea3c2d04c33383321617fee2101123255b4077299562 */
#if BIND_Loop_data_FIELD_WRITER
mrb_value
mrb_UV_Loop_set_data(mrb_state* mrb, mrb_value self) {
  uv_loop_t * native_self = mruby_unbox_uv_loop_t(self);
  mrb_value data;

  mrb_get_args(mrb, "o", &data);

  /* type checking */
  TODO_type_check_void_PTR(data);

  void * native_data = TODO_mruby_unbox_void_PTR(data);

  native_self->data = native_data;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Loop::active_handles_reader */
/* sha: fa8ba4a0a373d318703c66af20c074f12bdaf96c05329556bd521ae08a80f765 */
#if BIND_Loop_active_handles_FIELD_READER
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
/* sha: dc6f8abe083485d87fbbf1d8f3c876d99ad095efb3f865d3923f461e03721171 */
#if BIND_Loop_active_handles_FIELD_WRITER
mrb_value
mrb_UV_Loop_set_active_handles(mrb_state* mrb, mrb_value self) {
  uv_loop_t * native_self = mruby_unbox_uv_loop_t(self);
  mrb_int native_active_handles;

  mrb_get_args(mrb, "i", &native_active_handles);

  native_self->active_handles = native_active_handles;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Loop::handle_queue_reader */
/* sha: edb5ae6d0db51dc7833893a6b5b391a7488354f13b8199be8e5757f55f342a78 */
#if BIND_Loop_handle_queue_FIELD_READER
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
/* sha: 5e933d7002450e43f4519ff28ff98afb377637a291d58bba7c152248ce937f79 */
#if BIND_Loop_handle_queue_FIELD_WRITER
mrb_value
mrb_UV_Loop_set_handle_queue(mrb_state* mrb, mrb_value self) {
  uv_loop_t * native_self = mruby_unbox_uv_loop_t(self);
  mrb_value handle_queue;

  mrb_get_args(mrb, "o", &handle_queue);

  /* type checking */
  TODO_type_check_void_PTR_[2](handle_queue);

  void *[2] native_handle_queue = TODO_mruby_unbox_void_PTR_[2](handle_queue);

  native_self->handle_queue = native_handle_queue;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Loop::active_reqs_reader */
/* sha: 25a11b0260bd1e257221412fb2775183bf80228adb1c68ede6bb1e9cef7383bc */
#if BIND_Loop_active_reqs_FIELD_READER
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
/* sha: 6400d4c16dafa69049f77a1c6e39378bed00687c2419324874b7cfac3edb1d64 */
#if BIND_Loop_active_reqs_FIELD_WRITER
mrb_value
mrb_UV_Loop_set_active_reqs(mrb_state* mrb, mrb_value self) {
  uv_loop_t * native_self = mruby_unbox_uv_loop_t(self);
  mrb_value active_reqs;

  mrb_get_args(mrb, "o", &active_reqs);

  /* type checking */
  TODO_type_check_void_PTR_[2](active_reqs);

  void *[2] native_active_reqs = TODO_mruby_unbox_void_PTR_[2](active_reqs);

  native_self->active_reqs = native_active_reqs;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Loop::stop_flag_reader */
/* sha: 91720066ce4d8fe034d5de0d974af257365de4b7bc0ac08703d88b5768c99fec */
#if BIND_Loop_stop_flag_FIELD_READER
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
/* sha: c38760d0048451872267a80a114d09931f23baa50886a00e2e6826bce1adae80 */
#if BIND_Loop_stop_flag_FIELD_WRITER
mrb_value
mrb_UV_Loop_set_stop_flag(mrb_state* mrb, mrb_value self) {
  uv_loop_t * native_self = mruby_unbox_uv_loop_t(self);
  mrb_int native_stop_flag;

  mrb_get_args(mrb, "i", &native_stop_flag);

  native_self->stop_flag = native_stop_flag;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Loop_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

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


/* MRUBY_BINDING: Loop::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
