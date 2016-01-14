/*
 * uv_shutdown_t
 * Defined in file uv.h @ line 222
 */

#include "mruby_UV.h"

#if BIND_UvShutdownT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvShutdownT::initialize */
/* sha: 6b02a96299a5505d228540749c61202b96bea9d73a5a4aeacb0a5aa346bc7644 */
#if BIND_UvShutdownT_INITIALIZE
mrb_value
mrb_UV_UvShutdownT_initialize(mrb_state* mrb, mrb_value self) {
  uv_shutdown_t* native_object = (uv_shutdown_t*)calloc(1, sizeof(uv_shutdown_t));
  mruby_giftwrap_uv_shutdown_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvShutdownT::initialize */
/* sha: 0e3e92f11747c26f86f71c45c5c794500c65717e375eb83e5d6921ec4e85a220 */
mrb_value
mrb_UV_UvShutdownT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvShutdownT.disown only accepts objects of type UV::UvShutdownT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvShutdownT::belongs_to_ruby */
/* sha: e5f2a86445a8502c12ab300943416375804d8f4562ef7a5a97609f7fca3f29a9 */
mrb_value
mrb_UV_UvShutdownT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvShutdownT.belongs_to_ruby only accepts objects of type UV::UvShutdownT");
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

/* MRUBY_BINDING: UvShutdownT::uv_stream_t_reader */
/* sha: 125522d0ec4fbdd2e8f5db8f48ebde04b233a419c034d437acbb0a866511db27 */
#if BIND_UvShutdownT_uv_stream_t_FIELD_READER
/* get_uv_stream_t
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvShutdownT_get_uv_stream_t(mrb_state* mrb, mrb_value self) {
  uv_shutdown_t * native_self = mruby_unbox_uv_shutdown_t(self);

  int native_uv_stream_t = native_self->uv_stream_t;

  mrb_value uv_stream_t = mrb_fixnum_value(native_uv_stream_t);

  return uv_stream_t;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvShutdownT::uv_stream_t_writer */
/* sha: af6e52c0ccd5173a4d947e07b47328ceccce4b570412e417e275f41123cff9d8 */
#if BIND_UvShutdownT_uv_stream_t_FIELD_WRITER
/* set_uv_stream_t
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvShutdownT_set_uv_stream_t(mrb_state* mrb, mrb_value self) {
  uv_shutdown_t * native_self = mruby_unbox_uv_shutdown_t(self);
  mrb_int native_uv_stream_t;

  mrb_get_args(mrb, "i", &native_uv_stream_t);

  native_self->uv_stream_t = native_uv_stream_t;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvShutdownT::cb_reader */
/* sha: 9052290d7ee369550939a6bba20e7d5f80c7109d99b2202066f1cd2f3fea5f0d */
#if BIND_UvShutdownT_cb_FIELD_READER
/* get_cb
 *
 * Return Type: uv_shutdown_cb
 */
mrb_value
mrb_UV_UvShutdownT_get_cb(mrb_state* mrb, mrb_value self) {
  uv_shutdown_t * native_self = mruby_unbox_uv_shutdown_t(self);

  uv_shutdown_cb native_cb = native_self->cb;

  mrb_value cb = TODO_mruby_box_uv_shutdown_cb(mrb, native_cb);

  return cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvShutdownT::cb_writer */
/* sha: d88e20e65bc48a19e994352102de6a731b303471f3f93a75841b1e3e2c22326f */
#if BIND_UvShutdownT_cb_FIELD_WRITER
/* set_cb
 *
 * Parameters:
 * - value: uv_shutdown_cb
 */
mrb_value
mrb_UV_UvShutdownT_set_cb(mrb_state* mrb, mrb_value self) {
  uv_shutdown_t * native_self = mruby_unbox_uv_shutdown_t(self);
  mrb_value cb;

  mrb_get_args(mrb, "o", &cb);

  /* type checking */
  TODO_type_check_uv_shutdown_cb(cb);

  uv_shutdown_cb native_cb = TODO_mruby_unbox_uv_shutdown_cb(cb);

  native_self->cb = native_cb;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvShutdownT::_reader */
/* sha: f5f51e1ed9151615f6fe4ccae1cf890ba96578a402f515743c4ea5ce5d06f029 */
#if BIND_UvShutdownT__FIELD_READER
/* get_
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvShutdownT_get_(mrb_state* mrb, mrb_value self) {
  uv_shutdown_t * native_self = mruby_unbox_uv_shutdown_t(self);

  int native_ = native_self->;

  mrb_value  = mrb_fixnum_value(native_);

  return ;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvShutdownT::_writer */
/* sha: 7a04e80fb3fbbbdf23aa567974c09e8e3f6d3e7f3da7ec726ab458b9c905225b */
#if BIND_UvShutdownT__FIELD_WRITER
/* set_
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvShutdownT_set_(mrb_state* mrb, mrb_value self) {
  uv_shutdown_t * native_self = mruby_unbox_uv_shutdown_t(self);
  mrb_int native_;

  mrb_get_args(mrb, "i", &native_);

  native_self-> = native_;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvShutdownT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvShutdownT::class_definition */
/* sha: d24d1193711577e6c0c4b1457722cd55888620beb92eb0f24885b0e427cd35c3 */
  struct RClass* UvShutdownT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvShutdownT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvShutdownT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvShutdownT::class_method_definitions */
/* sha: 0b04618897bfd00ff585719e33d86093befe333aedef409f94cd206b4722515e */
#if BIND_UvShutdownT_INITIALIZE
  mrb_define_method(mrb, UvShutdownT_class, "initialize", mrb_UV_UvShutdownT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvShutdownT_class, "disown", mrb_UV_UvShutdownT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvShutdownT_class, "belongs_to_ruby?", mrb_UV_UvShutdownT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvShutdownT::attr_definitions */
/* sha: 7f5b7b043a896a07edc5ea4bee49d7a527de9cabc8a6d4ca53233cd2c3ee7a3c */
  /*
   * Fields
   */
#if BIND_UvShutdownT_uv_stream_t_FIELD_READER
  mrb_define_method(mrb, UvShutdownT_class, "uv_stream_t", mrb_UV_UvShutdownT_get_uv_stream_t, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvShutdownT_uv_stream_t_FIELD_WRITER
  mrb_define_method(mrb, UvShutdownT_class, "uv_stream_t=", mrb_UV_UvShutdownT_set_uv_stream_t, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvShutdownT_cb_FIELD_READER
  mrb_define_method(mrb, UvShutdownT_class, "cb", mrb_UV_UvShutdownT_get_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvShutdownT_cb_FIELD_WRITER
  mrb_define_method(mrb, UvShutdownT_class, "cb=", mrb_UV_UvShutdownT_set_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvShutdownT__FIELD_READER
  mrb_define_method(mrb, UvShutdownT_class, "", mrb_UV_UvShutdownT_get_, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvShutdownT__FIELD_WRITER
  mrb_define_method(mrb, UvShutdownT_class, "=", mrb_UV_UvShutdownT_set_, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvShutdownT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
