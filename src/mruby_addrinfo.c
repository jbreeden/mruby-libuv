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
/* sha: c728a932f5a1ebd168da9c6c80a6a75f0299aa24abb10ae04f1b27961330a1ae */
#if BIND_Addrinfo_ai_flags_FIELD_READER
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
/* sha: f448b73f430a67937a1c7dd994e836f37943d357c1bce8284e32b2d268c80e29 */
#if BIND_Addrinfo_ai_flags_FIELD_WRITER
mrb_value
mrb_UV_Addrinfo_set_ai_flags(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);
  mrb_int native_ai_flags;

  mrb_get_args(mrb, "i", &native_ai_flags);

  native_self->ai_flags = native_ai_flags;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::ai_family_reader */
/* sha: dbc95e4565a4f058d5fa6c3c8bc8c553a4dc4c1b0a13ce0b861c184ebd929df9 */
#if BIND_Addrinfo_ai_family_FIELD_READER
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
/* sha: afc5294be8a08f8c70c71fea360efd65e49c05050a7966c3df2a94eb83d42e74 */
#if BIND_Addrinfo_ai_family_FIELD_WRITER
mrb_value
mrb_UV_Addrinfo_set_ai_family(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);
  mrb_int native_ai_family;

  mrb_get_args(mrb, "i", &native_ai_family);

  native_self->ai_family = native_ai_family;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::ai_socktype_reader */
/* sha: eb0a4fabf994c4caaefa06461c807d16b312d4c25c933b6371e243c51b4079b3 */
#if BIND_Addrinfo_ai_socktype_FIELD_READER
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
/* sha: c47a3a46be63cae21d69b1c5ee8a5a3b5f6ac457bbb84a82ea7902b3adede9a9 */
#if BIND_Addrinfo_ai_socktype_FIELD_WRITER
mrb_value
mrb_UV_Addrinfo_set_ai_socktype(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);
  mrb_int native_ai_socktype;

  mrb_get_args(mrb, "i", &native_ai_socktype);

  native_self->ai_socktype = native_ai_socktype;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::ai_protocol_reader */
/* sha: 79ee27f45141dc5aa66c6373ae97cf1fc095a3630e590b8f4c25ed114034b2f9 */
#if BIND_Addrinfo_ai_protocol_FIELD_READER
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
/* sha: aff11c300a9edd391f0b3243ce7552d8dbe5509fa61df17057e30e46a724382a */
#if BIND_Addrinfo_ai_protocol_FIELD_WRITER
mrb_value
mrb_UV_Addrinfo_set_ai_protocol(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);
  mrb_int native_ai_protocol;

  mrb_get_args(mrb, "i", &native_ai_protocol);

  native_self->ai_protocol = native_ai_protocol;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::ai_addrlen_reader */
/* sha: c9280f8f9cc426ea9780523bb272615324bed0b8a04382b40595f93d2f1eba51 */
#if BIND_Addrinfo_ai_addrlen_FIELD_READER
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
/* sha: 7178f65752e540cdcd6b5a0ec4483eee9a2784e0b67806ac18ef14b976531497 */
#if BIND_Addrinfo_ai_addrlen_FIELD_WRITER
mrb_value
mrb_UV_Addrinfo_set_ai_addrlen(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);
  mrb_int native_ai_addrlen;

  mrb_get_args(mrb, "i", &native_ai_addrlen);

  native_self->ai_addrlen = native_ai_addrlen;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::ai_canonname_reader */
/* sha: ac5e9f5c3d559035cbad56a6ae0426ffe1707c3dec3b0625dd577d603fdfc6f6 */
#if BIND_Addrinfo_ai_canonname_FIELD_READER
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
/* sha: d198fdd8913c75e6452dc07e22b227c0e3a80126c5310b353e10aa8f99c95cb6 */
#if BIND_Addrinfo_ai_canonname_FIELD_WRITER
mrb_value
mrb_UV_Addrinfo_set_ai_canonname(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);
  mrb_value ai_canonname;

  mrb_get_args(mrb, "o", &ai_canonname);

  /* type checking */
  TODO_type_check_char_PTR(ai_canonname);

  char * native_ai_canonname = TODO_mruby_unbox_char_PTR(ai_canonname);

  native_self->ai_canonname = native_ai_canonname;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Addrinfo_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

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


/* MRUBY_BINDING: Addrinfo::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
