/*
 * uv_connect_t
 * Defined in file uv.h @ line 224
 */

#include "mruby_UV.h"

#if BIND_UvConnectT_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvConnectT::initialize */
/* sha: 3291f1812d1aca8a9c206900a28fc054b851ade85693ebd6ba6926efe21286a2 */
#if BIND_UvConnectT_INITIALIZE
mrb_value
mrb_UV_UvConnectT_initialize(mrb_state* mrb, mrb_value self) {
  uv_connect_t* native_object = (uv_connect_t*)new_mruby_uv_req(mrb, self, sizeof(uv_connect_t));
  mruby_gift_uv_connect_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvConnectT::disown */
/* sha: 5212313d99f1d49aa2de4eb5b4ff252acb6f7684a874dc2cbb176c00ea409abb */
mrb_value
mrb_UV_UvConnectT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvConnectT.disown only accepts objects of type UV::UvConnectT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvConnectT::belongs_to_ruby */
/* sha: fb073450eb6929f0256dc42913a941182d9d820818ffa50dd7b0b8e3368ae10b */
mrb_value
mrb_UV_UvConnectT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvConnectT.belongs_to_ruby only accepts objects of type UV::UvConnectT");
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

/* MRUBY_BINDING: UvConnectT::cb_reader */
/* sha: 77bc5e0714edbc63db2c6be869950dc2d5a9aa1b9a83b26334a752a1ef0bd174 */
#if BIND_UvConnectT_cb_FIELD_READER
/* get_cb
 *
 * Return Type: uv_connect_cb
 */
mrb_value
mrb_UV_UvConnectT_get_cb(mrb_state* mrb, mrb_value self) {
  uv_connect_t * native_self = mruby_unbox_uv_connect_t(self);

  uv_connect_cb native_cb = native_self->cb;

  mrb_value cb = TODO_mruby_box_uv_connect_cb(mrb, native_cb);

  return cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvConnectT::cb_writer */
/* sha: ecba761ae7ef137135a755a6776e29e287335d11e39747bb4f57b3ad18fe6ca1 */
#if BIND_UvConnectT_cb_FIELD_WRITER
/* set_cb
 *
 * Parameters:
 * - value: uv_connect_cb
 */
mrb_value
mrb_UV_UvConnectT_set_cb(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvConnectT::handle_reader */
/* sha: da6b80e408804395b3c840e2d2c147a1a63093a12d9ade0849cd64931abfd316 */
#if BIND_UvConnectT_handle_FIELD_READER
/* get_handle
 *
 * Return Type: uv_stream_t *
 */
mrb_value
mrb_UV_UvConnectT_get_handle(mrb_state* mrb, mrb_value self) {
  uv_connect_t * native_self = mruby_unbox_uv_connect_t(self);

  uv_stream_t * native_handle = native_self->handle;

  mrb_value handle = (native_handle == NULL ? mrb_nil_value() : mruby_box_uv_stream_t(mrb, native_handle));

  return handle;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvConnectT::handle_writer */
/* sha: 7b04319b27c9688d446a1b22e1309276c278a91ecdec75adc36fa8736e4ed912 */
#if BIND_UvConnectT_handle_FIELD_WRITER
/* set_handle
 *
 * Parameters:
 * - value: uv_stream_t *
 */
mrb_value
mrb_UV_UvConnectT_set_handle(mrb_state* mrb, mrb_value self) {
  uv_connect_t * native_self = mruby_unbox_uv_connect_t(self);
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


void mrb_UV_UvConnectT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvConnectT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvConnectT::class_definition */
/* sha: bf6e0d33f007f9526491b6fbdfa425717b63d7755da7ae85e2efbce2f3649862 */
  struct RClass* UvConnectT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvConnectT", UvReqT_class(mrb));
  MRB_SET_INSTANCE_TT(UvConnectT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvConnectT::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvConnectT::class_method_definitions */
/* sha: 9150a82e9416f3ebf788f00d391394883bc8711265519add7bd47eadd0eabfe5 */
#if BIND_UvConnectT_INITIALIZE
  mrb_define_method(mrb, UvConnectT_class, "initialize", mrb_UV_UvConnectT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvConnectT_class, "disown", mrb_UV_UvConnectT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvConnectT_class, "belongs_to_ruby?", mrb_UV_UvConnectT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvConnectT::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvConnectT::attr_definitions */
/* sha: 89cefda411a768b8cce42e06e93612aa40104542c6fb41d086972e0b52bb17e0 */
  /*
   * Fields
   */
#if BIND_UvConnectT_cb_FIELD_READER
  mrb_define_method(mrb, UvConnectT_class, "cb", mrb_UV_UvConnectT_get_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvConnectT_cb_FIELD_WRITER
  mrb_define_method(mrb, UvConnectT_class, "cb=", mrb_UV_UvConnectT_set_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvConnectT_handle_FIELD_READER
  mrb_define_method(mrb, UvConnectT_class, "handle", mrb_UV_UvConnectT_get_handle, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvConnectT_handle_FIELD_WRITER
  mrb_define_method(mrb, UvConnectT_class, "handle=", mrb_UV_UvConnectT_set_handle, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvConnectT::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvConnectT::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvConnectT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
