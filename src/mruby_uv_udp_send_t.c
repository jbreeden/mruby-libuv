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

/* MRUBY_BINDING: UvUdpSendT::handle_reader */
/* sha: e73192b0aa9e9d9eaa8bff5b3cdb609b82533914bb4731eba96494a385422d1f */
#if BIND_UvUdpSendT_handle_FIELD_READER
/* get_handle
 *
 * Return Type: uv_udp_t *
 */
mrb_value
mrb_UV_UvUdpSendT_get_handle(mrb_state* mrb, mrb_value self) {
  uv_udp_send_t * native_self = mruby_unbox_uv_udp_send_t(self);

  uv_udp_t * native_handle = native_self->handle;

  mrb_value handle = (native_handle == NULL ? mrb_nil_value() : mruby_box_uv_udp_t(mrb, native_handle));

  return handle;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpSendT::handle_writer */
/* sha: e4007c643e0450f2130c7c33bca26602bd034b2b7235b8f2be3baf2334ab2b94 */
#if BIND_UvUdpSendT_handle_FIELD_WRITER
/* set_handle
 *
 * Parameters:
 * - value: uv_udp_t *
 */
mrb_value
mrb_UV_UvUdpSendT_set_handle(mrb_state* mrb, mrb_value self) {
  uv_udp_send_t * native_self = mruby_unbox_uv_udp_send_t(self);
  mrb_value handle;

  mrb_get_args(mrb, "o", &handle);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvUdpT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvUdpT expected");
    return mrb_nil_value();
  }

  uv_udp_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_udp_t(handle));

  native_self->handle = native_handle;
  
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
/* sha: 542ced0e16cd219858b9fa73da369216d8fcade70074cd7db67290147d19bebe */
  /*
   * Fields
   */
#if BIND_UvUdpSendT_handle_FIELD_READER
  mrb_define_method(mrb, UvUdpSendT_class, "handle", mrb_UV_UvUdpSendT_get_handle, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvUdpSendT_handle_FIELD_WRITER
  mrb_define_method(mrb, UvUdpSendT_class, "handle=", mrb_UV_UvUdpSendT_set_handle, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvUdpSendT_cb_FIELD_READER
  mrb_define_method(mrb, UvUdpSendT_class, "cb", mrb_UV_UvUdpSendT_get_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvUdpSendT_cb_FIELD_WRITER
  mrb_define_method(mrb, UvUdpSendT_class, "cb=", mrb_UV_UvUdpSendT_set_cb, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvUdpSendT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
