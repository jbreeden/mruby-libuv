/*
 * uv_stdio_container_t
 * Defined in file uv.h @ line 849
 */

#include "mruby_UV.h"

#if BIND_STDIOContainer_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: STDIOContainer::initialize */
/* sha: b236abb2777cc4091a5a6265f108f4ced719e2e60a55a4d7c264c2f4c76b9a30 */
#if BIND_STDIOContainer_INITIALIZE
mrb_value
mrb_UV_STDIOContainer_initialize(mrb_state* mrb, mrb_value self) {

  uv_stdio_container_t* native_object = (uv_stdio_container_t*)calloc(1, sizeof(uv_stdio_container_t));
  mruby_gift_uv_stdio_container_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: STDIOContainer::flags_reader */
/* sha: 5c99f3fa367f091d5a0cb9378345344414059112aba4ac3a6798d928f66985e8 */
#if BIND_STDIOContainer_flags_FIELD_READER
/* get_flags
 *
 * Return Type: uv_stdio_flags
 */
mrb_value
mrb_UV_STDIOContainer_get_flags(mrb_state* mrb, mrb_value self) {
  uv_stdio_container_t * native_self = mruby_unbox_uv_stdio_container_t(self);

  uv_stdio_flags native_flags = native_self->flags;

  mrb_value flags = mrb_fixnum_value(native_flags);

  return flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: STDIOContainer::flags_writer */
/* sha: 1543a67607f141e2240b397907b5d5e25cbff77e029eb3c771947581bbc37894 */
#if BIND_STDIOContainer_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: uv_stdio_flags
 */
mrb_value
mrb_UV_STDIOContainer_set_flags(mrb_state* mrb, mrb_value self) {
  uv_stdio_container_t * native_self = mruby_unbox_uv_stdio_container_t(self);
  mrb_int native_flags;

  mrb_get_args(mrb, "i", &native_flags);

  native_self->flags = native_flags;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: STDIOContainer::data_reader */
/* sha: b98fec1ae096b6c7ff265a7f587873db3f90bc6db88c68e8e57734f7b2991d22 */
#if BIND_STDIOContainer_data_FIELD_READER
/* get_data
 *
 * Return Type: union (anonymous union at headers/uv.h:852:3)
 */
mrb_value
mrb_UV_STDIOContainer_get_data(mrb_state* mrb, mrb_value self) {
  uv_stdio_container_t * native_self = mruby_unbox_uv_stdio_container_t(self);

  union (anonymous union at headers/uv.h:852:3) native_data = native_self->data;

  mrb_value data = TODO_mruby_box_union_LPAREN_anonymous_union_at_headers/uv.h:852:3_RPAREN(mrb, native_data);

  return data;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: STDIOContainer::data_writer */
/* sha: c3fc80b52db3e650b6424f6990765fa5e45cd8a405319a071d82140d069f7426 */
#if BIND_STDIOContainer_data_FIELD_WRITER
/* set_data
 *
 * Parameters:
 * - value: union (anonymous union at headers/uv.h:852:3)
 */
mrb_value
mrb_UV_STDIOContainer_set_data(mrb_state* mrb, mrb_value self) {
  uv_stdio_container_t * native_self = mruby_unbox_uv_stdio_container_t(self);
  mrb_value data;

  mrb_get_args(mrb, "o", &data);

  /* type checking */
  TODO_type_check_union_LPAREN_anonymous_union_at_headers/uv.h:852:3_RPAREN(data);

  union (anonymous union at headers/uv.h:852:3) native_data = TODO_mruby_unbox_union_LPAREN_anonymous_union_at_headers/uv.h:852:3_RPAREN(data);

  native_self->data = native_data;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_STDIOContainer_init(mrb_state* mrb) {
/* MRUBY_BINDING: STDIOContainer::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: STDIOContainer::class_definition */
/* sha: 4c6cdf7fea37daefcc178d04bdca8593c540eb6fe19daeb4f43ff3975519f75c */
  struct RClass* STDIOContainer_class = mrb_define_class_under(mrb, UV_module(mrb), "STDIOContainer", mrb->object_class);
  MRB_SET_INSTANCE_TT(STDIOContainer_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: STDIOContainer::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: STDIOContainer::class_method_definitions */
/* sha: cd2499ce9ec84418b19cfa41879cbfb1a2d96f747cbf77a382358d5d3fd56bc1 */
#if BIND_STDIOContainer_INITIALIZE
  mrb_define_method(mrb, STDIOContainer_class, "initialize", mrb_UV_STDIOContainer_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: STDIOContainer::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: STDIOContainer::attr_definitions */
/* sha: da87da4212fc9d7272eda4d462f5959975807a217553f05935f9d5af45996d48 */
  /*
   * Fields
   */
#if BIND_STDIOContainer_flags_FIELD_READER
  mrb_define_method(mrb, STDIOContainer_class, "flags", mrb_UV_STDIOContainer_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_STDIOContainer_flags_FIELD_WRITER
  mrb_define_method(mrb, STDIOContainer_class, "flags=", mrb_UV_STDIOContainer_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_STDIOContainer_data_FIELD_READER
  mrb_define_method(mrb, STDIOContainer_class, "data", mrb_UV_STDIOContainer_get_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_STDIOContainer_data_FIELD_WRITER
  mrb_define_method(mrb, STDIOContainer_class, "data=", mrb_UV_STDIOContainer_set_data, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: STDIOContainer::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: STDIOContainer::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: STDIOContainer::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
