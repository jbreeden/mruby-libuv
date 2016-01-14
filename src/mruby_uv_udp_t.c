/*
 * uv_udp_t
 * Defined in file uv.h @ line 204
 */

#include "mruby_UV.h"

#if BIND_UvUdpT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvUdpT::initialize */
/* sha: bccb7c4166fd68b981fe54ee554a3295cca3880ac21ff848d6880782f2bbca83 */
#if BIND_UvUdpT_INITIALIZE
mrb_value
mrb_UV_UvUdpT_initialize(mrb_state* mrb, mrb_value self) {
  uv_udp_t* native_object = (uv_udp_t*)calloc(1, sizeof(uv_udp_t));
  mruby_giftwrap_uv_udp_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpT::initialize */
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

/* MRUBY_BINDING: UvUdpT::size_t_reader */
/* sha: 611abf08e42af490fed8d8793a328beb2ad289a8a2e200fa4b66ccd245b09bea */
#if BIND_UvUdpT_size_t_FIELD_READER
/* get_size_t
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvUdpT_get_size_t(mrb_state* mrb, mrb_value self) {
  uv_udp_t * native_self = mruby_unbox_uv_udp_t(self);

  int native_size_t = native_self->size_t;

  mrb_value size_t = mrb_fixnum_value(native_size_t);

  return size_t;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpT::size_t_writer */
/* sha: 79142de7400ebdf0077680489f4b68c1480b357f3bcabf82faeae49b70de2f60 */
#if BIND_UvUdpT_size_t_FIELD_WRITER
/* set_size_t
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvUdpT_set_size_t(mrb_state* mrb, mrb_value self) {
  uv_udp_t * native_self = mruby_unbox_uv_udp_t(self);
  mrb_int native_size_t;

  mrb_get_args(mrb, "i", &native_size_t);

  native_self->size_t = native_size_t;
  
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

/* MRUBY_BINDING: UvUdpT::_reader */
/* sha: 239af02fcdf5ae7417f2924331d4cdf97ccbf5a62614f922b047e6660fea17eb */
#if BIND_UvUdpT__FIELD_READER
/* get_
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvUdpT_get_(mrb_state* mrb, mrb_value self) {
  uv_udp_t * native_self = mruby_unbox_uv_udp_t(self);

  int native_ = native_self->;

  mrb_value  = mrb_fixnum_value(native_);

  return ;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpT::_writer */
/* sha: 4fb0d2a898a7f1856717f8883cf6cd371185c29dd033291d46fe45641cd8a704 */
#if BIND_UvUdpT__FIELD_WRITER
/* set_
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvUdpT_set_(mrb_state* mrb, mrb_value self) {
  uv_udp_t * native_self = mruby_unbox_uv_udp_t(self);
  mrb_int native_;

  mrb_get_args(mrb, "i", &native_);

  native_self-> = native_;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvUdpT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvUdpT::class_definition */
/* sha: 3052eebb97c64bb74879975e23c287ea79687733146c0b21d14f5a6f29348c30 */
  struct RClass* UvUdpT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvUdpT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvUdpT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpT::class_method_definitions */
/* sha: 8dadd37938981b8a214c5da95841315a1b602a54031048765d7080c1500fd0a6 */
#if BIND_UvUdpT_INITIALIZE
  mrb_define_method(mrb, UvUdpT_class, "initialize", mrb_UV_UvUdpT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvUdpT_class, "disown", mrb_UV_UvUdpT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvUdpT_class, "belongs_to_ruby?", mrb_UV_UvUdpT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpT::attr_definitions */
/* sha: 3a1e1eec93a789f654d718ef9eb0888fb2166aaf4c52d982dcfd6aefea8e2af6 */
  /*
   * Fields
   */
#if BIND_UvUdpT_size_t_FIELD_READER
  mrb_define_method(mrb, UvUdpT_class, "size_t", mrb_UV_UvUdpT_get_size_t, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvUdpT_size_t_FIELD_WRITER
  mrb_define_method(mrb, UvUdpT_class, "size_t=", mrb_UV_UvUdpT_set_size_t, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvUdpT_send_queue_count_FIELD_READER
  mrb_define_method(mrb, UvUdpT_class, "send_queue_count", mrb_UV_UvUdpT_get_send_queue_count, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvUdpT_send_queue_count_FIELD_WRITER
  mrb_define_method(mrb, UvUdpT_class, "send_queue_count=", mrb_UV_UvUdpT_set_send_queue_count, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvUdpT__FIELD_READER
  mrb_define_method(mrb, UvUdpT_class, "", mrb_UV_UvUdpT_get_, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvUdpT__FIELD_WRITER
  mrb_define_method(mrb, UvUdpT_class, "=", mrb_UV_UvUdpT_set_, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
