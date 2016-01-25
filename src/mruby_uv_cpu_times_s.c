/*
 * struct uv_cpu_times_s
 * Defined in file uv.h @ line 980
 */

#include "mruby_UV.h"

#if BIND_CpuTimesS_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuTimesS::initialize */
/* sha: 9213fb9d0d6521a397138efd9effa05d55ce3b0e222d6326578245fd61ef4a0f */
#if BIND_CpuTimesS_INITIALIZE
mrb_value
mrb_UV_CpuTimesS_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  struct uv_cpu_times_s* native_object = (struct uv_cpu_times_s*)calloc(1, sizeof(struct uv_cpu_times_s));
  mruby_gift_uv_cpu_times_s_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: CpuTimesS::user_reader */
/* sha: 686da2fdc239c97b0a95bcd1c5eda7f2a2417347a461ae85383f8c199ed34bb0 */
#if BIND_CpuTimesS_user_FIELD_READER
/* get_user
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_CpuTimesS_get_user(mrb_state* mrb, mrb_value self) {
  struct uv_cpu_times_s * native_self = mruby_unbox_uv_cpu_times_s(self);

  uint64_t native_user = native_self->user;

  mrb_value user = TODO_mruby_box_uint64_t(mrb, native_user);

  return user;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuTimesS::user_writer */
/* sha: dc367a20859599489a264a45f47570ff15a216f40a886e491411f47e8a5f5066 */
#if BIND_CpuTimesS_user_FIELD_WRITER
/* set_user
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_CpuTimesS_set_user(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: CpuTimesS::nice_reader */
/* sha: 257636818fc54227a465b7e8a6f13d08c6cf550c7986c631785aaa6588bad280 */
#if BIND_CpuTimesS_nice_FIELD_READER
/* get_nice
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_CpuTimesS_get_nice(mrb_state* mrb, mrb_value self) {
  struct uv_cpu_times_s * native_self = mruby_unbox_uv_cpu_times_s(self);

  uint64_t native_nice = native_self->nice;

  mrb_value nice = TODO_mruby_box_uint64_t(mrb, native_nice);

  return nice;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuTimesS::nice_writer */
/* sha: 5b25bfd7eb1fbf07dd27a438f17aa10fe46f8faef7e667b544ce066330dfa3da */
#if BIND_CpuTimesS_nice_FIELD_WRITER
/* set_nice
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_CpuTimesS_set_nice(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: CpuTimesS::sys_reader */
/* sha: 081d9d897f24f72e68c67f93d1b9c8488aa1b367ff170f46397b042a4c4a46af */
#if BIND_CpuTimesS_sys_FIELD_READER
/* get_sys
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_CpuTimesS_get_sys(mrb_state* mrb, mrb_value self) {
  struct uv_cpu_times_s * native_self = mruby_unbox_uv_cpu_times_s(self);

  uint64_t native_sys = native_self->sys;

  mrb_value sys = TODO_mruby_box_uint64_t(mrb, native_sys);

  return sys;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuTimesS::sys_writer */
/* sha: 1623d64078abffa49858281a1887a91300c4d86471a81a43e6537ec8c000ef02 */
#if BIND_CpuTimesS_sys_FIELD_WRITER
/* set_sys
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_CpuTimesS_set_sys(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: CpuTimesS::idle_reader */
/* sha: 5361dd1f986becba7a5bdcf496f63c6bd763ca31ea1bc6174c728b425f215a53 */
#if BIND_CpuTimesS_idle_FIELD_READER
/* get_idle
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_CpuTimesS_get_idle(mrb_state* mrb, mrb_value self) {
  struct uv_cpu_times_s * native_self = mruby_unbox_uv_cpu_times_s(self);

  uint64_t native_idle = native_self->idle;

  mrb_value idle = TODO_mruby_box_uint64_t(mrb, native_idle);

  return idle;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuTimesS::idle_writer */
