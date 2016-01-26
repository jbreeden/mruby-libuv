/*
 * uv_process_options_t
 * Defined in file uv.h @ line 858
 */

#include "mruby_UV.h"

#if BIND_ProcessOptions_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::initialize */
/* sha: 66f33de924dba096c5d88c8f0c1f4db1bcfd0b4a782c6c3a2de983c542fd5c74 */
#if BIND_ProcessOptions_INITIALIZE
mrb_value
mrb_UV_ProcessOptions_initialize(mrb_state* mrb, mrb_value self) {

  uv_process_options_t* native_object = (uv_process_options_t*)calloc(1, sizeof(uv_process_options_t));
  mruby_gift_uv_process_options_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: ProcessOptions::exit_cb_reader */
/* sha: b413cc6042426b94584114accd3d1d4431cf586fc41fc082de9c13b320bdc157 */
#if BIND_ProcessOptions_exit_cb_FIELD_READER
/* get_exit_cb
 *
 * Return Type: uv_exit_cb
 */
mrb_value
mrb_UV_ProcessOptions_get_exit_cb(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);

  uv_exit_cb native_exit_cb = native_self->exit_cb;

  mrb_value exit_cb = TODO_mruby_box_uv_exit_cb(mrb, native_exit_cb);

  return exit_cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::exit_cb_writer */
/* sha: 2ca60a5c02be169092e75e85b26868111163fc3449f3f20d48db4170da44275f */
#if BIND_ProcessOptions_exit_cb_FIELD_WRITER
/* set_exit_cb
 *
 * Parameters:
 * - value: uv_exit_cb
 */
mrb_value
mrb_UV_ProcessOptions_set_exit_cb(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);
  mrb_value exit_cb;

  mrb_get_args(mrb, "o", &exit_cb);

  /* type checking */
  TODO_type_check_uv_exit_cb(exit_cb);

  uv_exit_cb native_exit_cb = TODO_mruby_unbox_uv_exit_cb(exit_cb);

  native_self->exit_cb = native_exit_cb;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::file_reader */
/* sha: 433c14dc132be10a596d8fe3eed66060e90092e013350070a386c0cda9e8c1af */
#if BIND_ProcessOptions_file_FIELD_READER
/* get_file
 *
 * Return Type: const char *
 */
mrb_value
mrb_UV_ProcessOptions_get_file(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);

  const char * native_file = native_self->file;

  mrb_value file = native_file == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_file);

  return file;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::file_writer */
/* sha: a11310da8b649ad20568bda070fdc30dd4ee4fb40bcbc643c0657a2dfda0db98 */
#if BIND_ProcessOptions_file_FIELD_WRITER
/* set_file
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_UV_ProcessOptions_set_file(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);
  char * native_file = NULL;

  mrb_get_args(mrb, "z", &native_file);

  native_self->file = native_file;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::args_reader */
/* sha: 374399f0cfef5ff07544c02790cc64c502250f29c7c23a00397d1ecf1d78fb55 */
#if BIND_ProcessOptions_args_FIELD_READER
/* get_args
 *
 * Return Type: char **
 */
mrb_value
mrb_UV_ProcessOptions_get_args(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);

  char ** native_args = native_self->args;

  mrb_value args = TODO_mruby_box_char_PTR_PTR(mrb, native_args);

  return args;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::args_writer */
/* sha: 552b8dde71b90847ea2a8c63613950fdbf606e11d6d7a3b57b4b9e6678809095 */
#if BIND_ProcessOptions_args_FIELD_WRITER
/* set_args
 *
 * Parameters:
 * - value: char **
 */
mrb_value
mrb_UV_ProcessOptions_set_args(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);
  mrb_value args;

  mrb_get_args(mrb, "o", &args);

  /* type checking */
  TODO_type_check_char_PTR_PTR(args);

  char ** native_args = TODO_mruby_unbox_char_PTR_PTR(args);

  native_self->args = native_args;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::env_reader */
