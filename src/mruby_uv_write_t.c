/*
 * uv_write_t
 * Defined in file uv.h @ line 223
 */

#include "mruby_UV.h"

#if BIND_Write_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Write::initialize */
/* sha: 87d2033b90bf90474921b026e28ac53abc9e77817737ef6adeb56ac854850c1e */
#if BIND_Write_INITIALIZE
mrb_value
mrb_UV_Write_initialize(mrb_state* mrb, mrb_value self) {
  uv_write_t* native_object = (uv_write_t*)new_mruby_uv_req(mrb, self, sizeof(uv_write_t));
  mruby_gift_uv_write_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Write::cb_reader */
/* sha: 09dd969fc5d2d006dc58ba2c08af6372ff019d293445f8f89afe8644b98e4f5b */
#if BIND_Write_cb_FIELD_READER
/* get_cb
 *
 * Return Type: uv_write_cb
 */
mrb_value
mrb_UV_Write_get_cb(mrb_state* mrb, mrb_value self) {
  uv_write_t * native_self = mruby_unbox_uv_write_t(self);

  uv_write_cb native_cb = native_self->cb;

  mrb_value cb = TODO_mruby_box_uv_write_cb(mrb, native_cb);

  return cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Write::cb_writer */
/* sha: 21f9a2dc83d1caad0876aa120b8485a6559b30685c093a0817739b0caec1a5aa */
#if BIND_Write_cb_FIELD_WRITER
/* set_cb
 *
 * Parameters:
 * - value: uv_write_cb
 */
mrb_value
mrb_UV_Write_set_cb(mrb_state* mrb, mrb_value self) {
  uv_write_t * native_self = mruby_unbox_uv_write_t(self);
  mrb_value cb;

  mrb_get_args(mrb, "o", &cb);

  /* type checking */
  TODO_type_check_uv_write_cb(cb);

  uv_write_cb native_cb = TODO_mruby_unbox_uv_write_cb(cb);

  native_self->cb = native_cb;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Write::send_handle_reader */
/* sha: b225ca946ebde94cced8e83ff9f629871a90af95a8838777d086c4efa435accd */
#if BIND_Write_send_handle_FIELD_READER
/* get_send_handle
 *
 * Return Type: uv_stream_t *
 */
mrb_value
mrb_UV_Write_get_send_handle(mrb_state* mrb, mrb_value self) {
  uv_write_t * native_self = mruby_unbox_uv_write_t(self);

  uv_stream_t * native_send_handle = native_self->send_handle;

  mrb_value send_handle = (native_send_handle == NULL ? mrb_nil_value() : mruby_box_uv_stream_t(mrb, native_send_handle));

  return send_handle;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Write::send_handle_writer */
/* sha: 9e6c6f791aec1aba33767cc3c82303ab3fa07d6d0d66f52ec3d3c3aa7bd65788 */
#if BIND_Write_send_handle_FIELD_WRITER
/* set_send_handle
 *
 * Parameters:
 * - value: uv_stream_t *
 */
mrb_value
mrb_UV_Write_set_send_handle(mrb_state* mrb, mrb_value self) {
  uv_write_t * native_self = mruby_unbox_uv_write_t(self);
  mrb_value send_handle;

  mrb_get_args(mrb, "o", &send_handle);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, send_handle, Stream_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Stream expected");
    return mrb_nil_value();
  }

  uv_stream_t * native_send_handle = (mrb_nil_p(send_handle) ? NULL : mruby_unbox_uv_stream_t(send_handle));

  native_self->send_handle = native_send_handle;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Write::handle_reader */
/* sha: 05a01b0175902094a5e7c879666ab4925b829706a526dae0ea11e6948dcd9c6d */
#if BIND_Write_handle_FIELD_READER
/* get_handle
 *
 * Return Type: uv_stream_t *
 */
mrb_value
mrb_UV_Write_get_handle(mrb_state* mrb, mrb_value self) {
  uv_write_t * native_self = mruby_unbox_uv_write_t(self);

  uv_stream_t * native_handle = native_self->handle;

  mrb_value handle = (native_handle == NULL ? mrb_nil_value() : mruby_box_uv_stream_t(mrb, native_handle));

  return handle;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Write::handle_writer */
/* sha: 8d8435d0e2f946d98040c0712599eee7ab66ee0306ce33bf945059c6c4382cac */
#if BIND_Write_handle_FIELD_WRITER
/* set_handle
 *
 * Parameters:
 * - value: uv_stream_t *
 */
mrb_value
mrb_UV_Write_set_handle(mrb_state* mrb, mrb_value self) {
  uv_write_t * native_self = mruby_unbox_uv_write_t(self);
  mrb_value handle;

  mrb_get_args(mrb, "o", &handle);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, Stream_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Stream expected");
    return mrb_nil_value();
  }

  uv_stream_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_stream_t(handle));

  native_self->handle = native_handle;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Write_init(mrb_state* mrb) {
/* MRUBY_BINDING: Write::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Write::class_definition */
/* sha: 575e0b853b798f7d62c8012043d24871892baa81ec26ed7cf21df6a015a870f5 */
  struct RClass* Write_class = mrb_define_class_under(mrb, UV_module(mrb), "Write", mrb->object_class);
  MRB_SET_INSTANCE_TT(Write_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Write::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Write::class_method_definitions */
/* sha: 54a0a44f7a3dfaa381d52e73ddd405fe73db5458588caea3e8eba10ec32a1d3c */
#if BIND_Write_INITIALIZE
  mrb_define_method(mrb, Write_class, "initialize", mrb_UV_Write_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Write::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Write::attr_definitions */
/* sha: facf22822ee09fc93ea1b4a8dcbdc4d6ff7bac011c0ee800c7754ebee347350a */
  /*
   * Fields
   */
#if BIND_Write_cb_FIELD_READER
  mrb_define_method(mrb, Write_class, "cb", mrb_UV_Write_get_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Write_cb_FIELD_WRITER
  mrb_define_method(mrb, Write_class, "cb=", mrb_UV_Write_set_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Write_send_handle_FIELD_READER
  mrb_define_method(mrb, Write_class, "send_handle", mrb_UV_Write_get_send_handle, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Write_send_handle_FIELD_WRITER
  mrb_define_method(mrb, Write_class, "send_handle=", mrb_UV_Write_set_send_handle, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Write_handle_FIELD_READER
  mrb_define_method(mrb, Write_class, "handle", mrb_UV_Write_get_handle, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Write_handle_FIELD_WRITER
  mrb_define_method(mrb, Write_class, "handle=", mrb_UV_Write_set_handle, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Write::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Write::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Write::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
