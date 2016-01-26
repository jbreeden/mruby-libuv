/*
 * uv_check_t
 * Defined in file uv.h @ line 210
 */

#include "mruby_UV.h"

#if BIND_Check_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Check::initialize */
/* sha: cfd75bb4b369f7343784a4f6987872be91b8ca68456636d30fc64e05291ace61 */
#if BIND_Check_INITIALIZE
mrb_value
mrb_UV_Check_initialize(mrb_state* mrb, mrb_value self) {
  uv_check_t* native_object = (uv_check_t*)new_mruby_uv_handle(mrb, self, sizeof(uv_check_t));
  mruby_gift_uv_check_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Check_init(mrb_state* mrb) {
/* MRUBY_BINDING: Check::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Check::class_definition */
/* sha: c33c005cabde5faa7690cca35617cd5ee15c29473d31fc7f40ecf2bbd17a3bed */
  struct RClass* Check_class = mrb_define_class_under(mrb, UV_module(mrb), "Check", mrb->object_class);
  MRB_SET_INSTANCE_TT(Check_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Check::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Check::class_method_definitions */
/* sha: 1b70fe345cab4c02db29736361794be1d2d4a929f71191769406596107e36db3 */
#if BIND_Check_INITIALIZE
  mrb_define_method(mrb, Check_class, "initialize", mrb_UV_Check_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Check::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Check::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Check::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Check::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Check::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
