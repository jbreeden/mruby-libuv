/*
 * struct sockaddr_in6
 * Defined in file uv.h @ line 995
 */

#include "mruby_UV.h"

#if BIND_SockaddrIn6_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: SockaddrIn6::initialize */
/* sha: 72bb302cb5f4a44424c39718443b9d547fc0a7a930466d56641dad55ebf8ae9a */
#if BIND_SockaddrIn6_INITIALIZE
mrb_value
mrb_UV_SockaddrIn6_initialize(mrb_state* mrb, mrb_value self) {
  struct sockaddr_in6* native_object = (struct sockaddr_in6*)calloc(1, sizeof(struct sockaddr_in6));
  mruby_giftwrap_sockaddr_in6_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SockaddrIn6::initialize */
/* sha: 746e09c6000d6a98abcea9431c7b85f4ecbc1b1fa299150f0045ec5409ba8205 */
mrb_value
mrb_UV_SockaddrIn6_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::SockaddrIn6.disown only accepts objects of type UV::SockaddrIn6");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SockaddrIn6::belongs_to_ruby */
/* sha: 6b7522777aac5ac249db19aea6e287a6a85738deb6310b35e39c07348c3e6e2e */
mrb_value
mrb_UV_SockaddrIn6_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::SockaddrIn6.belongs_to_ruby only accepts objects of type UV::SockaddrIn6");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_UV_SockaddrIn6_init(mrb_state* mrb) {
/* MRUBY_BINDING: SockaddrIn6::class_definition */
/* sha: ff11b757848a8ac5dc739f55ae17e32c66eaa984010a8f3880ebdefebe570568 */
  struct RClass* SockaddrIn6_class = mrb_define_class_under(mrb, UV_module(mrb), "SockaddrIn6", mrb->object_class);
  MRB_SET_INSTANCE_TT(SockaddrIn6_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SockaddrIn6::class_method_definitions */
/* sha: 7ceae7580e900a19dc5732dc2252c014f758449455b7b73d11b4cdf25c65c010 */
#if BIND_SockaddrIn6_INITIALIZE
  mrb_define_method(mrb, SockaddrIn6_class, "initialize", mrb_UV_SockaddrIn6_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SockaddrIn6_class, "disown", mrb_UV_SockaddrIn6_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SockaddrIn6_class, "belongs_to_ruby?", mrb_UV_SockaddrIn6_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SockaddrIn6::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SockaddrIn6::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
