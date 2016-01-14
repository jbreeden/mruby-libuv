/*
 * uv_process_options_t
 * Defined in file uv.h @ line 858
 */

#include "mruby_UV.h"

#if BIND_UvProcessOptionsT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvProcessOptionsT::initialize */
/* sha: 98293aa915a5814e7973d4ea51d47d3ba837cbad428f39024edc7de839f71844 */
#if BIND_UvProcessOptionsT_INITIALIZE
mrb_value
mrb_UV_UvProcessOptionsT_initialize(mrb_state* mrb, mrb_value self) {
  uv_process_options_t* native_object = (uv_process_options_t*)calloc(1, sizeof(uv_process_options_t));
  mruby_giftwrap_uv_process_options_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsT::initialize */
/* sha: 235594dc27b5e024a33ccbc86a5554712643b0645e9be012f65d7b157b1293bd */
mrb_value
mrb_UV_UvProcessOptionsT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvProcessOptionsT.disown only accepts objects of type UV::UvProcessOptionsT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsT::belongs_to_ruby */
/* sha: 96e4382b4cd9ad3ede28c9592071d5a58ae65448ed496c7c2004982f3d18c670 */
mrb_value
mrb_UV_UvProcessOptionsT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvProcessOptionsT.belongs_to_ruby only accepts objects of type UV::UvProcessOptionsT");
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

/* MRUBY_BINDING: UvProcessOptionsT::exit_cb_reader */
/* sha: 70eccfaeda49e39ecc03ec50cd6bd874f14f2718df6f7055841a7b1624d99630 */
#if BIND_UvProcessOptionsT_exit_cb_FIELD_READER
/* get_exit_cb
 *
 * Return Type: uv_exit_cb
 */
mrb_value
mrb_UV_UvProcessOptionsT_get_exit_cb(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);

  uv_exit_cb native_exit_cb = native_self->exit_cb;

  mrb_value exit_cb = TODO_mruby_box_uv_exit_cb(mrb, native_exit_cb);

  return exit_cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsT::exit_cb_writer */
/* sha: 06a60ba95a7da0ba66a14840818e50f90e21f9ca12ce2f09964133f3a3ebbe2c */
#if BIND_UvProcessOptionsT_exit_cb_FIELD_WRITER
/* set_exit_cb
 *
 * Parameters:
 * - value: uv_exit_cb
 */
mrb_value
mrb_UV_UvProcessOptionsT_set_exit_cb(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);
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

/* MRUBY_BINDING: UvProcessOptionsT::file_reader */
/* sha: 84f792686f1abd76953782fd4558a4bb8ebb81ab6329f15e53a08a6376439b28 */
#if BIND_UvProcessOptionsT_file_FIELD_READER
/* get_file
 *
 * Return Type: const char *
 */
mrb_value
mrb_UV_UvProcessOptionsT_get_file(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);

  const char * native_file = native_self->file;

  mrb_value file = native_file == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_file);

  return file;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsT::file_writer */
/* sha: f379a6c4372f19b4f3c85edf4ef1bc2e7acb2504dbbddf73d6a4e4763bad8e14 */
#if BIND_UvProcessOptionsT_file_FIELD_WRITER
/* set_file
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_UV_UvProcessOptionsT_set_file(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);
  char * native_file = NULL;

  mrb_get_args(mrb, "z", &native_file);

  native_self->file = native_file;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsT::args_reader */
/* sha: 8d1e3e4e4d86b9d0d5f36198131034e6bb57042a6e4cd73544e7b99fc52545dc */
#if BIND_UvProcessOptionsT_args_FIELD_READER
/* get_args
 *
 * Return Type: char **
 */
mrb_value
mrb_UV_UvProcessOptionsT_get_args(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);

  char ** native_args = native_self->args;

  mrb_value args = TODO_mruby_box_char_PTR_PTR(mrb, native_args);

  return args;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsT::args_writer */
/* sha: 8b13ba8798cf66ddfe6629d6e756ed0d59b4a8b77fdfb0e2c6e97b6d13d9beda */
#if BIND_UvProcessOptionsT_args_FIELD_WRITER
/* set_args
 *
 * Parameters:
 * - value: char **
 */
