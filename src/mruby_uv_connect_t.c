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
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  uv_connect_t* native_object = (uv_connect_t*)calloc(1, sizeof(uv_connect_t));
  mruby_gift_uv_connect_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Connect::cb_reader */
/* sha: aa371c21fa95458086df6449d9ef9e86a64fe657a891728bbf4d7ca977801526 */
#if BIND_Connect_cb_FIELD_READER
/* get_cb
 *
 * Return Type: uv_connect_cb
 */
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
/* sha: 0686a698c4b17103899d934f440427d93308c06d91ac80c0992f4d94c50f2f3e */
#if BIND_Connect_cb_FIELD_WRITER
/* set_cb
 *
 * Parameters:
 * - value: uv_connect_cb
 */
mrb_value
mrb_UV_Connect_set_cb(mrb_state* mrb, mrb_value self) {
  uv_connect_t * native_self = mruby_unbox_uv_connect_t(self);
  mrb_value cb;

  mrb_get_args(mrb, "o", &cb);

  /* type checking */
  TODO_type_check_uv_connect_cb(cb);

  uv_connect_cb native_cb = TODO_mruby_unbox_uv_connect_cb(cb);

  native_self->cb = native_cb;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Connect::handle_reader */
/* sha: 04e591d9070264eb177096b77c4e862490f283b932e728ded35c998d0adfe8fd */
#if BIND_Connect_handle_FIELD_READER
/* get_handle
 *
 * Return Type: uv_stream_t *
 */
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
/* sha: 378307a6c170fa4a8b2c57229d708210acd0ff787f19e180ba44219692fd71a4 */
#if BIND_Connect_handle_FIELD_WRITER
/* set_handle
 *
 * Parameters:
 * - value: uv_stream_t *
 */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Connect_init(mrb_state* mrb) {
/* MRUBY_BINDING: Connect::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Connect::class_definition */
/* sha: 3b467caab311824b096c7e80e39b14558c0af1240d9360d84c002dce1a1e9bdf */
  struct RClass* Connect_class = mrb_define_class_under(mrb, UV_module(mrb), "Connect", mrb->object_class);
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

/* MRUBY_BINDING: Connect::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Connect::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Connect::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
