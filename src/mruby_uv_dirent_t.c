/*
 * uv_dirent_t
 * Defined in file uv.h @ line 232
 */

#include "mruby_UV.h"

#if BIND_UvDirentT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvDirentT::initialize */
/* sha: e62eae826fc1de73f65abb670e086a20d9119b5cc020cc8968e2c11df7c3b198 */
#if BIND_UvDirentT_INITIALIZE
mrb_value
mrb_UV_UvDirentT_initialize(mrb_state* mrb, mrb_value self) {
  uv_dirent_t* native_object = (uv_dirent_t*)calloc(1, sizeof(uv_dirent_t));
  mruby_giftwrap_uv_dirent_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvDirentT::initialize */
/* sha: 37fdae397c7844a33ff9923649833263b951234ee95839609297b0fd405b0cf0 */
mrb_value
mrb_UV_UvDirentT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvDirentT.disown only accepts objects of type UV::UvDirentT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvDirentT::belongs_to_ruby */
/* sha: bd9518aa65e9315efa2445b827a2e9a027c588c9f7f8f118b01ab4582796cc10 */
mrb_value
mrb_UV_UvDirentT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvDirentT.belongs_to_ruby only accepts objects of type UV::UvDirentT");
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

/* MRUBY_BINDING: UvDirentT::name_reader */
/* sha: 53433fb2adf913e7e7c8aefb92557de2ec27878a603e02d63e858e309e116c4f */
#if BIND_UvDirentT_name_FIELD_READER
/* get_name
 *
 * Return Type: const char *
 */
mrb_value
mrb_UV_UvDirentT_get_name(mrb_state* mrb, mrb_value self) {
  uv_dirent_t * native_self = mruby_unbox_uv_dirent_t(self);

  const char * native_name = native_self->name;

  mrb_value name = native_name == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_name);

  return name;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvDirentT::name_writer */
/* sha: 3a1ef2c2ec2ada8915d8b8343be2d6ffecf42d7cba80b849af5259919e8a9aed */
#if BIND_UvDirentT_name_FIELD_WRITER
/* set_name
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_UV_UvDirentT_set_name(mrb_state* mrb, mrb_value self) {
  uv_dirent_t * native_self = mruby_unbox_uv_dirent_t(self);
  char * native_name = NULL;

  mrb_get_args(mrb, "z", &native_name);

  native_self->name = native_name;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvDirentT::type_reader */
/* sha: 84a6b8e091a26046f9fd28309e1088749ada74ca561d27cb9189414859f21a8b */
#if BIND_UvDirentT_type_FIELD_READER
/* get_type
 *
 * Return Type: uv_dirent_type_t
 */
mrb_value
mrb_UV_UvDirentT_get_type(mrb_state* mrb, mrb_value self) {
  uv_dirent_t * native_self = mruby_unbox_uv_dirent_t(self);

  uv_dirent_type_t native_type = native_self->type;

  mrb_value type = mrb_fixnum_value(native_type);

  return type;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvDirentT::type_writer */
/* sha: 1b80c8c222bcfb04889bf3c5750b8e3d7e1318228d74a878d53d3c3fe7b572a1 */
#if BIND_UvDirentT_type_FIELD_WRITER
/* set_type
 *
 * Parameters:
 * - value: uv_dirent_type_t
 */
mrb_value
mrb_UV_UvDirentT_set_type(mrb_state* mrb, mrb_value self) {
  uv_dirent_t * native_self = mruby_unbox_uv_dirent_t(self);
  mrb_int native_type;

  mrb_get_args(mrb, "i", &native_type);

  native_self->type = native_type;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvDirentT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvDirentT::class_definition */
/* sha: e90a9f68de902f526e329877c4e4ad8adeba3a4442b0a4dbb7e19f9a370bad1b */
  struct RClass* UvDirentT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvDirentT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvDirentT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvDirentT::class_method_definitions */
/* sha: e4331d01bffa7f06ded2766d0d3815972853b3301d405bd5646175eed55b7e6c */
#if BIND_UvDirentT_INITIALIZE
  mrb_define_method(mrb, UvDirentT_class, "initialize", mrb_UV_UvDirentT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvDirentT_class, "disown", mrb_UV_UvDirentT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvDirentT_class, "belongs_to_ruby?", mrb_UV_UvDirentT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvDirentT::attr_definitions */
/* sha: e40172a1dd5df057837fdf5120c7b6275e9e5ab781c8e3e603251b82e90a91c7 */
  /*
   * Fields
   */
#if BIND_UvDirentT_name_FIELD_READER
  mrb_define_method(mrb, UvDirentT_class, "name", mrb_UV_UvDirentT_get_name, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvDirentT_name_FIELD_WRITER
  mrb_define_method(mrb, UvDirentT_class, "name=", mrb_UV_UvDirentT_set_name, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvDirentT_type_FIELD_READER
  mrb_define_method(mrb, UvDirentT_class, "type", mrb_UV_UvDirentT_get_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvDirentT_type_FIELD_WRITER
  mrb_define_method(mrb, UvDirentT_class, "type=", mrb_UV_UvDirentT_set_type, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvDirentT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