/* sha: 78d5361f3797862147000c5d52e00f81f0cbf9c677ed4f1fd3cfbd7f5fccb382 */
#if BIND_ProcessOptions_env_FIELD_READER
/* get_env
 *
 * Return Type: char **
 */
mrb_value
mrb_UV_ProcessOptions_get_env(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);

  char ** native_env = native_self->env;

  mrb_value env = TODO_mruby_box_char_PTR_PTR(mrb, native_env);

  return env;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::env_writer */
/* sha: 4490c1fc49cd31862fb805619127c829dfa81f450dca0f998c64ac397b9f5d84 */
#if BIND_ProcessOptions_env_FIELD_WRITER
/* set_env
 *
 * Parameters:
 * - value: char **
 */
mrb_value
mrb_UV_ProcessOptions_set_env(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);
  mrb_value env;

  mrb_get_args(mrb, "o", &env);

  /* type checking */
  TODO_type_check_char_PTR_PTR(env);

  char ** native_env = TODO_mruby_unbox_char_PTR_PTR(env);

  native_self->env = native_env;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::cwd_reader */
/* sha: 94bf63d207e70814c0c1468c3e2ba29c254a64d9b23497f19ffef8c1a81f963d */
#if BIND_ProcessOptions_cwd_FIELD_READER
/* get_cwd
 *
 * Return Type: const char *
 */
mrb_value
mrb_UV_ProcessOptions_get_cwd(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);

  const char * native_cwd = native_self->cwd;

  mrb_value cwd = native_cwd == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_cwd);

  return cwd;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::cwd_writer */
/* sha: 3d03a7b105f592a33399a6e3cdd9a66cda06df83166c288caeec21b5840ae066 */
#if BIND_ProcessOptions_cwd_FIELD_WRITER
/* set_cwd
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_UV_ProcessOptions_set_cwd(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);
  char * native_cwd = NULL;

  mrb_get_args(mrb, "z", &native_cwd);

  native_self->cwd = native_cwd;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::flags_reader */
/* sha: d0413d05054e4321f65c9d24096ff954cf0af9ca68ea4213aef0bf8bc2451c01 */
#if BIND_ProcessOptions_flags_FIELD_READER
/* get_flags
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_UV_ProcessOptions_get_flags(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);

  unsigned int native_flags = native_self->flags;

  mrb_value flags = mrb_fixnum_value(native_flags);

  return flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::flags_writer */
/* sha: ad89c0f96601c5263f953865a38f57075069022699df42cda0ec74bddaed271b */
#if BIND_ProcessOptions_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_UV_ProcessOptions_set_flags(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);
  mrb_int native_flags;

  mrb_get_args(mrb, "i", &native_flags);

  native_self->flags = native_flags;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::stdio_count_reader */
/* sha: aec35e7f511993469ad4d45bcb5731cdd238396ae4b3ce7f5b12da3183552d7c */
#if BIND_ProcessOptions_stdio_count_FIELD_READER
/* get_stdio_count
 *
 * Return Type: int
 */
mrb_value
mrb_UV_ProcessOptions_get_stdio_count(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);

  int native_stdio_count = native_self->stdio_count;

  mrb_value stdio_count = mrb_fixnum_value(native_stdio_count);

  return stdio_count;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::stdio_count_writer */
/* sha: 86dc4ec68fcf726362656d06f42080b1eb30461f1bbb60ce471cc3fff393a0d6 */
#if BIND_ProcessOptions_stdio_count_FIELD_WRITER
/* set_stdio_count
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_ProcessOptions_set_stdio_count(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);
  mrb_int native_stdio_count;

  mrb_get_args(mrb, "i", &native_stdio_count);

  native_self->stdio_count = native_stdio_count;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::stdio_reader */
/* sha: 22960af65b6a251a18d77fc4df51facef54fb6912d79c2a7dbce8370506f3df7 */
#if BIND_ProcessOptions_stdio_FIELD_READER
/* get_stdio
 *
 * Return Type: uv_stdio_container_t *
 */
