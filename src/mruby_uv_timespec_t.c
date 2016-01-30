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
/* sha: d4a0a5f4fe2db70a0f9e27e9822699a638b210e5c8e582cdc23f9ec57e2f8c3b */
#if BIND_Timespec_tv_sec_FIELD_READER
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
/* sha: 5af4c1c7f4d69580569c05f89220775036ca1ebdc6efd76a1e4116ea3c59b023 */
#if BIND_Timespec_tv_sec_FIELD_WRITER
mrb_value
mrb_UV_Timespec_set_tv_sec(mrb_state* mrb, mrb_value self) {
  uv_timespec_t * native_self = mruby_unbox_uv_timespec_t(self);
  mrb_int native_tv_sec;

  mrb_get_args(mrb, "i", &native_tv_sec);

  native_self->tv_sec = native_tv_sec;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timespec::tv_nsec_reader */
/* sha: 65d2912a558f5f2401365560734ed2d199a6fa48371afef6b1f3b9d151a73d16 */
#if BIND_Timespec_tv_nsec_FIELD_READER
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
/* sha: 5f7ce5024ba0fc3fae7f7ad470cac906ced4c4a0ff8210026d8f420f3a10c501 */
#if BIND_Timespec_tv_nsec_FIELD_WRITER
mrb_value
mrb_UV_Timespec_set_tv_nsec(mrb_state* mrb, mrb_value self) {
  uv_timespec_t * native_self = mruby_unbox_uv_timespec_t(self);
  mrb_int native_tv_nsec;

  mrb_get_args(mrb, "i", &native_tv_nsec);

  native_self->tv_nsec = native_tv_nsec;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Timespec_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

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


/* MRUBY_BINDING: Timespec::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
