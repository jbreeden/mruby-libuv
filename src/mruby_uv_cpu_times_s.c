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
/* sha: 1e01889ae56849aa86ec02716a16aa2e58588fb13827f76eaff5fd1cc2ba7482 */
#if BIND_CPUTimes_user_FIELD_READER
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
/* sha: 4938282de0729fdf5b181d1afe50183c152a85ff5025d93b19a2c90125f28fd2 */
#if BIND_CPUTimes_user_FIELD_WRITER
mrb_value
mrb_UV_CPUTimes_set_user(mrb_state* mrb, mrb_value self) {
  struct uv_cpu_times_s * native_self = mruby_unbox_uv_cpu_times_s(self);
  mrb_value user;

  mrb_get_args(mrb, "o", &user);

  /* type checking */
  TODO_type_check_uint64_t(user);

  uint64_t native_user = TODO_mruby_unbox_uint64_t(user);

  native_self->user = native_user;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUTimes::nice_reader */
/* sha: 2a83585f19dd8db0c498c1065db6e2f9003ca4db67bec9c4d4a6d5aacaae150d */
#if BIND_CPUTimes_nice_FIELD_READER
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
/* sha: 32aa4842f4b9254e7a6cfb31f59517fb50b934bda4d8fdc919b7a1bf985bab18 */
#if BIND_CPUTimes_nice_FIELD_WRITER
mrb_value
mrb_UV_CPUTimes_set_nice(mrb_state* mrb, mrb_value self) {
  struct uv_cpu_times_s * native_self = mruby_unbox_uv_cpu_times_s(self);
  mrb_value nice;

  mrb_get_args(mrb, "o", &nice);

  /* type checking */
  TODO_type_check_uint64_t(nice);

  uint64_t native_nice = TODO_mruby_unbox_uint64_t(nice);

  native_self->nice = native_nice;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUTimes::sys_reader */
/* sha: 4c6c5ae2376ce4cbbbeb51c34b5c64f10981a27238b3d5c8bdba6e82801f2be0 */
#if BIND_CPUTimes_sys_FIELD_READER
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
/* sha: 27a5653dcf860f968d8ff29610d0788a2ccab65a21b599332cd17532dee8cc8b */
#if BIND_CPUTimes_sys_FIELD_WRITER
mrb_value
mrb_UV_CPUTimes_set_sys(mrb_state* mrb, mrb_value self) {
  struct uv_cpu_times_s * native_self = mruby_unbox_uv_cpu_times_s(self);
  mrb_value sys;

  mrb_get_args(mrb, "o", &sys);

  /* type checking */
  TODO_type_check_uint64_t(sys);

  uint64_t native_sys = TODO_mruby_unbox_uint64_t(sys);

  native_self->sys = native_sys;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUTimes::idle_reader */
/* sha: 197b589eeb134e69706fec4273ce6ece5e8fcfa7654b0a354eb1a70334271708 */
#if BIND_CPUTimes_idle_FIELD_READER
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
/* sha: b42cf085f3169a1326e225a98d24848c5253d83c5a1e8103e76c717db5e95238 */
#if BIND_CPUTimes_idle_FIELD_WRITER
mrb_value
mrb_UV_CPUTimes_set_idle(mrb_state* mrb, mrb_value self) {
  struct uv_cpu_times_s * native_self = mruby_unbox_uv_cpu_times_s(self);
  mrb_value idle;

  mrb_get_args(mrb, "o", &idle);

  /* type checking */
  TODO_type_check_uint64_t(idle);

  uint64_t native_idle = TODO_mruby_unbox_uint64_t(idle);

  native_self->idle = native_idle;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUTimes::irq_reader */
/* sha: 27fffc7b607221d8052b1bc66d746333f064c3fc638389859da22e9a5c1e4958 */
#if BIND_CPUTimes_irq_FIELD_READER
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
/* sha: 8bb37e1b09fff361a6d006611d47ed16b453ca11595a14f9b03ca341a59507f3 */
#if BIND_CPUTimes_irq_FIELD_WRITER
mrb_value
mrb_UV_CPUTimes_set_irq(mrb_state* mrb, mrb_value self) {
  struct uv_cpu_times_s * native_self = mruby_unbox_uv_cpu_times_s(self);
  mrb_value irq;

  mrb_get_args(mrb, "o", &irq);

  /* type checking */
  TODO_type_check_uint64_t(irq);

  uint64_t native_irq = TODO_mruby_unbox_uint64_t(irq);

  native_self->irq = native_irq;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_CPUTimes_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

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


/* MRUBY_BINDING: CPUTimes::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
