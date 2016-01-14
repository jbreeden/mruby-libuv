/*
 * uv_timer_t
 * Defined in file uv.h @ line 208
 */

#include "mruby_UV.h"

#if BIND_UvTimerT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvTimerT::initialize */
/* sha: 23521ed96ddd3e8014bf774cff9db204ec17eef100998feada1b63607adbf1d3 */
#if BIND_UvTimerT_INITIALIZE
mrb_value
mrb_UV_UvTimerT_initialize(mrb_state* mrb, mrb_value self) {
  uv_timer_t* native_object = (uv_timer_t*)calloc(1, sizeof(uv_timer_t));
  mruby_giftwrap_uv_timer_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimerT::initialize */
/* sha: 6636c70564015e903df9da3c56f4e997e4508b8e1520387d20fd1f9025bc4cfb */
mrb_value
mrb_UV_UvTimerT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvTimerT.disown only accepts objects of type UV::UvTimerT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimerT::belongs_to_ruby */
/* sha: d9485eff36eeaef501696c4b1c8283a5a00c3f57e73a92210428fa45f1d7f333 */
mrb_value
mrb_UV_UvTimerT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvTimerT.belongs_to_ruby only accepts objects of type UV::UvTimerT");
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

/* MRUBY_BINDING: UvTimerT::UV_TIMER_PRIVATE_FIELDS_reader */
/* sha: d8728cbc000a73d42f36f451b72ebfb469d37b22834fd83e2b95b9572b4f195b */
#if BIND_UvTimerT_UV_TIMER_PRIVATE_FIELDS_FIELD_READER
/* get_UV_TIMER_PRIVATE_FIELDS
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvTimerT_get_UV_TIMER_PRIVATE_FIELDS(mrb_state* mrb, mrb_value self) {
  uv_timer_t * native_self = mruby_unbox_uv_timer_t(self);

  int native_UV_TIMER_PRIVATE_FIELDS = native_self->UV_TIMER_PRIVATE_FIELDS;

  mrb_value UV_TIMER_PRIVATE_FIELDS = mrb_fixnum_value(native_UV_TIMER_PRIVATE_FIELDS);

  return UV_TIMER_PRIVATE_FIELDS;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimerT::UV_TIMER_PRIVATE_FIELDS_writer */
/* sha: 8b61642637fcb9a303ea2063ea98d8d5b10a2f6f9bb6dcd15c347d9f538d4314 */
#if BIND_UvTimerT_UV_TIMER_PRIVATE_FIELDS_FIELD_WRITER
/* set_UV_TIMER_PRIVATE_FIELDS
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvTimerT_set_UV_TIMER_PRIVATE_FIELDS(mrb_state* mrb, mrb_value self) {
  uv_timer_t * native_self = mruby_unbox_uv_timer_t(self);
  mrb_int native_UV_TIMER_PRIVATE_FIELDS;

  mrb_get_args(mrb, "i", &native_UV_TIMER_PRIVATE_FIELDS);

  native_self->UV_TIMER_PRIVATE_FIELDS = native_UV_TIMER_PRIVATE_FIELDS;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvTimerT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvTimerT::class_definition */
/* sha: d8fabb692cac8c297b3ca055e17e3dcc02d8a1676113a20850bab2741563a341 */
  struct RClass* UvTimerT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvTimerT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvTimerT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimerT::class_method_definitions */
/* sha: b81656fcc5200689c5b73c12c0c37efb87aec2a76afd04f0c550ea5b40cb4228 */
#if BIND_UvTimerT_INITIALIZE
  mrb_define_method(mrb, UvTimerT_class, "initialize", mrb_UV_UvTimerT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvTimerT_class, "disown", mrb_UV_UvTimerT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvTimerT_class, "belongs_to_ruby?", mrb_UV_UvTimerT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimerT::attr_definitions */
/* sha: e729f7da7a143de535065648b0139de6a2ebc98c415472bca7de54a40499e1da */
  /*
   * Fields
   */
#if BIND_UvTimerT_UV_TIMER_PRIVATE_FIELDS_FIELD_READER
  mrb_define_method(mrb, UvTimerT_class, "UV_TIMER_PRIVATE_FIELDS", mrb_UV_UvTimerT_get_UV_TIMER_PRIVATE_FIELDS, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvTimerT_UV_TIMER_PRIVATE_FIELDS_FIELD_WRITER
  mrb_define_method(mrb, UvTimerT_class, "UV_TIMER_PRIVATE_FIELDS=", mrb_UV_UvTimerT_set_UV_TIMER_PRIVATE_FIELDS, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimerT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
