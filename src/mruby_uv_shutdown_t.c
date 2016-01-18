/*
 * uv_shutdown_t
 * Defined in file uv.h @ line 222
 */

#include "mruby_UV.h"

#if BIND_UvShutdownT_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvShutdownT::initialize */
/* sha: 6d2300ee1e1fd45fa7e886105935120b9bcdc4a9fe4455401831771a8801dd4f */
#if BIND_UvShutdownT_INITIALIZE
mrb_value
mrb_UV_UvShutdownT_initialize(mrb_state* mrb, mrb_value self) {
  uv_shutdown_t* native_object = (uv_shutdown_t*)new_mruby_uv_req(mrb, self, sizeof(uv_shutdown_t));
  mruby_gift_uv_shutdown_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvShutdownT::disown */
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

/* MRUBY_BINDING: UvShutdownT::handle_reader */
/* sha: 47b344e2ff265eb999d0ee168c90fd20bd6d339c7ede9f5deb6a4cf8265485bd */
#if BIND_UvShutdownT_handle_FIELD_READER
/* get_handle
 *
 * Return Type: uv_stream_t *
 */
mrb_value
mrb_UV_UvShutdownT_get_handle(mrb_state* mrb, mrb_value self) {
  uv_shutdown_t * native_self = mruby_unbox_uv_shutdown_t(self);

  uv_stream_t * native_handle = native_self->handle;

  mrb_value handle = (native_handle == NULL ? mrb_nil_value() : mruby_box_uv_stream_t(mrb, native_handle));

  return handle;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvShutdownT::handle_writer */
/* sha: 9b93c25b93aa2203b1dd436422c95a1d99bde326f46d1162a9d4233d4b175a09 */
#if BIND_UvShutdownT_handle_FIELD_WRITER
/* set_handle
 *
 * Parameters:
 * - value: uv_stream_t *
 */
mrb_value
mrb_UV_UvShutdownT_set_handle(mrb_state* mrb, mrb_value self) {
  uv_shutdown_t * native_self = mruby_unbox_uv_shutdown_t(self);
  mrb_value handle;

  mrb_get_args(mrb, "o", &handle);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvStreamT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvStreamT expected");
    return mrb_nil_value();
  }

  uv_stream_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_stream_t(handle));

  native_self->handle = native_handle;
  
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


void mrb_UV_UvShutdownT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvShutdownT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvShutdownT::class_definition */
/* sha: d24d1193711577e6c0c4b1457722cd55888620beb92eb0f24885b0e427cd35c3 */
  struct RClass* UvShutdownT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvShutdownT", UvReqT_class(mrb));
  MRB_SET_INSTANCE_TT(UvShutdownT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvShutdownT::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvShutdownT::class_method_definitions */
/* sha: 0b04618897bfd00ff585719e33d86093befe333aedef409f94cd206b4722515e */
#if BIND_UvShutdownT_INITIALIZE
  mrb_define_method(mrb, UvShutdownT_class, "initialize", mrb_UV_UvShutdownT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvShutdownT_class, "disown", mrb_UV_UvShutdownT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvShutdownT_class, "belongs_to_ruby?", mrb_UV_UvShutdownT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvShutdownT::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvShutdownT::attr_definitions */
/* sha: 57a0265a3dfd4a32f0618b33ac129c872153dd78609308b9c0acecfb956ef04f */
  /*
   * Fields
   */
#if BIND_UvShutdownT_handle_FIELD_READER
  mrb_define_method(mrb, UvShutdownT_class, "handle", mrb_UV_UvShutdownT_get_handle, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvShutdownT_handle_FIELD_WRITER
  mrb_define_method(mrb, UvShutdownT_class, "handle=", mrb_UV_UvShutdownT_set_handle, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvShutdownT_cb_FIELD_READER
  mrb_define_method(mrb, UvShutdownT_class, "cb", mrb_UV_UvShutdownT_get_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvShutdownT_cb_FIELD_WRITER
  mrb_define_method(mrb, UvShutdownT_class, "cb=", mrb_UV_UvShutdownT_set_cb, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvShutdownT::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvShutdownT::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvShutdownT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
