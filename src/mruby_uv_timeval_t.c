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
/* sha: 267a479e18770a63dc4f26f3d2a9080bc43c6ca4e430904f3818a39af0bfa567 */
#if BIND_Timeval_tv_sec_FIELD_READER
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
/* sha: 3bd1eca2b894baf8bd8c9161476e58801b758e3fff44e55cc46ec099a1f4ce23 */
#if BIND_Timeval_tv_sec_FIELD_WRITER
mrb_value
mrb_UV_Timeval_set_tv_sec(mrb_state* mrb, mrb_value self) {
  uv_timeval_t * native_self = mruby_unbox_uv_timeval_t(self);
  mrb_int native_tv_sec;

  mrb_get_args(mrb, "i", &native_tv_sec);

  native_self->tv_sec = native_tv_sec;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timeval::tv_usec_reader */
/* sha: 564421b761288d74aac878290c6be1aa88b1fcff46cb75b08446c695aa1be4c1 */
#if BIND_Timeval_tv_usec_FIELD_READER
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
/* sha: 3f31b51297c87d7a83f439c6fbba34a353723a15a421958b3c75e9874ec669a7 */
#if BIND_Timeval_tv_usec_FIELD_WRITER
mrb_value
mrb_UV_Timeval_set_tv_usec(mrb_state* mrb, mrb_value self) {
  uv_timeval_t * native_self = mruby_unbox_uv_timeval_t(self);
  mrb_int native_tv_usec;

  mrb_get_args(mrb, "i", &native_tv_usec);

  native_self->tv_usec = native_tv_usec;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Timeval_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

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


/* MRUBY_BINDING: Timeval::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
