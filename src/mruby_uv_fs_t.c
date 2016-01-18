/*
 * uv_fs_t
 * Defined in file uv.h @ line 226
 */

#include "mruby_UV.h"

#if BIND_UvFsT_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvFsT::initialize */
/* sha: daa7c1bd12b537c8a6f448ece083677776c289aa2c73c94bd2ab3da99feb95a5 */
#if BIND_UvFsT_INITIALIZE
mrb_value
mrb_UV_UvFsT_initialize(mrb_state* mrb, mrb_value self) {
  uv_fs_t* native_object = (uv_fs_t*)new_mruby_uv_req(mrb, self, sizeof(uv_fs_and_buf_t));
  mruby_gift_uv_fs_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsT::disown */
/* sha: 9edcd64c3789b16ecfd94c0e3da188ebf61ff55cc4cb7ec6301074a06848e7cf */
mrb_value
mrb_UV_UvFsT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvFsT.disown only accepts objects of type UV::UvFsT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsT::belongs_to_ruby */
/* sha: 23862103c9fb7f32cf54893b0ba40668f784af2b4693642237113fbb86a657a8 */
mrb_value
mrb_UV_UvFsT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvFsT.belongs_to_ruby only accepts objects of type UV::UvFsT");
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

/* MRUBY_BINDING: UvFsT::fs_type_reader */
/* sha: 09dfcb142f8573b8ff44050d9b0004e27e4ef65b1158fc0b983552c056c74bbc */
#if BIND_UvFsT_fs_type_FIELD_READER
/* get_fs_type
 *
 * Return Type: uv_fs_type
 */
mrb_value
mrb_UV_UvFsT_get_fs_type(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);

  uv_fs_type native_fs_type = native_self->fs_type;

  mrb_value fs_type = mrb_fixnum_value(native_fs_type);

  return fs_type;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsT::fs_type_writer */
/* sha: 3f155e54636a28da8b1863ea082dbd514be8b165e8a532fe797339ea51d2ab58 */
#if BIND_UvFsT_fs_type_FIELD_WRITER
/* set_fs_type
 *
 * Parameters:
 * - value: uv_fs_type
 */
mrb_value
mrb_UV_UvFsT_set_fs_type(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);
  mrb_int native_fs_type;

  mrb_get_args(mrb, "i", &native_fs_type);

  native_self->fs_type = native_fs_type;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsT::loop_reader */
/* sha: 1977c7a9c4a5e4b7e409f3e9622014b191ad2567806eae838be03de985e7feed */
#if BIND_UvFsT_loop_FIELD_READER
/* get_loop
 *
 * Return Type: uv_loop_t *
 */
mrb_value
mrb_UV_UvFsT_get_loop(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);

  uv_loop_t * native_loop = native_self->loop;

  mrb_value loop = (native_loop == NULL ? mrb_nil_value() : mruby_box_uv_loop_t(mrb, native_loop));

  return loop;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsT::loop_writer */
/* sha: e548d193f03cd6dadecfe884c680a2cf1d9c83a3352907f199fb20a975fd9e91 */
#if BIND_UvFsT_loop_FIELD_WRITER
/* set_loop
 *
 * Parameters:
 * - value: uv_loop_t *
 */
mrb_value
mrb_UV_UvFsT_set_loop(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);
  mrb_value loop;

  mrb_get_args(mrb, "o", &loop);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }

  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  native_self->loop = native_loop;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsT::cb_reader */
/* sha: 6a0e8f716ff3373b5d4cf21a6a53ae812d9ba035c36b140860a324397b38f065 */
#if BIND_UvFsT_cb_FIELD_READER
/* get_cb
 *
 * Return Type: uv_fs_cb
 */
mrb_value
mrb_UV_UvFsT_get_cb(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);

  uv_fs_cb native_cb = native_self->cb;

  cb = TODO_mruby_box_uv_fs_cb(native_cb);

  return cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsT::cb_writer */
/* sha: 05a6f1e53a6213067b52d598ec06e4d48f2ce197e0fb5cfcb76c29369658f458 */
#if BIND_UvFsT_cb_FIELD_WRITER
/* set_cb
 *
 * Parameters:
 * - value: uv_fs_cb
 */
