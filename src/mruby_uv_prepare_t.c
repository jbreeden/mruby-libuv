/*
 * uv_prepare_t
 * Defined in file uv.h @ line 209
 */

#include "mruby_UV.h"

#if BIND_Prepare_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Prepare::initialize */
/* sha: 3e6729a1bc78d10c9e6559dff9bfa758a82742d4944b2237ce26e37dc1c7fc4a */
#if BIND_Prepare_INITIALIZE
mrb_value
mrb_UV_Prepare_initialize(mrb_state* mrb, mrb_value self) {
  uv_prepare_t* native_object = (uv_prepare_t*)new_mruby_uv_handle(mrb, self, sizeof(uv_prepare_t));
  mruby_gift_uv_prepare_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Prepare_init(mrb_state* mrb) {
/* MRUBY_BINDING: Prepare::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Prepare::class_definition */
/* sha: 1b7eedb86648e14b043dc3a2454e06ef6cf9f50261fc3d7e82ba45f7efc2e5ab */
  struct RClass* Prepare_class = mrb_define_class_under(mrb, UV_module(mrb), "Prepare", Handle_class(mrb));
  MRB_SET_INSTANCE_TT(Prepare_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Prepare::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Prepare::class_method_definitions */
/* sha: 3064d2f7b3f1ea535bc6cbac87223ca3a75c79960e279ca411fc86b19d3f71e0 */
#if BIND_Prepare_INITIALIZE
  mrb_define_method(mrb, Prepare_class, "initialize", mrb_UV_Prepare_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Prepare::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Prepare::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Prepare::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Prepare::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Prepare::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
