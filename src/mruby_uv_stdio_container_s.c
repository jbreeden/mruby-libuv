/*
 * struct uv_stdio_container_s
 * Defined in file uv.h @ line 849
 */

#include "mruby_UV.h"

#if BIND_UvStdioContainerS_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvStdioContainerS::initialize */
/* sha: 26b9a18fc0492ef52caf8b389b021ff437f732397362c63608871d88edee8d08 */
#if BIND_UvStdioContainerS_INITIALIZE
mrb_value
mrb_UV_UvStdioContainerS_initialize(mrb_state* mrb, mrb_value self) {
  struct uv_stdio_container_s* native_object = (struct uv_stdio_container_s*)calloc(1, sizeof(struct uv_stdio_container_s));
  mruby_giftwrap_uv_stdio_container_s_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStdioContainerS::initialize */
/* sha: c6c8476e99cb9127b8bf06a75c1c15ae95e76fe4da62d33cce618e3ccd2cae6b */
mrb_value
mrb_UV_UvStdioContainerS_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvStdioContainerS.disown only accepts objects of type UV::UvStdioContainerS");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStdioContainerS::belongs_to_ruby */
/* sha: 2f254b8ee8ee5bc0ce34da59dae1d6020ff478a97ba6747c6fa00d9590fa26b7 */
mrb_value
mrb_UV_UvStdioContainerS_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvStdioContainerS.belongs_to_ruby only accepts objects of type UV::UvStdioContainerS");
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

/* MRUBY_BINDING: UvStdioContainerS::flags_reader */
/* sha: add982f3732fe200d58d4963c69129617106e0b910b53c88a4c6169bcb051c66 */
#if BIND_UvStdioContainerS_flags_FIELD_READER
/* get_flags
 *
 * Return Type: uv_stdio_flags
 */
mrb_value
mrb_UV_UvStdioContainerS_get_flags(mrb_state* mrb, mrb_value self) {
  struct uv_stdio_container_s * native_self = mruby_unbox_uv_stdio_container_s(self);

  uv_stdio_flags native_flags = native_self->flags;

  mrb_value flags = mrb_fixnum_value(native_flags);

  return flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStdioContainerS::flags_writer */
/* sha: fc1cb414d3672eff467ac48097d604c043bc5c932bfa91be2be4c1d8a2ad675a */
#if BIND_UvStdioContainerS_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: uv_stdio_flags
 */
mrb_value
mrb_UV_UvStdioContainerS_set_flags(mrb_state* mrb, mrb_value self) {
  struct uv_stdio_container_s * native_self = mruby_unbox_uv_stdio_container_s(self);
  mrb_int native_flags;

  mrb_get_args(mrb, "i", &native_flags);

  native_self->flags = native_flags;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStdioContainerS::data_reader */
/* sha: b08d0140c964376361da36aeab45771c3750103b6f34cab05648fd081a5d8841 */
#if BIND_UvStdioContainerS_data_FIELD_READER
/* get_data
 *
 * Return Type: union (anonymous union at headers/uv.h:852:3)
 */
mrb_value
mrb_UV_UvStdioContainerS_get_data(mrb_state* mrb, mrb_value self) {
  struct uv_stdio_container_s * native_self = mruby_unbox_uv_stdio_container_s(self);

  union (anonymous union at headers/uv.h:852:3) native_data = native_self->data;

  mrb_value data = TODO_mruby_box_union_LPAREN_anonymous_union_at_headers/uv.h:852:3_RPAREN(mrb, native_data);

  return data;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStdioContainerS::data_writer */
/* sha: 60802707cc7d7565dba7fe946b6f5ee1ee45cf89156f70b772cef69ede632230 */
#if BIND_UvStdioContainerS_data_FIELD_WRITER
/* set_data
 *
 * Parameters:
 * - value: union (anonymous union at headers/uv.h:852:3)
 */
mrb_value
mrb_UV_UvStdioContainerS_set_data(mrb_state* mrb, mrb_value self) {
  struct uv_stdio_container_s * native_self = mruby_unbox_uv_stdio_container_s(self);
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


void mrb_UV_UvStdioContainerS_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvStdioContainerS::class_definition */
/* sha: 22218debf57bde5cde8866b870563d62d9ac066c0324296f8d13b3e43a5fdf1e */
  struct RClass* UvStdioContainerS_class = mrb_define_class_under(mrb, UV_module(mrb), "UvStdioContainerS", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvStdioContainerS_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStdioContainerS::class_method_definitions */
/* sha: ed8903a2c8478d547e03f2ed74703dec7d42cb479f4ed96a0e622c190a29b2d9 */
#if BIND_UvStdioContainerS_INITIALIZE
  mrb_define_method(mrb, UvStdioContainerS_class, "initialize", mrb_UV_UvStdioContainerS_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvStdioContainerS_class, "disown", mrb_UV_UvStdioContainerS_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvStdioContainerS_class, "belongs_to_ruby?", mrb_UV_UvStdioContainerS_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStdioContainerS::attr_definitions */
/* sha: 7b69e7a24284cf42c17480f58d972506c827ea205843c9ac77500379a76f769b */
  /*
   * Fields
   */
#if BIND_UvStdioContainerS_flags_FIELD_READER
  mrb_define_method(mrb, UvStdioContainerS_class, "flags", mrb_UV_UvStdioContainerS_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStdioContainerS_flags_FIELD_WRITER
  mrb_define_method(mrb, UvStdioContainerS_class, "flags=", mrb_UV_UvStdioContainerS_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvStdioContainerS_data_FIELD_READER
  mrb_define_method(mrb, UvStdioContainerS_class, "data", mrb_UV_UvStdioContainerS_get_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStdioContainerS_data_FIELD_WRITER
  mrb_define_method(mrb, UvStdioContainerS_class, "data=", mrb_UV_UvStdioContainerS_set_data, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStdioContainerS::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
