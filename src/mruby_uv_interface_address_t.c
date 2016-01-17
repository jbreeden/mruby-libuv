/*
 * uv_interface_address_t
 * Defined in file uv.h @ line 231
 */

#include "mruby_UV.h"

#if BIND_UvInterfaceAddressT_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvInterfaceAddressT::initialize */
/* sha: 2be5d6193734493c70437367abcea419c58529ea601e7d039bccd52ee46813c4 */
#if BIND_UvInterfaceAddressT_INITIALIZE
mrb_value
mrb_UV_UvInterfaceAddressT_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Uncomment (and optionally replace) if an initializer is desired.
  uv_interface_address_t* native_object = (uv_interface_address_t*)calloc(1, sizeof(uv_interface_address_t));
  mruby_gift_uv_interface_address_t_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvInterfaceAddressT::disown */
/* sha: ee7959752a0fd2b952371bc2b4829f21a53efac3739656a683480f359259b16a */
mrb_value
mrb_UV_UvInterfaceAddressT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvInterfaceAddressT.disown only accepts objects of type UV::UvInterfaceAddressT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvInterfaceAddressT::belongs_to_ruby */
/* sha: 2018cd8c5e4348dc45b264a97dae9e5816ae23d1a276d3dc25089c8ce936541d */
mrb_value
mrb_UV_UvInterfaceAddressT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvInterfaceAddressT.belongs_to_ruby only accepts objects of type UV::UvInterfaceAddressT");
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

/* MRUBY_BINDING: UvInterfaceAddressT::name_reader */
/* sha: f8100e2c0e3b9f87d1d1cbfb4fe7341bbfd52404b7b86321cefde3187b85a6f9 */
#if BIND_UvInterfaceAddressT_name_FIELD_READER
/* get_name
 *
 * Return Type: char *
 */
