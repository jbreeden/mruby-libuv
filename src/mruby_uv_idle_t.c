/*
 * uv_idle_t
 * Defined in file uv.h @ line 211
 */

#include "mruby_UV.h"

#if BIND_UvIdleT_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvIdleT::initialize */
/* sha: 6e655891cd6b1cb48ed3a69dd38660c802f7ef2761220e5f3321b3a075e7d4a5 */
#if BIND_UvIdleT_INITIALIZE
mrb_value
mrb_UV_UvIdleT_initialize(mrb_state* mrb, mrb_value self) {
  uv_idle_t* native_object = (uv_idle_t*)new_mruby_uv_handle(mrb, self, sizeof(uv_idle_t));
  mruby_gift_uv_idle_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvIdleT::disown */
/* sha: a6d01803f5a3866f80362ff305dfe3d524d9e77e06573cc39cf25f1216e1354b */
mrb_value
mrb_UV_UvIdleT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvIdleT.disown only accepts objects of type UV::UvIdleT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvIdleT::belongs_to_ruby */
/* sha: 1f35e38183c5c6e124d1da580c0c307e610ef69d671cddcf6f2aa1660e219c83 */
mrb_value
mrb_UV_UvIdleT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvIdleT.belongs_to_ruby only accepts objects of type UV::UvIdleT");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_UV_UvIdleT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvIdleT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvIdleT::class_definition */
/* sha: dd270b63d538abc8f87beed5bf09abf9bc198eed5da627ad6b34dc9b630ae35a */
  struct RClass* UvIdleT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvIdleT", UvHandleT_class(mrb));
  MRB_SET_INSTANCE_TT(UvIdleT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvIdleT::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvIdleT::class_method_definitions */
/* sha: dadf36377c6ec218ae6b9a26eecc763c4f14b9d8daafc5db1d24771101291c3a */
#if BIND_UvIdleT_INITIALIZE
  mrb_define_method(mrb, UvIdleT_class, "initialize", mrb_UV_UvIdleT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvIdleT_class, "disown", mrb_UV_UvIdleT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvIdleT_class, "belongs_to_ruby?", mrb_UV_UvIdleT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvIdleT::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvIdleT::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvIdleT::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvIdleT::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvIdleT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
