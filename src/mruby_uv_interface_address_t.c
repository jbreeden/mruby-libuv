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
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
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
/* sha: 2131e51ccb5eddb8dd147d40e094108038164e1b2803559fbffdca43eb4f04ac */
#if BIND_InterfaceAddress_name_FIELD_READER
/* get_name
 *
 * Return Type: char *
 */
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
/* sha: a4be15d38f5c174266899ed3116ac2e63b7ab1bf17a2cb3754a0a0db3bd3883e */
#if BIND_InterfaceAddress_name_FIELD_WRITER
/* set_name
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_UV_InterfaceAddress_set_name(mrb_state* mrb, mrb_value self) {
  uv_interface_address_t * native_self = mruby_unbox_uv_interface_address_t(self);
  mrb_value name;

  mrb_get_args(mrb, "o", &name);

  /* type checking */
  TODO_type_check_char_PTR(name);

  char * native_name = TODO_mruby_unbox_char_PTR(name);

  native_self->name = native_name;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InterfaceAddress::phys_addr_reader */
/* sha: 4033ff294ab26017498c94a681b1b92bd71c28489b0324430175d0d25687af7c */
#if BIND_InterfaceAddress_phys_addr_FIELD_READER
/* get_phys_addr
 *
 * Return Type: char [6]
 */
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
/* sha: c7ca97c101f4e7ed094624c9ffbfd73a0f635b31770253a8917f833504287f26 */
#if BIND_InterfaceAddress_phys_addr_FIELD_WRITER
/* set_phys_addr
 *
 * Parameters:
 * - value: char [6]
 */
mrb_value
mrb_UV_InterfaceAddress_set_phys_addr(mrb_state* mrb, mrb_value self) {
  uv_interface_address_t * native_self = mruby_unbox_uv_interface_address_t(self);
  mrb_value phys_addr;

  mrb_get_args(mrb, "o", &phys_addr);

  /* type checking */
  TODO_type_check_char_[6](phys_addr);

  char [6] native_phys_addr = TODO_mruby_unbox_char_[6](phys_addr);

  native_self->phys_addr = native_phys_addr;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InterfaceAddress::is_internal_reader */
/* sha: fc56f6b73a4f9bcf7ae19d6c7e4f295ea76c410017737dd1ad7f2185a8c07ce2 */
#if BIND_InterfaceAddress_is_internal_FIELD_READER
/* get_is_internal
 *
 * Return Type: int
 */
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
/* sha: f2e0de5fbd9ee4dfbc0809d67b373f98b2f6056b0031e3e6d86fc99fb2fb679d */
#if BIND_InterfaceAddress_is_internal_FIELD_WRITER
/* set_is_internal
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_InterfaceAddress_set_is_internal(mrb_state* mrb, mrb_value self) {
  uv_interface_address_t * native_self = mruby_unbox_uv_interface_address_t(self);
  mrb_int native_is_internal;

  mrb_get_args(mrb, "i", &native_is_internal);

  native_self->is_internal = native_is_internal;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InterfaceAddress::address_reader */
/* sha: b3e9641042cf3c38a2c80a24b218959ab132c61dbc02bb834460e9e0c356d227 */
#if BIND_InterfaceAddress_address_FIELD_READER
/* get_address
 *
 * Return Type: union (anonymous union at headers/uv.h:993:3)
 */
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
/* sha: 7401b2a963328dee18221d3ab7f130b9ca8581b6195076ade7cec3e3b3b4ceae */
#if BIND_InterfaceAddress_address_FIELD_WRITER
/* set_address
 *
 * Parameters:
 * - value: union (anonymous union at headers/uv.h:993:3)
 */
mrb_value
mrb_UV_InterfaceAddress_set_address(mrb_state* mrb, mrb_value self) {
  uv_interface_address_t * native_self = mruby_unbox_uv_interface_address_t(self);
  mrb_value address;

  mrb_get_args(mrb, "o", &address);

  /* type checking */
  TODO_type_check_union_LPAREN_anonymous_union_at_headers/uv.h:993:3_RPAREN(address);

  union (anonymous union at headers/uv.h:993:3) native_address = TODO_mruby_unbox_union_LPAREN_anonymous_union_at_headers/uv.h:993:3_RPAREN(address);

  native_self->address = native_address;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InterfaceAddress::netmask_reader */
/* sha: f2827b70e4668beb396b6fbb76d6157b68e88e88200ad5cc5f7fdefbdbbb9cb0 */
#if BIND_InterfaceAddress_netmask_FIELD_READER
/* get_netmask
 *
 * Return Type: union (anonymous union at headers/uv.h:997:3)
 */
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
/* sha: be03d4f63a7f740528f34209c9645de6e1b817c3ec088f36d245ed4bb812abe7 */
#if BIND_InterfaceAddress_netmask_FIELD_WRITER
/* set_netmask
 *
 * Parameters:
 * - value: union (anonymous union at headers/uv.h:997:3)
 */
mrb_value
mrb_UV_InterfaceAddress_set_netmask(mrb_state* mrb, mrb_value self) {
  uv_interface_address_t * native_self = mruby_unbox_uv_interface_address_t(self);
  mrb_value netmask;

  mrb_get_args(mrb, "o", &netmask);

  /* type checking */
  TODO_type_check_union_LPAREN_anonymous_union_at_headers/uv.h:997:3_RPAREN(netmask);

  union (anonymous union at headers/uv.h:997:3) native_netmask = TODO_mruby_unbox_union_LPAREN_anonymous_union_at_headers/uv.h:997:3_RPAREN(netmask);

  native_self->netmask = native_netmask;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_InterfaceAddress_init(mrb_state* mrb) {
/* MRUBY_BINDING: InterfaceAddress::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
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

/* MRUBY_BINDING: InterfaceAddress::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InterfaceAddress::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InterfaceAddress::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
