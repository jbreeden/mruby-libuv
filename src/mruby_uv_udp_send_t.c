/*
 * uv_udp_send_t
 * Defined in file uv.h @ line 225
 */

#include "mruby_UV.h"

#if BIND_UDPSend_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UDPSend::initialize */
/* sha: 3ebf4e2717e2f8228eeb43079df5781db119ddeb171589dcde339aa78d9e66c2 */
#if BIND_UDPSend_INITIALIZE
mrb_value
mrb_UV_UDPSend_initialize(mrb_state* mrb, mrb_value self) {
  uv_udp_send_t* native_object = (uv_udp_send_t*)new_mruby_uv_req(mrb, self, sizeof(uv_udp_send_t));
  mruby_gift_uv_udp_send_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: UDPSend::handle_reader */
/* sha: 9316b1c8f118d7808e701ecbf69abd8be48ddb219654d3db37669fd9aa400584 */
#if BIND_UDPSend_handle_FIELD_READER
mrb_value
mrb_UV_UDPSend_get_handle(mrb_state* mrb, mrb_value self) {
  uv_udp_send_t * native_self = mruby_unbox_uv_udp_send_t(self);

  uv_udp_t * native_handle = native_self->handle;

  mrb_value handle = (native_handle == NULL ? mrb_nil_value() : mruby_box_uv_udp_t(mrb, native_handle));

  return handle;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UDPSend::handle_writer */
/* sha: 94fd3c225e33c364779b14233a81156b1cbcbe918ffe4c0b6a9ea3a67836d5c4 */
#if BIND_UDPSend_handle_FIELD_WRITER
mrb_value
mrb_UV_UDPSend_set_handle(mrb_state* mrb, mrb_value self) {
  uv_udp_send_t * native_self = mruby_unbox_uv_udp_send_t(self);
  mrb_value handle;

  mrb_get_args(mrb, "o", &handle);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UDP_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UDP expected");
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

/* MRUBY_BINDING: UDPSend::cb_reader */
/* sha: 75a6b898b382ef77062cfe95d2b04b83e7059d485137ee4543ec2dae1b7bbe01 */
#if BIND_UDPSend_cb_FIELD_READER
mrb_value
mrb_UV_UDPSend_get_cb(mrb_state* mrb, mrb_value self) {
  uv_udp_send_t * native_self = mruby_unbox_uv_udp_send_t(self);

  uv_udp_send_cb native_cb = native_self->cb;

  mrb_value cb = TODO_mruby_box_uv_udp_send_cb(mrb, native_cb);

  return cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UDPSend::cb_writer */
/* sha: 5a4b8492922fba06ca223ad18a44f3c41b1964cc2d3d7a5cd7ae349eaa95ad93 */
#if BIND_UDPSend_cb_FIELD_WRITER
mrb_value
mrb_UV_UDPSend_set_cb(mrb_state* mrb, mrb_value self) {
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


void mrb_UV_UDPSend_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UDPSend::class_definition */
/* sha: ed73534e5079d22778c37602535848b5986b1f0e37068345db2b4a8ca4228d95 */
  struct RClass* UDPSend_class = mrb_define_class_under(mrb, UV_module(mrb), "UDPSend", Req_class(mrb));
  MRB_SET_INSTANCE_TT(UDPSend_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UDPSend::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UDPSend::class_method_definitions */
/* sha: bb6b8ee05f1e2de7415403155b2dd1b8c9f128d0a9dacfc01b51a7dbe62f6975 */
#if BIND_UDPSend_INITIALIZE
  mrb_define_method(mrb, UDPSend_class, "initialize", mrb_UV_UDPSend_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UDPSend::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UDPSend::attr_definitions */
/* sha: b3810c71aa62c9a72602927f8db750c6c4f38f5937a7b9ecf61ff260e88288e6 */
  /*
   * Fields
   */
#if BIND_UDPSend_handle_FIELD_READER
  mrb_define_method(mrb, UDPSend_class, "handle", mrb_UV_UDPSend_get_handle, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UDPSend_handle_FIELD_WRITER
  mrb_define_method(mrb, UDPSend_class, "handle=", mrb_UV_UDPSend_set_handle, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UDPSend_cb_FIELD_READER
  mrb_define_method(mrb, UDPSend_class, "cb", mrb_UV_UDPSend_get_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UDPSend_cb_FIELD_WRITER
  mrb_define_method(mrb, UDPSend_class, "cb=", mrb_UV_UDPSend_set_cb, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: UDPSend::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
