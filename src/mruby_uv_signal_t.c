/*
 * uv_signal_t
 * Defined in file uv.h @ line 216
 */

#include "mruby_UV.h"

#if BIND_Signal_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signal::initialize */
/* sha: 0490c825cd89b4c0d9154b705c85f521182e2074024fb64c869a8a6c67f2ab90 */
#if BIND_Signal_INITIALIZE
mrb_value
mrb_UV_Signal_initialize(mrb_state* mrb, mrb_value self) {
  uv_signal_t* native_object = (uv_signal_t*)new_mruby_uv_handle(mrb, self, sizeof(uv_signal_t));
  mruby_gift_uv_signal_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Signal::signal_cb_reader */
/* sha: e889cb30ebd0b7c9fc16491d0b647f75b1cc5990107506b72aaa1d419424d0e0 */
#if BIND_Signal_signal_cb_FIELD_READER
/* get_signal_cb
 *
 * Return Type: uv_signal_cb
 */
mrb_value
mrb_UV_Signal_get_signal_cb(mrb_state* mrb, mrb_value self) {
  uv_signal_t * native_self = mruby_unbox_uv_signal_t(self);

  uv_signal_cb native_signal_cb = native_self->signal_cb;

  mrb_value signal_cb = TODO_mruby_box_uv_signal_cb(mrb, native_signal_cb);

  return signal_cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signal::signal_cb_writer */
/* sha: b4a923296c432046c13d6cb85e5518e5304d687b801dc3ebc3d08adf9c9bab2e */
#if BIND_Signal_signal_cb_FIELD_WRITER
/* set_signal_cb
 *
 * Parameters:
 * - value: uv_signal_cb
 */
mrb_value
mrb_UV_Signal_set_signal_cb(mrb_state* mrb, mrb_value self) {
  uv_signal_t * native_self = mruby_unbox_uv_signal_t(self);
  mrb_value signal_cb;

  mrb_get_args(mrb, "o", &signal_cb);

  /* type checking */
  TODO_type_check_uv_signal_cb(signal_cb);

  uv_signal_cb native_signal_cb = TODO_mruby_unbox_uv_signal_cb(signal_cb);

  native_self->signal_cb = native_signal_cb;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signal::signum_reader */
/* sha: 0e904319e1f414df6199b20024940f9b3bb5e6087be32790ee16563b638bdec2 */
#if BIND_Signal_signum_FIELD_READER
/* get_signum
 *
 * Return Type: int
 */
mrb_value
mrb_UV_Signal_get_signum(mrb_state* mrb, mrb_value self) {
  uv_signal_t * native_self = mruby_unbox_uv_signal_t(self);

  int native_signum = native_self->signum;

  mrb_value signum = mrb_fixnum_value(native_signum);

  return signum;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signal::signum_writer */
/* sha: d39190b8e385f45a0c13acc1e7ea1e8ac0fa2a5928c448f59b7d8d071307b846 */
#if BIND_Signal_signum_FIELD_WRITER
/* set_signum
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_Signal_set_signum(mrb_state* mrb, mrb_value self) {
  uv_signal_t * native_self = mruby_unbox_uv_signal_t(self);
  mrb_int native_signum;

  mrb_get_args(mrb, "i", &native_signum);

  native_self->signum = native_signum;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Signal_init(mrb_state* mrb) {
/* MRUBY_BINDING: Signal::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signal::class_definition */
/* sha: 67fff801cff48f6159ed759e397248757143b9fedd5216ae6a527fcd2ec02c1c */
  struct RClass* Signal_class = mrb_define_class_under(mrb, UV_module(mrb), "Signal", Handle_class(mrb));
  MRB_SET_INSTANCE_TT(Signal_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signal::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signal::class_method_definitions */
/* sha: 281d5c4e9b7233f3a0639b9e1c07dcd7e2e2cd9cacc8447905093d2673077f7b */
#if BIND_Signal_INITIALIZE
  mrb_define_method(mrb, Signal_class, "initialize", mrb_UV_Signal_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signal::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signal::attr_definitions */
/* sha: 02aa12e12805ccb68ef1f62272920d690d2f37158392662e3dd0ab0e71d62331 */
  /*
   * Fields
   */
#if BIND_Signal_signal_cb_FIELD_READER
  mrb_define_method(mrb, Signal_class, "signal_cb", mrb_UV_Signal_get_signal_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Signal_signal_cb_FIELD_WRITER
  mrb_define_method(mrb, Signal_class, "signal_cb=", mrb_UV_Signal_set_signal_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Signal_signum_FIELD_READER
  mrb_define_method(mrb, Signal_class, "signum", mrb_UV_Signal_get_signum, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Signal_signum_FIELD_WRITER
  mrb_define_method(mrb, Signal_class, "signum=", mrb_UV_Signal_set_signum, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signal::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signal::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signal::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
