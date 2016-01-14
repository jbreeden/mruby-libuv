/*
 * struct sockaddr_in
 * Defined in file uv.h @ line 994
 */

#include "mruby_UV.h"

#if BIND_SockaddrIn_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: SockaddrIn::initialize */
/* sha: a7afb65a92034533b29f2a83ef5eabb9921184da55d2396efec7639d2ebe7b94 */
#if BIND_SockaddrIn_INITIALIZE
mrb_value
mrb_UV_SockaddrIn_initialize(mrb_state* mrb, mrb_value self) {
  struct sockaddr_in* native_object = (struct sockaddr_in*)calloc(1, sizeof(struct sockaddr_in));
  mruby_giftwrap_sockaddr_in_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SockaddrIn::initialize */
/* sha: 0a31a430520d195a34292e26ec67dcd35e43c58b75694ccf5d25757a56c409bf */
mrb_value
mrb_UV_SockaddrIn_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::SockaddrIn.disown only accepts objects of type UV::SockaddrIn");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SockaddrIn::belongs_to_ruby */
/* sha: 56679e2c67a8f41455fbb47b94f7bff51303c97b9682730b9d77e5d8137792db */
mrb_value
mrb_UV_SockaddrIn_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::SockaddrIn.belongs_to_ruby only accepts objects of type UV::SockaddrIn");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_UV_SockaddrIn_init(mrb_state* mrb) {
/* MRUBY_BINDING: SockaddrIn::class_definition */
/* sha: e60bf9a91cd0a9663054b286d96e465180436cd91a850c09020a879ce0ff3dc6 */
  struct RClass* SockaddrIn_class = mrb_define_class_under(mrb, UV_module(mrb), "SockaddrIn", mrb->object_class);
  MRB_SET_INSTANCE_TT(SockaddrIn_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SockaddrIn::class_method_definitions */
/* sha: a5f63ff7700c3ed473104ec1f8628f15443f75197ebe68dfb30b17ef4551eafd */
#if BIND_SockaddrIn_INITIALIZE
  mrb_define_method(mrb, SockaddrIn_class, "initialize", mrb_UV_SockaddrIn_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SockaddrIn_class, "disown", mrb_UV_SockaddrIn_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SockaddrIn_class, "belongs_to_ruby?", mrb_UV_SockaddrIn_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SockaddrIn::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SockaddrIn::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
