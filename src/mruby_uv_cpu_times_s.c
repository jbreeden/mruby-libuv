/*
 * struct uv_cpu_times_s
 * Defined in file uv.h @ line 980
 */

#include "mruby_UV.h"

#if BIND_UvCpuTimesS_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvCpuTimesS::initialize */
/* sha: 1b9b6157be2d20835ff34503630e3bea93752cd65a62f806be8db7742981d810 */
#if BIND_UvCpuTimesS_INITIALIZE
mrb_value
mrb_UV_UvCpuTimesS_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Uncomment (and optionally replace) if an initializer is desired.
  struct uv_cpu_times_s* native_object = (struct uv_cpu_times_s*)calloc(1, sizeof(struct uv_cpu_times_s));
  mruby_gift_uv_cpu_times_s_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCpuTimesS::disown */
/* sha: 4409f2f935c81c853ad865dd7d90be0a0ae60844bf0d2a67a8c2e7b8c027cde9 */
mrb_value
mrb_UV_UvCpuTimesS_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvCpuTimesS.disown only accepts objects of type UV::UvCpuTimesS");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCpuTimesS::belongs_to_ruby */
/* sha: bcd45c26875710a0008f4ccc40f97e5c623055324b68c986f41557b402be7d88 */
mrb_value
mrb_UV_UvCpuTimesS_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvCpuTimesS.belongs_to_ruby only accepts objects of type UV::UvCpuTimesS");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: UvCpuTimesS::user_reader */
/* sha: 9a5c7d8570471358e2fc4d7a17697d040028aefad9471bd36367ee79dc687986 */
#if BIND_UvCpuTimesS_user_FIELD_READER
/* get_user
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvCpuTimesS_get_user(mrb_state* mrb, mrb_value self) {
  struct uv_cpu_times_s * native_self = mruby_unbox_uv_cpu_times_s(self);

  uint64_t native_user = native_self->user;

  mrb_value user = TODO_mruby_box_uint64_t(mrb, native_user);

  return user;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCpuTimesS::user_writer */
/* sha: 6daa0d3ca20442e3f22d56b019af509d95ce01d293e5d04e99a87474fcf65124 */
#if BIND_UvCpuTimesS_user_FIELD_WRITER
/* set_user
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_UvCpuTimesS_set_user(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvCpuTimesS::nice_reader */
/* sha: 19546f3e9105b3ed8b514a729b0a58e0f2078c2377aa995a3a1bf41d5ae4bb5a */
#if BIND_UvCpuTimesS_nice_FIELD_READER
/* get_nice
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvCpuTimesS_get_nice(mrb_state* mrb, mrb_value self) {
  struct uv_cpu_times_s * native_self = mruby_unbox_uv_cpu_times_s(self);

  uint64_t native_nice = native_self->nice;

  mrb_value nice = TODO_mruby_box_uint64_t(mrb, native_nice);

  return nice;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCpuTimesS::nice_writer */
/* sha: 3272e0e36a3f687f4fdda57aeefc5de56dc97de05d62caac09bfe38f34ab3a0c */
#if BIND_UvCpuTimesS_nice_FIELD_WRITER
/* set_nice
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_UvCpuTimesS_set_nice(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvCpuTimesS::sys_reader */
/* sha: f7e9b8ec0a0eaec9f8f78066c4e3e02f60318bd7bd9e3714b25e13f8a13798fc */
#if BIND_UvCpuTimesS_sys_FIELD_READER
/* get_sys
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvCpuTimesS_get_sys(mrb_state* mrb, mrb_value self) {
  struct uv_cpu_times_s * native_self = mruby_unbox_uv_cpu_times_s(self);

  uint64_t native_sys = native_self->sys;

  mrb_value sys = TODO_mruby_box_uint64_t(mrb, native_sys);

  return sys;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCpuTimesS::sys_writer */
/* sha: c540ba669dee763b6ee1da65d449b494071af54854f6c571abaf9e94a0edede3 */
#if BIND_UvCpuTimesS_sys_FIELD_WRITER
/* set_sys
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_UvCpuTimesS_set_sys(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvCpuTimesS::idle_reader */
/* sha: d610b4395d9205e0df6f114d1c27fba1eb6517e71670c84fa8521c5622df5181 */
#if BIND_UvCpuTimesS_idle_FIELD_READER
/* get_idle
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvCpuTimesS_get_idle(mrb_state* mrb, mrb_value self) {
  struct uv_cpu_times_s * native_self = mruby_unbox_uv_cpu_times_s(self);

  uint64_t native_idle = native_self->idle;

  mrb_value idle = TODO_mruby_box_uint64_t(mrb, native_idle);

  return idle;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCpuTimesS::idle_writer */
