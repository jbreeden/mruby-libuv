/*
 * struct uv_process_options_s
 * Defined in file uv.h @ line 858
 */

#include "mruby_UV.h"

#if BIND_UvProcessOptionsS_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvProcessOptionsS::initialize */
/* sha: 3221d69552244e4472048ef0ee853ee6aa33deae127af1f4b640c442e3d4bb6c */
#if BIND_UvProcessOptionsS_INITIALIZE
mrb_value
mrb_UV_UvProcessOptionsS_initialize(mrb_state* mrb, mrb_value self) {
  struct uv_process_options_s* native_object = (struct uv_process_options_s*)calloc(1, sizeof(struct uv_process_options_s));
  mruby_giftwrap_uv_process_options_s_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsS::initialize */
/* sha: 1746529444576435b150a7739e6cb0ce26f712d79913588424057a2657650844 */
mrb_value
mrb_UV_UvProcessOptionsS_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvProcessOptionsS.disown only accepts objects of type UV::UvProcessOptionsS");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsS::belongs_to_ruby */
/* sha: 5af6237f2c96e4f1eb3085c94733467906eec4d92a4b994f3c8ca4a36a8535ed */
mrb_value
mrb_UV_UvProcessOptionsS_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvProcessOptionsS.belongs_to_ruby only accepts objects of type UV::UvProcessOptionsS");
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

/* MRUBY_BINDING: UvProcessOptionsS::exit_cb_reader */
/* sha: c415d75061127e4041fd77f5bf4b8f6f34fad5df5a1b87779af04da6e717ace0 */
#if BIND_UvProcessOptionsS_exit_cb_FIELD_READER
/* get_exit_cb
 *
 * Return Type: uv_exit_cb
 */
mrb_value
mrb_UV_UvProcessOptionsS_get_exit_cb(mrb_state* mrb, mrb_value self) {
  struct uv_process_options_s * native_self = mruby_unbox_uv_process_options_s(self);

  uv_exit_cb native_exit_cb = native_self->exit_cb;

  mrb_value exit_cb = TODO_mruby_box_uv_exit_cb(mrb, native_exit_cb);

  return exit_cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsS::exit_cb_writer */
/* sha: f9a6ca706b44083e4b5d9d7f0e2c078f959ab2af538cbdb4aef929606302ccd8 */
#if BIND_UvProcessOptionsS_exit_cb_FIELD_WRITER
/* set_exit_cb
 *
 * Parameters:
 * - value: uv_exit_cb
 */
mrb_value
mrb_UV_UvProcessOptionsS_set_exit_cb(mrb_state* mrb, mrb_value self) {
  struct uv_process_options_s * native_self = mruby_unbox_uv_process_options_s(self);
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

/* MRUBY_BINDING: UvProcessOptionsS::file_reader */
/* sha: 05b3765fb4bc5527daddc6ced07e42fd06c8d1fd999ad464f390aee43dd563bf */
#if BIND_UvProcessOptionsS_file_FIELD_READER
/* get_file
 *
 * Return Type: const char *
 */
mrb_value
mrb_UV_UvProcessOptionsS_get_file(mrb_state* mrb, mrb_value self) {
  struct uv_process_options_s * native_self = mruby_unbox_uv_process_options_s(self);

  const char * native_file = native_self->file;

  mrb_value file = native_file == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_file);

  return file;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsS::file_writer */
/* sha: cdc0404d57d81b6b68b0dc09e3612588e88331f1f5e998babbbcdc999bf9b3c5 */
#if BIND_UvProcessOptionsS_file_FIELD_WRITER
/* set_file
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_UV_UvProcessOptionsS_set_file(mrb_state* mrb, mrb_value self) {
  struct uv_process_options_s * native_self = mruby_unbox_uv_process_options_s(self);
  char * native_file = NULL;

  mrb_get_args(mrb, "z", &native_file);

  native_self->file = native_file;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsS::args_reader */
/* sha: 8f531498a86d9d913ed369fee21f697186640bf7d88a87c09df739c2658274be */
#if BIND_UvProcessOptionsS_args_FIELD_READER
/* get_args
 *
 * Return Type: char **
 */
mrb_value
mrb_UV_UvProcessOptionsS_get_args(mrb_state* mrb, mrb_value self) {
  struct uv_process_options_s * native_self = mruby_unbox_uv_process_options_s(self);

  char ** native_args = native_self->args;

  mrb_value args = TODO_mruby_box_char_PTR_PTR(mrb, native_args);

  return args;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsS::args_writer */
/* sha: 4589c8592f58db5804d1b25249775fa1631ad7f54e3698be04d735c7470020ed */
#if BIND_UvProcessOptionsS_args_FIELD_WRITER
/* set_args
 *
 * Parameters:
 * - value: char **
 */
mrb_value
mrb_UV_UvProcessOptionsS_set_args(mrb_state* mrb, mrb_value self) {
  struct uv_process_options_s * native_self = mruby_unbox_uv_process_options_s(self);
  mrb_value args;

  mrb_get_args(mrb, "o", &args);

  /* type checking */
  TODO_type_check_char_PTR_PTR(args);

  char ** native_args = TODO_mruby_unbox_char_PTR_PTR(args);

  native_self->args = native_args;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsS::env_reader */
/* sha: 4f0a19eb9ed57fa824d10fe7dbffb7a53c45ea6c4de676f2ce5642932964b980 */
#if BIND_UvProcessOptionsS_env_FIELD_READER
/* get_env
 *
 * Return Type: char **
 */
mrb_value
mrb_UV_UvProcessOptionsS_get_env(mrb_state* mrb, mrb_value self) {
  struct uv_process_options_s * native_self = mruby_unbox_uv_process_options_s(self);

  char ** native_env = native_self->env;

  mrb_value env = TODO_mruby_box_char_PTR_PTR(mrb, native_env);

  return env;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsS::env_writer */
/* sha: ae4f8caa14e253780e1c342760942c1a274bdecfb45c8ebf0c3f79337a736fc8 */
#if BIND_UvProcessOptionsS_env_FIELD_WRITER
/* set_env
 *
 * Parameters:
 * - value: char **
 */
mrb_value
mrb_UV_UvProcessOptionsS_set_env(mrb_state* mrb, mrb_value self) {
  struct uv_process_options_s * native_self = mruby_unbox_uv_process_options_s(self);
  mrb_value env;

  mrb_get_args(mrb, "o", &env);

  /* type checking */
  TODO_type_check_char_PTR_PTR(env);

  char ** native_env = TODO_mruby_unbox_char_PTR_PTR(env);

  native_self->env = native_env;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsS::cwd_reader */
/* sha: b061715c5188a4ff5f1dfab68290274466c9d0cf40b80d7fc7d6085d6d315a94 */
#if BIND_UvProcessOptionsS_cwd_FIELD_READER
/* get_cwd
 *
 * Return Type: const char *
 */
mrb_value
mrb_UV_UvProcessOptionsS_get_cwd(mrb_state* mrb, mrb_value self) {
  struct uv_process_options_s * native_self = mruby_unbox_uv_process_options_s(self);

  const char * native_cwd = native_self->cwd;

  mrb_value cwd = native_cwd == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_cwd);

  return cwd;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsS::cwd_writer */
/* sha: dd13820e5274c98de87edf8e2c0b402b51bb5685e6849db73479775356dece90 */
#if BIND_UvProcessOptionsS_cwd_FIELD_WRITER
/* set_cwd
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_UV_UvProcessOptionsS_set_cwd(mrb_state* mrb, mrb_value self) {
  struct uv_process_options_s * native_self = mruby_unbox_uv_process_options_s(self);
  char * native_cwd = NULL;

  mrb_get_args(mrb, "z", &native_cwd);

  native_self->cwd = native_cwd;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsS::flags_reader */
/* sha: 3b5cc5f02f429aa83d9ae85f239348ed08aafe865126a4da9f75ec5b33e2bc40 */
#if BIND_UvProcessOptionsS_flags_FIELD_READER
/* get_flags
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_UV_UvProcessOptionsS_get_flags(mrb_state* mrb, mrb_value self) {
  struct uv_process_options_s * native_self = mruby_unbox_uv_process_options_s(self);

  unsigned int native_flags = native_self->flags;

  mrb_value flags = mrb_fixnum_value(native_flags);

  return flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsS::flags_writer */
/* sha: 147874c5a1d174d0a6126a55084d9f92db2093b7572113e6275d7283433d3c7f */
#if BIND_UvProcessOptionsS_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_UV_UvProcessOptionsS_set_flags(mrb_state* mrb, mrb_value self) {
  struct uv_process_options_s * native_self = mruby_unbox_uv_process_options_s(self);
  mrb_int native_flags;

  mrb_get_args(mrb, "i", &native_flags);

  native_self->flags = native_flags;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsS::stdio_count_reader */
/* sha: 1caa46cf135d7b619d587a73a5fde759482fa2c41eeb292d61ffa1feb67650d4 */
#if BIND_UvProcessOptionsS_stdio_count_FIELD_READER
/* get_stdio_count
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvProcessOptionsS_get_stdio_count(mrb_state* mrb, mrb_value self) {
  struct uv_process_options_s * native_self = mruby_unbox_uv_process_options_s(self);

  int native_stdio_count = native_self->stdio_count;

  mrb_value stdio_count = mrb_fixnum_value(native_stdio_count);

  return stdio_count;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsS::stdio_count_writer */
/* sha: e78a5ed03f33e437301a53069cec7225b71b1da552759224b9dde17e12e77a29 */
#if BIND_UvProcessOptionsS_stdio_count_FIELD_WRITER
/* set_stdio_count
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvProcessOptionsS_set_stdio_count(mrb_state* mrb, mrb_value self) {
  struct uv_process_options_s * native_self = mruby_unbox_uv_process_options_s(self);
  mrb_int native_stdio_count;

  mrb_get_args(mrb, "i", &native_stdio_count);

  native_self->stdio_count = native_stdio_count;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsS::stdio_reader */
/* sha: 58086bcb0ef4386b02c46b5cbd0feedf7598762e5043baa897d38de071c05e46 */
#if BIND_UvProcessOptionsS_stdio_FIELD_READER
/* get_stdio
 *
 * Return Type: uv_stdio_container_t *
 */
mrb_value
mrb_UV_UvProcessOptionsS_get_stdio(mrb_state* mrb, mrb_value self) {
  struct uv_process_options_s * native_self = mruby_unbox_uv_process_options_s(self);

  uv_stdio_container_t * native_stdio = native_self->stdio;

  mrb_value stdio = TODO_mruby_box_uv_stdio_container_t_PTR(mrb, native_stdio);

  return stdio;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsS::stdio_writer */
/* sha: 78996c224d34110413d41b10035a6fea674f7a1b67f4948c15dee7f24b0feaa2 */
#if BIND_UvProcessOptionsS_stdio_FIELD_WRITER
/* set_stdio
 *
 * Parameters:
 * - value: uv_stdio_container_t *
 */
mrb_value
mrb_UV_UvProcessOptionsS_set_stdio(mrb_state* mrb, mrb_value self) {
  struct uv_process_options_s * native_self = mruby_unbox_uv_process_options_s(self);
  mrb_value stdio;

  mrb_get_args(mrb, "o", &stdio);

  /* type checking */
  TODO_type_check_uv_stdio_container_t_PTR(stdio);

  uv_stdio_container_t * native_stdio = TODO_mruby_unbox_uv_stdio_container_t_PTR(stdio);

  native_self->stdio = native_stdio;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsS::uid_reader */
/* sha: 026bb90429de18c59da412246e6bfcb6488300770de62aa6bcda9dae3e6ed2e1 */
#if BIND_UvProcessOptionsS_uid_FIELD_READER
/* get_uid
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvProcessOptionsS_get_uid(mrb_state* mrb, mrb_value self) {
  struct uv_process_options_s * native_self = mruby_unbox_uv_process_options_s(self);

  int native_uid = native_self->uid;

  mrb_value uid = mrb_fixnum_value(native_uid);

  return uid;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsS::uid_writer */
/* sha: 574d09fdba65e6159ca6f6e2ca0f20e7492609fe228a840117df8856c7d3ad23 */
#if BIND_UvProcessOptionsS_uid_FIELD_WRITER
/* set_uid
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvProcessOptionsS_set_uid(mrb_state* mrb, mrb_value self) {
  struct uv_process_options_s * native_self = mruby_unbox_uv_process_options_s(self);
  mrb_int native_uid;

  mrb_get_args(mrb, "i", &native_uid);

  native_self->uid = native_uid;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsS::gid_reader */
/* sha: a54cb3a63d3e5be07400976d8c1b3facca4c4acecbf908c1236fcb47ebb8469b */
#if BIND_UvProcessOptionsS_gid_FIELD_READER
/* get_gid
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvProcessOptionsS_get_gid(mrb_state* mrb, mrb_value self) {
  struct uv_process_options_s * native_self = mruby_unbox_uv_process_options_s(self);

  int native_gid = native_self->gid;

  mrb_value gid = mrb_fixnum_value(native_gid);

  return gid;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsS::gid_writer */
/* sha: f5ff151827ae0df96616d87cc628f35c1aa1666072a5542714235e5a4272ab2f */
#if BIND_UvProcessOptionsS_gid_FIELD_WRITER
/* set_gid
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvProcessOptionsS_set_gid(mrb_state* mrb, mrb_value self) {
  struct uv_process_options_s * native_self = mruby_unbox_uv_process_options_s(self);
  mrb_int native_gid;

  mrb_get_args(mrb, "i", &native_gid);

  native_self->gid = native_gid;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvProcessOptionsS_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvProcessOptionsS::class_definition */
/* sha: ea95fe9b02f871233f64a258ba1e14840e85bebcc599bf5dbdd32d72f95feaec */
  struct RClass* UvProcessOptionsS_class = mrb_define_class_under(mrb, UV_module(mrb), "UvProcessOptionsS", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvProcessOptionsS_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsS::class_method_definitions */
/* sha: cb885c03ea55b01af7a51988c66857d5c1315a266e4854f3b1f78b070682fdc2 */
#if BIND_UvProcessOptionsS_INITIALIZE
  mrb_define_method(mrb, UvProcessOptionsS_class, "initialize", mrb_UV_UvProcessOptionsS_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvProcessOptionsS_class, "disown", mrb_UV_UvProcessOptionsS_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvProcessOptionsS_class, "belongs_to_ruby?", mrb_UV_UvProcessOptionsS_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsS::attr_definitions */
/* sha: f19fdcb289f2c71f12abf1f0406b77187e70cc8ef2a51d888680a28e3c2b47e4 */
  /*
   * Fields
   */
#if BIND_UvProcessOptionsS_exit_cb_FIELD_READER
  mrb_define_method(mrb, UvProcessOptionsS_class, "exit_cb", mrb_UV_UvProcessOptionsS_get_exit_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvProcessOptionsS_exit_cb_FIELD_WRITER
  mrb_define_method(mrb, UvProcessOptionsS_class, "exit_cb=", mrb_UV_UvProcessOptionsS_set_exit_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvProcessOptionsS_file_FIELD_READER
  mrb_define_method(mrb, UvProcessOptionsS_class, "file", mrb_UV_UvProcessOptionsS_get_file, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvProcessOptionsS_file_FIELD_WRITER
  mrb_define_method(mrb, UvProcessOptionsS_class, "file=", mrb_UV_UvProcessOptionsS_set_file, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvProcessOptionsS_args_FIELD_READER
  mrb_define_method(mrb, UvProcessOptionsS_class, "args", mrb_UV_UvProcessOptionsS_get_args, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvProcessOptionsS_args_FIELD_WRITER
  mrb_define_method(mrb, UvProcessOptionsS_class, "args=", mrb_UV_UvProcessOptionsS_set_args, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvProcessOptionsS_env_FIELD_READER
  mrb_define_method(mrb, UvProcessOptionsS_class, "env", mrb_UV_UvProcessOptionsS_get_env, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvProcessOptionsS_env_FIELD_WRITER
  mrb_define_method(mrb, UvProcessOptionsS_class, "env=", mrb_UV_UvProcessOptionsS_set_env, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvProcessOptionsS_cwd_FIELD_READER
  mrb_define_method(mrb, UvProcessOptionsS_class, "cwd", mrb_UV_UvProcessOptionsS_get_cwd, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvProcessOptionsS_cwd_FIELD_WRITER
  mrb_define_method(mrb, UvProcessOptionsS_class, "cwd=", mrb_UV_UvProcessOptionsS_set_cwd, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvProcessOptionsS_flags_FIELD_READER
  mrb_define_method(mrb, UvProcessOptionsS_class, "flags", mrb_UV_UvProcessOptionsS_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvProcessOptionsS_flags_FIELD_WRITER
  mrb_define_method(mrb, UvProcessOptionsS_class, "flags=", mrb_UV_UvProcessOptionsS_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvProcessOptionsS_stdio_count_FIELD_READER
  mrb_define_method(mrb, UvProcessOptionsS_class, "stdio_count", mrb_UV_UvProcessOptionsS_get_stdio_count, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvProcessOptionsS_stdio_count_FIELD_WRITER
  mrb_define_method(mrb, UvProcessOptionsS_class, "stdio_count=", mrb_UV_UvProcessOptionsS_set_stdio_count, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvProcessOptionsS_stdio_FIELD_READER
  mrb_define_method(mrb, UvProcessOptionsS_class, "stdio", mrb_UV_UvProcessOptionsS_get_stdio, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvProcessOptionsS_stdio_FIELD_WRITER
  mrb_define_method(mrb, UvProcessOptionsS_class, "stdio=", mrb_UV_UvProcessOptionsS_set_stdio, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvProcessOptionsS_uid_FIELD_READER
  mrb_define_method(mrb, UvProcessOptionsS_class, "uid", mrb_UV_UvProcessOptionsS_get_uid, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvProcessOptionsS_uid_FIELD_WRITER
  mrb_define_method(mrb, UvProcessOptionsS_class, "uid=", mrb_UV_UvProcessOptionsS_set_uid, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvProcessOptionsS_gid_FIELD_READER
  mrb_define_method(mrb, UvProcessOptionsS_class, "gid", mrb_UV_UvProcessOptionsS_get_gid, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvProcessOptionsS_gid_FIELD_WRITER
  mrb_define_method(mrb, UvProcessOptionsS_class, "gid=", mrb_UV_UvProcessOptionsS_set_gid, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsS::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
