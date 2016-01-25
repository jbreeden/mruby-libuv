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
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  uv_udp_t* native_object = (uv_udp_t*)calloc(1, sizeof(uv_udp_t));
  mruby_gift_uv_udp_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: UDP::send_queue_size_reader */
/* sha: 6d2f5030dff941ee5023369ba4177ad0598f0361483dbd852785d8ba4a9efbae */
#if BIND_UDP_send_queue_size_FIELD_READER
/* get_send_queue_size
 *
 * Return Type: size_t
 */
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
/* sha: e13b3e307fbbcb5c921749a6ce3c09931f3f8b8247dba43797c3030c46153c2b */
#if BIND_UDP_send_queue_size_FIELD_WRITER
/* set_send_queue_size
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_UV_UDP_set_send_queue_size(mrb_state* mrb, mrb_value self) {
  uv_udp_t * native_self = mruby_unbox_uv_udp_t(self);
  mrb_int native_send_queue_size;

  mrb_get_args(mrb, "i", &native_send_queue_size);

  native_self->send_queue_size = native_send_queue_size;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UDP::send_queue_count_reader */
/* sha: b143b9d08f377455b6a050ef137c81303e11d47746141efa8582894253800c09 */
#if BIND_UDP_send_queue_count_FIELD_READER
/* get_send_queue_count
 *
 * Return Type: size_t
 */
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
/* sha: 022c93e0be20c0301e50070704dfdda9a5be4978954c27fe9f3590115ed8119c */
#if BIND_UDP_send_queue_count_FIELD_WRITER
/* set_send_queue_count
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_UV_UDP_set_send_queue_count(mrb_state* mrb, mrb_value self) {
  uv_udp_t * native_self = mruby_unbox_uv_udp_t(self);
  mrb_int native_send_queue_count;

  mrb_get_args(mrb, "i", &native_send_queue_count);

  native_self->send_queue_count = native_send_queue_count;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UDP_init(mrb_state* mrb) {
/* MRUBY_BINDING: UDP::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UDP::class_definition */
/* sha: 586bf7a4aa7c02b8ff593ad8cd91c4ae9f04ed6c05fa678097b520e8218342bb */
  struct RClass* UDP_class = mrb_define_class_under(mrb, UV_module(mrb), "UDP", mrb->object_class);
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

/* MRUBY_BINDING: UDP::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UDP::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UDP::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
