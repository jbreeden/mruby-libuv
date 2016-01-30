/*
 * uv_connect_t
 * Defined in file uv.h @ line 224
 */

#include "mruby_UV.h"

#if BIND_Connect_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Connect::initialize */
/* sha: 948a0be0cd10e41741ca7eb0aedb46ab20f873fc7597600e50bf03eff18b2fd8 */
#if BIND_Connect_INITIALIZE
mrb_value
mrb_UV_Connect_initialize(mrb_state* mrb, mrb_value self) {
  uv_connect_t* native_object = (uv_connect_t*)new_mruby_uv_req(mrb, self, sizeof(uv_connect_t));
  mruby_gift_uv_connect_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Connect::cb_reader */
/* sha: 0455ced50c7f8817dc3779f61227c44aa8352372c0a9ef46caf154773d54e54c */
#if BIND_Connect_cb_FIELD_READER
mrb_value
mrb_UV_Connect_get_cb(mrb_state* mrb, mrb_value self) {
  uv_connect_t * native_self = mruby_unbox_uv_connect_t(self);

  uv_connect_cb native_cb = native_self->cb;

  mrb_value cb = TODO_mruby_box_uv_connect_cb(mrb, native_cb);

  return cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Connect::cb_writer */
/* sha: 69f194d9c19fa856dcf4f1eb41d8939bfadfb24df6fbd80cf7f8472e713eeb09 */
#if BIND_Connect_cb_FIELD_WRITER
mrb_value
mrb_UV_Connect_set_cb(mrb_state* mrb, mrb_value self) {
  uv_connect_t * native_self = mruby_unbox_uv_connect_t(self);
  mrb_value cb;

  mrb_get_args(mrb, "o", &cb);

  /* type checking */
  TODO_type_check_uv_connect_cb(cb);

  uv_connect_cb native_cb = TODO_mruby_unbox_uv_connect_cb(cb);

  native_self->cb = native_cb;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Connect::handle_reader */
/* sha: 710de9e29828e08a374898a2ded1b3c7becb9efd499f406368b03f65f96b91b6 */
#if BIND_Connect_handle_FIELD_READER
mrb_value
mrb_UV_Connect_get_handle(mrb_state* mrb, mrb_value self) {
  uv_connect_t * native_self = mruby_unbox_uv_connect_t(self);

  uv_stream_t * native_handle = native_self->handle;

  mrb_value handle = (native_handle == NULL ? mrb_nil_value() : mruby_box_uv_stream_t(mrb, native_handle));

  return handle;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Connect::handle_writer */
/* sha: 4017daabe5fea4bc001756179bbe4230fed5c21da9b1424a8ede9f828060c104 */
#if BIND_Connect_handle_FIELD_WRITER
mrb_value
mrb_UV_Connect_set_handle(mrb_state* mrb, mrb_value self) {
  uv_connect_t * native_self = mruby_unbox_uv_connect_t(self);
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


void mrb_UV_Connect_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Connect::class_definition */
/* sha: 3b467caab311824b096c7e80e39b14558c0af1240d9360d84c002dce1a1e9bdf */
  struct RClass* Connect_class = mrb_define_class_under(mrb, UV_module(mrb), "Connect", Req_class(mrb));
  MRB_SET_INSTANCE_TT(Connect_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Connect::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Connect::class_method_definitions */
/* sha: b4b400e6af8e7ef22729136f4625a94e6ce05c3d08ab94dd0ee691d5ae512144 */
#if BIND_Connect_INITIALIZE
  mrb_define_method(mrb, Connect_class, "initialize", mrb_UV_Connect_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Connect::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Connect::attr_definitions */
/* sha: 135207e118d7c19393a5a3ab305cb0f940eef4b93b4f4c0d4e5bf80ff108c0d1 */
  /*
   * Fields
   */
#if BIND_Connect_cb_FIELD_READER
  mrb_define_method(mrb, Connect_class, "cb", mrb_UV_Connect_get_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Connect_cb_FIELD_WRITER
  mrb_define_method(mrb, Connect_class, "cb=", mrb_UV_Connect_set_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Connect_handle_FIELD_READER
  mrb_define_method(mrb, Connect_class, "handle", mrb_UV_Connect_get_handle, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Connect_handle_FIELD_WRITER
  mrb_define_method(mrb, Connect_class, "handle=", mrb_UV_Connect_set_handle, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: Connect::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