mrb_value
mrb_UV_UvFsT_set_cb(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);
  mrb_value native_cb;

  mrb_get_args(mrb, "&", &native_cb);

  /* type checking */
  if (mrb_nil_p(native_cb)) {
    mrb_raise(mrb, E_ARGUMENT_ERROR, "No block provided");
    return mrb_nil_value();
  }
  // TODO: mrb_iv_set(mrb, req???, mrb_intern_cstr(mrb, "@mruby_uv_fs_cb"), native_cb);

  native_self->cb = native_cb;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsT::result_reader */
/* sha: 272e67bc2722e6cec1532a99b5e99a79de17cd568811e8bc0c489d7e22ea3608 */
#if BIND_UvFsT_result_FIELD_READER
/* get_result
 *
 * Return Type: ssize_t
 */
mrb_value
mrb_UV_UvFsT_get_result(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);

  ssize_t native_result = native_self->result;

  mrb_value result = mrb_fixnum_value(native_result);

  return result;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsT::result_writer */
/* sha: 02a13153eded144e8432959071ce4741ea922125f02d38ac2ac69d4cb21e2f46 */
#if BIND_UvFsT_result_FIELD_WRITER
/* set_result
 *
 * Parameters:
 * - value: ssize_t
 */
mrb_value
mrb_UV_UvFsT_set_result(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);
  mrb_value result;

  mrb_get_args(mrb, "o", &result);

  /* type checking */
  TODO_type_check_ssize_t(result);

  ssize_t native_result = TODO_mruby_unbox_ssize_t(result);

  native_self->result = native_result;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsT::ptr_reader */
/* sha: c970e783106b3fd3d937af8d5b48417338e12ac95a53da42a06544e626548b68 */
#if BIND_UvFsT_ptr_FIELD_READER
/* get_ptr
 *
 * Return Type: void *
 */
mrb_value
mrb_UV_UvFsT_get_ptr(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);

  void * native_ptr = native_self->ptr;

  mrb_value ptr = TODO_mruby_box_void_PTR(mrb, native_ptr);

  return ptr;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsT::ptr_writer */
/* sha: daefca0fa4bad37b38ad4dc5ef75681015949301a445a5e06eab2606e8cdd5ae */
#if BIND_UvFsT_ptr_FIELD_WRITER
/* set_ptr
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_UV_UvFsT_set_ptr(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);
  mrb_value ptr;

  mrb_get_args(mrb, "o", &ptr);

  /* type checking */
  TODO_type_check_void_PTR(ptr);

  void * native_ptr = TODO_mruby_unbox_void_PTR(ptr);

  native_self->ptr = native_ptr;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsT::path_reader */
/* sha: 56e68622f57526ff6f019913031fa50c16c6d60e8daaa2b42c83e97833443f95 */
#if BIND_UvFsT_path_FIELD_READER
/* get_path
 *
 * Return Type: const char *
 */
mrb_value
mrb_UV_UvFsT_get_path(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);

  const char * native_path = native_self->path;

  mrb_value path = native_path == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_path);

  return path;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsT::path_writer */
/* sha: b8292faa3e286bc6665a22fe98a645fae24c52620f0ac026001e90a7a4b7b9ef */
#if BIND_UvFsT_path_FIELD_WRITER
/* set_path
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_UV_UvFsT_set_path(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);
  char * native_path = NULL;

  mrb_get_args(mrb, "z", &native_path);

  native_self->path = native_path;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsT::statbuf_reader */
/* sha: 26a0782ff52fa498eeda07c5f3dac70266c2aa96a79d3fefe406ce200fc62214 */
#if BIND_UvFsT_statbuf_FIELD_READER
/* get_statbuf
 *
 * Return Type: uv_stat_t
 */
mrb_value
mrb_UV_UvFsT_get_statbuf(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);

  uv_stat_t native_statbuf = native_self->statbuf;

  uv_stat_t* new_statbuf = TODO_move_uv_stat_t_to_heap(native_statbuf);
  mrb_value statbuf = mruby_box_uv_stat_t(mrb, &native_statbuf);

  return statbuf;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsT::statbuf_writer */
