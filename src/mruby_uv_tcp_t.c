/*
 * uv_tcp_t
 * Defined in file uv.h @ line 203
 */

#include "mruby_UV.h"

#if BIND_TCP_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TCP::initialize */
/* sha: 1800d35e5c016c1fc4dfcbd5137dd8111e1d3aafcc51c18a3e911ddb9d9ada8f */
#if BIND_TCP_INITIALIZE
mrb_value
mrb_UV_TCP_initialize(mrb_state* mrb, mrb_value self) {
  uv_tcp_t* native_object = (uv_tcp_t*)new_mruby_uv_handle(mrb, self, sizeof(uv_tcp_t));
  mruby_gift_uv_tcp_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_TCP_init(mrb_state* mrb) {
/* MRUBY_BINDING: TCP::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TCP::class_definition */
/* sha: 30c6bf88d0e98e7c3263260bc7903fbf170236d2c590f0878cd2d33e1678eea9 */
  struct RClass* TCP_class = mrb_define_class_under(mrb, UV_module(mrb), "TCP", Handle_class(mrb));
  MRB_SET_INSTANCE_TT(TCP_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TCP::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TCP::class_method_definitions */
/* sha: 33f0868128db049d7f1fa0db068a456369603283d409e5c4867ea7f94cad9457 */
#if BIND_TCP_INITIALIZE
  mrb_define_method(mrb, TCP_class, "initialize", mrb_UV_TCP_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TCP::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TCP::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TCP::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TCP::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TCP::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
