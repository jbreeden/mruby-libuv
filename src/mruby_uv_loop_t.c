/*
 * uv_loop_t
 * Defined in file uv.h @ line 1446
 */

#include "mruby_UV.h"

#if BIND_UvLoopT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvLoopT::initialize */
/* sha: ad2a79a6fe89358ea3d6b15ba9f19151e31c0ea1b7fa9b89fd6515183ae6eed8 */
#if BIND_UvLoopT_INITIALIZE
mrb_value
mrb_UV_UvLoopT_initialize(mrb_state* mrb, mrb_value self) {
  uv_loop_t* native_object = (uv_loop_t*)calloc(1, sizeof(uv_loop_t));
  mruby_giftwrap_uv_loop_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvLoopT::initialize */
/* sha: 23fb48ac9be5b279cac5296f3be1102f72d7c6875042fa84071670a89fd6179b */
mrb_value
mrb_UV_UvLoopT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvLoopT.disown only accepts objects of type UV::UvLoopT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvLoopT::belongs_to_ruby */
/* sha: 55170b4697b06c5f938e6b378f493c3e264be48e192aae7aefdc8f3bf6264f48 */
mrb_value
mrb_UV_UvLoopT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvLoopT.belongs_to_ruby only accepts objects of type UV::UvLoopT");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: UvLoopT::data_reader */
/* sha: 954617ecb4e3850e8bb1662a46fb896dc38179246d8477cfa2e4acb6efbfd37b */
#if BIND_UvLoopT_data_FIELD_READER
/* get_data
 *
 * Return Type: void *
 */
mrb_value
mrb_UV_UvLoopT_get_data(mrb_state* mrb, mrb_value self) {
  uv_loop_t * native_self = mruby_unbox_uv_loop_t(self);

  void * native_data = native_self->data;

  mrb_value data = TODO_mruby_box_void_PTR(mrb, native_data);

  return data;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvLoopT::data_writer */
/* sha: ccdd47eeb28aa0d350eebdc2d5f436ccf1a6e8eb89edd34f6d6fb679f6ea3545 */
#if BIND_UvLoopT_data_FIELD_WRITER
/* set_data
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_UV_UvLoopT_set_data(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvLoopT::active_handles_reader */
/* sha: 18e8285d592263197ef54c82811a07eb267674a8cab5f07a7b270a0da1701e47 */
#if BIND_UvLoopT_active_handles_FIELD_READER
/* get_active_handles
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_UV_UvLoopT_get_active_handles(mrb_state* mrb, mrb_value self) {
  uv_loop_t * native_self = mruby_unbox_uv_loop_t(self);

  unsigned int native_active_handles = native_self->active_handles;

  mrb_value active_handles = mrb_fixnum_value(native_active_handles);

  return active_handles;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvLoopT::active_handles_writer */
/* sha: a79c56b87c4d68692bb35b0f00f935b1c59fd553ab6ed7aeab78c74111f3b2c9 */
#if BIND_UvLoopT_active_handles_FIELD_WRITER
/* set_active_handles
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_UV_UvLoopT_set_active_handles(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvLoopT::handle_queue_reader */
/* sha: 119a15dd93b0ca456c04a8e4f6fa12728cf8897569c255a84ba9e4740e64a627 */
#if BIND_UvLoopT_handle_queue_FIELD_READER
/* get_handle_queue
 *
 * Return Type: void *[2]
 */
mrb_value
mrb_UV_UvLoopT_get_handle_queue(mrb_state* mrb, mrb_value self) {
  uv_loop_t * native_self = mruby_unbox_uv_loop_t(self);

  void *[2] native_handle_queue = native_self->handle_queue;

  mrb_value handle_queue = TODO_mruby_box_void_PTR_[2](mrb, native_handle_queue);

  return handle_queue;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvLoopT::handle_queue_writer */
/* sha: ee7c54e5b1ad3d7348ff63f6dafbff71611aad90d17ea35542619b819a73d08b */
#if BIND_UvLoopT_handle_queue_FIELD_WRITER
/* set_handle_queue
 *
 * Parameters:
 * - value: void *[2]
 */
mrb_value
mrb_UV_UvLoopT_set_handle_queue(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvLoopT::active_reqs_reader */
/* sha: d478b2ce7cebb9624d7910576244877afd31a6a89f840924a5cc6e45e908348c */
#if BIND_UvLoopT_active_reqs_FIELD_READER
/* get_active_reqs
 *
 * Return Type: void *[2]
 */
mrb_value
mrb_UV_UvLoopT_get_active_reqs(mrb_state* mrb, mrb_value self) {
  uv_loop_t * native_self = mruby_unbox_uv_loop_t(self);

  void *[2] native_active_reqs = native_self->active_reqs;

  mrb_value active_reqs = TODO_mruby_box_void_PTR_[2](mrb, native_active_reqs);

  return active_reqs;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvLoopT::active_reqs_writer */
/* sha: 2a199a0e8b9f327fb71a6fa769baf60efb2793cfcc31118360314333cf5e4a0a */
#if BIND_UvLoopT_active_reqs_FIELD_WRITER
/* set_active_reqs
 *
 * Parameters:
 * - value: void *[2]
 */
mrb_value
mrb_UV_UvLoopT_set_active_reqs(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvLoopT::stop_flag_reader */
/* sha: 9728e0d35d671243415672eaf1156683c0eae6540ab8f49b3d88bd159e39afc4 */
#if BIND_UvLoopT_stop_flag_FIELD_READER
/* get_stop_flag
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_UV_UvLoopT_get_stop_flag(mrb_state* mrb, mrb_value self) {
  uv_loop_t * native_self = mruby_unbox_uv_loop_t(self);

  unsigned int native_stop_flag = native_self->stop_flag;

  mrb_value stop_flag = mrb_fixnum_value(native_stop_flag);

  return stop_flag;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvLoopT::stop_flag_writer */
/* sha: 7be100a3eb13a7f7617815a3e3f4c27be4caf4db44948c32f143ca8dfaa912da */
#if BIND_UvLoopT_stop_flag_FIELD_WRITER
/* set_stop_flag
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_UV_UvLoopT_set_stop_flag(mrb_state* mrb, mrb_value self) {
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


void mrb_UV_UvLoopT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvLoopT::class_definition */
/* sha: bf947861bb78e27a8bf73e6167350ea073b4b61361940871cc177ea3b29fee73 */
  struct RClass* UvLoopT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvLoopT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvLoopT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvLoopT::class_method_definitions */
/* sha: 15559d63c55cd20808545edcaf44c238b0d12b22da058187baa95de54b72314d */
#if BIND_UvLoopT_INITIALIZE
  mrb_define_method(mrb, UvLoopT_class, "initialize", mrb_UV_UvLoopT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvLoopT_class, "disown", mrb_UV_UvLoopT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvLoopT_class, "belongs_to_ruby?", mrb_UV_UvLoopT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvLoopT::attr_definitions */
/* sha: 94c27a54f6120b625d8ae4179fd4b1fcabf1cf18c3b4e51f08998d4e89970eb4 */
  /*
   * Fields
   */
#if BIND_UvLoopT_data_FIELD_READER
  mrb_define_method(mrb, UvLoopT_class, "data", mrb_UV_UvLoopT_get_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvLoopT_data_FIELD_WRITER
  mrb_define_method(mrb, UvLoopT_class, "data=", mrb_UV_UvLoopT_set_data, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvLoopT_active_handles_FIELD_READER
  mrb_define_method(mrb, UvLoopT_class, "active_handles", mrb_UV_UvLoopT_get_active_handles, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvLoopT_active_handles_FIELD_WRITER
  mrb_define_method(mrb, UvLoopT_class, "active_handles=", mrb_UV_UvLoopT_set_active_handles, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvLoopT_handle_queue_FIELD_READER
  mrb_define_method(mrb, UvLoopT_class, "handle_queue", mrb_UV_UvLoopT_get_handle_queue, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvLoopT_handle_queue_FIELD_WRITER
  mrb_define_method(mrb, UvLoopT_class, "handle_queue=", mrb_UV_UvLoopT_set_handle_queue, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvLoopT_active_reqs_FIELD_READER
  mrb_define_method(mrb, UvLoopT_class, "active_reqs", mrb_UV_UvLoopT_get_active_reqs, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvLoopT_active_reqs_FIELD_WRITER
  mrb_define_method(mrb, UvLoopT_class, "active_reqs=", mrb_UV_UvLoopT_set_active_reqs, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvLoopT_stop_flag_FIELD_READER
  mrb_define_method(mrb, UvLoopT_class, "stop_flag", mrb_UV_UvLoopT_get_stop_flag, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvLoopT_stop_flag_FIELD_WRITER
  mrb_define_method(mrb, UvLoopT_class, "stop_flag=", mrb_UV_UvLoopT_set_stop_flag, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvLoopT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
