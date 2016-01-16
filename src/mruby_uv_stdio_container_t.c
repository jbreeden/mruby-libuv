/*
 * uv_stdio_container_t
 * Defined in file uv.h @ line 849
 */

#include "mruby_UV.h"

#if BIND_UvStdioContainerT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvStdioContainerT::initialize */
/* sha: 7b8f4242c0e5cfaf6586e86d76aa30ccd2fc4abb5e5967d27b7ce1a0d0edb169 */
#if BIND_UvStdioContainerT_INITIALIZE
mrb_value
mrb_UV_UvStdioContainerT_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Uncomment (and optionally replace) if an initializer is desired.
  uv_stdio_container_t* native_object = (uv_stdio_container_t*)calloc(1, sizeof(uv_stdio_container_t));
  mruby_gift_uv_stdio_container_t_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStdioContainerT::disown */
/* sha: 4e90ea3d8ced690c9bc4cb14f27fc95688c3ae26f173b52e50e32ff2a4bbc6bb */
mrb_value
mrb_UV_UvStdioContainerT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvStdioContainerT.disown only accepts objects of type UV::UvStdioContainerT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStdioContainerT::belongs_to_ruby */
/* sha: 63918495e4880e78abe13e12dd734f874660441d77d09e432724e40c8e96934b */
mrb_value
mrb_UV_UvStdioContainerT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvStdioContainerT.belongs_to_ruby only accepts objects of type UV::UvStdioContainerT");
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

/* MRUBY_BINDING: UvStdioContainerT::flags_reader */
/* sha: da62932418739e891027d7732863122b3b4f002802a42a026473bdc190636d23 */
#if BIND_UvStdioContainerT_flags_FIELD_READER
/* get_flags
 *
 * Return Type: uv_stdio_flags
 */
mrb_value
mrb_UV_UvStdioContainerT_get_flags(mrb_state* mrb, mrb_value self) {
  uv_stdio_container_t * native_self = mruby_unbox_uv_stdio_container_t(self);

  uv_stdio_flags native_flags = native_self->flags;

  mrb_value flags = mrb_fixnum_value(native_flags);

  return flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStdioContainerT::flags_writer */
/* sha: 8b7dd2f0713b56fc6f7b61551b4da486761485051966bee8f9893e946d944a85 */
#if BIND_UvStdioContainerT_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: uv_stdio_flags
 */
mrb_value
mrb_UV_UvStdioContainerT_set_flags(mrb_state* mrb, mrb_value self) {
  uv_stdio_container_t * native_self = mruby_unbox_uv_stdio_container_t(self);
  mrb_int native_flags;

  mrb_get_args(mrb, "i", &native_flags);

  native_self->flags = native_flags;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStdioContainerT::data_reader */
/* sha: d4c326e234ddbbf2a981061d8234ea1e9464bdf518a44a9a3afda51615abae3f */
#if BIND_UvStdioContainerT_data_FIELD_READER
/* get_data
 *
 * Return Type: union (anonymous union at headers/uv.h:852:3)
 */
mrb_value
mrb_UV_UvStdioContainerT_get_data(mrb_state* mrb, mrb_value self) {
  uv_stdio_container_t * native_self = mruby_unbox_uv_stdio_container_t(self);

  union (anonymous union at headers/uv.h:852:3) native_data = native_self->data;

  mrb_value data = TODO_mruby_box_union_LPAREN_anonymous_union_at_headers/uv.h:852:3_RPAREN(mrb, native_data);

  return data;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStdioContainerT::data_writer */
/* sha: 51e99688a2d3c7467219c344c84deee50d215bf898716942494c65eee5f43b64 */
#if BIND_UvStdioContainerT_data_FIELD_WRITER
/* set_data
 *
 * Parameters:
 * - value: union (anonymous union at headers/uv.h:852:3)
 */
mrb_value
mrb_UV_UvStdioContainerT_set_data(mrb_state* mrb, mrb_value self) {
  uv_stdio_container_t * native_self = mruby_unbox_uv_stdio_container_t(self);
  mrb_value data;

  mrb_get_args(mrb, "o", &data);

  /* type checking */
  TODO_type_check_union_LPAREN_anonymous_union_at_headers/uv.h:852:3_RPAREN(data);

  union (anonymous union at headers/uv.h:852:3) native_data = TODO_mruby_unbox_union_LPAREN_anonymous_union_at_headers/uv.h:852:3_RPAREN(data);

  native_self->data = native_data;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvStdioContainerT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvStdioContainerT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStdioContainerT::class_definition */
/* sha: bcdd9ca49598f0c046b087ea5582d8db6fde67b89ad39b76e6873ec59ef83210 */
  struct RClass* UvStdioContainerT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvStdioContainerT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvStdioContainerT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStdioContainerT::custom_pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStdioContainerT::class_method_definitions */
/* sha: 97eda5e959b0bd3a4a6d2ac7d5f58cab713f2ba85e09cda8e015d946b51419b8 */
#if BIND_UvStdioContainerT_INITIALIZE
  mrb_define_method(mrb, UvStdioContainerT_class, "initialize", mrb_UV_UvStdioContainerT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvStdioContainerT_class, "disown", mrb_UV_UvStdioContainerT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvStdioContainerT_class, "belongs_to_ruby?", mrb_UV_UvStdioContainerT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStdioContainerT::custom_pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStdioContainerT::attr_definitions */
/* sha: dfb46f53e6b228f0ed6aa8acc8d9b1733b7816a1b8ed7a6440f92d41a84d6f2b */
  /*
   * Fields
   */
#if BIND_UvStdioContainerT_flags_FIELD_READER
  mrb_define_method(mrb, UvStdioContainerT_class, "flags", mrb_UV_UvStdioContainerT_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStdioContainerT_flags_FIELD_WRITER
  mrb_define_method(mrb, UvStdioContainerT_class, "flags=", mrb_UV_UvStdioContainerT_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvStdioContainerT_data_FIELD_READER
  mrb_define_method(mrb, UvStdioContainerT_class, "data", mrb_UV_UvStdioContainerT_get_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStdioContainerT_data_FIELD_WRITER
  mrb_define_method(mrb, UvStdioContainerT_class, "data=", mrb_UV_UvStdioContainerT_set_data, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStdioContainerT::custom_pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStdioContainerT::instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStdioContainerT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: custom_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