mrb_value
mrb_UV_UvInterfaceAddressT_get_name(mrb_state* mrb, mrb_value self) {
  uv_interface_address_t * native_self = mruby_unbox_uv_interface_address_t(self);

  char * native_name = native_self->name;

  mrb_value name = TODO_mruby_box_char_PTR(mrb, native_name);

  return name;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvInterfaceAddressT::name_writer */
/* sha: c63b599274ad83d290d4fdc589afa7b6345424e5e2b16fc34ca7cab95f821aa2 */
#if BIND_UvInterfaceAddressT_name_FIELD_WRITER
/* set_name
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_UV_UvInterfaceAddressT_set_name(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvInterfaceAddressT::phys_addr_reader */
/* sha: 2cb50bfd04cab3125995aa8e00cea1b0a2d215b0f837199124b1e84fe54787c5 */
#if BIND_UvInterfaceAddressT_phys_addr_FIELD_READER
/* get_phys_addr
 *
 * Return Type: char [6]
 */
mrb_value
mrb_UV_UvInterfaceAddressT_get_phys_addr(mrb_state* mrb, mrb_value self) {
  uv_interface_address_t * native_self = mruby_unbox_uv_interface_address_t(self);

  char [6] native_phys_addr = native_self->phys_addr;

  mrb_value phys_addr = TODO_mruby_box_char_[6](mrb, native_phys_addr);

  return phys_addr;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvInterfaceAddressT::phys_addr_writer */
/* sha: 47cd9d1d2b28b5ebd1731c06be1dc6cef4aab4524bebfab712ec2cdea7903673 */
#if BIND_UvInterfaceAddressT_phys_addr_FIELD_WRITER
/* set_phys_addr
 *
 * Parameters:
 * - value: char [6]
 */
mrb_value
mrb_UV_UvInterfaceAddressT_set_phys_addr(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvInterfaceAddressT::is_internal_reader */
/* sha: a43b5550fbdbd9affd9a8b6862e66e520180be02ad8687702e72bfd9d27fe45c */
#if BIND_UvInterfaceAddressT_is_internal_FIELD_READER
/* get_is_internal
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvInterfaceAddressT_get_is_internal(mrb_state* mrb, mrb_value self) {
  uv_interface_address_t * native_self = mruby_unbox_uv_interface_address_t(self);

  int native_is_internal = native_self->is_internal;

  mrb_value is_internal = mrb_fixnum_value(native_is_internal);

  return is_internal;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvInterfaceAddressT::is_internal_writer */
/* sha: 30b012cabe8157c6017dbfd0f22ca86f86f102eb1ee14e9934311613472ffde6 */
#if BIND_UvInterfaceAddressT_is_internal_FIELD_WRITER
/* set_is_internal
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvInterfaceAddressT_set_is_internal(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvInterfaceAddressT::address_reader */
/* sha: f7ec8b9a575d5f85c55b0a3423e138715e68a37ebd1236e944c29ab6f64fabe3 */
#if BIND_UvInterfaceAddressT_address_FIELD_READER
/* get_address
 *
 * Return Type: union (anonymous union at headers/uv.h:993:3)
 */
mrb_value
mrb_UV_UvInterfaceAddressT_get_address(mrb_state* mrb, mrb_value self) {
  uv_interface_address_t * native_self = mruby_unbox_uv_interface_address_t(self);

  union (anonymous union at headers/uv.h:993:3) native_address = native_self->address;

  mrb_value address = TODO_mruby_box_union_LPAREN_anonymous_union_at_headers/uv.h:993:3_RPAREN(mrb, native_address);

  return address;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvInterfaceAddressT::address_writer */
/* sha: 48cda34eebe2ec2a92f59670260d673059804fb48eb112fbb6242b3538449f51 */
#if BIND_UvInterfaceAddressT_address_FIELD_WRITER
/* set_address
 *
 * Parameters:
 * - value: union (anonymous union at headers/uv.h:993:3)
 */
mrb_value
mrb_UV_UvInterfaceAddressT_set_address(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvInterfaceAddressT::netmask_reader */
/* sha: 43208deb97e011ede247130633f2f67e04d14e17f7d46808e146c425c013cc2d */
#if BIND_UvInterfaceAddressT_netmask_FIELD_READER
/* get_netmask
 *
 * Return Type: union (anonymous union at headers/uv.h:997:3)
 */
mrb_value
mrb_UV_UvInterfaceAddressT_get_netmask(mrb_state* mrb, mrb_value self) {
  uv_interface_address_t * native_self = mruby_unbox_uv_interface_address_t(self);

  union (anonymous union at headers/uv.h:997:3) native_netmask = native_self->netmask;

  mrb_value netmask = TODO_mruby_box_union_LPAREN_anonymous_union_at_headers/uv.h:997:3_RPAREN(mrb, native_netmask);

  return netmask;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvInterfaceAddressT::netmask_writer */
/* sha: 2056c056c6438e473aac3a90012a69319fd5b3835882ff39c7ead7190b9235be */
#if BIND_UvInterfaceAddressT_netmask_FIELD_WRITER
/* set_netmask
 *
 * Parameters:
 * - value: union (anonymous union at headers/uv.h:997:3)
 */
mrb_value
mrb_UV_UvInterfaceAddressT_set_netmask(mrb_state* mrb, mrb_value self) {
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


void mrb_UV_UvInterfaceAddressT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvInterfaceAddressT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvInterfaceAddressT::class_definition */
/* sha: 86ab2cb8d1ca9f755de5d5f17fedbd966593ac2afbb75e8a0227126b8fcf5408 */
  struct RClass* UvInterfaceAddressT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvInterfaceAddressT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvInterfaceAddressT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvInterfaceAddressT::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvInterfaceAddressT::class_method_definitions */
/* sha: 99eb461fea4db6aa0129342f57322374f2fcf994098bf2db854e3f86e8dac37e */
#if BIND_UvInterfaceAddressT_INITIALIZE
  mrb_define_method(mrb, UvInterfaceAddressT_class, "initialize", mrb_UV_UvInterfaceAddressT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvInterfaceAddressT_class, "disown", mrb_UV_UvInterfaceAddressT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvInterfaceAddressT_class, "belongs_to_ruby?", mrb_UV_UvInterfaceAddressT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvInterfaceAddressT::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvInterfaceAddressT::attr_definitions */
/* sha: cb6f65b31a8134baf6f6f303c6d5baf1bc4880ac66f43a547911abb503b2b5c8 */
  /*
   * Fields
   */
#if BIND_UvInterfaceAddressT_name_FIELD_READER
  mrb_define_method(mrb, UvInterfaceAddressT_class, "name", mrb_UV_UvInterfaceAddressT_get_name, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvInterfaceAddressT_name_FIELD_WRITER
  mrb_define_method(mrb, UvInterfaceAddressT_class, "name=", mrb_UV_UvInterfaceAddressT_set_name, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvInterfaceAddressT_phys_addr_FIELD_READER
  mrb_define_method(mrb, UvInterfaceAddressT_class, "phys_addr", mrb_UV_UvInterfaceAddressT_get_phys_addr, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvInterfaceAddressT_phys_addr_FIELD_WRITER
  mrb_define_method(mrb, UvInterfaceAddressT_class, "phys_addr=", mrb_UV_UvInterfaceAddressT_set_phys_addr, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvInterfaceAddressT_is_internal_FIELD_READER
  mrb_define_method(mrb, UvInterfaceAddressT_class, "is_internal", mrb_UV_UvInterfaceAddressT_get_is_internal, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvInterfaceAddressT_is_internal_FIELD_WRITER
  mrb_define_method(mrb, UvInterfaceAddressT_class, "is_internal=", mrb_UV_UvInterfaceAddressT_set_is_internal, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvInterfaceAddressT_address_FIELD_READER
  mrb_define_method(mrb, UvInterfaceAddressT_class, "address", mrb_UV_UvInterfaceAddressT_get_address, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvInterfaceAddressT_address_FIELD_WRITER
  mrb_define_method(mrb, UvInterfaceAddressT_class, "address=", mrb_UV_UvInterfaceAddressT_set_address, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvInterfaceAddressT_netmask_FIELD_READER
  mrb_define_method(mrb, UvInterfaceAddressT_class, "netmask", mrb_UV_UvInterfaceAddressT_get_netmask, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvInterfaceAddressT_netmask_FIELD_WRITER
  mrb_define_method(mrb, UvInterfaceAddressT_class, "netmask=", mrb_UV_UvInterfaceAddressT_set_netmask, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvInterfaceAddressT::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvInterfaceAddressT::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvInterfaceAddressT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
