/*
 * uv_shutdown_t
 * Defined in file uv.h @ line 222
 */

#include "mruby_UV.h"

#if BIND_Shutdown_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Shutdown::initialize */
/* sha: e780282fb35f7ec2721f09adfafea80f1f15903e2df5aea73ab2f97e815b4479 */
#if BIND_Shutdown_INITIALIZE
mrb_value
mrb_UV_Shutdown_initialize(mrb_state* mrb, mrb_value self) {
  uv_shutdown_t* native_object = (uv_shutdown_t*)new_mruby_uv_req(mrb, self, sizeof(uv_shutdown_t));
  mruby_gift_uv_shutdown_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Shutdown::handle_reader */
/* sha: b4e0bea202c9976c9109727b6a7ee90f6a3b76395e624b73381f27760350eec2 */
#if BIND_Shutdown_handle_FIELD_READER
mrb_value
mrb_UV_Shutdown_get_handle(mrb_state* mrb, mrb_value self) {
  uv_shutdown_t * native_self = mruby_unbox_uv_shutdown_t(self);

  uv_stream_t * native_handle = native_self->handle;

  mrb_value handle = (native_handle == NULL ? mrb_nil_value() : mruby_box_uv_stream_t(mrb, native_handle));

  return handle;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Shutdown::handle_writer */
/* sha: 2e3a9a61c163b8f6b891dfff0876719ddb7d49031e0769b748ead87d4c3ea66a */
#if BIND_Shutdown_handle_FIELD_WRITER
mrb_value
mrb_UV_Shutdown_set_handle(mrb_state* mrb, mrb_value self) {
  uv_shutdown_t * native_self = mruby_unbox_uv_shutdown_t(self);
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

/* MRUBY_BINDING: Shutdown::cb_reader */
/* sha: 9ae79b2774a2ff76892253975eec8223b50ec67e4fa37d395c159135c4ff3e3c */
#if BIND_Shutdown_cb_FIELD_READER
mrb_value
mrb_UV_Shutdown_get_cb(mrb_state* mrb, mrb_value self) {
  uv_shutdown_t * native_self = mruby_unbox_uv_shutdown_t(self);

  uv_shutdown_cb native_cb = native_self->cb;

  mrb_value cb = TODO_mruby_box_uv_shutdown_cb(mrb, native_cb);

  return cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Shutdown::cb_writer */
/* sha: e8c57bd4a500814ddbc7e6c6a1f776260a6173952ce32baebb0f70e6b6d5e158 */
#if BIND_Shutdown_cb_FIELD_WRITER
mrb_value
mrb_UV_Shutdown_set_cb(mrb_state* mrb, mrb_value self) {
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


void mrb_UV_Shutdown_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Shutdown::class_definition */
/* sha: 10bfc22684bcada95dd13ced581d208208934658d87cea06ef6c407f3401ae1c */
  struct RClass* Shutdown_class = mrb_define_class_under(mrb, UV_module(mrb), "Shutdown", Req_class(mrb));
  MRB_SET_INSTANCE_TT(Shutdown_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Shutdown::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Shutdown::class_method_definitions */
/* sha: c901dd7703a940ce683cdea45bcd0f12b3d6573ce2aa8633452c3a3e851bed92 */
#if BIND_Shutdown_INITIALIZE
  mrb_define_method(mrb, Shutdown_class, "initialize", mrb_UV_Shutdown_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Shutdown::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Shutdown::attr_definitions */
/* sha: 2fcb46c24a6e17f117a6c23da37009b37c0d952739ec5c372205c821d480a8e1 */
  /*
   * Fields
   */
#if BIND_Shutdown_handle_FIELD_READER
  mrb_define_method(mrb, Shutdown_class, "handle", mrb_UV_Shutdown_get_handle, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Shutdown_handle_FIELD_WRITER
  mrb_define_method(mrb, Shutdown_class, "handle=", mrb_UV_Shutdown_set_handle, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Shutdown_cb_FIELD_READER
  mrb_define_method(mrb, Shutdown_class, "cb", mrb_UV_Shutdown_get_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Shutdown_cb_FIELD_WRITER
  mrb_define_method(mrb, Shutdown_class, "cb=", mrb_UV_Shutdown_set_cb, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: Shutdown::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
