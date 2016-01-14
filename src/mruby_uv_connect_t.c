/*
 * uv_connect_t
 * Defined in file uv.h @ line 224
 */

#include "mruby_UV.h"

#if BIND_UvConnectT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvConnectT::initialize */
/* sha: 4274fd29fbbe60655db0f0c03c807e2bf53acb3fe4e7973c168445c45148170c */
#if BIND_UvConnectT_INITIALIZE
mrb_value
mrb_UV_UvConnectT_initialize(mrb_state* mrb, mrb_value self) {
  uv_connect_t* native_object = (uv_connect_t*)calloc(1, sizeof(uv_connect_t));
  mruby_giftwrap_uv_connect_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvConnectT::initialize */
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

/* MRUBY_BINDING: UvConnectT::uv_connect_cb_reader */
/* sha: 2cad0539c2925a6fea3259f1fba6672b0598246e382b67f5e995ba6f8d65c16e */
#if BIND_UvConnectT_uv_connect_cb_FIELD_READER
/* get_uv_connect_cb
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvConnectT_get_uv_connect_cb(mrb_state* mrb, mrb_value self) {
  uv_connect_t * native_self = mruby_unbox_uv_connect_t(self);

  int native_uv_connect_cb = native_self->uv_connect_cb;

  mrb_value uv_connect_cb = mrb_fixnum_value(native_uv_connect_cb);

  return uv_connect_cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvConnectT::uv_connect_cb_writer */
/* sha: da86289f80604103138c51dbfaadc1f33e779c8325346aeff2c1c31ae68694bd */
#if BIND_UvConnectT_uv_connect_cb_FIELD_WRITER
/* set_uv_connect_cb
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvConnectT_set_uv_connect_cb(mrb_state* mrb, mrb_value self) {
  uv_connect_t * native_self = mruby_unbox_uv_connect_t(self);
  mrb_int native_uv_connect_cb;

  mrb_get_args(mrb, "i", &native_uv_connect_cb);

  native_self->uv_connect_cb = native_uv_connect_cb;
  
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

/* MRUBY_BINDING: UvConnectT::_reader */
/* sha: fd2f7b2d5788398a6aff627b2d61f1837bdca5cc790525f7c6a2231c6cc8141f */
#if BIND_UvConnectT__FIELD_READER
/* get_
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvConnectT_get_(mrb_state* mrb, mrb_value self) {
  uv_connect_t * native_self = mruby_unbox_uv_connect_t(self);

  int native_ = native_self->;

  mrb_value  = mrb_fixnum_value(native_);

  return ;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvConnectT::_writer */
/* sha: 127e88d65271d249736a70d4b51d7dd456c232fa1582a76270eaa321d757219e */
#if BIND_UvConnectT__FIELD_WRITER
/* set_
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvConnectT_set_(mrb_state* mrb, mrb_value self) {
  uv_connect_t * native_self = mruby_unbox_uv_connect_t(self);
  mrb_int native_;

  mrb_get_args(mrb, "i", &native_);

  native_self-> = native_;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvConnectT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvConnectT::class_definition */
/* sha: bf6e0d33f007f9526491b6fbdfa425717b63d7755da7ae85e2efbce2f3649862 */
  struct RClass* UvConnectT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvConnectT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvConnectT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvConnectT::class_method_definitions */
/* sha: 9150a82e9416f3ebf788f00d391394883bc8711265519add7bd47eadd0eabfe5 */
#if BIND_UvConnectT_INITIALIZE
  mrb_define_method(mrb, UvConnectT_class, "initialize", mrb_UV_UvConnectT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvConnectT_class, "disown", mrb_UV_UvConnectT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvConnectT_class, "belongs_to_ruby?", mrb_UV_UvConnectT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvConnectT::attr_definitions */
/* sha: 6194c5ce2f7f0411b73e791fff8877444c5b3944e7df2b5618d0ae764e04a51d */
  /*
   * Fields
   */
#if BIND_UvConnectT_uv_connect_cb_FIELD_READER
  mrb_define_method(mrb, UvConnectT_class, "uv_connect_cb", mrb_UV_UvConnectT_get_uv_connect_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvConnectT_uv_connect_cb_FIELD_WRITER
  mrb_define_method(mrb, UvConnectT_class, "uv_connect_cb=", mrb_UV_UvConnectT_set_uv_connect_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvConnectT_handle_FIELD_READER
  mrb_define_method(mrb, UvConnectT_class, "handle", mrb_UV_UvConnectT_get_handle, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvConnectT_handle_FIELD_WRITER
  mrb_define_method(mrb, UvConnectT_class, "handle=", mrb_UV_UvConnectT_set_handle, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvConnectT__FIELD_READER
  mrb_define_method(mrb, UvConnectT_class, "", mrb_UV_UvConnectT_get_, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvConnectT__FIELD_WRITER
  mrb_define_method(mrb, UvConnectT_class, "=", mrb_UV_UvConnectT_set_, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvConnectT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
