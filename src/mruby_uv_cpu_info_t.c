/*
 * uv_cpu_info_t
 * Defined in file uv.h @ line 230
 */

#include "mruby_UV.h"

#if BIND_CPUInfo_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUInfo::initialize */
/* sha: 4b993cc6f2bc9529460328d8d2c60a15ed1310ff635636a9fc66453eded31ae1 */
#if BIND_CPUInfo_INITIALIZE
mrb_value
mrb_UV_CPUInfo_initialize(mrb_state* mrb, mrb_value self) {

  uv_cpu_info_t* native_object = (uv_cpu_info_t*)calloc(1, sizeof(uv_cpu_info_t));
  mruby_gift_uv_cpu_info_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: CPUInfo::model_reader */
/* sha: c1c25cef87842a26b79f932e1a8a045d481293b9615f5432160cbe115d492608 */
#if BIND_CPUInfo_model_FIELD_READER
mrb_value
mrb_UV_CPUInfo_get_model(mrb_state* mrb, mrb_value self) {
  uv_cpu_info_t * native_self = mruby_unbox_uv_cpu_info_t(self);

  char * native_model = native_self->model;

  mrb_value model = TODO_mruby_box_char_PTR(mrb, native_model);

  return model;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUInfo::model_writer */
/* sha: 531316284961a61243ca2ab1dce977aaed59a18d45490bbdd2622e624d838621 */
#if BIND_CPUInfo_model_FIELD_WRITER
mrb_value
mrb_UV_CPUInfo_set_model(mrb_state* mrb, mrb_value self) {
  uv_cpu_info_t * native_self = mruby_unbox_uv_cpu_info_t(self);
  mrb_value model;

  mrb_get_args(mrb, "o", &model);

  /* type checking */
  TODO_type_check_char_PTR(model);

  char * native_model = TODO_mruby_unbox_char_PTR(model);

  native_self->model = native_model;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUInfo::speed_reader */
/* sha: 46115fb374417dcdb6342871a80a44d1b81c6a5710fefff6378caae697863464 */
#if BIND_CPUInfo_speed_FIELD_READER
mrb_value
mrb_UV_CPUInfo_get_speed(mrb_state* mrb, mrb_value self) {
  uv_cpu_info_t * native_self = mruby_unbox_uv_cpu_info_t(self);

  int native_speed = native_self->speed;

  mrb_value speed = mrb_fixnum_value(native_speed);

  return speed;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUInfo::speed_writer */
/* sha: b015bb757e07172f47f67e288a416a0f0211d37f685c5db6e14afc6dcbdbc237 */
#if BIND_CPUInfo_speed_FIELD_WRITER
mrb_value
mrb_UV_CPUInfo_set_speed(mrb_state* mrb, mrb_value self) {
  uv_cpu_info_t * native_self = mruby_unbox_uv_cpu_info_t(self);
  mrb_int native_speed;

  mrb_get_args(mrb, "i", &native_speed);

  native_self->speed = native_speed;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUInfo::cpu_times_reader */
/* sha: eab02d56e7650982e31780342c0ca38cd1a7453789d7ad3f07cc0b1b6796ca97 */
#if BIND_CPUInfo_cpu_times_FIELD_READER
mrb_value
mrb_UV_CPUInfo_get_cpu_times(mrb_state* mrb, mrb_value self) {
  uv_cpu_info_t * native_self = mruby_unbox_uv_cpu_info_t(self);

  struct uv_cpu_times_s native_cpu_times = native_self->cpu_times;

  struct uv_cpu_times_s* new_cpu_times = TODO_move_uv_cpu_times_s_to_heap(native_cpu_times);
  mrb_value cpu_times = mruby_box_uv_cpu_times_s(mrb, &native_cpu_times);

  return cpu_times;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUInfo::cpu_times_writer */
/* sha: bc7babed397e7e461133fe0f0a071f1fa21f1734e1c87f7d39d2fb4ee8c17572 */
#if BIND_CPUInfo_cpu_times_FIELD_WRITER
mrb_value
mrb_UV_CPUInfo_set_cpu_times(mrb_state* mrb, mrb_value self) {
  uv_cpu_info_t * native_self = mruby_unbox_uv_cpu_info_t(self);
  mrb_value cpu_times;

  mrb_get_args(mrb, "o", &cpu_times);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, cpu_times, CPUTimes_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "CPUTimes expected");
    return mrb_nil_value();
  }

  struct uv_cpu_times_s native_cpu_times = *(mruby_unbox_uv_cpu_times_s(cpu_times));

  native_self->cpu_times = native_cpu_times;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_CPUInfo_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUInfo::class_definition */
/* sha: 56faf531a9ae26db62ba783fc031bda6a493772fc21736505a08e0bb45c32dbd */
  struct RClass* CPUInfo_class = mrb_define_class_under(mrb, UV_module(mrb), "CPUInfo", mrb->object_class);
  MRB_SET_INSTANCE_TT(CPUInfo_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUInfo::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUInfo::class_method_definitions */
/* sha: 91a1bd30543b66be13e8cc3cd1426d5a0d579b1d2f0fbce30c690cb5107eb248 */
#if BIND_CPUInfo_INITIALIZE
  mrb_define_method(mrb, CPUInfo_class, "initialize", mrb_UV_CPUInfo_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUInfo::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUInfo::attr_definitions */
/* sha: fbc189a9b748a830115e5d06d34db404880e1505f36fc6c1ff689b8b1b0c954e */
  /*
   * Fields
   */
#if BIND_CPUInfo_model_FIELD_READER
  mrb_define_method(mrb, CPUInfo_class, "model", mrb_UV_CPUInfo_get_model, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CPUInfo_model_FIELD_WRITER
  mrb_define_method(mrb, CPUInfo_class, "model=", mrb_UV_CPUInfo_set_model, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CPUInfo_speed_FIELD_READER
  mrb_define_method(mrb, CPUInfo_class, "speed", mrb_UV_CPUInfo_get_speed, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CPUInfo_speed_FIELD_WRITER
  mrb_define_method(mrb, CPUInfo_class, "speed=", mrb_UV_CPUInfo_set_speed, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CPUInfo_cpu_times_FIELD_READER
  mrb_define_method(mrb, CPUInfo_class, "cpu_times", mrb_UV_CPUInfo_get_cpu_times, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CPUInfo_cpu_times_FIELD_WRITER
  mrb_define_method(mrb, CPUInfo_class, "cpu_times=", mrb_UV_CPUInfo_set_cpu_times, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: CPUInfo::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
