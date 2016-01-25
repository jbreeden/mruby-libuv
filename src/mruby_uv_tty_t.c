/*
 * uv_tty_t
 * Defined in file uv.h @ line 206
 */

#include "mruby_UV.h"

#if BIND_Tty_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tty::initialize */
/* sha: e273a0ea2d160f5b479b6133effc99f14f6a319b5403e543d32fe1e2bee5ba72 */
#if BIND_Tty_INITIALIZE
mrb_value
mrb_UV_Tty_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  uv_tty_t* native_object = (uv_tty_t*)calloc(1, sizeof(uv_tty_t));
  mruby_gift_uv_tty_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Tty_init(mrb_state* mrb) {
/* MRUBY_BINDING: Tty::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tty::class_definition */
/* sha: 38c967bb3dc41b20a40eca245e48f07d19afbf898e96d5ef4e73612594229da3 */
  struct RClass* Tty_class = mrb_define_class_under(mrb, UV_module(mrb), "Tty", mrb->object_class);
  MRB_SET_INSTANCE_TT(Tty_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tty::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tty::class_method_definitions */
/* sha: d5e201d69cf59bf2a87451f1279cce92f3ee3a3f2cb3176766d4399d8cb49723 */
#if BIND_Tty_INITIALIZE
  mrb_define_method(mrb, Tty_class, "initialize", mrb_UV_Tty_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tty::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tty::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tty::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tty::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tty::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
