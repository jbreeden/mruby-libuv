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
/* sha: e250c1a5e12b12e43e5a27f7742bedab28ea970baec31902ebcf448af172c808 */
#if BIND_Dirent_name_FIELD_READER
/* get_name
 *
 * Return Type: const char *
 */
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
/* sha: 684afe1abe5e9b66245a992dd952cdf89c77f541e5cdefd00917c97f96009f8b */
#if BIND_Dirent_name_FIELD_WRITER
/* set_name
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_UV_Dirent_set_name(mrb_state* mrb, mrb_value self) {
  uv_dirent_t * native_self = mruby_unbox_uv_dirent_t(self);
  char * native_name = NULL;

  mrb_get_args(mrb, "z", &native_name);

  native_self->name = native_name;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Dirent::type_reader */
/* sha: 1803c987c47d683d2686521a2348a7986c5058e5a0eb2c40029a06287b0d4a76 */
#if BIND_Dirent_type_FIELD_READER
/* get_type
 *
 * Return Type: uv_dirent_type_t
 */
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
/* sha: 760e2906b5e0a3355e35cf4cb26bb16a5bf2fc49ba1c4c72e4f3a7b6c2fef038 */
#if BIND_Dirent_type_FIELD_WRITER
/* set_type
 *
 * Parameters:
 * - value: uv_dirent_type_t
 */
mrb_value
mrb_UV_Dirent_set_type(mrb_state* mrb, mrb_value self) {
  uv_dirent_t * native_self = mruby_unbox_uv_dirent_t(self);
  mrb_int native_type;

  mrb_get_args(mrb, "i", &native_type);

  native_self->type = native_type;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Dirent_init(mrb_state* mrb) {
/* MRUBY_BINDING: Dirent::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
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

/* MRUBY_BINDING: Dirent::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Dirent::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Dirent::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
