/*
 * uv_timer_t
 * Defined in file uv.h @ line 208
 */

#include "mruby_UV.h"

#if BIND_Timer_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timer::initialize */
/* sha: 3332b6275409608f22d0365b10de4783e9d4c88f287fe276ddc046870076fa4f */
#if BIND_Timer_INITIALIZE
mrb_value
mrb_UV_Timer_initialize(mrb_state* mrb, mrb_value self) {
  uv_timer_t* native_object = (uv_timer_t*)new_mruby_uv_handle(mrb, self, sizeof(uv_timer_t));
  mruby_gift_uv_timer_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Timer_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timer::class_definition */
/* sha: c5cf11cfae62a5d9cb9353c801fcc90447152c46275c8924c128ddf5b7f87956 */
  struct RClass* Timer_class = mrb_define_class_under(mrb, UV_module(mrb), "Timer", Handle_class(mrb));
  MRB_SET_INSTANCE_TT(Timer_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timer::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timer::class_method_definitions */
/* sha: ca17a7f0f1a908c74c086a29fb7be019c32a52fc10d9abfda2c09fbaf57a27ab */
#if BIND_Timer_INITIALIZE
  mrb_define_method(mrb, Timer_class, "initialize", mrb_UV_Timer_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: Timer::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
