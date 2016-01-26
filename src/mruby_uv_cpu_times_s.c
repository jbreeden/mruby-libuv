/*
 * struct uv_cpu_times_s
 * Defined in file uv.h @ line 980
 */

#include "mruby_UV.h"

#if BIND_CPUTimes_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUTimes::initialize */
/* sha: 742ec332866610919ea81da5e04f419fb533a2e91008ab081ca291db8fde6db4 */
#if BIND_CPUTimes_INITIALIZE
mrb_value
mrb_UV_CPUTimes_initialize(mrb_state* mrb, mrb_value self) {

  struct uv_cpu_times_s* native_object = (struct uv_cpu_times_s*)calloc(1, sizeof(struct uv_cpu_times_s));
  mruby_gift_uv_cpu_times_s_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: CPUTimes::user_reader */
/* sha: 96d14c062646232c88f127e0b50abc84390fac17d7a1e3b7054082c880f7915c */
#if BIND_CPUTimes_user_FIELD_READER
/* get_user
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_CPUTimes_get_user(mrb_state* mrb, mrb_value self) {
  struct uv_cpu_times_s * native_self = mruby_unbox_uv_cpu_times_s(self);

  uint64_t native_user = native_self->user;

  mrb_value user = TODO_mruby_box_uint64_t(mrb, native_user);

  return user;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUTimes::user_writer */
/* sha: 3e2359bbba1646cce3a97f10710b494741a42c8a7b7bcdfc15279b33b5a9e2a5 */
#if BIND_CPUTimes_user_FIELD_WRITER
/* set_user
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_CPUTimes_set_user(mrb_state* mrb, mrb_value self) {
  struct uv_cpu_times_s * native_self = mruby_unbox_uv_cpu_times_s(self);
  mrb_value user;

  mrb_get_args(mrb, "o", &user);

  /* type checking */
  TODO_type_check_uint64_t(user);

  uint64_t native_user = TODO_mruby_unbox_uint64_t(user);

  native_self->user = native_user;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUTimes::nice_reader */
/* sha: cb61f94902f08daeb065ed7a29a5c63b6bda32e844468f0d9253053d6b2bc6c5 */
#if BIND_CPUTimes_nice_FIELD_READER
/* get_nice
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_CPUTimes_get_nice(mrb_state* mrb, mrb_value self) {
  struct uv_cpu_times_s * native_self = mruby_unbox_uv_cpu_times_s(self);

  uint64_t native_nice = native_self->nice;

  mrb_value nice = TODO_mruby_box_uint64_t(mrb, native_nice);

  return nice;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUTimes::nice_writer */
/* sha: 7493879ab81d7460ddaac13c9eea7ef11b861953e19d81f2c10f9405f381e83b */
#if BIND_CPUTimes_nice_FIELD_WRITER
/* set_nice
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_CPUTimes_set_nice(mrb_state* mrb, mrb_value self) {
  struct uv_cpu_times_s * native_self = mruby_unbox_uv_cpu_times_s(self);
  mrb_value nice;

  mrb_get_args(mrb, "o", &nice);

  /* type checking */
  TODO_type_check_uint64_t(nice);

  uint64_t native_nice = TODO_mruby_unbox_uint64_t(nice);

  native_self->nice = native_nice;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUTimes::sys_reader */
/* sha: 3409ae7c3aa2e7378e02d4406821399de1ba49142ed4a8752ceb073aaa639356 */
#if BIND_CPUTimes_sys_FIELD_READER
/* get_sys
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_CPUTimes_get_sys(mrb_state* mrb, mrb_value self) {
  struct uv_cpu_times_s * native_self = mruby_unbox_uv_cpu_times_s(self);

  uint64_t native_sys = native_self->sys;

  mrb_value sys = TODO_mruby_box_uint64_t(mrb, native_sys);

  return sys;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUTimes::sys_writer */
/* sha: aeb1fdd3d596687805f0eeea08c9a27eb17b6c90ccf630a73beddabc68aae57d */
#if BIND_CPUTimes_sys_FIELD_WRITER
/* set_sys
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_CPUTimes_set_sys(mrb_state* mrb, mrb_value self) {
  struct uv_cpu_times_s * native_self = mruby_unbox_uv_cpu_times_s(self);
  mrb_value sys;

  mrb_get_args(mrb, "o", &sys);

  /* type checking */
  TODO_type_check_uint64_t(sys);

  uint64_t native_sys = TODO_mruby_unbox_uint64_t(sys);

  native_self->sys = native_sys;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUTimes::idle_reader */
/* sha: 7474e7ca47c587ac3c525fe51bd4df6e6834f853150eeaec111ffd959a6ec6d1 */
#if BIND_CPUTimes_idle_FIELD_READER
/* get_idle
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_CPUTimes_get_idle(mrb_state* mrb, mrb_value self) {
  struct uv_cpu_times_s * native_self = mruby_unbox_uv_cpu_times_s(self);

  uint64_t native_idle = native_self->idle;

  mrb_value idle = TODO_mruby_box_uint64_t(mrb, native_idle);

  return idle;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUTimes::idle_writer */
/* sha: 2b9bb37dc74737428a7f41df4f583dab8621cb7431021f754f2f7e565a9b09e2 */
#if BIND_CPUTimes_idle_FIELD_WRITER
/* set_idle
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_CPUTimes_set_idle(mrb_state* mrb, mrb_value self) {
  struct uv_cpu_times_s * native_self = mruby_unbox_uv_cpu_times_s(self);
  mrb_value idle;

  mrb_get_args(mrb, "o", &idle);

  /* type checking */
  TODO_type_check_uint64_t(idle);

  uint64_t native_idle = TODO_mruby_unbox_uint64_t(idle);

  native_self->idle = native_idle;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUTimes::irq_reader */
/* sha: 75438799d69d7ee13192bd9c2d0a0213db584026125cb1c7a5497da268ba02b9 */
#if BIND_CPUTimes_irq_FIELD_READER
/* get_irq
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_CPUTimes_get_irq(mrb_state* mrb, mrb_value self) {
  struct uv_cpu_times_s * native_self = mruby_unbox_uv_cpu_times_s(self);

  uint64_t native_irq = native_self->irq;

  mrb_value irq = TODO_mruby_box_uint64_t(mrb, native_irq);

  return irq;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUTimes::irq_writer */
/* sha: d2ee8c1c662ba8abf6d45759d5975b7ab8022ba6c0538ea91fbdd4150c6857b5 */
#if BIND_CPUTimes_irq_FIELD_WRITER
/* set_irq
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_CPUTimes_set_irq(mrb_state* mrb, mrb_value self) {
  struct uv_cpu_times_s * native_self = mruby_unbox_uv_cpu_times_s(self);
  mrb_value irq;

  mrb_get_args(mrb, "o", &irq);

  /* type checking */
  TODO_type_check_uint64_t(irq);

  uint64_t native_irq = TODO_mruby_unbox_uint64_t(irq);

  native_self->irq = native_irq;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_CPUTimes_init(mrb_state* mrb) {
/* MRUBY_BINDING: CPUTimes::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUTimes::class_definition */
/* sha: 90dcdc8fe0840af471352b92927ab3266de4e591f0ac76c02b968c19ca99f94c */
  struct RClass* CPUTimes_class = mrb_define_class_under(mrb, UV_module(mrb), "CPUTimes", mrb->object_class);
  MRB_SET_INSTANCE_TT(CPUTimes_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUTimes::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUTimes::class_method_definitions */
/* sha: 12fd3fc150a17f8be66f9e207c146f4af86852d0a68f4ba21ad17ee09e530302 */
#if BIND_CPUTimes_INITIALIZE
  mrb_define_method(mrb, CPUTimes_class, "initialize", mrb_UV_CPUTimes_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUTimes::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUTimes::attr_definitions */
/* sha: 67ab5d1c413812b8c69035d450e5020b83bcc2b84c165cd50b199c25e15ec4b2 */
  /*
   * Fields
   */
#if BIND_CPUTimes_user_FIELD_READER
  mrb_define_method(mrb, CPUTimes_class, "user", mrb_UV_CPUTimes_get_user, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CPUTimes_user_FIELD_WRITER
  mrb_define_method(mrb, CPUTimes_class, "user=", mrb_UV_CPUTimes_set_user, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CPUTimes_nice_FIELD_READER
  mrb_define_method(mrb, CPUTimes_class, "nice", mrb_UV_CPUTimes_get_nice, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CPUTimes_nice_FIELD_WRITER
  mrb_define_method(mrb, CPUTimes_class, "nice=", mrb_UV_CPUTimes_set_nice, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CPUTimes_sys_FIELD_READER
  mrb_define_method(mrb, CPUTimes_class, "sys", mrb_UV_CPUTimes_get_sys, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CPUTimes_sys_FIELD_WRITER
  mrb_define_method(mrb, CPUTimes_class, "sys=", mrb_UV_CPUTimes_set_sys, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CPUTimes_idle_FIELD_READER
  mrb_define_method(mrb, CPUTimes_class, "idle", mrb_UV_CPUTimes_get_idle, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CPUTimes_idle_FIELD_WRITER
  mrb_define_method(mrb, CPUTimes_class, "idle=", mrb_UV_CPUTimes_set_idle, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CPUTimes_irq_FIELD_READER
  mrb_define_method(mrb, CPUTimes_class, "irq", mrb_UV_CPUTimes_get_irq, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CPUTimes_irq_FIELD_WRITER
  mrb_define_method(mrb, CPUTimes_class, "irq=", mrb_UV_CPUTimes_set_irq, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUTimes::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUTimes::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUTimes::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