/* sha: 59ebeda8b4491306b2ca45e698e0b49cdef9817359f348064ba43e5212e22681 */
#if BIND_UvFsT_statbuf_FIELD_WRITER
/* set_statbuf
 *
 * Parameters:
 * - value: uv_stat_t
 */
mrb_value
mrb_UV_UvFsT_set_statbuf(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);
  mrb_value statbuf;

  mrb_get_args(mrb, "o", &statbuf);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, statbuf, UvStatT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvStatT expected");
    return mrb_nil_value();
  }

  uv_stat_t native_statbuf = *(mruby_unbox_uv_stat_t(statbuf));

  native_self->statbuf = native_statbuf;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvFsT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvFsT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsT::class_definition */
/* sha: 02aa9cbbdb10f9cfe5a609202ed36e8ac5afa549658c66513736b8a9bc4318fa */
  struct RClass* UvFsT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvFsT", UvReqT_class(mrb));
  MRB_SET_INSTANCE_TT(UvFsT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsT::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsT::class_method_definitions */
/* sha: 863de9975437e826deb687d25d30ce176b3a54e0ea3529ccc9fcee7b880adf70 */
#if BIND_UvFsT_INITIALIZE
  mrb_define_method(mrb, UvFsT_class, "initialize", mrb_UV_UvFsT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvFsT_class, "disown", mrb_UV_UvFsT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvFsT_class, "belongs_to_ruby?", mrb_UV_UvFsT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsT::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsT::attr_definitions */
/* sha: 6a9e59e3fbddc5ae36182a67970e52871a940bb5a4ce7b00b920908743b35a9a */
  /*
   * Fields
   */
#if BIND_UvFsT_fs_type_FIELD_READER
  mrb_define_method(mrb, UvFsT_class, "fs_type", mrb_UV_UvFsT_get_fs_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvFsT_fs_type_FIELD_WRITER
  mrb_define_method(mrb, UvFsT_class, "fs_type=", mrb_UV_UvFsT_set_fs_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvFsT_loop_FIELD_READER
  mrb_define_method(mrb, UvFsT_class, "loop", mrb_UV_UvFsT_get_loop, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvFsT_loop_FIELD_WRITER
  mrb_define_method(mrb, UvFsT_class, "loop=", mrb_UV_UvFsT_set_loop, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvFsT_cb_FIELD_READER
  mrb_define_method(mrb, UvFsT_class, "cb", mrb_UV_UvFsT_get_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvFsT_cb_FIELD_WRITER
  mrb_define_method(mrb, UvFsT_class, "cb=", mrb_UV_UvFsT_set_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvFsT_result_FIELD_READER
  mrb_define_method(mrb, UvFsT_class, "result", mrb_UV_UvFsT_get_result, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvFsT_result_FIELD_WRITER
  mrb_define_method(mrb, UvFsT_class, "result=", mrb_UV_UvFsT_set_result, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvFsT_ptr_FIELD_READER
  mrb_define_method(mrb, UvFsT_class, "ptr", mrb_UV_UvFsT_get_ptr, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvFsT_ptr_FIELD_WRITER
  mrb_define_method(mrb, UvFsT_class, "ptr=", mrb_UV_UvFsT_set_ptr, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvFsT_path_FIELD_READER
  mrb_define_method(mrb, UvFsT_class, "path", mrb_UV_UvFsT_get_path, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvFsT_path_FIELD_WRITER
  mrb_define_method(mrb, UvFsT_class, "path=", mrb_UV_UvFsT_set_path, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvFsT_statbuf_FIELD_READER
  mrb_define_method(mrb, UvFsT_class, "statbuf", mrb_UV_UvFsT_get_statbuf, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvFsT_statbuf_FIELD_WRITER
  mrb_define_method(mrb, UvFsT_class, "statbuf=", mrb_UV_UvFsT_set_statbuf, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsT::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsT::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
