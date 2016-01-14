/*
 * uv_fs_event_t
 * Defined in file uv.h @ line 214
 */

#include "mruby_UV.h"

#if BIND_UvFsEventT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvFsEventT::initialize */
/* sha: ea811e738eacd3bc3d974b6c88b15bea54e1efb2327a8e394bbc571edfa9fc46 */
#if BIND_UvFsEventT_INITIALIZE
mrb_value
mrb_UV_UvFsEventT_initialize(mrb_state* mrb, mrb_value self) {
  uv_fs_event_t* native_object = (uv_fs_event_t*)calloc(1, sizeof(uv_fs_event_t));
  mruby_giftwrap_uv_fs_event_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsEventT::initialize */
/* sha: d0948d424fa99aee9c3f633df6035c9798febdb11303771d87dd3df2b28e693c */
mrb_value
mrb_UV_UvFsEventT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvFsEventT.disown only accepts objects of type UV::UvFsEventT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsEventT::belongs_to_ruby */
/* sha: 2b71bd45f34e8683b0e6fc6c170fe26f113036621fe9d74dad77ca99623d6501 */
mrb_value
mrb_UV_UvFsEventT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvFsEventT.belongs_to_ruby only accepts objects of type UV::UvFsEventT");
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

/* MRUBY_BINDING: UvFsEventT::_reader */
/* sha: 0cee04ec781ff69d1841479c1a1ddddfe51bab2f0c4124efe288543f6fee63ad */
#if BIND_UvFsEventT__FIELD_READER
/* get_
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvFsEventT_get_(mrb_state* mrb, mrb_value self) {
  uv_fs_event_t * native_self = mruby_unbox_uv_fs_event_t(self);

  int native_ = native_self->;

  mrb_value  = mrb_fixnum_value(native_);

  return ;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsEventT::_writer */
/* sha: 0d244332ca3849d855dd3a5eb008f3183f06fe3e51bffb8577c614ed59feb4d1 */
#if BIND_UvFsEventT__FIELD_WRITER
/* set_
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvFsEventT_set_(mrb_state* mrb, mrb_value self) {
  uv_fs_event_t * native_self = mruby_unbox_uv_fs_event_t(self);
  mrb_int native_;

  mrb_get_args(mrb, "i", &native_);

  native_self-> = native_;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvFsEventT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvFsEventT::class_definition */
/* sha: bc622e1c5d85a450060e5c8613ecec295ab9d055abc36b8e601fdba4bed626e8 */
  struct RClass* UvFsEventT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvFsEventT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvFsEventT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsEventT::class_method_definitions */
/* sha: 706d72b073720447b1f2bd9786e0af837fcab51445cbcc08b72dbae4141051c3 */
#if BIND_UvFsEventT_INITIALIZE
  mrb_define_method(mrb, UvFsEventT_class, "initialize", mrb_UV_UvFsEventT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvFsEventT_class, "disown", mrb_UV_UvFsEventT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvFsEventT_class, "belongs_to_ruby?", mrb_UV_UvFsEventT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsEventT::attr_definitions */
/* sha: 38762e03c1340391ba6cc3480d89ca6d195b2555737855ae223582c5b2a94621 */
  /*
   * Fields
   */
#if BIND_UvFsEventT__FIELD_READER
  mrb_define_method(mrb, UvFsEventT_class, "", mrb_UV_UvFsEventT_get_, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvFsEventT__FIELD_WRITER
  mrb_define_method(mrb, UvFsEventT_class, "=", mrb_UV_UvFsEventT_set_, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsEventT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
