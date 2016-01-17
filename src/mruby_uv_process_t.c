/*
 * uv_process_t
 * Defined in file uv.h @ line 213
 */

#include "mruby_UV.h"

#if BIND_UvProcessT_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvProcessT::initialize */
/* sha: 386e4567c8caa1057c12209751d27f02154fccfd0c84032841f4d0dd262841cb */
#if BIND_UvProcessT_INITIALIZE
mrb_value
mrb_UV_UvProcessT_initialize(mrb_state* mrb, mrb_value self) {
  uv_process_t* native_object = (uv_process_t*)new_mruby_uv_handle(mrb, self, sizeof(uv_process_t));
  mruby_gift_uv_process_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessT::disown */
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

/* MRUBY_BINDING: UvProcessT::exit_cb_reader */
/* sha: 95b696b85e223d5e5eac340d5b99f76b3e9baa5e65f7e78eceee67df85c6da17 */
#if BIND_UvProcessT_exit_cb_FIELD_READER
/* get_exit_cb
 *
 * Return Type: uv_exit_cb
 */
mrb_value
mrb_UV_UvProcessT_get_exit_cb(mrb_state* mrb, mrb_value self) {
  uv_process_t * native_self = mruby_unbox_uv_process_t(self);

  uv_exit_cb native_exit_cb = native_self->exit_cb;

  mrb_value exit_cb = TODO_mruby_box_uv_exit_cb(mrb, native_exit_cb);

  return exit_cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessT::exit_cb_writer */
/* sha: a1f6fa0b6982737192896e5f6a9e3ada75a8da25f96f07e47d83c7813f613898 */
#if BIND_UvProcessT_exit_cb_FIELD_WRITER
/* set_exit_cb
 *
 * Parameters:
 * - value: uv_exit_cb
 */
mrb_value
mrb_UV_UvProcessT_set_exit_cb(mrb_state* mrb, mrb_value self) {
  uv_process_t * native_self = mruby_unbox_uv_process_t(self);
  mrb_value exit_cb;

  mrb_get_args(mrb, "o", &exit_cb);

  /* type checking */
  TODO_type_check_uv_exit_cb(exit_cb);

  uv_exit_cb native_exit_cb = TODO_mruby_unbox_uv_exit_cb(exit_cb);

  native_self->exit_cb = native_exit_cb;
  
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


void mrb_UV_UvProcessT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvProcessT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessT::class_definition */
/* sha: 25f08d06146076eafbded8eb394f11d58252bdc2db94c8a6d6aed3e7ac082b6c */
  struct RClass* UvProcessT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvProcessT", UvHandleT_class(mrb));
  MRB_SET_INSTANCE_TT(UvProcessT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessT::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessT::class_method_definitions */
/* sha: 46521db5b4e48ae3f1cee6c1205f002afd8d9fe645867afccabea2ee4a315e7f */
#if BIND_UvProcessT_INITIALIZE
  mrb_define_method(mrb, UvProcessT_class, "initialize", mrb_UV_UvProcessT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvProcessT_class, "disown", mrb_UV_UvProcessT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvProcessT_class, "belongs_to_ruby?", mrb_UV_UvProcessT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessT::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessT::attr_definitions */
/* sha: 4c1b0ffac95be7e15c4e6847d0f7ec2796504b160c91800b037949e8e05601a8 */
  /*
   * Fields
   */
#if BIND_UvProcessT_exit_cb_FIELD_READER
  mrb_define_method(mrb, UvProcessT_class, "exit_cb", mrb_UV_UvProcessT_get_exit_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvProcessT_exit_cb_FIELD_WRITER
  mrb_define_method(mrb, UvProcessT_class, "exit_cb=", mrb_UV_UvProcessT_set_exit_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvProcessT_pid_FIELD_READER
  mrb_define_method(mrb, UvProcessT_class, "pid", mrb_UV_UvProcessT_get_pid, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvProcessT_pid_FIELD_WRITER
  mrb_define_method(mrb, UvProcessT_class, "pid=", mrb_UV_UvProcessT_set_pid, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessT::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessT::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
