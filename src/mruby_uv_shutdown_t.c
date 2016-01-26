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
/* sha: 3fc0f04b8720413d0de30a8b852b3d59c5a4f18ab80c44a898ecfd4d7e77a1ff */
#if BIND_Shutdown_handle_FIELD_READER
/* get_handle
 *
 * Return Type: uv_stream_t *
 */
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
/* sha: 04fb1e92d48a848187a01b5f416d2a2b937a0e4f144983c8ebd44d9d5990e6cf */
#if BIND_Shutdown_handle_FIELD_WRITER
/* set_handle
 *
 * Parameters:
 * - value: uv_stream_t *
 */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Shutdown::cb_reader */
/* sha: 2b913ff07d56fe2e54615cfbfb10a276b7da60f674bdad11e2f053cf5907776b */
#if BIND_Shutdown_cb_FIELD_READER
/* get_cb
 *
 * Return Type: uv_shutdown_cb
 */
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
/* sha: 873f62c2b531cf29d11ebaa045d434023e420d5d64cb669534bafdab08bff643 */
#if BIND_Shutdown_cb_FIELD_WRITER
/* set_cb
 *
 * Parameters:
 * - value: uv_shutdown_cb
 */
mrb_value
mrb_UV_Shutdown_set_cb(mrb_state* mrb, mrb_value self) {
  uv_shutdown_t * native_self = mruby_unbox_uv_shutdown_t(self);
  mrb_value cb;

  mrb_get_args(mrb, "o", &cb);

  /* type checking */
  TODO_type_check_uv_shutdown_cb(cb);

  uv_shutdown_cb native_cb = TODO_mruby_unbox_uv_shutdown_cb(cb);

  native_self->cb = native_cb;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Shutdown_init(mrb_state* mrb) {
/* MRUBY_BINDING: Shutdown::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
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

/* MRUBY_BINDING: Shutdown::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Shutdown::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Shutdown::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
