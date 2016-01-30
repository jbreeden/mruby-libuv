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
/* sha: 2f3f6e542d209cf6b6d7d8a52e2082a6e328d1b5efb0af79feedf8333da973c9 */
#if BIND_Write_cb_FIELD_READER
mrb_value
mrb_UV_Write_get_cb(mrb_state* mrb, mrb_value self) {
  uv_write_t * native_self = mruby_unbox_uv_write_t(self);

  uv_write_cb native_cb = native_self->cb;

  mrb_value cb = TODO_mruby_box_uv_write_cb(native_cb);

  return cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Write::cb_writer */
/* sha: 07276d0d462e34dcb422e89154830a64f886b6287fa986ccb23f2213239caf90 */
#if BIND_Write_cb_FIELD_WRITER
mrb_value
mrb_UV_Write_set_cb(mrb_state* mrb, mrb_value self) {
  uv_write_t * native_self = mruby_unbox_uv_write_t(self);
  mrb_value native_cb;

  mrb_get_args(mrb, "&", &native_cb);

  /* type checking */
  if (mrb_nil_p(native_cb)) {
    mrb_raise(mrb, E_ARGUMENT_ERROR, "No block provided");
    return mrb_nil_value();
  }
  // TODO: mrb_iv_set(mrb, req???, mrb_intern_cstr(mrb, "@mruby_uv_write_cb"), native_cb);

  native_self->cb = native_cb;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Write::send_handle_reader */
/* sha: 390b5c293a0bc3e0367d78dd38bdae244330c051f845323c85191a6cfb0f5d44 */
#if BIND_Write_send_handle_FIELD_READER
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
/* sha: 78ca9f325a9eada2f749110e2110af4b60985a78cf093d4a10cf0998a0eba1bb */
#if BIND_Write_send_handle_FIELD_WRITER
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
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Write::handle_reader */
/* sha: 45ca09a0adc5bdbd27614453c9481d35fcaedb95bd4486875bf3bac341d718f9 */
#if BIND_Write_handle_FIELD_READER
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
/* sha: 21c6ae937e709d77dc337f4ea4052208135df3c46e207d3981c6e9300091ee74 */
#if BIND_Write_handle_FIELD_WRITER
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
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Write_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Write::class_definition */
/* sha: 575e0b853b798f7d62c8012043d24871892baa81ec26ed7cf21df6a015a870f5 */
  struct RClass* Write_class = mrb_define_class_under(mrb, UV_module(mrb), "Write", Req_class(mrb));
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


/* MRUBY_BINDING: Write::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