mrb_value
mrb_UV_UvProcessOptionsT_set_args(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);
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

/* MRUBY_BINDING: UvProcessOptionsT::env_reader */
/* sha: 0b177d187fcdad2224c1f2276a80322837f347a91aabfeac2f700956a630b943 */
#if BIND_UvProcessOptionsT_env_FIELD_READER
/* get_env
 *
 * Return Type: char **
 */
mrb_value
mrb_UV_UvProcessOptionsT_get_env(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);

  char ** native_env = native_self->env;

  mrb_value env = TODO_mruby_box_char_PTR_PTR(mrb, native_env);

  return env;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsT::env_writer */
/* sha: 75d837647f485bc2e46e1568389fe3666903034a152f96efb46346fe13542abe */
#if BIND_UvProcessOptionsT_env_FIELD_WRITER
/* set_env
 *
 * Parameters:
 * - value: char **
 */
mrb_value
mrb_UV_UvProcessOptionsT_set_env(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);
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

/* MRUBY_BINDING: UvProcessOptionsT::cwd_reader */
/* sha: 36819c9fab9d22baec28de0e52e9c62b62e41c43c2aa72d0d21a9c8032eefc51 */
#if BIND_UvProcessOptionsT_cwd_FIELD_READER
/* get_cwd
 *
 * Return Type: const char *
 */
mrb_value
mrb_UV_UvProcessOptionsT_get_cwd(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);

  const char * native_cwd = native_self->cwd;

  mrb_value cwd = native_cwd == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_cwd);

  return cwd;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsT::cwd_writer */
/* sha: 1da4005b91007d99762a0a4ed260f017a00478fb61359509f3478bbb1661942c */
#if BIND_UvProcessOptionsT_cwd_FIELD_WRITER
/* set_cwd
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_UV_UvProcessOptionsT_set_cwd(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);
  char * native_cwd = NULL;

  mrb_get_args(mrb, "z", &native_cwd);

  native_self->cwd = native_cwd;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsT::flags_reader */
/* sha: 46b8cce174ae536ccf19d496186ead545dfb34c49f8ba15aefe307ddbbf29541 */
#if BIND_UvProcessOptionsT_flags_FIELD_READER
/* get_flags
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_UV_UvProcessOptionsT_get_flags(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);

  unsigned int native_flags = native_self->flags;

  mrb_value flags = mrb_fixnum_value(native_flags);

  return flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsT::flags_writer */
/* sha: 721ce3e3bc23f73c0981bb64ea7f3c5c8e167a424e524563c48b1e45e2504f09 */
#if BIND_UvProcessOptionsT_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_UV_UvProcessOptionsT_set_flags(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);
  mrb_int native_flags;

  mrb_get_args(mrb, "i", &native_flags);

  native_self->flags = native_flags;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsT::stdio_count_reader */
/* sha: 6a6567fa556f26d028266ee3b0efd3ddc7734f42c9b9a1ab44d374eadb16824f */
#if BIND_UvProcessOptionsT_stdio_count_FIELD_READER
/* get_stdio_count
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvProcessOptionsT_get_stdio_count(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);

  int native_stdio_count = native_self->stdio_count;

  mrb_value stdio_count = mrb_fixnum_value(native_stdio_count);

  return stdio_count;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsT::stdio_count_writer */
/* sha: facd66cabb61714a279ce0af4be916cb5536f6c5fd326700d2530c52a53bc68d */
#if BIND_UvProcessOptionsT_stdio_count_FIELD_WRITER
/* set_stdio_count
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvProcessOptionsT_set_stdio_count(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);
  mrb_int native_stdio_count;

  mrb_get_args(mrb, "i", &native_stdio_count);

  native_self->stdio_count = native_stdio_count;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsT::stdio_reader */
/* sha: 2c27d9ee026eba268f28b027ba6c7091dca46ecd566be3e05be36149f1fc45e5 */
#if BIND_UvProcessOptionsT_stdio_FIELD_READER
/* get_stdio
 *
 * Return Type: uv_stdio_container_t *
 */
mrb_value
mrb_UV_UvProcessOptionsT_get_stdio(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);

  uv_stdio_container_t * native_stdio = native_self->stdio;

  mrb_value stdio = (native_stdio == NULL ? mrb_nil_value() : mruby_box_uv_stdio_container_t(mrb, native_stdio));

  return stdio;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsT::stdio_writer */
