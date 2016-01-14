/*
 * uv_handle_t
 * Defined in file uv.h @ line 201
 */

#include "mruby_UV.h"

#if BIND_UvHandleT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvHandleT::initialize */
/* sha: a7cc162cdffa85c1b5ddc929777a5cd22447b6dd633e98a9d49afb3669db6f7f */
#if BIND_UvHandleT_INITIALIZE
mrb_value
mrb_UV_UvHandleT_initialize(mrb_state* mrb, mrb_value self) {
  uv_handle_t* native_object = (uv_handle_t*)calloc(1, sizeof(uv_handle_t));
  mruby_giftwrap_uv_handle_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvHandleT::initialize */
/* sha: 78a3948582b1268ad73ae1ebe475234411711865862bf93d1110c6c5c00021df */
mrb_value
mrb_UV_UvHandleT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvHandleT.disown only accepts objects of type UV::UvHandleT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvHandleT::belongs_to_ruby */
/* sha: 363be8f58905c52961b170364e27dd1411d9f52f55ec18e067a0247d54aa4132 */
mrb_value
mrb_UV_UvHandleT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvHandleT.belongs_to_ruby only accepts objects of type UV::UvHandleT");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_UV_UvHandleT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvHandleT::class_definition */
/* sha: ca4da74dcfff242110ad3c59a5c3cf8dec939114e2a8795e11696cfb8418a1bc */
  struct RClass* UvHandleT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvHandleT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvHandleT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvHandleT::class_method_definitions */
/* sha: c1d3145a9d6abf93ac26ad6720a50f9014903cdc537e81483d732e0fd53a5b4c */
#if BIND_UvHandleT_INITIALIZE
  mrb_define_method(mrb, UvHandleT_class, "initialize", mrb_UV_UvHandleT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvHandleT_class, "disown", mrb_UV_UvHandleT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvHandleT_class, "belongs_to_ruby?", mrb_UV_UvHandleT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvHandleT::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvHandleT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
