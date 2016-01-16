/*
 * uv_work_t
 * Defined in file uv.h @ line 227
 */

#include "mruby_UV.h"

#if BIND_UvWorkT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvWorkT::initialize */
/* sha: 313c345bf2dc6f4714b5e67e6075813e7bf18d8032ae5a5c983c99d03b2c92bf */
#if BIND_UvWorkT_INITIALIZE
mrb_value
mrb_UV_UvWorkT_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Uncomment (and optionally replace) if an initializer is desired.
  uv_work_t* native_object = (uv_work_t*)calloc(1, sizeof(uv_work_t));
  mruby_gift_uv_work_t_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWorkT::disown */
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

/* MRUBY_BINDING: UvWorkT::loop_reader */
/* sha: 8fafb1073c1336c9c0c9e3c460289d9ab001ca205a26590cab26dce5f74a7fdf */
#if BIND_UvWorkT_loop_FIELD_READER
/* get_loop
 *
 * Return Type: uv_loop_t *
 */
mrb_value
mrb_UV_UvWorkT_get_loop(mrb_state* mrb, mrb_value self) {
  uv_work_t * native_self = mruby_unbox_uv_work_t(self);

  uv_loop_t * native_loop = native_self->loop;

  mrb_value loop = (native_loop == NULL ? mrb_nil_value() : mruby_box_uv_loop_t(mrb, native_loop));

  return loop;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWorkT::loop_writer */
/* sha: 3dd25894cbc1a071c85910957199220402dd15e13934720c17c4da63a088df9a */
#if BIND_UvWorkT_loop_FIELD_WRITER
/* set_loop
 *
 * Parameters:
 * - value: uv_loop_t *
 */
mrb_value
mrb_UV_UvWorkT_set_loop(mrb_state* mrb, mrb_value self) {
  uv_work_t * native_self = mruby_unbox_uv_work_t(self);
  mrb_value loop;

  mrb_get_args(mrb, "o", &loop);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }

  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  native_self->loop = native_loop;
  
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


void mrb_UV_UvWorkT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvWorkT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWorkT::class_definition */
/* sha: 1eb2d2cdc5ec086091f151f4a4d32fd5eddcec14760b35d5424a12c6cbadb57f */
  struct RClass* UvWorkT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvWorkT", UvReqT_class(mrb));
  MRB_SET_INSTANCE_TT(UvWorkT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWorkT::custom_pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWorkT::class_method_definitions */
/* sha: 72a056e676feeccef138790e584935a23aedddb0182ffac5d1df360e4482d351 */
#if BIND_UvWorkT_INITIALIZE
  mrb_define_method(mrb, UvWorkT_class, "initialize", mrb_UV_UvWorkT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvWorkT_class, "disown", mrb_UV_UvWorkT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvWorkT_class, "belongs_to_ruby?", mrb_UV_UvWorkT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWorkT::custom_pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWorkT::attr_definitions */
/* sha: 9e3b11c2aa5fdab6d612017c1d1374452f61e0813f5b64c9f442b971305d0fd1 */
  /*
   * Fields
   */
#if BIND_UvWorkT_loop_FIELD_READER
  mrb_define_method(mrb, UvWorkT_class, "loop", mrb_UV_UvWorkT_get_loop, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvWorkT_loop_FIELD_WRITER
  mrb_define_method(mrb, UvWorkT_class, "loop=", mrb_UV_UvWorkT_set_loop, MRB_ARGS_ARG(1, 0));
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWorkT::custom_pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWorkT::instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWorkT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: custom_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
