/*
 * uv_process_t
 * Defined in file uv.h @ line 213
 */

#include "mruby_UV.h"

#if BIND_UvProcessT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvProcessT::initialize */
/* sha: 2baa787632fedde520047d8d6a09be6292ab00d45e32173b00a5538d4f295b1a */
#if BIND_UvProcessT_INITIALIZE
mrb_value
mrb_UV_UvProcessT_initialize(mrb_state* mrb, mrb_value self) {
  uv_process_t* native_object = (uv_process_t*)calloc(1, sizeof(uv_process_t));
  mruby_giftwrap_uv_process_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessT::initialize */
/* sha: 836578d3e1a6012fdb8f38fa7b547f95b39a34fa8edff62f641c58244f841cef */
mrb_value
mrb_UV_UvProcessT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvProcessT.disown only accepts objects of type UV::UvProcessT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessT::belongs_to_ruby */
/* sha: 77ff9b144148581e6931879978de2f6508bee9e90228164a18e6f057464201e5 */
mrb_value
mrb_UV_UvProcessT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvProcessT.belongs_to_ruby only accepts objects of type UV::UvProcessT");
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

/* MRUBY_BINDING: UvProcessT::uv_exit_cb_reader */
/* sha: dddd92d57aff57c8b98ecf9274e83086f9982b1614c0e605f0d975c0349902b6 */
#if BIND_UvProcessT_uv_exit_cb_FIELD_READER
/* get_uv_exit_cb
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvProcessT_get_uv_exit_cb(mrb_state* mrb, mrb_value self) {
  uv_process_t * native_self = mruby_unbox_uv_process_t(self);

  int native_uv_exit_cb = native_self->uv_exit_cb;

  mrb_value uv_exit_cb = mrb_fixnum_value(native_uv_exit_cb);

  return uv_exit_cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessT::uv_exit_cb_writer */
/* sha: df1846b65f301852b8588674bc2d83077e37ffb5c045190028a0bdff90d20053 */
#if BIND_UvProcessT_uv_exit_cb_FIELD_WRITER
/* set_uv_exit_cb
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvProcessT_set_uv_exit_cb(mrb_state* mrb, mrb_value self) {
  uv_process_t * native_self = mruby_unbox_uv_process_t(self);
  mrb_int native_uv_exit_cb;

  mrb_get_args(mrb, "i", &native_uv_exit_cb);

  native_self->uv_exit_cb = native_uv_exit_cb;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessT::pid_reader */
/* sha: a52f977feebcb226ed42894dbd3d776506a0812047773db01ddfe3159291dc52 */
#if BIND_UvProcessT_pid_FIELD_READER
/* get_pid
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvProcessT_get_pid(mrb_state* mrb, mrb_value self) {
  uv_process_t * native_self = mruby_unbox_uv_process_t(self);

  int native_pid = native_self->pid;

  mrb_value pid = mrb_fixnum_value(native_pid);

  return pid;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessT::pid_writer */
/* sha: 04da1981397c214e3baaf27f8f4ca34adc6e71a0c80b6812b8398fb2009bdb69 */
#if BIND_UvProcessT_pid_FIELD_WRITER
/* set_pid
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvProcessT_set_pid(mrb_state* mrb, mrb_value self) {
  uv_process_t * native_self = mruby_unbox_uv_process_t(self);
  mrb_int native_pid;

  mrb_get_args(mrb, "i", &native_pid);

  native_self->pid = native_pid;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessT::_reader */
/* sha: ff312e141a63e9503d91b242457b7e422632d3b2446ea32108f3a77f6cb68afe */
#if BIND_UvProcessT__FIELD_READER
/* get_
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvProcessT_get_(mrb_state* mrb, mrb_value self) {
  uv_process_t * native_self = mruby_unbox_uv_process_t(self);

  int native_ = native_self->;

  mrb_value  = mrb_fixnum_value(native_);

  return ;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessT::_writer */
/* sha: 6595fa54cca3a24bc4a6f7ee00230fee1a228811c9dc6d6d441eaeaeb3acac3e */
#if BIND_UvProcessT__FIELD_WRITER
/* set_
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvProcessT_set_(mrb_state* mrb, mrb_value self) {
  uv_process_t * native_self = mruby_unbox_uv_process_t(self);
  mrb_int native_;

  mrb_get_args(mrb, "i", &native_);

  native_self-> = native_;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvProcessT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvProcessT::class_definition */
/* sha: 25f08d06146076eafbded8eb394f11d58252bdc2db94c8a6d6aed3e7ac082b6c */
  struct RClass* UvProcessT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvProcessT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvProcessT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessT::class_method_definitions */
/* sha: 46521db5b4e48ae3f1cee6c1205f002afd8d9fe645867afccabea2ee4a315e7f */
#if BIND_UvProcessT_INITIALIZE
  mrb_define_method(mrb, UvProcessT_class, "initialize", mrb_UV_UvProcessT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvProcessT_class, "disown", mrb_UV_UvProcessT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvProcessT_class, "belongs_to_ruby?", mrb_UV_UvProcessT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessT::attr_definitions */
/* sha: 6f7e9a7aae7f72d334c57f2e1321b64d09a3e3473f3d677c0104f5d95577f598 */
  /*
   * Fields
   */
#if BIND_UvProcessT_uv_exit_cb_FIELD_READER
  mrb_define_method(mrb, UvProcessT_class, "uv_exit_cb", mrb_UV_UvProcessT_get_uv_exit_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvProcessT_uv_exit_cb_FIELD_WRITER
  mrb_define_method(mrb, UvProcessT_class, "uv_exit_cb=", mrb_UV_UvProcessT_set_uv_exit_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvProcessT_pid_FIELD_READER
  mrb_define_method(mrb, UvProcessT_class, "pid", mrb_UV_UvProcessT_get_pid, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvProcessT_pid_FIELD_WRITER
  mrb_define_method(mrb, UvProcessT_class, "pid=", mrb_UV_UvProcessT_set_pid, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvProcessT__FIELD_READER
  mrb_define_method(mrb, UvProcessT_class, "", mrb_UV_UvProcessT_get_, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvProcessT__FIELD_WRITER
  mrb_define_method(mrb, UvProcessT_class, "=", mrb_UV_UvProcessT_set_, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
