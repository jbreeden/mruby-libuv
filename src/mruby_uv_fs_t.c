/*
 * uv_fs_t
 * Defined in file uv.h @ line 226
 */

#include "mruby_UV.h"

#if BIND_FS_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FS::initialize */
/* sha: e1d37ab7960aa87bf21f2b8cdc2866ba4caf3e6d44b27ee882d80f019d03c6a5 */
#if BIND_FS_INITIALIZE
mrb_value
mrb_UV_FS_initialize(mrb_state* mrb, mrb_value self) {
  uv_fs_t* native_object = (uv_fs_t*)new_mruby_uv_req(mrb, self, sizeof(uv_fs_and_buf_t));
  mruby_gift_uv_fs_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: FS::fs_type_reader */
/* sha: 8145bdf42477e631db4759d670500e01bbcdc2c98fc4d0fc6f864cc6ac361ee9 */
#if BIND_FS_fs_type_FIELD_READER
mrb_value
mrb_UV_FS_get_fs_type(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);

  uv_fs_type native_fs_type = native_self->fs_type;

  mrb_value fs_type = mrb_fixnum_value(native_fs_type);

  return fs_type;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FS::fs_type_writer */
/* sha: 471e5e16c834e6bdf25ae7bb2d8f141716fb6012bb84a4a3134145faab877b7c */
#if BIND_FS_fs_type_FIELD_WRITER
mrb_value
mrb_UV_FS_set_fs_type(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: FS::loop_reader */
/* sha: f9f4f00796ace63e964b3b83006813315232636e5afe46138ac0610fea0bbd82 */
#if BIND_FS_loop_FIELD_READER
mrb_value
mrb_UV_FS_get_loop(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);

  uv_loop_t * native_loop = native_self->loop;

  mrb_value loop = (native_loop == NULL ? mrb_nil_value() : mruby_box_uv_loop_t(mrb, native_loop));

  return loop;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FS::loop_writer */
/* sha: d1de2c6be3cc4ed841fed6975c2b52a7e237bacc2101c7396a5d0bdb1b7a62ec */
#if BIND_FS_loop_FIELD_WRITER
mrb_value
mrb_UV_FS_set_loop(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);
  mrb_value loop;

  mrb_get_args(mrb, "o", &loop);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, Loop_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Loop expected");
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

/* MRUBY_BINDING: FS::cb_reader */
/* sha: b870ca4364d0dfefb4e7ddb213e3bb5ee7a8bee219ff40e9143c90f0bd286a55 */
#if BIND_FS_cb_FIELD_READER
mrb_value
mrb_UV_FS_get_cb(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);

  uv_fs_cb native_cb = native_self->cb;

  mrb_value cb = TODO_mruby_box_uv_fs_cb(native_cb);

  return cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FS::cb_writer */
/* sha: 284d7c0e1872ac92c5d26ae5715b835e6e7e6c69bbef99534d0313cd0dcec1e7 */
#if BIND_FS_cb_FIELD_WRITER
mrb_value
mrb_UV_FS_set_cb(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);
  mrb_value native_cb;
  uv_fs_cb thunk = NULL;

  mrb_get_args(mrb, "&", &native_cb);

  /* type checking */
  if (!mrb_nil_p(native_cb)) {
    thunk = mruby_uv_fs_cb_thunk;
    MRUBY_UV_PREPARE_REQ_THUNK(/* TODO: req??? */, "@mruby_uv_fs_cb_thunk", native_cb);
  }

  native_self->cb = native_cb;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FS::result_reader */
/* sha: 9dbda94485d3b0cf044b6952a56b008ca481897e81df661dc189c0086da6fba2 */
#if BIND_FS_result_FIELD_READER
/* get_result
 *
 * Return Type: ssize_t
 */
mrb_value
mrb_UV_FS_get_result(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);
  ssize_t native_result = native_self->result;
  mrb_value result = mrb_fixnum_value(native_result);
  return result;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FS::result_writer */
/* sha: 4fc7ff1cfa9173dfd908ecb1399a010ee79d7d5cee2a1880b845b46efcccc3d3 */
#if BIND_FS_result_FIELD_WRITER
mrb_value
mrb_UV_FS_set_result(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: FS::ptr_reader */
/* sha: 7d63535368bd5605be09aabdb6428a25800b35130dbff6a2e1e9048bd29967a7 */
#if BIND_FS_ptr_FIELD_READER
mrb_value
mrb_UV_FS_get_ptr(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);

  void * native_ptr = native_self->ptr;

  mrb_value ptr = TODO_mruby_box_void_PTR(mrb, native_ptr);

  return ptr;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FS::ptr_writer */
/* sha: dda4b1f45ba51228b645f0b002da8373031455fe72354fa35b0100e96f8e815f */
#if BIND_FS_ptr_FIELD_WRITER
mrb_value
mrb_UV_FS_set_ptr(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: FS::path_reader */
/* sha: 2bfa8dbd976eaca8ed6f20e390846185bfad159358a4f19dd838bba004a6717a */
#if BIND_FS_path_FIELD_READER
mrb_value
mrb_UV_FS_get_path(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);

  const char * native_path = native_self->path;

  mrb_value path = native_path == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_path);

  return path;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FS::path_writer */
/* sha: bd94479379c7a9de820a0d2dff62d7fc333eab231570b5027c5b64c37b3e1108 */
#if BIND_FS_path_FIELD_WRITER
mrb_value
mrb_UV_FS_set_path(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: FS::statbuf_reader */
/* sha: 557f1b477355c03b119d552e66fd098a482efecf569a513a22abe888889eb97a */
#if BIND_FS_statbuf_FIELD_READER
mrb_value
mrb_UV_FS_get_statbuf(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);

  uv_stat_t native_statbuf = native_self->statbuf;

  uv_stat_t* new_statbuf = TODO_move_uv_stat_t_to_heap(native_statbuf);
  mrb_value statbuf = mruby_box_uv_stat_t(mrb, &native_statbuf);

  return statbuf;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FS::statbuf_writer */
/* sha: fb7124b3d3326b082e4d4e307820937cdcecca4cb0086df80342404de7c4afd0 */
#if BIND_FS_statbuf_FIELD_WRITER
mrb_value
mrb_UV_FS_set_statbuf(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);
  mrb_value statbuf;

  mrb_get_args(mrb, "o", &statbuf);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, statbuf, Stat_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Stat expected");
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


void mrb_UV_FS_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FS::class_definition */
/* sha: 8c835f5a2a789b302d4c957f56eee1cdaf901f795ae3b66fd6e5a2f7256f6ee1 */
  struct RClass* FS_class = mrb_define_class_under(mrb, UV_module(mrb), "FS", Req_class(mrb));
  MRB_SET_INSTANCE_TT(FS_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FS::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FS::class_method_definitions */
/* sha: 845423c06efc7a2789c5026a7cde53c0219fbb04a98375fdc52969360e64f132 */
#if BIND_FS_INITIALIZE
  mrb_define_method(mrb, FS_class, "initialize", mrb_UV_FS_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FS::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FS::attr_definitions */
/* sha: f8714802de64130c7d93d31386e5bf95d89db46a90b1f38ddbd40e8e59c102ab */
  /*
   * Fields
   */
#if BIND_FS_fs_type_FIELD_READER
  mrb_define_method(mrb, FS_class, "fs_type", mrb_UV_FS_get_fs_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_FS_fs_type_FIELD_WRITER
  mrb_define_method(mrb, FS_class, "fs_type=", mrb_UV_FS_set_fs_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_FS_loop_FIELD_READER
  mrb_define_method(mrb, FS_class, "loop", mrb_UV_FS_get_loop, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_FS_loop_FIELD_WRITER
  mrb_define_method(mrb, FS_class, "loop=", mrb_UV_FS_set_loop, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_FS_cb_FIELD_READER
  mrb_define_method(mrb, FS_class, "cb", mrb_UV_FS_get_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_FS_cb_FIELD_WRITER
  mrb_define_method(mrb, FS_class, "cb=", mrb_UV_FS_set_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_FS_result_FIELD_READER
  mrb_define_method(mrb, FS_class, "result", mrb_UV_FS_get_result, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_FS_result_FIELD_WRITER
  mrb_define_method(mrb, FS_class, "result=", mrb_UV_FS_set_result, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_FS_ptr_FIELD_READER
  mrb_define_method(mrb, FS_class, "ptr", mrb_UV_FS_get_ptr, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_FS_ptr_FIELD_WRITER
  mrb_define_method(mrb, FS_class, "ptr=", mrb_UV_FS_set_ptr, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_FS_path_FIELD_READER
  mrb_define_method(mrb, FS_class, "path", mrb_UV_FS_get_path, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_FS_path_FIELD_WRITER
  mrb_define_method(mrb, FS_class, "path=", mrb_UV_FS_set_path, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_FS_statbuf_FIELD_READER
  mrb_define_method(mrb, FS_class, "statbuf", mrb_UV_FS_get_statbuf, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_FS_statbuf_FIELD_WRITER
  mrb_define_method(mrb, FS_class, "statbuf=", mrb_UV_FS_set_statbuf, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: FS::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
