/*
 * uv_work_t
 * Defined in file uv.h @ line 227
 */

#include "mruby_UV.h"

#if BIND_UvWorkT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvWorkT::initialize */
/* sha: b94c7678ba6d4829def84151e6d21949baa0a1de6d533b1d058583d283a36c33 */
#if BIND_UvWorkT_INITIALIZE
mrb_value
mrb_UV_UvWorkT_initialize(mrb_state* mrb, mrb_value self) {
  uv_work_t* native_object = (uv_work_t*)calloc(1, sizeof(uv_work_t));
  mruby_giftwrap_uv_work_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWorkT::initialize */
/* sha: ba34c47172054bb68f2e57989a99356d311db80b3fbe01f3aad1cb2426f5abee */
mrb_value
mrb_UV_UvWorkT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvWorkT.disown only accepts objects of type UV::UvWorkT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWorkT::belongs_to_ruby */
/* sha: 31be958f10d2911fc1942d6f658c237180efd88c126e48b2ee7ae7f46e05205f */
mrb_value
mrb_UV_UvWorkT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvWorkT.belongs_to_ruby only accepts objects of type UV::UvWorkT");
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

/* MRUBY_BINDING: UvWorkT::uv_loop_t_reader */
/* sha: c87030e36f5d7a8bd2e29766d51cbe662b29d1d02c9148a1112da99705ff23b7 */
#if BIND_UvWorkT_uv_loop_t_FIELD_READER
/* get_uv_loop_t
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvWorkT_get_uv_loop_t(mrb_state* mrb, mrb_value self) {
  uv_work_t * native_self = mruby_unbox_uv_work_t(self);

  int native_uv_loop_t = native_self->uv_loop_t;

  mrb_value uv_loop_t = mrb_fixnum_value(native_uv_loop_t);

  return uv_loop_t;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWorkT::uv_loop_t_writer */
/* sha: 0a9bbdc14ed0b9768abd88a63039f20ecc6469508267ea8f6fcc1b5db7a3019d */
#if BIND_UvWorkT_uv_loop_t_FIELD_WRITER
/* set_uv_loop_t
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvWorkT_set_uv_loop_t(mrb_state* mrb, mrb_value self) {
  uv_work_t * native_self = mruby_unbox_uv_work_t(self);
  mrb_int native_uv_loop_t;

  mrb_get_args(mrb, "i", &native_uv_loop_t);

  native_self->uv_loop_t = native_uv_loop_t;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWorkT::work_cb_reader */
/* sha: a80207167c4ba0b67a0d5cdfd0f2fa911d086fe0caa378bde68514a4ceb3a5ad */
#if BIND_UvWorkT_work_cb_FIELD_READER
/* get_work_cb
 *
 * Return Type: uv_work_cb
 */
mrb_value
mrb_UV_UvWorkT_get_work_cb(mrb_state* mrb, mrb_value self) {
  uv_work_t * native_self = mruby_unbox_uv_work_t(self);

  uv_work_cb native_work_cb = native_self->work_cb;

  mrb_value work_cb = TODO_mruby_box_uv_work_cb(mrb, native_work_cb);

  return work_cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWorkT::work_cb_writer */
/* sha: e20bd4d771770cb7e4788ed451a1520336f90d2c1297bbfd5e12ee03a624f6ff */
#if BIND_UvWorkT_work_cb_FIELD_WRITER
/* set_work_cb
 *
 * Parameters:
 * - value: uv_work_cb
 */
mrb_value
mrb_UV_UvWorkT_set_work_cb(mrb_state* mrb, mrb_value self) {
  uv_work_t * native_self = mruby_unbox_uv_work_t(self);
  mrb_value work_cb;

  mrb_get_args(mrb, "o", &work_cb);

  /* type checking */
  TODO_type_check_uv_work_cb(work_cb);

  uv_work_cb native_work_cb = TODO_mruby_unbox_uv_work_cb(work_cb);

  native_self->work_cb = native_work_cb;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWorkT::after_work_cb_reader */
/* sha: 0c3ab9ee1d530aa59566db0bd11eb021a5585c542fcc816c19f3d0ece25fd098 */
#if BIND_UvWorkT_after_work_cb_FIELD_READER
/* get_after_work_cb
 *
 * Return Type: uv_after_work_cb
 */
mrb_value
mrb_UV_UvWorkT_get_after_work_cb(mrb_state* mrb, mrb_value self) {
  uv_work_t * native_self = mruby_unbox_uv_work_t(self);

  uv_after_work_cb native_after_work_cb = native_self->after_work_cb;

  mrb_value after_work_cb = TODO_mruby_box_uv_after_work_cb(mrb, native_after_work_cb);

  return after_work_cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWorkT::after_work_cb_writer */
/* sha: f46c41ec5528b1efb87ac895c10380243931508cc6e5eeb9bfb61c0d51859866 */
#if BIND_UvWorkT_after_work_cb_FIELD_WRITER
/* set_after_work_cb
 *
 * Parameters:
 * - value: uv_after_work_cb
 */
mrb_value
mrb_UV_UvWorkT_set_after_work_cb(mrb_state* mrb, mrb_value self) {
  uv_work_t * native_self = mruby_unbox_uv_work_t(self);
  mrb_value after_work_cb;

  mrb_get_args(mrb, "o", &after_work_cb);

  /* type checking */
  TODO_type_check_uv_after_work_cb(after_work_cb);

  uv_after_work_cb native_after_work_cb = TODO_mruby_unbox_uv_after_work_cb(after_work_cb);

  native_self->after_work_cb = native_after_work_cb;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWorkT::_reader */
/* sha: 7748dd73f01af6ffe0d7b1df126a4226eb006a7709365f3fb290afe980fbf009 */
#if BIND_UvWorkT__FIELD_READER
/* get_
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvWorkT_get_(mrb_state* mrb, mrb_value self) {
  uv_work_t * native_self = mruby_unbox_uv_work_t(self);

  int native_ = native_self->;

  mrb_value  = mrb_fixnum_value(native_);

  return ;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWorkT::_writer */
/* sha: c17c918a888a6ab1c2a41a4855ed33b955a0b8d7f82f4469a57b229af49eaaca */
#if BIND_UvWorkT__FIELD_WRITER
/* set_
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvWorkT_set_(mrb_state* mrb, mrb_value self) {
  uv_work_t * native_self = mruby_unbox_uv_work_t(self);
  mrb_int native_;

  mrb_get_args(mrb, "i", &native_);

  native_self-> = native_;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvWorkT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvWorkT::class_definition */
/* sha: 1eb2d2cdc5ec086091f151f4a4d32fd5eddcec14760b35d5424a12c6cbadb57f */
  struct RClass* UvWorkT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvWorkT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvWorkT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWorkT::class_method_definitions */
/* sha: 72a056e676feeccef138790e584935a23aedddb0182ffac5d1df360e4482d351 */
#if BIND_UvWorkT_INITIALIZE
  mrb_define_method(mrb, UvWorkT_class, "initialize", mrb_UV_UvWorkT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvWorkT_class, "disown", mrb_UV_UvWorkT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvWorkT_class, "belongs_to_ruby?", mrb_UV_UvWorkT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWorkT::attr_definitions */
/* sha: 732ee13d1d433898e770d9f9754bfcffb2d76283b8ba307944657ac22e2d5900 */
  /*
   * Fields
   */
#if BIND_UvWorkT_uv_loop_t_FIELD_READER
  mrb_define_method(mrb, UvWorkT_class, "uv_loop_t", mrb_UV_UvWorkT_get_uv_loop_t, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvWorkT_uv_loop_t_FIELD_WRITER
  mrb_define_method(mrb, UvWorkT_class, "uv_loop_t=", mrb_UV_UvWorkT_set_uv_loop_t, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvWorkT_work_cb_FIELD_READER
  mrb_define_method(mrb, UvWorkT_class, "work_cb", mrb_UV_UvWorkT_get_work_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvWorkT_work_cb_FIELD_WRITER
  mrb_define_method(mrb, UvWorkT_class, "work_cb=", mrb_UV_UvWorkT_set_work_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvWorkT_after_work_cb_FIELD_READER
  mrb_define_method(mrb, UvWorkT_class, "after_work_cb", mrb_UV_UvWorkT_get_after_work_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvWorkT_after_work_cb_FIELD_WRITER
  mrb_define_method(mrb, UvWorkT_class, "after_work_cb=", mrb_UV_UvWorkT_set_after_work_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvWorkT__FIELD_READER
  mrb_define_method(mrb, UvWorkT_class, "", mrb_UV_UvWorkT_get_, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvWorkT__FIELD_WRITER
  mrb_define_method(mrb, UvWorkT_class, "=", mrb_UV_UvWorkT_set_, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWorkT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
