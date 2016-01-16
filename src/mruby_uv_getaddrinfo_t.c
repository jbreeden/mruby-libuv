/*
 * uv_getaddrinfo_t
 * Defined in file uv.h @ line 220
 */

#include "mruby_UV.h"

#if BIND_UvGetaddrinfoT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvGetaddrinfoT::initialize */
/* sha: ec7787a5dbedcb311c3dc9f12bc1e39b36da24d306edab79582b017dcf206825 */
#if BIND_UvGetaddrinfoT_INITIALIZE
mrb_value
mrb_UV_UvGetaddrinfoT_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Uncomment (and optionally replace) if an initializer is desired.
  uv_getaddrinfo_t* native_object = (uv_getaddrinfo_t*)calloc(1, sizeof(uv_getaddrinfo_t));
  mruby_gift_uv_getaddrinfo_t_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetaddrinfoT::disown */
/* sha: e7f532e0912853b78b1d8cee6e5842881e96f288d6a79f82d36736a4d07a4086 */
mrb_value
mrb_UV_UvGetaddrinfoT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvGetaddrinfoT.disown only accepts objects of type UV::UvGetaddrinfoT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetaddrinfoT::belongs_to_ruby */
/* sha: 46b3f31c68cbbbde68378b31d035567fe1be4632d3f281ad179a76b94788ad3b */
mrb_value
mrb_UV_UvGetaddrinfoT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvGetaddrinfoT.belongs_to_ruby only accepts objects of type UV::UvGetaddrinfoT");
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

/* MRUBY_BINDING: UvGetaddrinfoT::loop_reader */
/* sha: 8b868522b43563229fe27f1ec0be01f10e3398e7452500c89c4b76b0bc1a5e08 */
#if BIND_UvGetaddrinfoT_loop_FIELD_READER
/* get_loop
 *
 * Return Type: uv_loop_t *
 */
mrb_value
mrb_UV_UvGetaddrinfoT_get_loop(mrb_state* mrb, mrb_value self) {
  uv_getaddrinfo_t * native_self = mruby_unbox_uv_getaddrinfo_t(self);

  uv_loop_t * native_loop = native_self->loop;

  mrb_value loop = (native_loop == NULL ? mrb_nil_value() : mruby_box_uv_loop_t(mrb, native_loop));

  return loop;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetaddrinfoT::loop_writer */
/* sha: 64015ce5ab3ae607c32f259300213df5ec80cc8a74bbd65930a04542b4e0271d */
#if BIND_UvGetaddrinfoT_loop_FIELD_WRITER
/* set_loop
 *
 * Parameters:
 * - value: uv_loop_t *
 */
mrb_value
mrb_UV_UvGetaddrinfoT_set_loop(mrb_state* mrb, mrb_value self) {
  uv_getaddrinfo_t * native_self = mruby_unbox_uv_getaddrinfo_t(self);
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


void mrb_UV_UvGetaddrinfoT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvGetaddrinfoT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetaddrinfoT::class_definition */
/* sha: 76260cfcc00f17e416beae748d3f76970687be8d6a15d3edad0835370fcf3e51 */
  struct RClass* UvGetaddrinfoT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvGetaddrinfoT", UvReqT_class(mrb));
  MRB_SET_INSTANCE_TT(UvGetaddrinfoT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetaddrinfoT::custom_pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetaddrinfoT::class_method_definitions */
/* sha: 7cdc5a45e4fb669969924fe0f99b2ee9763036ced508f4817dd84133cb99ba14 */
#if BIND_UvGetaddrinfoT_INITIALIZE
  mrb_define_method(mrb, UvGetaddrinfoT_class, "initialize", mrb_UV_UvGetaddrinfoT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvGetaddrinfoT_class, "disown", mrb_UV_UvGetaddrinfoT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvGetaddrinfoT_class, "belongs_to_ruby?", mrb_UV_UvGetaddrinfoT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetaddrinfoT::custom_pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetaddrinfoT::attr_definitions */
/* sha: 505204b7a89e5c6999b961e5183a692dca0a4aa2266a2b9bf68d99d78ab76685 */
  /*
   * Fields
   */
#if BIND_UvGetaddrinfoT_loop_FIELD_READER
  mrb_define_method(mrb, UvGetaddrinfoT_class, "loop", mrb_UV_UvGetaddrinfoT_get_loop, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvGetaddrinfoT_loop_FIELD_WRITER
  mrb_define_method(mrb, UvGetaddrinfoT_class, "loop=", mrb_UV_UvGetaddrinfoT_set_loop, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetaddrinfoT::custom_pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetaddrinfoT::instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetaddrinfoT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: custom_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
