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
/* sha: 7cb5e9c610d424101c6651b24529d5fca9bbb115f1d661011ac7b1814256ced3 */
#if BIND_Signal_signal_cb_FIELD_READER
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
/* sha: 98fc0a8ad22ccf11e5ff76da241a8645781e1f37dd0071de4d74e59453d2e485 */
#if BIND_Signal_signal_cb_FIELD_WRITER
mrb_value
mrb_UV_Signal_set_signal_cb(mrb_state* mrb, mrb_value self) {
  uv_signal_t * native_self = mruby_unbox_uv_signal_t(self);
  mrb_value signal_cb;

  mrb_get_args(mrb, "o", &signal_cb);

  /* type checking */
  TODO_type_check_uv_signal_cb(signal_cb);

  uv_signal_cb native_signal_cb = TODO_mruby_unbox_uv_signal_cb(signal_cb);

  native_self->signal_cb = native_signal_cb;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signal::signum_reader */
/* sha: 26282c58c22ac5b3121a5b72243f19ab5a5d9e058922f31864b3dfb3ff1f1bd1 */
#if BIND_Signal_signum_FIELD_READER
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
/* sha: 90ce7f70707f98df2ff4624f5ce18feb837452590101aeca2da272752fcfb6ba */
#if BIND_Signal_signum_FIELD_WRITER
mrb_value
mrb_UV_Signal_set_signum(mrb_state* mrb, mrb_value self) {
  uv_signal_t * native_self = mruby_unbox_uv_signal_t(self);
  mrb_int native_signum;

  mrb_get_args(mrb, "i", &native_signum);

  native_self->signum = native_signum;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Signal_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

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


/* MRUBY_BINDING: Signal::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
