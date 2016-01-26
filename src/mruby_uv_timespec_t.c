/*
 * uv_timespec_t
 * Defined in file uv.h @ line 320
 */

#include "mruby_UV.h"

#if BIND_Timespec_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timespec::initialize */
/* sha: 4260370f5a9546048629a19352a24977ec536d10a1c0953a5a9c722ec606e544 */
#if BIND_Timespec_INITIALIZE
mrb_value
mrb_UV_Timespec_initialize(mrb_state* mrb, mrb_value self) {

  uv_timespec_t* native_object = (uv_timespec_t*)calloc(1, sizeof(uv_timespec_t));
  mruby_gift_uv_timespec_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Timespec::tv_sec_reader */
/* sha: 2dbebfe4b25414b37a61ee33f3e6917a8d39d1e5c6345059140fc413175fd99c */
#if BIND_Timespec_tv_sec_FIELD_READER
/* get_tv_sec
 *
 * Return Type: long
 */
mrb_value
mrb_UV_Timespec_get_tv_sec(mrb_state* mrb, mrb_value self) {
  uv_timespec_t * native_self = mruby_unbox_uv_timespec_t(self);

  long native_tv_sec = native_self->tv_sec;

  mrb_value tv_sec = mrb_fixnum_value(native_tv_sec);

  return tv_sec;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timespec::tv_sec_writer */
/* sha: bde3580ee118b9a1d2aba34a9f03cbfbbb1cb8e5a5f4e6039b58e8a843943b57 */
#if BIND_Timespec_tv_sec_FIELD_WRITER
/* set_tv_sec
 *
 * Parameters:
 * - value: long
 */
mrb_value
mrb_UV_Timespec_set_tv_sec(mrb_state* mrb, mrb_value self) {
  uv_timespec_t * native_self = mruby_unbox_uv_timespec_t(self);
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

/* MRUBY_BINDING: Timespec::tv_nsec_reader */
/* sha: 72de7f815424ff64afbb70f8e6a870cbcf468fc83faab010eab5580d233c75a8 */
#if BIND_Timespec_tv_nsec_FIELD_READER
/* get_tv_nsec
 *
 * Return Type: long
 */
mrb_value
mrb_UV_Timespec_get_tv_nsec(mrb_state* mrb, mrb_value self) {
  uv_timespec_t * native_self = mruby_unbox_uv_timespec_t(self);

  long native_tv_nsec = native_self->tv_nsec;

  mrb_value tv_nsec = mrb_fixnum_value(native_tv_nsec);

  return tv_nsec;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timespec::tv_nsec_writer */
/* sha: 69dcd8cd84379204b69651705fcd4c144ffd76a3d6680137882412c3613e29cb */
#if BIND_Timespec_tv_nsec_FIELD_WRITER
/* set_tv_nsec
 *
 * Parameters:
 * - value: long
 */
mrb_value
mrb_UV_Timespec_set_tv_nsec(mrb_state* mrb, mrb_value self) {
  uv_timespec_t * native_self = mruby_unbox_uv_timespec_t(self);
  mrb_int native_tv_nsec;

  mrb_get_args(mrb, "i", &native_tv_nsec);

  native_self->tv_nsec = native_tv_nsec;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Timespec_init(mrb_state* mrb) {
/* MRUBY_BINDING: Timespec::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timespec::class_definition */
/* sha: dc13dbe71e5354a69d12bcd9be8057fe140b473d99cad91d309df2683e94ea0d */
  struct RClass* Timespec_class = mrb_define_class_under(mrb, UV_module(mrb), "Timespec", mrb->object_class);
  MRB_SET_INSTANCE_TT(Timespec_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timespec::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timespec::class_method_definitions */
/* sha: 169d419a0e15aafcc792e9dccd0b586d50445e6b9df5e86ff5538c5d5d4df356 */
#if BIND_Timespec_INITIALIZE
  mrb_define_method(mrb, Timespec_class, "initialize", mrb_UV_Timespec_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timespec::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timespec::attr_definitions */
/* sha: 87461b653b47dae3058be35d7dcf1702fe84297ba484d484c4a911845fe356e4 */
  /*
   * Fields
   */
#if BIND_Timespec_tv_sec_FIELD_READER
  mrb_define_method(mrb, Timespec_class, "tv_sec", mrb_UV_Timespec_get_tv_sec, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Timespec_tv_sec_FIELD_WRITER
  mrb_define_method(mrb, Timespec_class, "tv_sec=", mrb_UV_Timespec_set_tv_sec, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Timespec_tv_nsec_FIELD_READER
  mrb_define_method(mrb, Timespec_class, "tv_nsec", mrb_UV_Timespec_get_tv_nsec, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Timespec_tv_nsec_FIELD_WRITER
  mrb_define_method(mrb, Timespec_class, "tv_nsec=", mrb_UV_Timespec_set_tv_nsec, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timespec::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timespec::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timespec::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
