/*
 * uv_poll_t
 * Defined in file uv.h @ line 207
 */

#include "mruby_UV.h"

#if BIND_UvPollT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvPollT::initialize */
/* sha: 2717fa4bd4677121495b8663a38e9ef10c76ed7cca3a9386172e3edbbca36ade */
#if BIND_UvPollT_INITIALIZE
mrb_value
mrb_UV_UvPollT_initialize(mrb_state* mrb, mrb_value self) {
  uv_poll_t* native_object = (uv_poll_t*)calloc(1, sizeof(uv_poll_t));
  mruby_giftwrap_uv_poll_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPollT::initialize */
/* sha: 268d789972c2bf736e80f54d9867e8c14a61e0768e9cc363986332cbdb32a789 */
mrb_value
mrb_UV_UvPollT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvPollT.disown only accepts objects of type UV::UvPollT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPollT::belongs_to_ruby */
/* sha: 31897d7e87189cc1ca210abe72b90a047043bcd07874273db01dbecf20748914 */
mrb_value
mrb_UV_UvPollT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvPollT.belongs_to_ruby only accepts objects of type UV::UvPollT");
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

/* MRUBY_BINDING: UvPollT::uv_poll_cb_reader */
/* sha: 4b56a263edd931ad161b3a8acb96a639049b6e6796c5fb336b1d91c74d044409 */
#if BIND_UvPollT_uv_poll_cb_FIELD_READER
/* get_uv_poll_cb
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvPollT_get_uv_poll_cb(mrb_state* mrb, mrb_value self) {
  uv_poll_t * native_self = mruby_unbox_uv_poll_t(self);

  int native_uv_poll_cb = native_self->uv_poll_cb;

  mrb_value uv_poll_cb = mrb_fixnum_value(native_uv_poll_cb);

  return uv_poll_cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPollT::uv_poll_cb_writer */
/* sha: 0d0437cabdec8c550fb0589fe5fabbfe94b46e6796f4a2bee09aa23465468431 */
#if BIND_UvPollT_uv_poll_cb_FIELD_WRITER
/* set_uv_poll_cb
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvPollT_set_uv_poll_cb(mrb_state* mrb, mrb_value self) {
  uv_poll_t * native_self = mruby_unbox_uv_poll_t(self);
  mrb_int native_uv_poll_cb;

  mrb_get_args(mrb, "i", &native_uv_poll_cb);

  native_self->uv_poll_cb = native_uv_poll_cb;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPollT::_reader */
/* sha: c11009c1d3863fc29a37e7d45ae4c05eb75be018fcc24c9279ec376a39512594 */
#if BIND_UvPollT__FIELD_READER
/* get_
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvPollT_get_(mrb_state* mrb, mrb_value self) {
  uv_poll_t * native_self = mruby_unbox_uv_poll_t(self);

  int native_ = native_self->;

  mrb_value  = mrb_fixnum_value(native_);

  return ;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPollT::_writer */
/* sha: 3bf9595e5c2a9000ceafa9f5b02821cf192e573c0fb294d484ed20a6774e6c57 */
#if BIND_UvPollT__FIELD_WRITER
/* set_
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvPollT_set_(mrb_state* mrb, mrb_value self) {
  uv_poll_t * native_self = mruby_unbox_uv_poll_t(self);
  mrb_int native_;

  mrb_get_args(mrb, "i", &native_);

  native_self-> = native_;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvPollT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvPollT::class_definition */
/* sha: ebd056baea7c0d52e277c6874d8c987923e7fbae4c13dc224698aa5a58339c00 */
  struct RClass* UvPollT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvPollT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvPollT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPollT::class_method_definitions */
/* sha: 7cc6996f119ebd7d1ff64e8a08fc27991814be80891e22f52c993944b78011b2 */
#if BIND_UvPollT_INITIALIZE
  mrb_define_method(mrb, UvPollT_class, "initialize", mrb_UV_UvPollT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvPollT_class, "disown", mrb_UV_UvPollT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvPollT_class, "belongs_to_ruby?", mrb_UV_UvPollT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPollT::attr_definitions */
/* sha: 0fc36c7f5b803287e8b54eb60b5081e12651d685e2b3074fae4d0a408479759f */
  /*
   * Fields
   */
#if BIND_UvPollT_uv_poll_cb_FIELD_READER
  mrb_define_method(mrb, UvPollT_class, "uv_poll_cb", mrb_UV_UvPollT_get_uv_poll_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvPollT_uv_poll_cb_FIELD_WRITER
  mrb_define_method(mrb, UvPollT_class, "uv_poll_cb=", mrb_UV_UvPollT_set_uv_poll_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvPollT__FIELD_READER
  mrb_define_method(mrb, UvPollT_class, "", mrb_UV_UvPollT_get_, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvPollT__FIELD_WRITER
  mrb_define_method(mrb, UvPollT_class, "=", mrb_UV_UvPollT_set_, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPollT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
