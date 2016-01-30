/*
 * uv_tty_t
 * Defined in file uv.h @ line 206
 */

#include "mruby_UV.h"

#if BIND_TTY_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TTY::initialize */
/* sha: 62a6ee1ef0fdcd6b217a283b169a33ae0a729ce568ce47406394549763b61ece */
#if BIND_TTY_INITIALIZE
mrb_value
mrb_UV_TTY_initialize(mrb_state* mrb, mrb_value self) {
  uv_tty_t* native_object = (uv_tty_t*)new_mruby_uv_handle(mrb, self, sizeof(uv_tty_t));
  mruby_gift_uv_tty_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_TTY_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TTY::class_definition */
/* sha: e179da3abd4f03f12eb8b7d868d587bb3ddf2485c29e4e08a635241323afd6a0 */
  struct RClass* TTY_class = mrb_define_class_under(mrb, UV_module(mrb), "TTY", Handle_class(mrb));
  MRB_SET_INSTANCE_TT(TTY_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TTY::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TTY::class_method_definitions */
/* sha: ff1583ca3b265e832da93ae99d874530b632bfbe02f4ebdf5a02113ad3e689b7 */
#if BIND_TTY_INITIALIZE
  mrb_define_method(mrb, TTY_class, "initialize", mrb_UV_TTY_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: TTY::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
