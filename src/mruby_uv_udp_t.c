/*
 * uv_udp_t
 * Defined in file uv.h @ line 204
 */

#include "mruby_UV.h"

#if BIND_UDP_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UDP::initialize */
/* sha: 7dd3aefb25d9338329494f6573b99622a907cbc38887955c4c78ba0d3d451898 */
#if BIND_UDP_INITIALIZE
mrb_value
mrb_UV_UDP_initialize(mrb_state* mrb, mrb_value self) {
  uv_udp_t* native_object = (uv_udp_t*)new_mruby_uv_handle(mrb, self, sizeof(uv_udp_t));
  mruby_gift_uv_udp_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: UDP::send_queue_size_reader */
/* sha: e2c7bd04b406bf96ec117641123d3636975be09b6af281ac75ac911f65263767 */
#if BIND_UDP_send_queue_size_FIELD_READER
mrb_value
mrb_UV_UDP_get_send_queue_size(mrb_state* mrb, mrb_value self) {
  uv_udp_t * native_self = mruby_unbox_uv_udp_t(self);

  size_t native_send_queue_size = native_self->send_queue_size;

  mrb_value send_queue_size = mrb_fixnum_value(native_send_queue_size);

  return send_queue_size;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UDP::send_queue_size_writer */
/* sha: 941066beb58e47c37e9d2f773c3a8daa3c3644e2def7b38c98e4cbb3bc788fc4 */
#if BIND_UDP_send_queue_size_FIELD_WRITER
mrb_value
mrb_UV_UDP_set_send_queue_size(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UDP::send_queue_count_reader */
/* sha: 62f719ac8a623a4c08f2dbb5c3e76afa86be3a4dfe2c6e00924be8a1785a30b3 */
#if BIND_UDP_send_queue_count_FIELD_READER
mrb_value
mrb_UV_UDP_get_send_queue_count(mrb_state* mrb, mrb_value self) {
  uv_udp_t * native_self = mruby_unbox_uv_udp_t(self);

  size_t native_send_queue_count = native_self->send_queue_count;

  mrb_value send_queue_count = mrb_fixnum_value(native_send_queue_count);

  return send_queue_count;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UDP::send_queue_count_writer */
/* sha: f4b2aa4073a7bfe8e5490cf3f31d03ff300dcd63305049bdf7e197ce202693ed */
#if BIND_UDP_send_queue_count_FIELD_WRITER
mrb_value
mrb_UV_UDP_set_send_queue_count(mrb_state* mrb, mrb_value self) {
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


void mrb_UV_UDP_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UDP::class_definition */
/* sha: 586bf7a4aa7c02b8ff593ad8cd91c4ae9f04ed6c05fa678097b520e8218342bb */
  struct RClass* UDP_class = mrb_define_class_under(mrb, UV_module(mrb), "UDP", Handle_class(mrb));
  MRB_SET_INSTANCE_TT(UDP_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UDP::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UDP::class_method_definitions */
/* sha: 13490f481f9b6c6834cea88f5de63e2e1e118abb43524e21ff44720bee5e819c */
#if BIND_UDP_INITIALIZE
  mrb_define_method(mrb, UDP_class, "initialize", mrb_UV_UDP_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UDP::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UDP::attr_definitions */
/* sha: d3f5a08104ed7102ed50a527849681918a3b7dc93e21e6c6e74e957120497a43 */
  /*
   * Fields
   */
#if BIND_UDP_send_queue_size_FIELD_READER
  mrb_define_method(mrb, UDP_class, "send_queue_size", mrb_UV_UDP_get_send_queue_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UDP_send_queue_size_FIELD_WRITER
  mrb_define_method(mrb, UDP_class, "send_queue_size=", mrb_UV_UDP_set_send_queue_size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UDP_send_queue_count_FIELD_READER
  mrb_define_method(mrb, UDP_class, "send_queue_count", mrb_UV_UDP_get_send_queue_count, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UDP_send_queue_count_FIELD_WRITER
  mrb_define_method(mrb, UDP_class, "send_queue_count=", mrb_UV_UDP_set_send_queue_count, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: UDP::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
