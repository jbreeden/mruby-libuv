/*
 * uv_prepare_t
 * Defined in file uv.h @ line 209
 */

#include "mruby_UV.h"

#if BIND_UvPrepareT_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvPrepareT::initialize */
/* sha: 1c7074e3615d48ba0579f4b1997fdbe4603d9b74ecde4129ca39fc94d54e02bb */
#if BIND_UvPrepareT_INITIALIZE
mrb_value
mrb_UV_UvPrepareT_initialize(mrb_state* mrb, mrb_value self) {
  uv_prepare_t* native_object = (uv_prepare_t*)new_mruby_uv_handle(mrb, self, sizeof(uv_prepare_t));
  mruby_gift_uv_prepare_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPrepareT::disown */
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
/* MRUBY_BINDING: UvPrepareT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPrepareT::class_definition */
/* sha: 1e7abbd965beb97186eef0d6ec4dfec28316750ec68b64fa9b0c056411d3bb81 */
  struct RClass* UvPrepareT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvPrepareT", UvHandleT_class(mrb));
  MRB_SET_INSTANCE_TT(UvPrepareT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPrepareT::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPrepareT::class_method_definitions */
/* sha: ddb348ac468561728ddee45da87e7bb5759476d728e5b56397b8840518b3266c */
#if BIND_UvPrepareT_INITIALIZE
  mrb_define_method(mrb, UvPrepareT_class, "initialize", mrb_UV_UvPrepareT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvPrepareT_class, "disown", mrb_UV_UvPrepareT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvPrepareT_class, "belongs_to_ruby?", mrb_UV_UvPrepareT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPrepareT::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPrepareT::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPrepareT::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPrepareT::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPrepareT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
