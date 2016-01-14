/*
 * uv_udp_send_t
 * Defined in file uv.h @ line 225
 */

#include "mruby_UV.h"

#if BIND_UvUdpSendT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvUdpSendT::initialize */
/* sha: 004ee2b27cb7e6329ff2b27ea3c1507979ad45be72b6cdfd5d706f3b812dda92 */
#if BIND_UvUdpSendT_INITIALIZE
mrb_value
mrb_UV_UvUdpSendT_initialize(mrb_state* mrb, mrb_value self) {
  uv_udp_send_t* native_object = (uv_udp_send_t*)calloc(1, sizeof(uv_udp_send_t));
  mruby_giftwrap_uv_udp_send_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpSendT::initialize */
/* sha: f5a42ef86c74c65e503ca18ccbfd898e0a037c3b3c18922ba4f422d981aef8c0 */
mrb_value
mrb_UV_UvUdpSendT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvUdpSendT.disown only accepts objects of type UV::UvUdpSendT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpSendT::belongs_to_ruby */
/* sha: a61e720a6f170e9ff323d95b1710a277b51dc8906364594d0201f1b8c78c41bb */
mrb_value
mrb_UV_UvUdpSendT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvUdpSendT.belongs_to_ruby only accepts objects of type UV::UvUdpSendT");
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

/* MRUBY_BINDING: UvUdpSendT::uv_udp_t_reader */
/* sha: 8fe2bbbf2b334c482fe89ba260f426d5fd81bdf366952bd8b57cc921b250f084 */
#if BIND_UvUdpSendT_uv_udp_t_FIELD_READER
/* get_uv_udp_t
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvUdpSendT_get_uv_udp_t(mrb_state* mrb, mrb_value self) {
  uv_udp_send_t * native_self = mruby_unbox_uv_udp_send_t(self);

  int native_uv_udp_t = native_self->uv_udp_t;

  mrb_value uv_udp_t = mrb_fixnum_value(native_uv_udp_t);

  return uv_udp_t;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpSendT::uv_udp_t_writer */
/* sha: 87743d0da8d6a7ca7347cd82b4425f55b94d2237be3cf9c4183f211619e6b46e */
#if BIND_UvUdpSendT_uv_udp_t_FIELD_WRITER
/* set_uv_udp_t
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvUdpSendT_set_uv_udp_t(mrb_state* mrb, mrb_value self) {
  uv_udp_send_t * native_self = mruby_unbox_uv_udp_send_t(self);
  mrb_int native_uv_udp_t;

  mrb_get_args(mrb, "i", &native_uv_udp_t);

  native_self->uv_udp_t = native_uv_udp_t;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpSendT::cb_reader */
/* sha: 9490c4590d759960b9bb24329c48123398f87128681d3802b917a4a84cafff44 */
#if BIND_UvUdpSendT_cb_FIELD_READER
/* get_cb
 *
 * Return Type: uv_udp_send_cb
 */
mrb_value
mrb_UV_UvUdpSendT_get_cb(mrb_state* mrb, mrb_value self) {
  uv_udp_send_t * native_self = mruby_unbox_uv_udp_send_t(self);

  uv_udp_send_cb native_cb = native_self->cb;

  mrb_value cb = TODO_mruby_box_uv_udp_send_cb(mrb, native_cb);

  return cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpSendT::cb_writer */
/* sha: d82ed5d4f3e11385fbd9a5caf756d37da333a6975c6ea369d827698961c92491 */
#if BIND_UvUdpSendT_cb_FIELD_WRITER
/* set_cb
 *
 * Parameters:
 * - value: uv_udp_send_cb
 */
mrb_value
mrb_UV_UvUdpSendT_set_cb(mrb_state* mrb, mrb_value self) {
  uv_udp_send_t * native_self = mruby_unbox_uv_udp_send_t(self);
  mrb_value cb;

  mrb_get_args(mrb, "o", &cb);

  /* type checking */
  TODO_type_check_uv_udp_send_cb(cb);

  uv_udp_send_cb native_cb = TODO_mruby_unbox_uv_udp_send_cb(cb);

  native_self->cb = native_cb;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpSendT::_reader */
/* sha: 4c68f12b7395559873e31bac6f91898a0a1f1de9e8805ba6cd3301a10350e4ea */
#if BIND_UvUdpSendT__FIELD_READER
/* get_
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvUdpSendT_get_(mrb_state* mrb, mrb_value self) {
  uv_udp_send_t * native_self = mruby_unbox_uv_udp_send_t(self);

  int native_ = native_self->;

  mrb_value  = mrb_fixnum_value(native_);

  return ;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpSendT::_writer */
/* sha: 5c3b14203c3e02ff6021fac9173528b7b8505e4a68417c283c3b1d1995eca3db */
#if BIND_UvUdpSendT__FIELD_WRITER
/* set_
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvUdpSendT_set_(mrb_state* mrb, mrb_value self) {
  uv_udp_send_t * native_self = mruby_unbox_uv_udp_send_t(self);
  mrb_int native_;

  mrb_get_args(mrb, "i", &native_);

  native_self-> = native_;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvUdpSendT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvUdpSendT::class_definition */
/* sha: 15b568f9533a108f62f74114958f87124e69d4c922402081616df9fda1361074 */
  struct RClass* UvUdpSendT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvUdpSendT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvUdpSendT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpSendT::class_method_definitions */
/* sha: bb2c51e1643d5d7776894c1076857fecfedac3dfc8b9b595e543bf8ed50fb6db */
#if BIND_UvUdpSendT_INITIALIZE
  mrb_define_method(mrb, UvUdpSendT_class, "initialize", mrb_UV_UvUdpSendT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvUdpSendT_class, "disown", mrb_UV_UvUdpSendT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvUdpSendT_class, "belongs_to_ruby?", mrb_UV_UvUdpSendT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpSendT::attr_definitions */
/* sha: 7f519dee0885f49ac8eab92323c43a355c477c8c3d7b8d3afb4d6e2117678fba */
  /*
   * Fields
   */
#if BIND_UvUdpSendT_uv_udp_t_FIELD_READER
  mrb_define_method(mrb, UvUdpSendT_class, "uv_udp_t", mrb_UV_UvUdpSendT_get_uv_udp_t, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvUdpSendT_uv_udp_t_FIELD_WRITER
  mrb_define_method(mrb, UvUdpSendT_class, "uv_udp_t=", mrb_UV_UvUdpSendT_set_uv_udp_t, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvUdpSendT_cb_FIELD_READER
  mrb_define_method(mrb, UvUdpSendT_class, "cb", mrb_UV_UvUdpSendT_get_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvUdpSendT_cb_FIELD_WRITER
  mrb_define_method(mrb, UvUdpSendT_class, "cb=", mrb_UV_UvUdpSendT_set_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvUdpSendT__FIELD_READER
  mrb_define_method(mrb, UvUdpSendT_class, "", mrb_UV_UvUdpSendT_get_, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvUdpSendT__FIELD_WRITER
  mrb_define_method(mrb, UvUdpSendT_class, "=", mrb_UV_UvUdpSendT_set_, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpSendT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
