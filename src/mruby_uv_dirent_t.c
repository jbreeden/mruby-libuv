/*
 * uv_dirent_t
 * Defined in file uv.h @ line 232
 */

#include "mruby_UV.h"

#if BIND_Dirent_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Dirent::initialize */
/* sha: 3e2bb48e91ef23433e7750474c52a1ee6102743105a419a523fffc8a5f577cb7 */
#if BIND_Dirent_INITIALIZE
mrb_value
mrb_UV_Dirent_initialize(mrb_state* mrb, mrb_value self) {

  uv_dirent_t* native_object = (uv_dirent_t*)calloc(1, sizeof(uv_dirent_t));
  mruby_gift_uv_dirent_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Dirent::name_reader */
/* sha: b4c0a9d954683cbdb6f7fadc51a44041625edc5c600b447f049cf07a25a516eb */
#if BIND_Dirent_name_FIELD_READER
mrb_value
mrb_UV_Dirent_get_name(mrb_state* mrb, mrb_value self) {
  uv_dirent_t * native_self = mruby_unbox_uv_dirent_t(self);

  const char * native_name = native_self->name;

  mrb_value name = native_name == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_name);

  return name;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Dirent::name_writer */
/* sha: ffee0ecd4eeb527a38b63f6ae3f39b70733f9d4681f803bc8c70699240715c9d */
#if BIND_Dirent_name_FIELD_WRITER
mrb_value
mrb_UV_Dirent_set_name(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: Dirent::type_reader */
/* sha: 55028d2c275dc377d494d8abb5dde79980c92b2100bce970dd1b223916aa3d97 */
#if BIND_Dirent_type_FIELD_READER
mrb_value
mrb_UV_Dirent_get_type(mrb_state* mrb, mrb_value self) {
  uv_dirent_t * native_self = mruby_unbox_uv_dirent_t(self);

  uv_dirent_type_t native_type = native_self->type;

  mrb_value type = mrb_fixnum_value(native_type);

  return type;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Dirent::type_writer */
/* sha: faa52bc908dca77ef38ba468d0e6ad5a322be36a927304ffc8a4cf12c15dcb14 */
#if BIND_Dirent_type_FIELD_WRITER
mrb_value
mrb_UV_Dirent_set_type(mrb_state* mrb, mrb_value self) {
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


void mrb_UV_Dirent_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Dirent::class_definition */
/* sha: 88a9d6cb53bff39138679c6247e979b30200c0087129265428a288d8d7e7ac57 */
  struct RClass* Dirent_class = mrb_define_class_under(mrb, UV_module(mrb), "Dirent", mrb->object_class);
  MRB_SET_INSTANCE_TT(Dirent_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Dirent::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Dirent::class_method_definitions */
/* sha: 90feff7f7591d6572ab65f02bb1db386dcc0f31ad905701c7ce4563a42278b37 */
#if BIND_Dirent_INITIALIZE
  mrb_define_method(mrb, Dirent_class, "initialize", mrb_UV_Dirent_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Dirent::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Dirent::attr_definitions */
/* sha: 67f886b1170c67fbae29ab9ad0bed2e41c804df4a7f39ede8c66faa80b6e4d60 */
  /*
   * Fields
   */
#if BIND_Dirent_name_FIELD_READER
  mrb_define_method(mrb, Dirent_class, "name", mrb_UV_Dirent_get_name, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Dirent_name_FIELD_WRITER
  mrb_define_method(mrb, Dirent_class, "name=", mrb_UV_Dirent_set_name, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Dirent_type_FIELD_READER
  mrb_define_method(mrb, Dirent_class, "type", mrb_UV_Dirent_get_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Dirent_type_FIELD_WRITER
  mrb_define_method(mrb, Dirent_class, "type=", mrb_UV_Dirent_set_type, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: Dirent::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
