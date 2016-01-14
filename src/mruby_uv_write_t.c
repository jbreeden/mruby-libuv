/*
 * uv_write_t
 * Defined in file uv.h @ line 223
 */

#include "mruby_UV.h"

#if BIND_UvWriteT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvWriteT::initialize */
/* sha: d3b06cdcf4b9a36ce9a4221c2a28612be7b43e38eaad373d392f0daf579cb3ee */
#if BIND_UvWriteT_INITIALIZE
mrb_value
mrb_UV_UvWriteT_initialize(mrb_state* mrb, mrb_value self) {
  uv_write_t* native_object = (uv_write_t*)calloc(1, sizeof(uv_write_t));
  mruby_giftwrap_uv_write_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::initialize */
/* sha: 17e2173dfc6cecadaa68f77b3037bdc1b25b84dfc2dc35a04d95a431d01a5a67 */
mrb_value
mrb_UV_UvWriteT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvWriteT.disown only accepts objects of type UV::UvWriteT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::belongs_to_ruby */
/* sha: 815f46e7d8faf070d2c3164ef95abd5404005c03ed7b81776b498906b2ca29ca */
mrb_value
mrb_UV_UvWriteT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvWriteT.belongs_to_ruby only accepts objects of type UV::UvWriteT");
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

/* MRUBY_BINDING: UvWriteT::uv_write_cb_reader */
/* sha: 6f8a96eaf990b82701b930c99d6f56050aa9a8138d04d5dbba317a0d0b77c428 */
#if BIND_UvWriteT_uv_write_cb_FIELD_READER
/* get_uv_write_cb
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvWriteT_get_uv_write_cb(mrb_state* mrb, mrb_value self) {
  uv_write_t * native_self = mruby_unbox_uv_write_t(self);

  int native_uv_write_cb = native_self->uv_write_cb;

  mrb_value uv_write_cb = mrb_fixnum_value(native_uv_write_cb);

  return uv_write_cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::uv_write_cb_writer */
/* sha: d78e14bb6fabd8fadbccf2a658afea4a7d38e4ed9b6c9b613466f38519e96747 */
#if BIND_UvWriteT_uv_write_cb_FIELD_WRITER
/* set_uv_write_cb
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvWriteT_set_uv_write_cb(mrb_state* mrb, mrb_value self) {
  uv_write_t * native_self = mruby_unbox_uv_write_t(self);
  mrb_int native_uv_write_cb;

  mrb_get_args(mrb, "i", &native_uv_write_cb);

  native_self->uv_write_cb = native_uv_write_cb;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::send_handle_reader */
/* sha: 56b683ee7b7683c08464355db048af482bb9303fab95dfdf39c34000d1e11d9d */
#if BIND_UvWriteT_send_handle_FIELD_READER
/* get_send_handle
 *
 * Return Type: uv_stream_t *
 */
mrb_value
mrb_UV_UvWriteT_get_send_handle(mrb_state* mrb, mrb_value self) {
  uv_write_t * native_self = mruby_unbox_uv_write_t(self);

  uv_stream_t * native_send_handle = native_self->send_handle;

  mrb_value send_handle = (native_send_handle == NULL ? mrb_nil_value() : mruby_box_uv_stream_t(mrb, native_send_handle));

  return send_handle;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::send_handle_writer */
/* sha: 82540e359fe143d1993a58edb687a704026177e7de2a9cb69ba75c4c3de28558 */
#if BIND_UvWriteT_send_handle_FIELD_WRITER
/* set_send_handle
 *
 * Parameters:
 * - value: uv_stream_t *
 */
mrb_value
mrb_UV_UvWriteT_set_send_handle(mrb_state* mrb, mrb_value self) {
  uv_write_t * native_self = mruby_unbox_uv_write_t(self);
  mrb_value send_handle;

  mrb_get_args(mrb, "o", &send_handle);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, send_handle, UvStreamT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvStreamT expected");
    return mrb_nil_value();
  }

  uv_stream_t * native_send_handle = (mrb_nil_p(send_handle) ? NULL : mruby_unbox_uv_stream_t(send_handle));

  native_self->send_handle = native_send_handle;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::handle_reader */
/* sha: 1752622278799949232f659fd050d57463ab4365c3db3f89405d244a18cd6710 */
#if BIND_UvWriteT_handle_FIELD_READER
/* get_handle
 *
 * Return Type: uv_stream_t *
 */
mrb_value
mrb_UV_UvWriteT_get_handle(mrb_state* mrb, mrb_value self) {
  uv_write_t * native_self = mruby_unbox_uv_write_t(self);

  uv_stream_t * native_handle = native_self->handle;

  mrb_value handle = (native_handle == NULL ? mrb_nil_value() : mruby_box_uv_stream_t(mrb, native_handle));

  return handle;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::handle_writer */
/* sha: 61403368b33aaf1c00f6a6b380e52a401028c4ae847e01b40b67b217a20c6d6d */
#if BIND_UvWriteT_handle_FIELD_WRITER
/* set_handle
 *
 * Parameters:
 * - value: uv_stream_t *
 */
mrb_value
mrb_UV_UvWriteT_set_handle(mrb_state* mrb, mrb_value self) {
  uv_write_t * native_self = mruby_unbox_uv_write_t(self);
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

/* MRUBY_BINDING: UvWriteT::_reader */
/* sha: 4c29ec5ae3442bca89bf7128b30f005f742f26d827a32eab91338a469796ab01 */
#if BIND_UvWriteT__FIELD_READER
/* get_
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvWriteT_get_(mrb_state* mrb, mrb_value self) {
  uv_write_t * native_self = mruby_unbox_uv_write_t(self);

  int native_ = native_self->;

  mrb_value  = mrb_fixnum_value(native_);

  return ;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::_writer */
/* sha: dc23fbb5e9b6993010bc07616d6b251deb63c184b03acc0f903448a7380a8930 */
#if BIND_UvWriteT__FIELD_WRITER
/* set_
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvWriteT_set_(mrb_state* mrb, mrb_value self) {
  uv_write_t * native_self = mruby_unbox_uv_write_t(self);
  mrb_int native_;

  mrb_get_args(mrb, "i", &native_);

  native_self-> = native_;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvWriteT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvWriteT::class_definition */
/* sha: c882fbb9a584a916f2433dfa715533c79b92564324fe9de6d87bb10e749e1b67 */
  struct RClass* UvWriteT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvWriteT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvWriteT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::class_method_definitions */
/* sha: bdb03ed5fd6ee5c8e0960542ca885f990063cb9535fa53a20b906b4642fbe68a */
#if BIND_UvWriteT_INITIALIZE
  mrb_define_method(mrb, UvWriteT_class, "initialize", mrb_UV_UvWriteT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvWriteT_class, "disown", mrb_UV_UvWriteT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvWriteT_class, "belongs_to_ruby?", mrb_UV_UvWriteT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::attr_definitions */
/* sha: 3f6aff6d281fea16ff1f6033066dacee363d0e7c19104d585e7bead1a6b60e66 */
  /*
   * Fields
   */
#if BIND_UvWriteT_uv_write_cb_FIELD_READER
  mrb_define_method(mrb, UvWriteT_class, "uv_write_cb", mrb_UV_UvWriteT_get_uv_write_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvWriteT_uv_write_cb_FIELD_WRITER
  mrb_define_method(mrb, UvWriteT_class, "uv_write_cb=", mrb_UV_UvWriteT_set_uv_write_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvWriteT_send_handle_FIELD_READER
  mrb_define_method(mrb, UvWriteT_class, "send_handle", mrb_UV_UvWriteT_get_send_handle, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvWriteT_send_handle_FIELD_WRITER
  mrb_define_method(mrb, UvWriteT_class, "send_handle=", mrb_UV_UvWriteT_set_send_handle, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvWriteT_handle_FIELD_READER
  mrb_define_method(mrb, UvWriteT_class, "handle", mrb_UV_UvWriteT_get_handle, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvWriteT_handle_FIELD_WRITER
  mrb_define_method(mrb, UvWriteT_class, "handle=", mrb_UV_UvWriteT_set_handle, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvWriteT__FIELD_READER
  mrb_define_method(mrb, UvWriteT_class, "", mrb_UV_UvWriteT_get_, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvWriteT__FIELD_WRITER
  mrb_define_method(mrb, UvWriteT_class, "=", mrb_UV_UvWriteT_set_, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
