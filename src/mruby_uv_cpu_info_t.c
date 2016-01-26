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
/* sha: eeff36dffea071b247b09e5d75831f17ce5c9eb36302fbc3c754838af6135c16 */
#if BIND_CPUInfo_model_FIELD_READER
/* get_model
 *
 * Return Type: char *
 */
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
/* sha: 30692faebc91eb011abffc1ada197d1ce44856f014c71329a9e20e143bec169f */
#if BIND_CPUInfo_model_FIELD_WRITER
/* set_model
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_UV_CPUInfo_set_model(mrb_state* mrb, mrb_value self) {
  uv_cpu_info_t * native_self = mruby_unbox_uv_cpu_info_t(self);
  mrb_value model;

  mrb_get_args(mrb, "o", &model);

  /* type checking */
  TODO_type_check_char_PTR(model);

  char * native_model = TODO_mruby_unbox_char_PTR(model);

  native_self->model = native_model;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUInfo::speed_reader */
/* sha: 2db847deee9b9cb9f1e1f6cc4cbbed20f3f5388a62bd46dc9a67e2715c660eb9 */
#if BIND_CPUInfo_speed_FIELD_READER
/* get_speed
 *
 * Return Type: int
 */
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
/* sha: 93410043279e15dcbfd51cfdf9092cc11981959d2733caee33aea86a7c2bf338 */
#if BIND_CPUInfo_speed_FIELD_WRITER
/* set_speed
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_CPUInfo_set_speed(mrb_state* mrb, mrb_value self) {
  uv_cpu_info_t * native_self = mruby_unbox_uv_cpu_info_t(self);
  mrb_int native_speed;

  mrb_get_args(mrb, "i", &native_speed);

  native_self->speed = native_speed;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUInfo::cpu_times_reader */
/* sha: 089e3a0911ad9188607ec72b404dd0712eb48b85ef6cf513a43e8acc477ff056 */
#if BIND_CPUInfo_cpu_times_FIELD_READER
/* get_cpu_times
 *
 * Return Type: struct uv_cpu_times_s
 */
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
/* sha: 84af3d7aee42c1a25a9899ea0ca06d57411bf4485baf287859039aca2df2ac19 */
#if BIND_CPUInfo_cpu_times_FIELD_WRITER
/* set_cpu_times
 *
 * Parameters:
 * - value: struct uv_cpu_times_s
 */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_CPUInfo_init(mrb_state* mrb) {
/* MRUBY_BINDING: CPUInfo::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
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

/* MRUBY_BINDING: CPUInfo::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUInfo::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CPUInfo::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
