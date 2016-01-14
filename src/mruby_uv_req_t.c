/*
 * uv_req_t
 * Defined in file uv.h @ line 219
 */

#include "mruby_UV.h"

#if BIND_UvReqT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvReqT::initialize */
/* sha: 2c661251abe2ea6576568f6c84b2d5b2d38facb733af591b89f52eeb294c5c7f */
#if BIND_UvReqT_INITIALIZE
mrb_value
mrb_UV_UvReqT_initialize(mrb_state* mrb, mrb_value self) {
  uv_req_t* native_object = (uv_req_t*)calloc(1, sizeof(uv_req_t));
  mruby_giftwrap_uv_req_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvReqT::initialize */
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


void mrb_UV_UvReqT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvReqT::class_definition */
/* sha: cd8ec0d528764fc36dc374d61f4f83dbe5cdd2a587b5f4a7fee148d97942690b */
  struct RClass* UvReqT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvReqT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvReqT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvReqT::class_method_definitions */
/* sha: 6c52a94fc071b67c33841628474939f0b51980f32fdde474bb4e41eac4e43423 */
#if BIND_UvReqT_INITIALIZE
  mrb_define_method(mrb, UvReqT_class, "initialize", mrb_UV_UvReqT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvReqT_class, "disown", mrb_UV_UvReqT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvReqT_class, "belongs_to_ruby?", mrb_UV_UvReqT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvReqT::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvReqT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