/* sha: 26579244078d2b7cac5a608749f0936047795de84f272f0992d62ea1a0fb34db */
#if BIND_UvProcessOptionsT_stdio_FIELD_WRITER
/* set_stdio
 *
 * Parameters:
 * - value: uv_stdio_container_t *
 */
mrb_value
mrb_UV_UvProcessOptionsT_set_stdio(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);
  mrb_value stdio;

  mrb_get_args(mrb, "o", &stdio);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, stdio, UvStdioContainerT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvStdioContainerT expected");
    return mrb_nil_value();
  }

  uv_stdio_container_t * native_stdio = (mrb_nil_p(stdio) ? NULL : mruby_unbox_uv_stdio_container_t(stdio));

  native_self->stdio = native_stdio;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsT::uid_reader */
/* sha: d37bae7944bda86a46d9dac6728bfa04d73f1b67b5f673f79f32ffe1a52463e1 */
#if BIND_UvProcessOptionsT_uid_FIELD_READER
/* get_uid
 *
 * Return Type: uv_uid_t
 */
mrb_value
mrb_UV_UvProcessOptionsT_get_uid(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);

  uv_uid_t native_uid = native_self->uid;

  mrb_value uid = TODO_mruby_box_uv_uid_t(mrb, native_uid);

  return uid;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsT::uid_writer */
/* sha: 14d99b9fbfcb5a869a54be381641f44e08694e66532c7eb147de8eb90c27ece5 */
#if BIND_UvProcessOptionsT_uid_FIELD_WRITER
/* set_uid
 *
 * Parameters:
 * - value: uv_uid_t
 */
mrb_value
mrb_UV_UvProcessOptionsT_set_uid(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);
  mrb_value uid;

  mrb_get_args(mrb, "o", &uid);

  /* type checking */
  TODO_type_check_uv_uid_t(uid);

  uv_uid_t native_uid = TODO_mruby_unbox_uv_uid_t(uid);

  native_self->uid = native_uid;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsT::gid_reader */
/* sha: b25a705ad4e85bf0bb0b2391102c8c155b155368a21e1ee1b4c9b5c56b928e1c */
#if BIND_UvProcessOptionsT_gid_FIELD_READER
/* get_gid
 *
 * Return Type: uv_gid_t
 */
mrb_value
mrb_UV_UvProcessOptionsT_get_gid(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);

  uv_gid_t native_gid = native_self->gid;

  mrb_value gid = TODO_mruby_box_uv_gid_t(mrb, native_gid);

  return gid;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsT::gid_writer */
/* sha: 0a9777e2c3925733e115a01b6016f0dbf471ebf63d251819ce57f12826c4ff1e */
#if BIND_UvProcessOptionsT_gid_FIELD_WRITER
/* set_gid
 *
 * Parameters:
 * - value: uv_gid_t
 */
