/*
 * uv_timeval_t
 * Defined in file uv.h @ line 1025
 */

#include "mruby_UV.h"

#if BIND_Timeval_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timeval::initialize */
/* sha: 237fcffc5beecbaee8db08a47599ba0b2b7a9a0a7568de0fb29629d81424352d */
#if BIND_Timeval_INITIALIZE
mrb_value
mrb_UV_Timeval_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  uv_timeval_t* native_object = (uv_timeval_t*)calloc(1, sizeof(uv_timeval_t));
  mruby_gift_uv_timeval_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Timeval::tv_sec_reader */
/* sha: 7333ee640e444cb131623e62dc07797545f1c2f34bc79402f41a511db200d7d0 */
#if BIND_Timeval_tv_sec_FIELD_READER
/* get_tv_sec
 *
 * Return Type: long
 */
mrb_value
mrb_UV_Timeval_get_tv_sec(mrb_state* mrb, mrb_value self) {
  uv_timeval_t * native_self = mruby_unbox_uv_timeval_t(self);

  long native_tv_sec = native_self->tv_sec;

  mrb_value tv_sec = mrb_fixnum_value(native_tv_sec);

  return tv_sec;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timeval::tv_sec_writer */
/* sha: 6def1c05fa33bd0a84b077fd03f120a038d2c350a592193cd439c5e178058237 */
#if BIND_Timeval_tv_sec_FIELD_WRITER
/* set_tv_sec
 *
 * Parameters:
 * - value: long
 */
mrb_value
mrb_UV_Timeval_set_tv_sec(mrb_state* mrb, mrb_value self) {
  uv_timeval_t * native_self = mruby_unbox_uv_timeval_t(self);
  mrb_int native_tv_sec;

  mrb_get_args(mrb, "i", &native_tv_sec);

  native_self->tv_sec = native_tv_sec;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timeval::tv_usec_reader */
/* sha: b6abba3e0a2059511fe4897f1aaceefda916474d52d385444d8c5689be7a2b4f */
#if BIND_Timeval_tv_usec_FIELD_READER
/* get_tv_usec
 *
 * Return Type: long
 */
mrb_value
mrb_UV_Timeval_get_tv_usec(mrb_state* mrb, mrb_value self) {
  uv_timeval_t * native_self = mruby_unbox_uv_timeval_t(self);

  long native_tv_usec = native_self->tv_usec;

  mrb_value tv_usec = mrb_fixnum_value(native_tv_usec);

  return tv_usec;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timeval::tv_usec_writer */
/* sha: b7ffa88225cdea1e47346ef4e1a139fb1f3a975ee0503d32929581ba581a3c40 */
#if BIND_Timeval_tv_usec_FIELD_WRITER
/* set_tv_usec
 *
 * Parameters:
 * - value: long
 */
mrb_value
mrb_UV_Timeval_set_tv_usec(mrb_state* mrb, mrb_value self) {
  uv_timeval_t * native_self = mruby_unbox_uv_timeval_t(self);
  mrb_int native_tv_usec;

  mrb_get_args(mrb, "i", &native_tv_usec);

  native_self->tv_usec = native_tv_usec;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Timeval_init(mrb_state* mrb) {
/* MRUBY_BINDING: Timeval::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timeval::class_definition */
/* sha: 998c719c24c5590fc85cb31dc4e16ee70dc4cc484b9214066f24cf8ba49cad3b */
  struct RClass* Timeval_class = mrb_define_class_under(mrb, UV_module(mrb), "Timeval", mrb->object_class);
  MRB_SET_INSTANCE_TT(Timeval_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timeval::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timeval::class_method_definitions */
/* sha: 1a04931adbfe5d2ccd0b636ad7ee5c50bff50b098c1365752009e290e5468e9e */
#if BIND_Timeval_INITIALIZE
  mrb_define_method(mrb, Timeval_class, "initialize", mrb_UV_Timeval_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timeval::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timeval::attr_definitions */
/* sha: 2676070557136e498cb4bd85b560e5ad38c71bcb978010251894d975b2335ec0 */
  /*
   * Fields
   */
#if BIND_Timeval_tv_sec_FIELD_READER
  mrb_define_method(mrb, Timeval_class, "tv_sec", mrb_UV_Timeval_get_tv_sec, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Timeval_tv_sec_FIELD_WRITER
  mrb_define_method(mrb, Timeval_class, "tv_sec=", mrb_UV_Timeval_set_tv_sec, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Timeval_tv_usec_FIELD_READER
  mrb_define_method(mrb, Timeval_class, "tv_usec", mrb_UV_Timeval_get_tv_usec, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Timeval_tv_usec_FIELD_WRITER
  mrb_define_method(mrb, Timeval_class, "tv_usec=", mrb_UV_Timeval_set_tv_usec, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timeval::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timeval::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timeval::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
