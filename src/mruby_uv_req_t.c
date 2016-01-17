/*
 * uv_req_t
 * Defined in file uv.h @ line 219
 */

#include "mruby_UV.h"

#if BIND_UvReqT_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvReqT::initialize */
/* sha: 14eaf6fdd3b3d32969ea53688abb1c9e258745f893eb6c4974d9c149fd474720 */
#if BIND_UvReqT_INITIALIZE
mrb_value
mrb_UV_UvReqT_initialize(mrb_state* mrb, mrb_value self) {
  uv_req_t* native_object = (uv_req_t*)calloc(1, sizeof(uv_req_t));
  mruby_gift_uv_req_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvReqT::disown */
/* sha: 172eb44eaaf9485fa66111a880aaff190a6b1677d9354e0dfbd1a24421263815 */
mrb_value
mrb_UV_UvReqT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvReqT.disown only accepts objects of type UV::UvReqT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvReqT::belongs_to_ruby */
/* sha: 875541b35d07b78aee1eb3e6e7e0e116e636dbc20bb1f2f2982f425529a08ec7 */
mrb_value
mrb_UV_UvReqT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvReqT.belongs_to_ruby only accepts objects of type UV::UvReqT");
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

/* MRUBY_BINDING: UvReqT::data_reader */
/* sha: 962ebe04c8b8f0c577fb0d6cb4e2f275dddfd4cfa31c89fcff23e80a3821fba5 */
#if BIND_UvReqT_data_FIELD_READER
/* get_data
 *
 * Return Type: void *
 */
mrb_value
mrb_UV_UvReqT_get_data(mrb_state* mrb, mrb_value self) {
  uv_req_t * native_self = mruby_unbox_uv_req_t(self);

  void * native_data = native_self->data;

  mrb_value data = TODO_mruby_box_void_PTR(mrb, native_data);

  return data;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvReqT::data_writer */
/* sha: 889a34bfcb4eb953d140271171e2235d2892397c02670e4edc85e84ac3b79102 */
#if BIND_UvReqT_data_FIELD_WRITER
/* set_data
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_UV_UvReqT_set_data(mrb_state* mrb, mrb_value self) {
  uv_req_t * native_self = mruby_unbox_uv_req_t(self);
  mrb_value data;

  mrb_get_args(mrb, "o", &data);

  /* type checking */
  TODO_type_check_void_PTR(data);

  void * native_data = TODO_mruby_unbox_void_PTR(data);

  native_self->data = native_data;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvReqT::type_reader */
/* sha: 9d00616194cecaa7093129eba855989625aee762effc5fbfe8eba75570fe39f8 */
#if BIND_UvReqT_type_FIELD_READER
/* get_type
 *
 * Return Type: uv_req_type
 */
mrb_value
mrb_UV_UvReqT_get_type(mrb_state* mrb, mrb_value self) {
  uv_req_t * native_self = mruby_unbox_uv_req_t(self);

  uv_req_type native_type = native_self->type;

  mrb_value type = mrb_fixnum_value(native_type);

  return type;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvReqT::type_writer */
/* sha: 19b536da910bcf65fa52b7fcf2510f7e8e0cd87a8f2b9c8a0bc7f6e33a8a2935 */
#if BIND_UvReqT_type_FIELD_WRITER
/* set_type
 *
 * Parameters:
 * - value: uv_req_type
 */
mrb_value
mrb_UV_UvReqT_set_type(mrb_state* mrb, mrb_value self) {
  uv_req_t * native_self = mruby_unbox_uv_req_t(self);
  mrb_int native_type;

  mrb_get_args(mrb, "i", &native_type);

  native_self->type = native_type;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvReqT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvReqT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvReqT::class_definition */
/* sha: cd8ec0d528764fc36dc374d61f4f83dbe5cdd2a587b5f4a7fee148d97942690b */
  struct RClass* UvReqT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvReqT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvReqT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvReqT::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvReqT::class_method_definitions */
/* sha: 6c52a94fc071b67c33841628474939f0b51980f32fdde474bb4e41eac4e43423 */
#if BIND_UvReqT_INITIALIZE
  mrb_define_method(mrb, UvReqT_class, "initialize", mrb_UV_UvReqT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvReqT_class, "disown", mrb_UV_UvReqT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvReqT_class, "belongs_to_ruby?", mrb_UV_UvReqT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvReqT::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvReqT::attr_definitions */
/* sha: 919ae88725b6414c57ff0d7f61f2afa590c419e29ee1ed7f37bdb418286bdbf4 */
  /*
   * Fields
   */
#if BIND_UvReqT_data_FIELD_READER
  mrb_define_method(mrb, UvReqT_class, "data", mrb_UV_UvReqT_get_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvReqT_data_FIELD_WRITER
  mrb_define_method(mrb, UvReqT_class, "data=", mrb_UV_UvReqT_set_data, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvReqT_type_FIELD_READER
  mrb_define_method(mrb, UvReqT_class, "type", mrb_UV_UvReqT_get_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvReqT_type_FIELD_WRITER
  mrb_define_method(mrb, UvReqT_class, "type=", mrb_UV_UvReqT_set_type, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvReqT::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvReqT::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvReqT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
