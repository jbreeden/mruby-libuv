/*
 * uv_prepare_t
 * Defined in file uv.h @ line 209
 */

#include "mruby_UV.h"

#if BIND_UvPrepareT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvPrepareT::initialize */
/* sha: c0290ce22a49198d8a2bba2ec9b5bbaf9be00dfa9f7e5df4488c96e03ea38bc7 */
#if BIND_UvPrepareT_INITIALIZE
mrb_value
mrb_UV_UvPrepareT_initialize(mrb_state* mrb, mrb_value self) {
  uv_prepare_t* native_object = (uv_prepare_t*)calloc(1, sizeof(uv_prepare_t));
  mruby_giftwrap_uv_prepare_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPrepareT::initialize */
/* sha: 60c6bf68d18453dcf46f5bea9991ca47fde560a1fb1dca59fe3a86dcc2b2f3f8 */
mrb_value
mrb_UV_UvPrepareT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvPrepareT.disown only accepts objects of type UV::UvPrepareT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPrepareT::belongs_to_ruby */
/* sha: c493decb66ce7f802dd07925b916d70736e246afa3d19a0881e9dfaae9c5d48c */
mrb_value
mrb_UV_UvPrepareT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvPrepareT.belongs_to_ruby only accepts objects of type UV::UvPrepareT");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_UV_UvPrepareT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvPrepareT::class_definition */
/* sha: 1e7abbd965beb97186eef0d6ec4dfec28316750ec68b64fa9b0c056411d3bb81 */
  struct RClass* UvPrepareT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvPrepareT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvPrepareT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPrepareT::class_method_definitions */
/* sha: ddb348ac468561728ddee45da87e7bb5759476d728e5b56397b8840518b3266c */
#if BIND_UvPrepareT_INITIALIZE
  mrb_define_method(mrb, UvPrepareT_class, "initialize", mrb_UV_UvPrepareT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvPrepareT_class, "disown", mrb_UV_UvPrepareT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvPrepareT_class, "belongs_to_ruby?", mrb_UV_UvPrepareT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPrepareT::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPrepareT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif