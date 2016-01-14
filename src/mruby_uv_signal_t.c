/*
 * uv_signal_t
 * Defined in file uv.h @ line 216
 */

#include "mruby_UV.h"

#if BIND_UvSignalT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvSignalT::initialize */
/* sha: 7bc6549dfcc9a683a9a9b6bca16348f5354c92afe8d3070abdc382dfade8a431 */
#if BIND_UvSignalT_INITIALIZE
mrb_value
mrb_UV_UvSignalT_initialize(mrb_state* mrb, mrb_value self) {
  uv_signal_t* native_object = (uv_signal_t*)calloc(1, sizeof(uv_signal_t));
  mruby_giftwrap_uv_signal_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvSignalT::initialize */
/* sha: 2d7224072eafa0d1922bb2f44c5713d608174d412da1620951f22363917110eb */
mrb_value
mrb_UV_UvSignalT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvSignalT.disown only accepts objects of type UV::UvSignalT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvSignalT::belongs_to_ruby */
/* sha: 5f8cef32f7b4566b8e133297bb2856d862d7d02142f6f5321510bc967f2ef6f8 */
mrb_value
mrb_UV_UvSignalT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvSignalT.belongs_to_ruby only accepts objects of type UV::UvSignalT");
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

/* MRUBY_BINDING: UvSignalT::uv_signal_cb_reader */
/* sha: 1c86b720243f6572a855ffb58c1346902ef2b7289a9d520feaf780375687b727 */
#if BIND_UvSignalT_uv_signal_cb_FIELD_READER
/* get_uv_signal_cb
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvSignalT_get_uv_signal_cb(mrb_state* mrb, mrb_value self) {
  uv_signal_t * native_self = mruby_unbox_uv_signal_t(self);

  int native_uv_signal_cb = native_self->uv_signal_cb;

  mrb_value uv_signal_cb = mrb_fixnum_value(native_uv_signal_cb);

  return uv_signal_cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvSignalT::uv_signal_cb_writer */
/* sha: 2949ead8ff81f196fbaaddc9a639f817ab85355eaf7b54f1ad8c25bed309fdb8 */
#if BIND_UvSignalT_uv_signal_cb_FIELD_WRITER
/* set_uv_signal_cb
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvSignalT_set_uv_signal_cb(mrb_state* mrb, mrb_value self) {
  uv_signal_t * native_self = mruby_unbox_uv_signal_t(self);
  mrb_int native_uv_signal_cb;

  mrb_get_args(mrb, "i", &native_uv_signal_cb);

  native_self->uv_signal_cb = native_uv_signal_cb;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvSignalT::signum_reader */
/* sha: fde328ac3fe657b93bb708409ddf6e9357f5b6a55f57e14b539e7b89a3a5d30c */
#if BIND_UvSignalT_signum_FIELD_READER
/* get_signum
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvSignalT_get_signum(mrb_state* mrb, mrb_value self) {
  uv_signal_t * native_self = mruby_unbox_uv_signal_t(self);

  int native_signum = native_self->signum;

  mrb_value signum = mrb_fixnum_value(native_signum);

  return signum;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvSignalT::signum_writer */
/* sha: a41955a7273a9190e3ebfeb818799a1bb1f1cac2e9d3871860bb6ee56c76b5eb */
#if BIND_UvSignalT_signum_FIELD_WRITER
/* set_signum
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvSignalT_set_signum(mrb_state* mrb, mrb_value self) {
  uv_signal_t * native_self = mruby_unbox_uv_signal_t(self);
  mrb_int native_signum;

  mrb_get_args(mrb, "i", &native_signum);

  native_self->signum = native_signum;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvSignalT::_reader */
/* sha: a14d5ad4a8e1d0f1322e1ea6dcb7f2f22644f65fe0903c95125309f5f4afbb90 */
#if BIND_UvSignalT__FIELD_READER
/* get_
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvSignalT_get_(mrb_state* mrb, mrb_value self) {
  uv_signal_t * native_self = mruby_unbox_uv_signal_t(self);

  int native_ = native_self->;

  mrb_value  = mrb_fixnum_value(native_);

  return ;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvSignalT::_writer */
/* sha: 735428dc982832b60bfb672d151b3f06fae40c48a2916dd1bea83748d31e4eba */
#if BIND_UvSignalT__FIELD_WRITER
/* set_
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvSignalT_set_(mrb_state* mrb, mrb_value self) {
  uv_signal_t * native_self = mruby_unbox_uv_signal_t(self);
  mrb_int native_;

  mrb_get_args(mrb, "i", &native_);

  native_self-> = native_;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvSignalT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvSignalT::class_definition */
/* sha: 28c4ac1ca45cbb61913dd1c958fba4a5c973394efe70c9bd98778879509002a8 */
  struct RClass* UvSignalT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvSignalT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvSignalT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvSignalT::class_method_definitions */
/* sha: 766369183c7049e2468c00bf35d7e9c94ba169d010ed7479e528211be9884a04 */
#if BIND_UvSignalT_INITIALIZE
  mrb_define_method(mrb, UvSignalT_class, "initialize", mrb_UV_UvSignalT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvSignalT_class, "disown", mrb_UV_UvSignalT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvSignalT_class, "belongs_to_ruby?", mrb_UV_UvSignalT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvSignalT::attr_definitions */
/* sha: 8282a108a18913f605ad060f733145efce40bb0fa3e601ccf217d06a8e02b4b0 */
  /*
   * Fields
   */
#if BIND_UvSignalT_uv_signal_cb_FIELD_READER
  mrb_define_method(mrb, UvSignalT_class, "uv_signal_cb", mrb_UV_UvSignalT_get_uv_signal_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvSignalT_uv_signal_cb_FIELD_WRITER
  mrb_define_method(mrb, UvSignalT_class, "uv_signal_cb=", mrb_UV_UvSignalT_set_uv_signal_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvSignalT_signum_FIELD_READER
  mrb_define_method(mrb, UvSignalT_class, "signum", mrb_UV_UvSignalT_get_signum, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvSignalT_signum_FIELD_WRITER
  mrb_define_method(mrb, UvSignalT_class, "signum=", mrb_UV_UvSignalT_set_signum, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvSignalT__FIELD_READER
  mrb_define_method(mrb, UvSignalT_class, "", mrb_UV_UvSignalT_get_, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvSignalT__FIELD_WRITER
  mrb_define_method(mrb, UvSignalT_class, "=", mrb_UV_UvSignalT_set_, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvSignalT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
