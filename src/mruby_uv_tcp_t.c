/*
 * uv_tcp_t
 * Defined in file uv.h @ line 203
 */

#include "mruby_UV.h"

#if BIND_UvTcpT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvTcpT::initialize */
/* sha: ec8b38897a9ffbfa05d620ffd1238b2fb9f191eab4716af3f3cdc20de70c6c23 */
#if BIND_UvTcpT_INITIALIZE
mrb_value
mrb_UV_UvTcpT_initialize(mrb_state* mrb, mrb_value self) {
  uv_tcp_t* native_object = (uv_tcp_t*)calloc(1, sizeof(uv_tcp_t));
  mruby_giftwrap_uv_tcp_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTcpT::initialize */
/* sha: 0ffa0c5784d52ce38cbb14eabddb386a09f556877553ff0d3fd86d4b6e6bb189 */
mrb_value
mrb_UV_UvTcpT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvTcpT.disown only accepts objects of type UV::UvTcpT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTcpT::belongs_to_ruby */
/* sha: 0c576e148cfebd9e20709edcae9a4a554d048ced9f09bc13cc496f87e95d2155 */
mrb_value
mrb_UV_UvTcpT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvTcpT.belongs_to_ruby only accepts objects of type UV::UvTcpT");
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

/* MRUBY_BINDING: UvTcpT::UV_TCP_PRIVATE_FIELDS_reader */
/* sha: cdbb6a11e4bc9f5a21c1a04adb6ac029a1ac18721454ae841654aa76408b0103 */
#if BIND_UvTcpT_UV_TCP_PRIVATE_FIELDS_FIELD_READER
/* get_UV_TCP_PRIVATE_FIELDS
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvTcpT_get_UV_TCP_PRIVATE_FIELDS(mrb_state* mrb, mrb_value self) {
  uv_tcp_t * native_self = mruby_unbox_uv_tcp_t(self);

  int native_UV_TCP_PRIVATE_FIELDS = native_self->UV_TCP_PRIVATE_FIELDS;

  mrb_value UV_TCP_PRIVATE_FIELDS = mrb_fixnum_value(native_UV_TCP_PRIVATE_FIELDS);

  return UV_TCP_PRIVATE_FIELDS;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTcpT::UV_TCP_PRIVATE_FIELDS_writer */
/* sha: 091f9b5500987f77d09be1e70dd821b18ddbe30c6048d8a2433fa2271a8774e7 */
#if BIND_UvTcpT_UV_TCP_PRIVATE_FIELDS_FIELD_WRITER
/* set_UV_TCP_PRIVATE_FIELDS
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvTcpT_set_UV_TCP_PRIVATE_FIELDS(mrb_state* mrb, mrb_value self) {
  uv_tcp_t * native_self = mruby_unbox_uv_tcp_t(self);
  mrb_int native_UV_TCP_PRIVATE_FIELDS;

  mrb_get_args(mrb, "i", &native_UV_TCP_PRIVATE_FIELDS);

  native_self->UV_TCP_PRIVATE_FIELDS = native_UV_TCP_PRIVATE_FIELDS;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvTcpT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvTcpT::class_definition */
/* sha: b46c27f8334d32c02c51944766b708b6136e8aedee5861507611a677e5f425d2 */
  struct RClass* UvTcpT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvTcpT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvTcpT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTcpT::class_method_definitions */
/* sha: 9f05e1d3d0a195ed5f3228bf23f45ef946d72db459562e37ef3c39f728397180 */
#if BIND_UvTcpT_INITIALIZE
  mrb_define_method(mrb, UvTcpT_class, "initialize", mrb_UV_UvTcpT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvTcpT_class, "disown", mrb_UV_UvTcpT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvTcpT_class, "belongs_to_ruby?", mrb_UV_UvTcpT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTcpT::attr_definitions */
/* sha: 200dd9cff04cef36dd287415eb7a849423d30ae2ff8627606d0652d003accb0d */
  /*
   * Fields
   */
#if BIND_UvTcpT_UV_TCP_PRIVATE_FIELDS_FIELD_READER
  mrb_define_method(mrb, UvTcpT_class, "UV_TCP_PRIVATE_FIELDS", mrb_UV_UvTcpT_get_UV_TCP_PRIVATE_FIELDS, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvTcpT_UV_TCP_PRIVATE_FIELDS_FIELD_WRITER
  mrb_define_method(mrb, UvTcpT_class, "UV_TCP_PRIVATE_FIELDS=", mrb_UV_UvTcpT_set_UV_TCP_PRIVATE_FIELDS, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTcpT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
