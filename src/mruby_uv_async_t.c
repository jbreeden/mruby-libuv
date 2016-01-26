/*
 * uv_async_t
 * Defined in file uv.h @ line 212
 */

#include "mruby_UV.h"

#if BIND_Async_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Async::initialize */
/* sha: affa27508ad4ba2b24bcaa390ac9baf98f6dd44460130a21304dfa9125b7c1e7 */
#if BIND_Async_INITIALIZE
mrb_value
mrb_UV_Async_initialize(mrb_state* mrb, mrb_value self) {
  uv_async_t* native_object = (uv_async_t*)new_mruby_uv_handle(mrb, self, sizeof(uv_async_t));
  mruby_gift_uv_async_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Async_init(mrb_state* mrb) {
/* MRUBY_BINDING: Async::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Async::class_definition */
/* sha: 71c3dd9ea1a53c4e85c875d55975aebbca1a145c6d15945c55a5fac29f4796b6 */
  struct RClass* Async_class = mrb_define_class_under(mrb, UV_module(mrb), "Async", mrb->object_class);
  MRB_SET_INSTANCE_TT(Async_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Async::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Async::class_method_definitions */
/* sha: a415d9a01a31377e12e7da24ab1058e5b73074f6364cfeb0dbbf86ebc3dd89cc */
#if BIND_Async_INITIALIZE
  mrb_define_method(mrb, Async_class, "initialize", mrb_UV_Async_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Async::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Async::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Async::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Async::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Async::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
