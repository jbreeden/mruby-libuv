/*
 * uv_cpu_info_t
 * Defined in file uv.h @ line 230
 */

#include "mruby_UV.h"

#if BIND_CpuInfo_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuInfo::initialize */
/* sha: 79dc8cb9e7758b587e2bac4b5a6a9850b4fcc8ecc0bb12eec953dcaa74bf5464 */
#if BIND_CpuInfo_INITIALIZE
mrb_value
mrb_UV_CpuInfo_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  uv_cpu_info_t* native_object = (uv_cpu_info_t*)calloc(1, sizeof(uv_cpu_info_t));
  mruby_gift_uv_cpu_info_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: CpuInfo::model_reader */
/* sha: 046e5dabaa4d06542c68b9e1dcd08ee94645abac01d092d06bdeefdf4b69d096 */
#if BIND_CpuInfo_model_FIELD_READER
/* get_model
 *
 * Return Type: char *
 */
mrb_value
mrb_UV_CpuInfo_get_model(mrb_state* mrb, mrb_value self) {
  uv_cpu_info_t * native_self = mruby_unbox_uv_cpu_info_t(self);

  char * native_model = native_self->model;

  mrb_value model = TODO_mruby_box_char_PTR(mrb, native_model);

  return model;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuInfo::model_writer */
/* sha: 23ae29785f9adb25358b2cd7f946b635effdbc2c556a0e6c6ca9ec89bf0266d4 */
#if BIND_CpuInfo_model_FIELD_WRITER
/* set_model
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_UV_CpuInfo_set_model(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: CpuInfo::speed_reader */
/* sha: 26f5d5c1f0b5c206793c07ed8707cb98f00ca102e2bb4a978b17d9f660c15b59 */
#if BIND_CpuInfo_speed_FIELD_READER
/* get_speed
 *
 * Return Type: int
 */
mrb_value
mrb_UV_CpuInfo_get_speed(mrb_state* mrb, mrb_value self) {
  uv_cpu_info_t * native_self = mruby_unbox_uv_cpu_info_t(self);

  int native_speed = native_self->speed;

  mrb_value speed = mrb_fixnum_value(native_speed);

  return speed;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuInfo::speed_writer */
/* sha: b952f59ea4ef745c42270f64cb40db7d508ff29637f1aac0f926cd2d307691e0 */
#if BIND_CpuInfo_speed_FIELD_WRITER
/* set_speed
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_CpuInfo_set_speed(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: CpuInfo::cpu_times_reader */
/* sha: 8b5ef468dea6a68297fdf536084d7647df4fd37be5f3474f30716b1ede6e5112 */
#if BIND_CpuInfo_cpu_times_FIELD_READER
/* get_cpu_times
 *
 * Return Type: struct uv_cpu_times_s
 */
mrb_value
mrb_UV_CpuInfo_get_cpu_times(mrb_state* mrb, mrb_value self) {
  uv_cpu_info_t * native_self = mruby_unbox_uv_cpu_info_t(self);

  struct uv_cpu_times_s native_cpu_times = native_self->cpu_times;

  struct uv_cpu_times_s* new_cpu_times = TODO_move_uv_cpu_times_s_to_heap(native_cpu_times);
  mrb_value cpu_times = mruby_box_uv_cpu_times_s(mrb, &native_cpu_times);

  return cpu_times;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuInfo::cpu_times_writer */
/* sha: d78b01040d13b9553a4a88847d485a9af371ecb151a561e8210df7ba5ac43e1c */
#if BIND_CpuInfo_cpu_times_FIELD_WRITER
/* set_cpu_times
 *
 * Parameters:
 * - value: struct uv_cpu_times_s
 */
mrb_value
mrb_UV_CpuInfo_set_cpu_times(mrb_state* mrb, mrb_value self) {
  uv_cpu_info_t * native_self = mruby_unbox_uv_cpu_info_t(self);
  mrb_value cpu_times;

  mrb_get_args(mrb, "o", &cpu_times);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, cpu_times, CpuTimesS_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "CpuTimesS expected");
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


void mrb_UV_CpuInfo_init(mrb_state* mrb) {
/* MRUBY_BINDING: CpuInfo::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuInfo::class_definition */
/* sha: a013145e2b6a87287bbc7ab0dcff6f82733e452afe1b4314c3bd7b35ac2f5275 */
  struct RClass* CpuInfo_class = mrb_define_class_under(mrb, UV_module(mrb), "CpuInfo", mrb->object_class);
  MRB_SET_INSTANCE_TT(CpuInfo_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuInfo::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuInfo::class_method_definitions */
/* sha: 7724fe200f4a79d373aaee9b225192414924fc65ae80d6022c135f87e053c450 */
#if BIND_CpuInfo_INITIALIZE
  mrb_define_method(mrb, CpuInfo_class, "initialize", mrb_UV_CpuInfo_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuInfo::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuInfo::attr_definitions */
/* sha: d6a4ab09aec7194bdbe5639b378e9ae64862cb140185eb2627eccbdcb0a03b83 */
  /*
   * Fields
   */
#if BIND_CpuInfo_model_FIELD_READER
  mrb_define_method(mrb, CpuInfo_class, "model", mrb_UV_CpuInfo_get_model, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CpuInfo_model_FIELD_WRITER
  mrb_define_method(mrb, CpuInfo_class, "model=", mrb_UV_CpuInfo_set_model, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CpuInfo_speed_FIELD_READER
  mrb_define_method(mrb, CpuInfo_class, "speed", mrb_UV_CpuInfo_get_speed, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CpuInfo_speed_FIELD_WRITER
  mrb_define_method(mrb, CpuInfo_class, "speed=", mrb_UV_CpuInfo_set_speed, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CpuInfo_cpu_times_FIELD_READER
  mrb_define_method(mrb, CpuInfo_class, "cpu_times", mrb_UV_CpuInfo_get_cpu_times, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CpuInfo_cpu_times_FIELD_WRITER
  mrb_define_method(mrb, CpuInfo_class, "cpu_times=", mrb_UV_CpuInfo_set_cpu_times, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuInfo::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuInfo::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuInfo::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