/* sha: 2dbfef60c9ec900e8d6aed9e7928fce611b0ac656f33362e0de7c8521fabe5b5 */
#if BIND_UvCpuTimesS_idle_FIELD_WRITER
/* set_idle
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_UvCpuTimesS_set_idle(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvCpuTimesS::irq_reader */
/* sha: 922bd5fb36657f413956c38233d83a5c4dbbfa2807f8692b6c975390b8584fe0 */
#if BIND_UvCpuTimesS_irq_FIELD_READER
/* get_irq
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvCpuTimesS_get_irq(mrb_state* mrb, mrb_value self) {
  struct uv_cpu_times_s * native_self = mruby_unbox_uv_cpu_times_s(self);

  uint64_t native_irq = native_self->irq;

  mrb_value irq = TODO_mruby_box_uint64_t(mrb, native_irq);

  return irq;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCpuTimesS::irq_writer */
/* sha: a0c411dd2067ab8a5eba2149479e55d0c220fcc9b512efe5e45fb61e8e97d6c6 */
#if BIND_UvCpuTimesS_irq_FIELD_WRITER
/* set_irq
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_UvCpuTimesS_set_irq(mrb_state* mrb, mrb_value self) {
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


void mrb_UV_UvCpuTimesS_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvCpuTimesS::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCpuTimesS::class_definition */
/* sha: 9f8508cae1be8442c59f75083511c99f526197943afd552c1c5f83abab0610c2 */
  struct RClass* UvCpuTimesS_class = mrb_define_class_under(mrb, UV_module(mrb), "UvCpuTimesS", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvCpuTimesS_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCpuTimesS::custom_pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCpuTimesS::class_method_definitions */
/* sha: 00d8e170629f2538e878cdcc2c4b77a88c24229663d6b159a84d2370690ffa76 */
#if BIND_UvCpuTimesS_INITIALIZE
  mrb_define_method(mrb, UvCpuTimesS_class, "initialize", mrb_UV_UvCpuTimesS_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvCpuTimesS_class, "disown", mrb_UV_UvCpuTimesS_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvCpuTimesS_class, "belongs_to_ruby?", mrb_UV_UvCpuTimesS_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCpuTimesS::custom_pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCpuTimesS::attr_definitions */
/* sha: b8290862539ebf7b9b8293733584505eac2da869c1efefe9f5b0f8d435e78ff8 */
  /*
   * Fields
   */
#if BIND_UvCpuTimesS_user_FIELD_READER
  mrb_define_method(mrb, UvCpuTimesS_class, "user", mrb_UV_UvCpuTimesS_get_user, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvCpuTimesS_user_FIELD_WRITER
  mrb_define_method(mrb, UvCpuTimesS_class, "user=", mrb_UV_UvCpuTimesS_set_user, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvCpuTimesS_nice_FIELD_READER
  mrb_define_method(mrb, UvCpuTimesS_class, "nice", mrb_UV_UvCpuTimesS_get_nice, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvCpuTimesS_nice_FIELD_WRITER
  mrb_define_method(mrb, UvCpuTimesS_class, "nice=", mrb_UV_UvCpuTimesS_set_nice, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvCpuTimesS_sys_FIELD_READER
  mrb_define_method(mrb, UvCpuTimesS_class, "sys", mrb_UV_UvCpuTimesS_get_sys, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvCpuTimesS_sys_FIELD_WRITER
  mrb_define_method(mrb, UvCpuTimesS_class, "sys=", mrb_UV_UvCpuTimesS_set_sys, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvCpuTimesS_idle_FIELD_READER
  mrb_define_method(mrb, UvCpuTimesS_class, "idle", mrb_UV_UvCpuTimesS_get_idle, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvCpuTimesS_idle_FIELD_WRITER
  mrb_define_method(mrb, UvCpuTimesS_class, "idle=", mrb_UV_UvCpuTimesS_set_idle, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvCpuTimesS_irq_FIELD_READER
  mrb_define_method(mrb, UvCpuTimesS_class, "irq", mrb_UV_UvCpuTimesS_get_irq, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvCpuTimesS_irq_FIELD_WRITER
  mrb_define_method(mrb, UvCpuTimesS_class, "irq=", mrb_UV_UvCpuTimesS_set_irq, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCpuTimesS::custom_pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCpuTimesS::instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCpuTimesS::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: custom_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
