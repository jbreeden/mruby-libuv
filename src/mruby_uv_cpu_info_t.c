/*
 * uv_cpu_info_t
 * Defined in file uv.h @ line 230
 */

#include "mruby_UV.h"

#if BIND_UvCpuInfoT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvCpuInfoT::initialize */
/* sha: 4bad1128969c55311a301819139bdc23db5bb0e536e1f8e68620d19f18b708da */
#if BIND_UvCpuInfoT_INITIALIZE
mrb_value
mrb_UV_UvCpuInfoT_initialize(mrb_state* mrb, mrb_value self) {
  uv_cpu_info_t* native_object = (uv_cpu_info_t*)calloc(1, sizeof(uv_cpu_info_t));
  mruby_giftwrap_uv_cpu_info_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCpuInfoT::initialize */
/* sha: cb29a7cd3d64ccac2f80f59d17fe7b04ff6254bc428c410f3a329b02925b9612 */
mrb_value
mrb_UV_UvCpuInfoT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvCpuInfoT.disown only accepts objects of type UV::UvCpuInfoT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCpuInfoT::belongs_to_ruby */
/* sha: 018b67c3437d711a2a49db0ba887f70f085f9980649723395e9917b90b7e9162 */
mrb_value
mrb_UV_UvCpuInfoT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvCpuInfoT.belongs_to_ruby only accepts objects of type UV::UvCpuInfoT");
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

/* MRUBY_BINDING: UvCpuInfoT::model_reader */
/* sha: 0d2f40c0d2308a677d41876564bcaee484746887917df68dd391da58702d10fa */
#if BIND_UvCpuInfoT_model_FIELD_READER
/* get_model
 *
 * Return Type: char *
 */
mrb_value
mrb_UV_UvCpuInfoT_get_model(mrb_state* mrb, mrb_value self) {
  uv_cpu_info_t * native_self = mruby_unbox_uv_cpu_info_t(self);

  char * native_model = native_self->model;

  mrb_value model = TODO_mruby_box_char_PTR(mrb, native_model);

  return model;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCpuInfoT::model_writer */
/* sha: 15327af3be7b341f89f9b4ddf98307271431b60ce69c4268c5a82de74378348a */
#if BIND_UvCpuInfoT_model_FIELD_WRITER
/* set_model
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_UV_UvCpuInfoT_set_model(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvCpuInfoT::speed_reader */
/* sha: 9982e647567859528013c941dae8fa220bd15d3c12e5db4e571c515d5d60fa92 */
#if BIND_UvCpuInfoT_speed_FIELD_READER
/* get_speed
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvCpuInfoT_get_speed(mrb_state* mrb, mrb_value self) {
  uv_cpu_info_t * native_self = mruby_unbox_uv_cpu_info_t(self);

  int native_speed = native_self->speed;

  mrb_value speed = mrb_fixnum_value(native_speed);

  return speed;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCpuInfoT::speed_writer */
/* sha: 08d462829c3d40cb148c874ee125d868b21460de6e803f5d3342bccbf2fca932 */
#if BIND_UvCpuInfoT_speed_FIELD_WRITER
/* set_speed
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvCpuInfoT_set_speed(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvCpuInfoT::cpu_times_reader */
/* sha: 7ec1e37ab5f25b1d5f90237583b695cb56c5390a4abaf366d4bd4477c5d6c500 */
#if BIND_UvCpuInfoT_cpu_times_FIELD_READER
/* get_cpu_times
 *
 * Return Type: struct uv_cpu_times_s
 */
mrb_value
mrb_UV_UvCpuInfoT_get_cpu_times(mrb_state* mrb, mrb_value self) {
  uv_cpu_info_t * native_self = mruby_unbox_uv_cpu_info_t(self);

  struct uv_cpu_times_s native_cpu_times = native_self->cpu_times;

  struct uv_cpu_times_s* new_cpu_times = TODO_move_uv_cpu_times_s_to_heap(native_cpu_times);
  mrb_value cpu_times = mruby_box_uv_cpu_times_s(mrb, &native_cpu_times);

  return cpu_times;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCpuInfoT::cpu_times_writer */
/* sha: 290442aaf473c81c0dfce7384e8870e4e58a1d1b44ec0daa2b4f327f09b78381 */
#if BIND_UvCpuInfoT_cpu_times_FIELD_WRITER
/* set_cpu_times
 *
 * Parameters:
 * - value: struct uv_cpu_times_s
 */
mrb_value
mrb_UV_UvCpuInfoT_set_cpu_times(mrb_state* mrb, mrb_value self) {
  uv_cpu_info_t * native_self = mruby_unbox_uv_cpu_info_t(self);
  mrb_value cpu_times;

  mrb_get_args(mrb, "o", &cpu_times);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, cpu_times, uv_cpu_times_s_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "uv_cpu_times_s expected");
    return mrb_nil_value();
  }

  uv_cpu_times_s native_cpu_times = *(mruby_unbox_uv_cpu_times_s(cpu_times));

  native_self->cpu_times = native_cpu_times;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvCpuInfoT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvCpuInfoT::class_definition */
/* sha: 8ed13f64f442c810d448f8510f8310de7046c1db6365ce29bb7462d78bc79ac0 */
  struct RClass* UvCpuInfoT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvCpuInfoT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvCpuInfoT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCpuInfoT::class_method_definitions */
/* sha: c4cabb66e8d18dc0916c8d2651329561f997aae67536e8c5b622f36035c36bf0 */
#if BIND_UvCpuInfoT_INITIALIZE
  mrb_define_method(mrb, UvCpuInfoT_class, "initialize", mrb_UV_UvCpuInfoT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvCpuInfoT_class, "disown", mrb_UV_UvCpuInfoT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvCpuInfoT_class, "belongs_to_ruby?", mrb_UV_UvCpuInfoT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCpuInfoT::attr_definitions */
/* sha: b1491ca1607415f07578b931feedd0a58bde525c1f4dc6d7290b17fb0e5b1c0f */
  /*
   * Fields
   */
#if BIND_UvCpuInfoT_model_FIELD_READER
  mrb_define_method(mrb, UvCpuInfoT_class, "model", mrb_UV_UvCpuInfoT_get_model, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvCpuInfoT_model_FIELD_WRITER
  mrb_define_method(mrb, UvCpuInfoT_class, "model=", mrb_UV_UvCpuInfoT_set_model, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvCpuInfoT_speed_FIELD_READER
  mrb_define_method(mrb, UvCpuInfoT_class, "speed", mrb_UV_UvCpuInfoT_get_speed, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvCpuInfoT_speed_FIELD_WRITER
  mrb_define_method(mrb, UvCpuInfoT_class, "speed=", mrb_UV_UvCpuInfoT_set_speed, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvCpuInfoT_cpu_times_FIELD_READER
  mrb_define_method(mrb, UvCpuInfoT_class, "cpu_times", mrb_UV_UvCpuInfoT_get_cpu_times, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvCpuInfoT_cpu_times_FIELD_WRITER
  mrb_define_method(mrb, UvCpuInfoT_class, "cpu_times=", mrb_UV_UvCpuInfoT_set_cpu_times, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCpuInfoT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