/* sha: 428932a75d6a12671512755c16964c18f3458a2e53ab06e32364a6e782897d7c */
#if BIND_CpuTimesS_idle_FIELD_WRITER
/* set_idle
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_CpuTimesS_set_idle(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: CpuTimesS::irq_reader */
/* sha: 18e3fa37a1acddd84cebf18cf654b6d92bf455c045fdf2ab1d6685337fae74d3 */
#if BIND_CpuTimesS_irq_FIELD_READER
/* get_irq
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_CpuTimesS_get_irq(mrb_state* mrb, mrb_value self) {
  struct uv_cpu_times_s * native_self = mruby_unbox_uv_cpu_times_s(self);

  uint64_t native_irq = native_self->irq;

  mrb_value irq = TODO_mruby_box_uint64_t(mrb, native_irq);

  return irq;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuTimesS::irq_writer */
/* sha: 8504826042d806e60a8accb4b46a2289205506740a2f323d4e78a05f8a6d5887 */
#if BIND_CpuTimesS_irq_FIELD_WRITER
/* set_irq
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_CpuTimesS_set_irq(mrb_state* mrb, mrb_value self) {
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


void mrb_UV_CpuTimesS_init(mrb_state* mrb) {
/* MRUBY_BINDING: CpuTimesS::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuTimesS::class_definition */
/* sha: 151062b2abc78aec5a0617ad32ce3a9bc9c8de453a288b334531240f0be88cd2 */
  struct RClass* CpuTimesS_class = mrb_define_class_under(mrb, UV_module(mrb), "CpuTimesS", mrb->object_class);
  MRB_SET_INSTANCE_TT(CpuTimesS_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuTimesS::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuTimesS::class_method_definitions */
/* sha: a8a4db5f6c4727d4ac2b5baf91b831819c5898b049344765ae7e9f3415d6c98a */
#if BIND_CpuTimesS_INITIALIZE
  mrb_define_method(mrb, CpuTimesS_class, "initialize", mrb_UV_CpuTimesS_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuTimesS::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuTimesS::attr_definitions */
/* sha: b7079969140ff414f34201edf9c800517f51aad1bd7709ea0ac10491291d1113 */
  /*
   * Fields
   */
#if BIND_CpuTimesS_user_FIELD_READER
  mrb_define_method(mrb, CpuTimesS_class, "user", mrb_UV_CpuTimesS_get_user, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CpuTimesS_user_FIELD_WRITER
  mrb_define_method(mrb, CpuTimesS_class, "user=", mrb_UV_CpuTimesS_set_user, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CpuTimesS_nice_FIELD_READER
  mrb_define_method(mrb, CpuTimesS_class, "nice", mrb_UV_CpuTimesS_get_nice, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CpuTimesS_nice_FIELD_WRITER
  mrb_define_method(mrb, CpuTimesS_class, "nice=", mrb_UV_CpuTimesS_set_nice, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CpuTimesS_sys_FIELD_READER
  mrb_define_method(mrb, CpuTimesS_class, "sys", mrb_UV_CpuTimesS_get_sys, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CpuTimesS_sys_FIELD_WRITER
  mrb_define_method(mrb, CpuTimesS_class, "sys=", mrb_UV_CpuTimesS_set_sys, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CpuTimesS_idle_FIELD_READER
  mrb_define_method(mrb, CpuTimesS_class, "idle", mrb_UV_CpuTimesS_get_idle, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CpuTimesS_idle_FIELD_WRITER
  mrb_define_method(mrb, CpuTimesS_class, "idle=", mrb_UV_CpuTimesS_set_idle, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CpuTimesS_irq_FIELD_READER
  mrb_define_method(mrb, CpuTimesS_class, "irq", mrb_UV_CpuTimesS_get_irq, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CpuTimesS_irq_FIELD_WRITER
  mrb_define_method(mrb, CpuTimesS_class, "irq=", mrb_UV_CpuTimesS_set_irq, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuTimesS::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuTimesS::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuTimesS::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
