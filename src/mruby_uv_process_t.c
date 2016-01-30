/*
 * uv_process_t
 * Defined in file uv.h @ line 213
 */

#include "mruby_UV.h"

#if BIND_Process_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Process::initialize */
/* sha: ef92ece678a225de887ac50128baecf72106c9d817bae1f558b6e90f8bce09fe */
#if BIND_Process_INITIALIZE
mrb_value
mrb_UV_Process_initialize(mrb_state* mrb, mrb_value self) {
  uv_process_t* native_object = (uv_process_t*)new_mruby_uv_handle(mrb, self, sizeof(uv_process_t));
  mruby_gift_uv_process_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Process::exit_cb_reader */
/* sha: 3641113dd96acb44c11dbf47a86d627641ec26ea7c844dda37d93275d8f0bddc */
#if BIND_Process_exit_cb_FIELD_READER
mrb_value
mrb_UV_Process_get_exit_cb(mrb_state* mrb, mrb_value self) {
  uv_process_t * native_self = mruby_unbox_uv_process_t(self);

  uv_exit_cb native_exit_cb = native_self->exit_cb;

  mrb_value exit_cb = TODO_mruby_box_uv_exit_cb(mrb, native_exit_cb);

  return exit_cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Process::exit_cb_writer */
/* sha: 618bf9a7f397b0ebc8b67c23b29e379608dc96930182683c03ce651ffae2a53b */
#if BIND_Process_exit_cb_FIELD_WRITER
mrb_value
mrb_UV_Process_set_exit_cb(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: Process::pid_reader */
/* sha: 3b9849b9f578ace94968295e541dd9ef9ca671832e42f6a720ac8e9e7081f8ad */
#if BIND_Process_pid_FIELD_READER
mrb_value
mrb_UV_Process_get_pid(mrb_state* mrb, mrb_value self) {
  uv_process_t * native_self = mruby_unbox_uv_process_t(self);

  int native_pid = native_self->pid;

  mrb_value pid = mrb_fixnum_value(native_pid);

  return pid;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Process::pid_writer */
/* sha: f9980c243c46000351c3c6662e3513ca07f3e419340c06e720d85f07448cb0e9 */
#if BIND_Process_pid_FIELD_WRITER
mrb_value
mrb_UV_Process_set_pid(mrb_state* mrb, mrb_value self) {
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


void mrb_UV_Process_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Process::class_definition */
/* sha: 5325c686001713875181e51d9feb83e0dbc15d7ac0bd3799a208ae8279616403 */
  struct RClass* Process_class = mrb_define_class_under(mrb, UV_module(mrb), "Process", Handle_class(mrb));
  MRB_SET_INSTANCE_TT(Process_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Process::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Process::class_method_definitions */
/* sha: b9babcbcdef085f40ac0bb4bccb6993bb0740b40c1bfd17887ccafc50d03dca9 */
#if BIND_Process_INITIALIZE
  mrb_define_method(mrb, Process_class, "initialize", mrb_UV_Process_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Process::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Process::attr_definitions */
/* sha: 754c4a1bbc8e727ba39b80a194993766cf93b84bde6f9ad462275c2ac64b6482 */
  /*
   * Fields
   */
#if BIND_Process_exit_cb_FIELD_READER
  mrb_define_method(mrb, Process_class, "exit_cb", mrb_UV_Process_get_exit_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Process_exit_cb_FIELD_WRITER
  mrb_define_method(mrb, Process_class, "exit_cb=", mrb_UV_Process_set_exit_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Process_pid_FIELD_READER
  mrb_define_method(mrb, Process_class, "pid", mrb_UV_Process_get_pid, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Process_pid_FIELD_WRITER
  mrb_define_method(mrb, Process_class, "pid=", mrb_UV_Process_set_pid, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: Process::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
