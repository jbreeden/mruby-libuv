/*
 * struct addrinfo
 * Defined in file dummy_decls.h @ line 2
 */

#include "mruby_UV.h"

#if BIND_Addrinfo_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::initialize */
/* sha: fd7819f2c0f80b3b4e01e9ea59e6eb65865f83e6ffb8f63960c0f16e3495541e */
#if BIND_Addrinfo_INITIALIZE
mrb_value
mrb_UV_Addrinfo_initialize(mrb_state* mrb, mrb_value self) {

  struct addrinfo* native_object = (struct addrinfo*)calloc(1, sizeof(struct addrinfo));
  mruby_gift_addrinfo_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Addrinfo::ai_flags_reader */
/* sha: 60bbfc42264d3cff06d099b43e3eaa64ce9912d4d1c4b312688b8aed873d95b2 */
#if BIND_Addrinfo_ai_flags_FIELD_READER
/* get_ai_flags
 *
 * Return Type: int
 */
mrb_value
mrb_UV_Addrinfo_get_ai_flags(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);

  int native_ai_flags = native_self->ai_flags;

  mrb_value ai_flags = mrb_fixnum_value(native_ai_flags);

  return ai_flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::ai_flags_writer */
/* sha: 6401f67d7b200edb4adf62ec362d086b0b48dc586471464dc488396a4424cd83 */
#if BIND_Addrinfo_ai_flags_FIELD_WRITER
/* set_ai_flags
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_Addrinfo_set_ai_flags(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);
  mrb_int native_ai_flags;

  mrb_get_args(mrb, "i", &native_ai_flags);

  native_self->ai_flags = native_ai_flags;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::ai_family_reader */
/* sha: 7016d37daadad80bc804f211023b26da1132f7836790f6e48b7796c136efb8ef */
#if BIND_Addrinfo_ai_family_FIELD_READER
/* get_ai_family
 *
 * Return Type: int
 */
mrb_value
mrb_UV_Addrinfo_get_ai_family(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);

  int native_ai_family = native_self->ai_family;

  mrb_value ai_family = mrb_fixnum_value(native_ai_family);

  return ai_family;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::ai_family_writer */
/* sha: 0b3ceccbe175f6cf7c7ce29b9d67f8679725f574b71f962930ce68be4029a50f */
#if BIND_Addrinfo_ai_family_FIELD_WRITER
/* set_ai_family
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_Addrinfo_set_ai_family(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);
  mrb_int native_ai_family;

  mrb_get_args(mrb, "i", &native_ai_family);

  native_self->ai_family = native_ai_family;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::ai_socktype_reader */
/* sha: 532dd3d82d308ccf531ec39780e3c414d8636124c00fe99e36feff79b5d6b08d */
#if BIND_Addrinfo_ai_socktype_FIELD_READER
/* get_ai_socktype
 *
 * Return Type: int
 */
mrb_value
mrb_UV_Addrinfo_get_ai_socktype(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);

  int native_ai_socktype = native_self->ai_socktype;

  mrb_value ai_socktype = mrb_fixnum_value(native_ai_socktype);

  return ai_socktype;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::ai_socktype_writer */
/* sha: fcfe77581a833c3aabe8646fb5d60437a75df0e0505b3f47d2144c35532bb14e */
#if BIND_Addrinfo_ai_socktype_FIELD_WRITER
/* set_ai_socktype
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_Addrinfo_set_ai_socktype(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);
  mrb_int native_ai_socktype;

  mrb_get_args(mrb, "i", &native_ai_socktype);

  native_self->ai_socktype = native_ai_socktype;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::ai_protocol_reader */
/* sha: 87693246b9e7b04485efeeea67fbd9336c3b61bb3c5c2750415d7f1825707574 */
#if BIND_Addrinfo_ai_protocol_FIELD_READER
/* get_ai_protocol
 *
 * Return Type: int
 */
mrb_value
mrb_UV_Addrinfo_get_ai_protocol(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);

  int native_ai_protocol = native_self->ai_protocol;

  mrb_value ai_protocol = mrb_fixnum_value(native_ai_protocol);

  return ai_protocol;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::ai_protocol_writer */
/* sha: 1f8f88d1f78a2159ce339031e21ab959a6fd8a3fca7c0cad8be89437cb0822da */
#if BIND_Addrinfo_ai_protocol_FIELD_WRITER
/* set_ai_protocol
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_Addrinfo_set_ai_protocol(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);
  mrb_int native_ai_protocol;

  mrb_get_args(mrb, "i", &native_ai_protocol);

  native_self->ai_protocol = native_ai_protocol;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::ai_addrlen_reader */
/* sha: 25c0547b2f882cd36844e852f0ec218ff14ddabff5d29ed73fcc977615af84d6 */
#if BIND_Addrinfo_ai_addrlen_FIELD_READER
/* get_ai_addrlen
 *
 * Return Type: int
 */
mrb_value
mrb_UV_Addrinfo_get_ai_addrlen(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);

  int native_ai_addrlen = native_self->ai_addrlen;

  mrb_value ai_addrlen = mrb_fixnum_value(native_ai_addrlen);

  return ai_addrlen;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::ai_addrlen_writer */
/* sha: 92aa55c73a9b3188298154bcd71e135c0268b968e72cc16edfddba0723f832e1 */
#if BIND_Addrinfo_ai_addrlen_FIELD_WRITER
/* set_ai_addrlen
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_Addrinfo_set_ai_addrlen(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);
  mrb_int native_ai_addrlen;

  mrb_get_args(mrb, "i", &native_ai_addrlen);

  native_self->ai_addrlen = native_ai_addrlen;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::ai_canonname_reader */
/* sha: 931a5e39e6ed943fdb1865e9bd8667fac3ebbad1986e0787a30db2684694f0d6 */
#if BIND_Addrinfo_ai_canonname_FIELD_READER
/* get_ai_canonname
 *
 * Return Type: char *
 */
mrb_value
mrb_UV_Addrinfo_get_ai_canonname(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);

  char * native_ai_canonname = native_self->ai_canonname;

  mrb_value ai_canonname = TODO_mruby_box_char_PTR(mrb, native_ai_canonname);

  return ai_canonname;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::ai_canonname_writer */
/* sha: d610f0cab275f5dae587833f31f6e528cc29fcd3e56ef714de6c0d38f3a1f034 */
#if BIND_Addrinfo_ai_canonname_FIELD_WRITER
/* set_ai_canonname
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_UV_Addrinfo_set_ai_canonname(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);
  mrb_value ai_canonname;

  mrb_get_args(mrb, "o", &ai_canonname);

  /* type checking */
  TODO_type_check_char_PTR(ai_canonname);

  char * native_ai_canonname = TODO_mruby_unbox_char_PTR(ai_canonname);

  native_self->ai_canonname = native_ai_canonname;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Addrinfo_init(mrb_state* mrb) {
/* MRUBY_BINDING: Addrinfo::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::class_definition */
/* sha: 606c82e71469cb486f2986e17e0128cdfad126850487236601b03c2db3dd8115 */
  struct RClass* Addrinfo_class = mrb_define_class_under(mrb, UV_module(mrb), "Addrinfo", mrb->object_class);
  MRB_SET_INSTANCE_TT(Addrinfo_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::class_method_definitions */
/* sha: bd412b0a1c3912e7d5d1816db491d2a4a22e3258dc95ca25d8abb3ee20e90cb3 */
#if BIND_Addrinfo_INITIALIZE
  mrb_define_method(mrb, Addrinfo_class, "initialize", mrb_UV_Addrinfo_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::attr_definitions */
/* sha: 5197e6b2422e5cfcd860056e03add7d2ba592f7ba7755e8dcef539c20c65cb7d */
  /*
   * Fields
   */
#if BIND_Addrinfo_ai_flags_FIELD_READER
  mrb_define_method(mrb, Addrinfo_class, "ai_flags", mrb_UV_Addrinfo_get_ai_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Addrinfo_ai_flags_FIELD_WRITER
  mrb_define_method(mrb, Addrinfo_class, "ai_flags=", mrb_UV_Addrinfo_set_ai_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Addrinfo_ai_family_FIELD_READER
  mrb_define_method(mrb, Addrinfo_class, "ai_family", mrb_UV_Addrinfo_get_ai_family, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Addrinfo_ai_family_FIELD_WRITER
  mrb_define_method(mrb, Addrinfo_class, "ai_family=", mrb_UV_Addrinfo_set_ai_family, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Addrinfo_ai_socktype_FIELD_READER
  mrb_define_method(mrb, Addrinfo_class, "ai_socktype", mrb_UV_Addrinfo_get_ai_socktype, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Addrinfo_ai_socktype_FIELD_WRITER
  mrb_define_method(mrb, Addrinfo_class, "ai_socktype=", mrb_UV_Addrinfo_set_ai_socktype, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Addrinfo_ai_protocol_FIELD_READER
  mrb_define_method(mrb, Addrinfo_class, "ai_protocol", mrb_UV_Addrinfo_get_ai_protocol, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Addrinfo_ai_protocol_FIELD_WRITER
  mrb_define_method(mrb, Addrinfo_class, "ai_protocol=", mrb_UV_Addrinfo_set_ai_protocol, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Addrinfo_ai_addrlen_FIELD_READER
  mrb_define_method(mrb, Addrinfo_class, "ai_addrlen", mrb_UV_Addrinfo_get_ai_addrlen, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Addrinfo_ai_addrlen_FIELD_WRITER
  mrb_define_method(mrb, Addrinfo_class, "ai_addrlen=", mrb_UV_Addrinfo_set_ai_addrlen, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Addrinfo_ai_canonname_FIELD_READER
  mrb_define_method(mrb, Addrinfo_class, "ai_canonname", mrb_UV_Addrinfo_get_ai_canonname, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Addrinfo_ai_canonname_FIELD_WRITER
  mrb_define_method(mrb, Addrinfo_class, "ai_canonname=", mrb_UV_Addrinfo_set_ai_canonname, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
