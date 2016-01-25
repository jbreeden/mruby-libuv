/*
 * uv_stdio_container_t
 * Defined in file uv.h @ line 849
 */

#include "mruby_UV.h"

#if BIND_StdioContainer_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StdioContainer::initialize */
/* sha: 9e69f0b9727abd8b0d954783d6c5aab3a04b6d687ecaa12a64a669f36b24b35b */
#if BIND_StdioContainer_INITIALIZE
mrb_value
mrb_UV_StdioContainer_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  uv_stdio_container_t* native_object = (uv_stdio_container_t*)calloc(1, sizeof(uv_stdio_container_t));
  mruby_gift_uv_stdio_container_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: StdioContainer::flags_reader */
/* sha: 800f9ca03b11f3386d61732c09bb4868cb0196352d0a9ddfe3a1d9038f109ea3 */
#if BIND_StdioContainer_flags_FIELD_READER
/* get_flags
 *
 * Return Type: uv_stdio_flags
 */
mrb_value
mrb_UV_StdioContainer_get_flags(mrb_state* mrb, mrb_value self) {
  uv_stdio_container_t * native_self = mruby_unbox_uv_stdio_container_t(self);

  uv_stdio_flags native_flags = native_self->flags;

  mrb_value flags = mrb_fixnum_value(native_flags);

  return flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StdioContainer::flags_writer */
/* sha: 2d51c7c1be98d8ac63a1a2e7d2e0b0535bc44bda0b1a33f2fa83927a11ce98d9 */
#if BIND_StdioContainer_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: uv_stdio_flags
 */
mrb_value
mrb_UV_StdioContainer_set_flags(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: StdioContainer::data_reader */
/* sha: acee81235570c8c77aa85e6e035588af46b94406fc525791d9bc67b474ccd25c */
#if BIND_StdioContainer_data_FIELD_READER
/* get_data
 *
 * Return Type: union (anonymous union at headers/uv.h:852:3)
 */
mrb_value
mrb_UV_StdioContainer_get_data(mrb_state* mrb, mrb_value self) {
  uv_stdio_container_t * native_self = mruby_unbox_uv_stdio_container_t(self);

  union (anonymous union at headers/uv.h:852:3) native_data = native_self->data;

  mrb_value data = TODO_mruby_box_union_LPAREN_anonymous_union_at_headers/uv.h:852:3_RPAREN(mrb, native_data);

  return data;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StdioContainer::data_writer */
/* sha: 0f45d81ee692745babd1363526c9b8bad719051e7ee64109b5268615fc31ae70 */
#if BIND_StdioContainer_data_FIELD_WRITER
/* set_data
 *
 * Parameters:
 * - value: union (anonymous union at headers/uv.h:852:3)
 */
mrb_value
mrb_UV_StdioContainer_set_data(mrb_state* mrb, mrb_value self) {
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


void mrb_UV_StdioContainer_init(mrb_state* mrb) {
/* MRUBY_BINDING: StdioContainer::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StdioContainer::class_definition */
/* sha: 9b422db6f8d5453cb2900fd1834c7499b5a415e3ba490bd3d8913c3cadb071af */
  struct RClass* StdioContainer_class = mrb_define_class_under(mrb, UV_module(mrb), "StdioContainer", mrb->object_class);
  MRB_SET_INSTANCE_TT(StdioContainer_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StdioContainer::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StdioContainer::class_method_definitions */
/* sha: 0903ae05db6a8860e42932924f65c609c897d47168bafaf989047b00a5f2e3be */
#if BIND_StdioContainer_INITIALIZE
  mrb_define_method(mrb, StdioContainer_class, "initialize", mrb_UV_StdioContainer_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StdioContainer::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StdioContainer::attr_definitions */
/* sha: c4f38033b7abbc776793f368284994b68cfd6132aea29ab712e0fb1a8ff62521 */
  /*
   * Fields
   */
#if BIND_StdioContainer_flags_FIELD_READER
  mrb_define_method(mrb, StdioContainer_class, "flags", mrb_UV_StdioContainer_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_StdioContainer_flags_FIELD_WRITER
  mrb_define_method(mrb, StdioContainer_class, "flags=", mrb_UV_StdioContainer_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_StdioContainer_data_FIELD_READER
  mrb_define_method(mrb, StdioContainer_class, "data", mrb_UV_StdioContainer_get_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_StdioContainer_data_FIELD_WRITER
  mrb_define_method(mrb, StdioContainer_class, "data=", mrb_UV_StdioContainer_set_data, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StdioContainer::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StdioContainer::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StdioContainer::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