mrb_value
mrb_UV_ProcessOptions_get_stdio(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);

  uv_stdio_container_t * native_stdio = native_self->stdio;

  mrb_value stdio = (native_stdio == NULL ? mrb_nil_value() : mruby_box_uv_stdio_container_t(mrb, native_stdio));

  return stdio;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::stdio_writer */
/* sha: a51abf078898d29f9d70dde7c3c282bd42092d1a4676286579423c99a180172b */
#if BIND_ProcessOptions_stdio_FIELD_WRITER
/* set_stdio
 *
 * Parameters:
 * - value: uv_stdio_container_t *
 */
mrb_value
mrb_UV_ProcessOptions_set_stdio(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);
  mrb_value stdio;

  mrb_get_args(mrb, "o", &stdio);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, stdio, STDIOContainer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "STDIOContainer expected");
    return mrb_nil_value();
  }

  uv_stdio_container_t * native_stdio = (mrb_nil_p(stdio) ? NULL : mruby_unbox_uv_stdio_container_t(stdio));

  native_self->stdio = native_stdio;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::uid_reader */
/* sha: 77c26f13121f5b10e0647775e8d300157266deb533139ff8b7ebcb73816e2636 */
#if BIND_ProcessOptions_uid_FIELD_READER
/* get_uid
 *
 * Return Type: uv_uid_t
 */
mrb_value
mrb_UV_ProcessOptions_get_uid(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);

  uv_uid_t native_uid = native_self->uid;

  mrb_value uid = TODO_mruby_box_uv_uid_t(mrb, native_uid);

  return uid;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::uid_writer */
/* sha: 39bc3040af4a6ab2f2dc8ba882ceaefeaf34c7995a703d091230fd9f2d084f22 */
#if BIND_ProcessOptions_uid_FIELD_WRITER
/* set_uid
 *
 * Parameters:
 * - value: uv_uid_t
 */
mrb_value
mrb_UV_ProcessOptions_set_uid(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);
  mrb_value uid;

  mrb_get_args(mrb, "o", &uid);

  /* type checking */
  TODO_type_check_uv_uid_t(uid);

  uv_uid_t native_uid = TODO_mruby_unbox_uv_uid_t(uid);

  native_self->uid = native_uid;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::gid_reader */
/* sha: 0b9ddd27450b2d5551f69a3ba8e500233d30da9bec27087ddb8eb33d63e87b56 */
#if BIND_ProcessOptions_gid_FIELD_READER
/* get_gid
 *
 * Return Type: uv_gid_t
 */
mrb_value
mrb_UV_ProcessOptions_get_gid(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);

  uv_gid_t native_gid = native_self->gid;

  mrb_value gid = TODO_mruby_box_uv_gid_t(mrb, native_gid);

  return gid;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::gid_writer */
/* sha: 455a87336c6a7233db465b21048490bd5594cc864252b912f486fa6794959a38 */
#if BIND_ProcessOptions_gid_FIELD_WRITER
/* set_gid
 *
 * Parameters:
 * - value: uv_gid_t
 */
