/*
 * uv_interface_address_t
 * Defined in file uv.h @ line 231
 */

#include "mruby_UV.h"

#if BIND_InterfaceAddress_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InterfaceAddress::initialize */
/* sha: a9999cc00d4155154f3c58364f898e64acff797fdc81ae0ba031878d30362026 */
#if BIND_InterfaceAddress_INITIALIZE
mrb_value
mrb_UV_InterfaceAddress_initialize(mrb_state* mrb, mrb_value self) {

  uv_interface_address_t* native_object = (uv_interface_address_t*)calloc(1, sizeof(uv_interface_address_t));
  mruby_gift_uv_interface_address_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: InterfaceAddress::name_reader */
/* sha: dbe85ea8dac078a17d915a3db5a3e6b6e1370f6515388f28d029968a0126a18b */
#if BIND_InterfaceAddress_name_FIELD_READER
mrb_value
mrb_UV_InterfaceAddress_get_name(mrb_state* mrb, mrb_value self) {
  uv_interface_address_t * native_self = mruby_unbox_uv_interface_address_t(self);

  char * native_name = native_self->name;

  mrb_value name = TODO_mruby_box_char_PTR(mrb, native_name);

  return name;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InterfaceAddress::name_writer */
/* sha: d9c2aaa8b37693ba0861657437d4391d42556a4f361d8a24004daffef2bc48db */
#if BIND_InterfaceAddress_name_FIELD_WRITER
mrb_value
mrb_UV_InterfaceAddress_set_name(mrb_state* mrb, mrb_value self) {
  uv_interface_address_t * native_self = mruby_unbox_uv_interface_address_t(self);
  mrb_value name;

  mrb_get_args(mrb, "o", &name);

  /* type checking */
  TODO_type_check_char_PTR(name);

  char * native_name = TODO_mruby_unbox_char_PTR(name);

  native_self->name = native_name;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InterfaceAddress::phys_addr_reader */
/* sha: 63ada483227beab7a6d1cb640a3b0dd04278dbd3fab971306a016d85f9a32cab */
#if BIND_InterfaceAddress_phys_addr_FIELD_READER
mrb_value
mrb_UV_InterfaceAddress_get_phys_addr(mrb_state* mrb, mrb_value self) {
  uv_interface_address_t * native_self = mruby_unbox_uv_interface_address_t(self);

  char [6] native_phys_addr = native_self->phys_addr;

  mrb_value phys_addr = TODO_mruby_box_char_[6](mrb, native_phys_addr);

  return phys_addr;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InterfaceAddress::phys_addr_writer */
/* sha: e483872c9b7804e58f2654b58c7f5eb4e6e3e98a7cbafbc4689f34f2b48b8b97 */
#if BIND_InterfaceAddress_phys_addr_FIELD_WRITER
mrb_value
mrb_UV_InterfaceAddress_set_phys_addr(mrb_state* mrb, mrb_value self) {
  uv_interface_address_t * native_self = mruby_unbox_uv_interface_address_t(self);
  mrb_value phys_addr;

  mrb_get_args(mrb, "o", &phys_addr);

  /* type checking */
  TODO_type_check_char_[6](phys_addr);

  char [6] native_phys_addr = TODO_mruby_unbox_char_[6](phys_addr);

  native_self->phys_addr = native_phys_addr;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InterfaceAddress::is_internal_reader */
/* sha: 3f7f39e88703db42f66b63c7c7a950e32ec406b2456b2c6066e4526d0937b9bd */
#if BIND_InterfaceAddress_is_internal_FIELD_READER
mrb_value
mrb_UV_InterfaceAddress_get_is_internal(mrb_state* mrb, mrb_value self) {
  uv_interface_address_t * native_self = mruby_unbox_uv_interface_address_t(self);

  int native_is_internal = native_self->is_internal;

  mrb_value is_internal = mrb_fixnum_value(native_is_internal);

  return is_internal;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InterfaceAddress::is_internal_writer */
/* sha: 5259a27b3117cc457930ac90a86ca7d1ac6daf897b03028baff22108c1688018 */
#if BIND_InterfaceAddress_is_internal_FIELD_WRITER
mrb_value
mrb_UV_InterfaceAddress_set_is_internal(mrb_state* mrb, mrb_value self) {
  uv_interface_address_t * native_self = mruby_unbox_uv_interface_address_t(self);
  mrb_int native_is_internal;

  mrb_get_args(mrb, "i", &native_is_internal);

  native_self->is_internal = native_is_internal;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InterfaceAddress::address_reader */
/* sha: 94c557e5c7914d7c30e271ccd64947c80fa53d5bf30f68ad5faae556e98e6c4e */
#if BIND_InterfaceAddress_address_FIELD_READER
mrb_value
mrb_UV_InterfaceAddress_get_address(mrb_state* mrb, mrb_value self) {
  uv_interface_address_t * native_self = mruby_unbox_uv_interface_address_t(self);

  union (anonymous union at headers/uv.h:993:3) native_address = native_self->address;

  mrb_value address = TODO_mruby_box_union_LPAREN_anonymous_union_at_headers/uv.h:993:3_RPAREN(mrb, native_address);

  return address;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InterfaceAddress::address_writer */
/* sha: b9f5c9f69d65de0c26e50ff3c58e2d634181b506ae27f243a210f3c762865a46 */
#if BIND_InterfaceAddress_address_FIELD_WRITER
mrb_value
mrb_UV_InterfaceAddress_set_address(mrb_state* mrb, mrb_value self) {
  uv_interface_address_t * native_self = mruby_unbox_uv_interface_address_t(self);
  mrb_value address;

  mrb_get_args(mrb, "o", &address);

  /* type checking */
  TODO_type_check_union_LPAREN_anonymous_union_at_headers/uv.h:993:3_RPAREN(address);

  union (anonymous union at headers/uv.h:993:3) native_address = TODO_mruby_unbox_union_LPAREN_anonymous_union_at_headers/uv.h:993:3_RPAREN(address);

  native_self->address = native_address;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InterfaceAddress::netmask_reader */
/* sha: 0d541c2c81a842f053b1dc85db9db5ea7a943908ee4fbf07ce6cf6fe155ca904 */
#if BIND_InterfaceAddress_netmask_FIELD_READER
mrb_value
mrb_UV_InterfaceAddress_get_netmask(mrb_state* mrb, mrb_value self) {
  uv_interface_address_t * native_self = mruby_unbox_uv_interface_address_t(self);

  union (anonymous union at headers/uv.h:997:3) native_netmask = native_self->netmask;

  mrb_value netmask = TODO_mruby_box_union_LPAREN_anonymous_union_at_headers/uv.h:997:3_RPAREN(mrb, native_netmask);

  return netmask;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InterfaceAddress::netmask_writer */
/* sha: 4e208019d1216809c4efea3d3df5dcd18ecf3e2cc55c6457bfa436289535ce42 */
#if BIND_InterfaceAddress_netmask_FIELD_WRITER
mrb_value
mrb_UV_InterfaceAddress_set_netmask(mrb_state* mrb, mrb_value self) {
  uv_interface_address_t * native_self = mruby_unbox_uv_interface_address_t(self);
  mrb_value netmask;

  mrb_get_args(mrb, "o", &netmask);

  /* type checking */
  TODO_type_check_union_LPAREN_anonymous_union_at_headers/uv.h:997:3_RPAREN(netmask);

  union (anonymous union at headers/uv.h:997:3) native_netmask = TODO_mruby_unbox_union_LPAREN_anonymous_union_at_headers/uv.h:997:3_RPAREN(netmask);

  native_self->netmask = native_netmask;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_InterfaceAddress_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InterfaceAddress::class_definition */
/* sha: 70798e4880d3ae71cf52a47a6e259302c9afbd1e2720b2748bf5e6cc80151fa8 */
  struct RClass* InterfaceAddress_class = mrb_define_class_under(mrb, UV_module(mrb), "InterfaceAddress", mrb->object_class);
  MRB_SET_INSTANCE_TT(InterfaceAddress_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InterfaceAddress::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InterfaceAddress::class_method_definitions */
/* sha: 6fdff8835da67267d71cf9adc2306d528c2f305fefadc8694b81fdb756846211 */
#if BIND_InterfaceAddress_INITIALIZE
  mrb_define_method(mrb, InterfaceAddress_class, "initialize", mrb_UV_InterfaceAddress_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InterfaceAddress::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InterfaceAddress::attr_definitions */
/* sha: 82ed5f77405861ee8c0b41593b022dc6511a805a65965aff5f1816e610d7a84f */
  /*
   * Fields
   */
#if BIND_InterfaceAddress_name_FIELD_READER
  mrb_define_method(mrb, InterfaceAddress_class, "name", mrb_UV_InterfaceAddress_get_name, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_InterfaceAddress_name_FIELD_WRITER
  mrb_define_method(mrb, InterfaceAddress_class, "name=", mrb_UV_InterfaceAddress_set_name, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_InterfaceAddress_phys_addr_FIELD_READER
  mrb_define_method(mrb, InterfaceAddress_class, "phys_addr", mrb_UV_InterfaceAddress_get_phys_addr, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_InterfaceAddress_phys_addr_FIELD_WRITER
  mrb_define_method(mrb, InterfaceAddress_class, "phys_addr=", mrb_UV_InterfaceAddress_set_phys_addr, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_InterfaceAddress_is_internal_FIELD_READER
  mrb_define_method(mrb, InterfaceAddress_class, "is_internal", mrb_UV_InterfaceAddress_get_is_internal, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_InterfaceAddress_is_internal_FIELD_WRITER
  mrb_define_method(mrb, InterfaceAddress_class, "is_internal=", mrb_UV_InterfaceAddress_set_is_internal, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_InterfaceAddress_address_FIELD_READER
  mrb_define_method(mrb, InterfaceAddress_class, "address", mrb_UV_InterfaceAddress_get_address, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_InterfaceAddress_address_FIELD_WRITER
  mrb_define_method(mrb, InterfaceAddress_class, "address=", mrb_UV_InterfaceAddress_set_address, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_InterfaceAddress_netmask_FIELD_READER
  mrb_define_method(mrb, InterfaceAddress_class, "netmask", mrb_UV_InterfaceAddress_get_netmask, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_InterfaceAddress_netmask_FIELD_WRITER
  mrb_define_method(mrb, InterfaceAddress_class, "netmask=", mrb_UV_InterfaceAddress_set_netmask, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: InterfaceAddress::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
