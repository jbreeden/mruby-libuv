/*
 * uv_udp_t
 * Defined in file uv.h @ line 204
 */

#include "mruby_UV.h"

#if BIND_UvUdpT_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvUdpT::initialize */
/* sha: e90fbe055593fa0f7492bf85e3e19d1453c34586d5108aaaa94706e1ef3b7f99 */
#if BIND_UvUdpT_INITIALIZE
mrb_value
mrb_UV_UvUdpT_initialize(mrb_state* mrb, mrb_value self) {
  uv_udp_t* native_object = (uv_udp_t*)new_mruby_uv_handle(mrb, self, sizeof(uv_udp_t));
  mruby_gift_uv_udp_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpT::disown */
/* sha: 1af835705be69cdc973b9284dac64a7859413d12b7728490c732720909c93c4d */
mrb_value
mrb_UV_UvUdpT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvUdpT.disown only accepts objects of type UV::UvUdpT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpT::belongs_to_ruby */
/* sha: a97384284400a75401f4f82c76bc6f57548455c5d5b9f8bf6b57c13ccd41d214 */
mrb_value
mrb_UV_UvUdpT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvUdpT.belongs_to_ruby only accepts objects of type UV::UvUdpT");
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

/* MRUBY_BINDING: UvUdpT::send_queue_size_reader */
/* sha: b84857080d4ee3007c39483aecaaca4bec6da25db78caa8a77bb8e942bad3e72 */
#if BIND_UvUdpT_send_queue_size_FIELD_READER
/* get_send_queue_size
 *
 * Return Type: size_t
 */
mrb_value
mrb_UV_UvUdpT_get_send_queue_size(mrb_state* mrb, mrb_value self) {
  uv_udp_t * native_self = mruby_unbox_uv_udp_t(self);

  size_t native_send_queue_size = native_self->send_queue_size;

  mrb_value send_queue_size = mrb_fixnum_value(native_send_queue_size);

  return send_queue_size;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpT::send_queue_size_writer */
/* sha: dff3209700ea4ea7a36ad8f9fa3e71e5d105e3c2cc7edb447ec0651fe5f44994 */
#if BIND_UvUdpT_send_queue_size_FIELD_WRITER
/* set_send_queue_size
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_UV_UvUdpT_set_send_queue_size(mrb_state* mrb, mrb_value self) {
  uv_udp_t * native_self = mruby_unbox_uv_udp_t(self);
  mrb_int native_send_queue_size;

  mrb_get_args(mrb, "i", &native_send_queue_size);

  native_self->send_queue_size = native_send_queue_size;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpT::send_queue_count_reader */
/* sha: d6d0def9a3b3d2de0d0fa443957fc7bcfa5400608eee51ab5aa6334f514c9664 */
#if BIND_UvUdpT_send_queue_count_FIELD_READER
/* get_send_queue_count
 *
 * Return Type: size_t
 */
mrb_value
mrb_UV_UvUdpT_get_send_queue_count(mrb_state* mrb, mrb_value self) {
  uv_udp_t * native_self = mruby_unbox_uv_udp_t(self);

  size_t native_send_queue_count = native_self->send_queue_count;

  mrb_value send_queue_count = mrb_fixnum_value(native_send_queue_count);

  return send_queue_count;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpT::send_queue_count_writer */
/* sha: 998d7f4d5f2a97d6f6648138d4aba9a8a5e1d4b9888bf2e6b173ff0e283d019f */
#if BIND_UvUdpT_send_queue_count_FIELD_WRITER
/* set_send_queue_count
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_UV_UvUdpT_set_send_queue_count(mrb_state* mrb, mrb_value self) {
  uv_udp_t * native_self = mruby_unbox_uv_udp_t(self);
  mrb_int native_send_queue_count;

  mrb_get_args(mrb, "i", &native_send_queue_count);

  native_self->send_queue_count = native_send_queue_count;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvUdpT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvUdpT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpT::class_definition */
/* sha: 3052eebb97c64bb74879975e23c287ea79687733146c0b21d14f5a6f29348c30 */
  struct RClass* UvUdpT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvUdpT", UvHandleT_class(mrb));
  MRB_SET_INSTANCE_TT(UvUdpT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpT::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpT::class_method_definitions */
/* sha: 8dadd37938981b8a214c5da95841315a1b602a54031048765d7080c1500fd0a6 */
#if BIND_UvUdpT_INITIALIZE
  mrb_define_method(mrb, UvUdpT_class, "initialize", mrb_UV_UvUdpT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvUdpT_class, "disown", mrb_UV_UvUdpT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvUdpT_class, "belongs_to_ruby?", mrb_UV_UvUdpT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpT::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpT::attr_definitions */
/* sha: 01fb762be80284bdf2a0c3475ce0958aacff1ee91f03fe34bc24f534c49c59ae */
  /*
   * Fields
   */
#if BIND_UvUdpT_send_queue_size_FIELD_READER
  mrb_define_method(mrb, UvUdpT_class, "send_queue_size", mrb_UV_UvUdpT_get_send_queue_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvUdpT_send_queue_size_FIELD_WRITER
  mrb_define_method(mrb, UvUdpT_class, "send_queue_size=", mrb_UV_UvUdpT_set_send_queue_size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvUdpT_send_queue_count_FIELD_READER
  mrb_define_method(mrb, UvUdpT_class, "send_queue_count", mrb_UV_UvUdpT_get_send_queue_count, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvUdpT_send_queue_count_FIELD_WRITER
  mrb_define_method(mrb, UvUdpT_class, "send_queue_count=", mrb_UV_UvUdpT_set_send_queue_count, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpT::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpT::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