mrb_value
mrb_UV_ProcessOptions_set_gid(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);
  mrb_value gid;

  mrb_get_args(mrb, "o", &gid);

  /* type checking */
  TODO_type_check_uv_gid_t(gid);

  uv_gid_t native_gid = TODO_mruby_unbox_uv_gid_t(gid);

  native_self->gid = native_gid;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_ProcessOptions_init(mrb_state* mrb) {
/* MRUBY_BINDING: ProcessOptions::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::class_definition */
/* sha: 9407768a51c6ea7f66506f5299bc6fff67cda80d0ecfd8075e503f44f2973c61 */
  struct RClass* ProcessOptions_class = mrb_define_class_under(mrb, UV_module(mrb), "ProcessOptions", mrb->object_class);
  MRB_SET_INSTANCE_TT(ProcessOptions_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::class_method_definitions */
/* sha: b99bea5c3d15b4879249222d581e4d75b22e5fa6e9d09423a02097cd1e02d163 */
#if BIND_ProcessOptions_INITIALIZE
  mrb_define_method(mrb, ProcessOptions_class, "initialize", mrb_UV_ProcessOptions_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::attr_definitions */
/* sha: 9e4c7c3e524e2d6d58d5c79da3d9a471634aa22a8f5a8c12d0e19a8e6e0b3cc3 */
  /*
   * Fields
   */
#if BIND_ProcessOptions_exit_cb_FIELD_READER
  mrb_define_method(mrb, ProcessOptions_class, "exit_cb", mrb_UV_ProcessOptions_get_exit_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_ProcessOptions_exit_cb_FIELD_WRITER
  mrb_define_method(mrb, ProcessOptions_class, "exit_cb=", mrb_UV_ProcessOptions_set_exit_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_ProcessOptions_file_FIELD_READER
  mrb_define_method(mrb, ProcessOptions_class, "file", mrb_UV_ProcessOptions_get_file, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_ProcessOptions_file_FIELD_WRITER
  mrb_define_method(mrb, ProcessOptions_class, "file=", mrb_UV_ProcessOptions_set_file, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_ProcessOptions_args_FIELD_READER
  mrb_define_method(mrb, ProcessOptions_class, "args", mrb_UV_ProcessOptions_get_args, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_ProcessOptions_args_FIELD_WRITER
  mrb_define_method(mrb, ProcessOptions_class, "args=", mrb_UV_ProcessOptions_set_args, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_ProcessOptions_env_FIELD_READER
  mrb_define_method(mrb, ProcessOptions_class, "env", mrb_UV_ProcessOptions_get_env, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_ProcessOptions_env_FIELD_WRITER
  mrb_define_method(mrb, ProcessOptions_class, "env=", mrb_UV_ProcessOptions_set_env, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_ProcessOptions_cwd_FIELD_READER
  mrb_define_method(mrb, ProcessOptions_class, "cwd", mrb_UV_ProcessOptions_get_cwd, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_ProcessOptions_cwd_FIELD_WRITER
  mrb_define_method(mrb, ProcessOptions_class, "cwd=", mrb_UV_ProcessOptions_set_cwd, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_ProcessOptions_flags_FIELD_READER
  mrb_define_method(mrb, ProcessOptions_class, "flags", mrb_UV_ProcessOptions_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_ProcessOptions_flags_FIELD_WRITER
  mrb_define_method(mrb, ProcessOptions_class, "flags=", mrb_UV_ProcessOptions_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_ProcessOptions_stdio_count_FIELD_READER
  mrb_define_method(mrb, ProcessOptions_class, "stdio_count", mrb_UV_ProcessOptions_get_stdio_count, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_ProcessOptions_stdio_count_FIELD_WRITER
  mrb_define_method(mrb, ProcessOptions_class, "stdio_count=", mrb_UV_ProcessOptions_set_stdio_count, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_ProcessOptions_stdio_FIELD_READER
  mrb_define_method(mrb, ProcessOptions_class, "stdio", mrb_UV_ProcessOptions_get_stdio, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_ProcessOptions_stdio_FIELD_WRITER
  mrb_define_method(mrb, ProcessOptions_class, "stdio=", mrb_UV_ProcessOptions_set_stdio, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_ProcessOptions_uid_FIELD_READER
  mrb_define_method(mrb, ProcessOptions_class, "uid", mrb_UV_ProcessOptions_get_uid, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_ProcessOptions_uid_FIELD_WRITER
  mrb_define_method(mrb, ProcessOptions_class, "uid=", mrb_UV_ProcessOptions_set_uid, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_ProcessOptions_gid_FIELD_READER
  mrb_define_method(mrb, ProcessOptions_class, "gid", mrb_UV_ProcessOptions_get_gid, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_ProcessOptions_gid_FIELD_WRITER
  mrb_define_method(mrb, ProcessOptions_class, "gid=", mrb_UV_ProcessOptions_set_gid, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