mrb_value
mrb_UV_UvProcessOptionsT_set_gid(mrb_state* mrb, mrb_value self) {
  uv_process_options_t * native_self = mruby_unbox_uv_process_options_t(self);
  mrb_value gid;

  mrb_get_args(mrb, "o", &gid);

  /* type checking */
  TODO_type_check_uv_gid_t(gid);

  uv_gid_t native_gid = TODO_mruby_unbox_uv_gid_t(gid);

  native_self->gid = native_gid;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvProcessOptionsT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvProcessOptionsT::class_definition */
/* sha: 254455d9a07a81502053ba7692edb287073ac4c212e7e10ecc13aa25d3d5557c */
  struct RClass* UvProcessOptionsT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvProcessOptionsT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvProcessOptionsT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsT::class_method_definitions */
/* sha: 1340c6b38bd3e5c8f01516a2b5bf3cc50642187aee4ead5028c8da2d92a234a8 */
#if BIND_UvProcessOptionsT_INITIALIZE
  mrb_define_method(mrb, UvProcessOptionsT_class, "initialize", mrb_UV_UvProcessOptionsT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvProcessOptionsT_class, "disown", mrb_UV_UvProcessOptionsT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvProcessOptionsT_class, "belongs_to_ruby?", mrb_UV_UvProcessOptionsT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsT::attr_definitions */
/* sha: 60c4f2d0bc9242472c4c7bb68d3d0875754e3737bb38bf04b28dcf5793d49083 */
  /*
   * Fields
   */
#if BIND_UvProcessOptionsT_exit_cb_FIELD_READER
  mrb_define_method(mrb, UvProcessOptionsT_class, "exit_cb", mrb_UV_UvProcessOptionsT_get_exit_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvProcessOptionsT_exit_cb_FIELD_WRITER
  mrb_define_method(mrb, UvProcessOptionsT_class, "exit_cb=", mrb_UV_UvProcessOptionsT_set_exit_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvProcessOptionsT_file_FIELD_READER
  mrb_define_method(mrb, UvProcessOptionsT_class, "file", mrb_UV_UvProcessOptionsT_get_file, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvProcessOptionsT_file_FIELD_WRITER
  mrb_define_method(mrb, UvProcessOptionsT_class, "file=", mrb_UV_UvProcessOptionsT_set_file, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvProcessOptionsT_args_FIELD_READER
  mrb_define_method(mrb, UvProcessOptionsT_class, "args", mrb_UV_UvProcessOptionsT_get_args, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvProcessOptionsT_args_FIELD_WRITER
  mrb_define_method(mrb, UvProcessOptionsT_class, "args=", mrb_UV_UvProcessOptionsT_set_args, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvProcessOptionsT_env_FIELD_READER
  mrb_define_method(mrb, UvProcessOptionsT_class, "env", mrb_UV_UvProcessOptionsT_get_env, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvProcessOptionsT_env_FIELD_WRITER
  mrb_define_method(mrb, UvProcessOptionsT_class, "env=", mrb_UV_UvProcessOptionsT_set_env, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvProcessOptionsT_cwd_FIELD_READER
  mrb_define_method(mrb, UvProcessOptionsT_class, "cwd", mrb_UV_UvProcessOptionsT_get_cwd, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvProcessOptionsT_cwd_FIELD_WRITER
  mrb_define_method(mrb, UvProcessOptionsT_class, "cwd=", mrb_UV_UvProcessOptionsT_set_cwd, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvProcessOptionsT_flags_FIELD_READER
  mrb_define_method(mrb, UvProcessOptionsT_class, "flags", mrb_UV_UvProcessOptionsT_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvProcessOptionsT_flags_FIELD_WRITER
  mrb_define_method(mrb, UvProcessOptionsT_class, "flags=", mrb_UV_UvProcessOptionsT_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvProcessOptionsT_stdio_count_FIELD_READER
  mrb_define_method(mrb, UvProcessOptionsT_class, "stdio_count", mrb_UV_UvProcessOptionsT_get_stdio_count, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvProcessOptionsT_stdio_count_FIELD_WRITER
  mrb_define_method(mrb, UvProcessOptionsT_class, "stdio_count=", mrb_UV_UvProcessOptionsT_set_stdio_count, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvProcessOptionsT_stdio_FIELD_READER
  mrb_define_method(mrb, UvProcessOptionsT_class, "stdio", mrb_UV_UvProcessOptionsT_get_stdio, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvProcessOptionsT_stdio_FIELD_WRITER
  mrb_define_method(mrb, UvProcessOptionsT_class, "stdio=", mrb_UV_UvProcessOptionsT_set_stdio, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvProcessOptionsT_uid_FIELD_READER
  mrb_define_method(mrb, UvProcessOptionsT_class, "uid", mrb_UV_UvProcessOptionsT_get_uid, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvProcessOptionsT_uid_FIELD_WRITER
  mrb_define_method(mrb, UvProcessOptionsT_class, "uid=", mrb_UV_UvProcessOptionsT_set_uid, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvProcessOptionsT_gid_FIELD_READER
  mrb_define_method(mrb, UvProcessOptionsT_class, "gid", mrb_UV_UvProcessOptionsT_get_gid, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvProcessOptionsT_gid_FIELD_WRITER
  mrb_define_method(mrb, UvProcessOptionsT_class, "gid=", mrb_UV_UvProcessOptionsT_set_gid, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvProcessOptionsT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
