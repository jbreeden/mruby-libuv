/*
 * struct addrinfo
 * Defined in file dummy_decls.h @ line 2
 */

#include "mruby_UV.h"

#if BIND_Addrinfo_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Addrinfo::initialize */
/* sha: cd6759b60b91c54325e8971e51f2f70f446c34ba30cccc7c0bf57d29ca201a09 */
#if BIND_Addrinfo_INITIALIZE
mrb_value
mrb_UV_Addrinfo_initialize(mrb_state* mrb, mrb_value self) {
  struct addrinfo* native_object = (struct addrinfo*)calloc(1, sizeof(struct addrinfo));
  mruby_gift_addrinfo_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::disown */
/* sha: c84f7b1cc0532af1bb9b97951d8a6c428e462a395754d5758f0933687fd75e98 */
mrb_value
mrb_UV_Addrinfo_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::Addrinfo.disown only accepts objects of type UV::Addrinfo");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::belongs_to_ruby */
/* sha: a8d766413dc666009288b4c26f657f3d4422e62272d3e3f4da3c97fa8c79aaa7 */
mrb_value
mrb_UV_Addrinfo_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::Addrinfo.belongs_to_ruby only accepts objects of type UV::Addrinfo");
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
/* sha: 1c8694b310841b09fe90cee533da182e4e694dac0ee6cbacb1e216d992ad4372 */
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
  
  return mrb_fixnum_value(native_self->ai_flags);
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
/* sha: 0a03ad04337d6d0ec36aa27550177c4a9ed0f892c1189403ee84c5315f7b16b1 */
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
  
  return mrb_fixnum_value(native_self->ai_family);
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
/* sha: 9bc8802b6bf7651e349f8ace5ea1b65f70ffc245d55edba6a195e4b942b05177 */
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
  
  return mrb_fixnum_value(native_self->ai_socktype);
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
/* sha: 8d8d63cbc8c1fe0ecb59b39c58d81c785622f62114289b6afc3352656d7e6787 */
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
  
  return mrb_fixnum_value(native_self->ai_protocol);
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
/* sha: 5ed8c1f35e8239ff96d404044ad482b2ba063d33533cdcbdd8a8a07ab9864813 */
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
  
  return mrb_fixnum_value(native_self->ai_addrlen);
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

  mrb_value ai_canonname = mrb_str_new_cstr(mrb, native_ai_canonname);

  return ai_canonname;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo::ai_canonname_writer */
/* sha: 6d8f14919025b48c197a4c0f0a9f68be5e2a2db3e6737b47ef204d154687373f */
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
/* sha: 7b6d7ebf7745acb6674b7205f622b3187a1bf164bb24ebe17950ef6b0a88f276 */
#if BIND_Addrinfo_INITIALIZE
  mrb_define_method(mrb, Addrinfo_class, "initialize", mrb_UV_Addrinfo_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Addrinfo_class, "disown", mrb_UV_Addrinfo_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Addrinfo_class, "belongs_to_ruby?", mrb_UV_Addrinfo_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
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
