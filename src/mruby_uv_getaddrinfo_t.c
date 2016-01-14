/*
 * uv_getaddrinfo_t
 * Defined in file uv.h @ line 220
 */

#include "mruby_UV.h"

#if BIND_UvGetaddrinfoT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvGetaddrinfoT::initialize */
/* sha: 2cdb72d90dbdd921709c2570c54643831511fbee4c09bf29a0ed6208a3f634ce */
#if BIND_UvGetaddrinfoT_INITIALIZE
mrb_value
mrb_UV_UvGetaddrinfoT_initialize(mrb_state* mrb, mrb_value self) {
  uv_getaddrinfo_t* native_object = (uv_getaddrinfo_t*)calloc(1, sizeof(uv_getaddrinfo_t));
  mruby_giftwrap_uv_getaddrinfo_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetaddrinfoT::initialize */
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

/* MRUBY_BINDING: UvGetaddrinfoT::uv_loop_t_reader */
/* sha: 522033969ec86e99d8dcbcce7c96b441d6adb97198fba23fa9abc59886cde682 */
#if BIND_UvGetaddrinfoT_uv_loop_t_FIELD_READER
/* get_uv_loop_t
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvGetaddrinfoT_get_uv_loop_t(mrb_state* mrb, mrb_value self) {
  uv_getaddrinfo_t * native_self = mruby_unbox_uv_getaddrinfo_t(self);

  int native_uv_loop_t = native_self->uv_loop_t;

  mrb_value uv_loop_t = mrb_fixnum_value(native_uv_loop_t);

  return uv_loop_t;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetaddrinfoT::uv_loop_t_writer */
/* sha: 14715a28b505558f5ba10d487a8b396c362435b28af9868f30bd6a066c7b2a36 */
#if BIND_UvGetaddrinfoT_uv_loop_t_FIELD_WRITER
/* set_uv_loop_t
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvGetaddrinfoT_set_uv_loop_t(mrb_state* mrb, mrb_value self) {
  uv_getaddrinfo_t * native_self = mruby_unbox_uv_getaddrinfo_t(self);
  mrb_int native_uv_loop_t;

  mrb_get_args(mrb, "i", &native_uv_loop_t);

  native_self->uv_loop_t = native_uv_loop_t;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetaddrinfoT::_reader */
/* sha: 0c798b3c6e74e2cd8431a688b2eea05a536230f49b8e1b81627eccf8e1f18011 */
#if BIND_UvGetaddrinfoT__FIELD_READER
/* get_
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvGetaddrinfoT_get_(mrb_state* mrb, mrb_value self) {
  uv_getaddrinfo_t * native_self = mruby_unbox_uv_getaddrinfo_t(self);

  int native_ = native_self->;

  mrb_value  = mrb_fixnum_value(native_);

  return ;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetaddrinfoT::_writer */
/* sha: efeaf5b172c925d7d78bce76b36b762781d90c39a32884c73a867f27e6069e34 */
#if BIND_UvGetaddrinfoT__FIELD_WRITER
/* set_
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvGetaddrinfoT_set_(mrb_state* mrb, mrb_value self) {
  uv_getaddrinfo_t * native_self = mruby_unbox_uv_getaddrinfo_t(self);
  mrb_int native_;

  mrb_get_args(mrb, "i", &native_);

  native_self-> = native_;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvGetaddrinfoT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvGetaddrinfoT::class_definition */
/* sha: 76260cfcc00f17e416beae748d3f76970687be8d6a15d3edad0835370fcf3e51 */
  struct RClass* UvGetaddrinfoT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvGetaddrinfoT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvGetaddrinfoT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetaddrinfoT::class_method_definitions */
/* sha: 7cdc5a45e4fb669969924fe0f99b2ee9763036ced508f4817dd84133cb99ba14 */
#if BIND_UvGetaddrinfoT_INITIALIZE
  mrb_define_method(mrb, UvGetaddrinfoT_class, "initialize", mrb_UV_UvGetaddrinfoT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvGetaddrinfoT_class, "disown", mrb_UV_UvGetaddrinfoT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvGetaddrinfoT_class, "belongs_to_ruby?", mrb_UV_UvGetaddrinfoT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetaddrinfoT::attr_definitions */
/* sha: 0e23bf6c9f4e30964a5f29a0c84ee3e6981c16f5bb0e5841e114cb85f40bd5a5 */
  /*
   * Fields
   */
#if BIND_UvGetaddrinfoT_uv_loop_t_FIELD_READER
  mrb_define_method(mrb, UvGetaddrinfoT_class, "uv_loop_t", mrb_UV_UvGetaddrinfoT_get_uv_loop_t, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvGetaddrinfoT_uv_loop_t_FIELD_WRITER
  mrb_define_method(mrb, UvGetaddrinfoT_class, "uv_loop_t=", mrb_UV_UvGetaddrinfoT_set_uv_loop_t, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvGetaddrinfoT__FIELD_READER
  mrb_define_method(mrb, UvGetaddrinfoT_class, "", mrb_UV_UvGetaddrinfoT_get_, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvGetaddrinfoT__FIELD_WRITER
  mrb_define_method(mrb, UvGetaddrinfoT_class, "=", mrb_UV_UvGetaddrinfoT_set_, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetaddrinfoT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
