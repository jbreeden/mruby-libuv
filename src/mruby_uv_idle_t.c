/*
 * uv_idle_t
 * Defined in file uv.h @ line 211
 */

#include "mruby_UV.h"

#if BIND_Idle_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Idle::initialize */
/* sha: dc0b0d02a9a5a3c6cbbbc860792fe7ad83644034a176936a5247fed5b3597898 */
#if BIND_Idle_INITIALIZE
mrb_value
mrb_UV_Idle_initialize(mrb_state* mrb, mrb_value self) {
  uv_idle_t* native_object = (uv_idle_t*)new_mruby_uv_handle(mrb, self, sizeof(uv_idle_t));
  mruby_gift_uv_idle_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Idle_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Idle::class_definition */
/* sha: 44d57f67ee6fe20bc0eff5502340be181ad1294e47583a8344cd0030addfb309 */
  struct RClass* Idle_class = mrb_define_class_under(mrb, UV_module(mrb), "Idle", Handle_class(mrb));
  MRB_SET_INSTANCE_TT(Idle_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Idle::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Idle::class_method_definitions */
/* sha: cd9a182591b02acc377c9f2de6ddb41dd6c47e54193998b063ce25a31ddd1816 */
#if BIND_Idle_INITIALIZE
  mrb_define_method(mrb, Idle_class, "initialize", mrb_UV_Idle_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: Idle::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
