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
/* sha: e792ea1bb64ad74c0827d5e4dbb13243c728ee9f784ac138afa2e23cc7cd4d8a */
#if BIND_FS_fs_type_FIELD_READER
/* get_fs_type
 *
 * Return Type: uv_fs_type
 */
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
/* sha: e9ebf4c4b38145d263336a131eed2aada1082fbce8537272deb2fd3921ae773e */
#if BIND_FS_fs_type_FIELD_WRITER
/* set_fs_type
 *
 * Parameters:
 * - value: uv_fs_type
 */
mrb_value
mrb_UV_FS_set_fs_type(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);
  mrb_int native_fs_type;

  mrb_get_args(mrb, "i", &native_fs_type);

  native_self->fs_type = native_fs_type;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FS::loop_reader */
/* sha: bf4b7a106e868b505abe15ce78644005d02a43e18e0496cc6607c0d90787efe9 */
#if BIND_FS_loop_FIELD_READER
/* get_loop
 *
 * Return Type: uv_loop_t *
 */
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
/* sha: f8a1e904c44299d68ea8c626139eb3007a07fe8b946a5d773c4a53d95f9b7bc3 */
#if BIND_FS_loop_FIELD_WRITER
/* set_loop
 *
 * Parameters:
 * - value: uv_loop_t *
 */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FS::cb_reader */
/* sha: 9c2619b98b572ed39114f305606e1e3709201d825a05c40dc7b31ef73e7c959e */
#if BIND_FS_cb_FIELD_READER
/* get_cb
 *
 * Return Type: uv_fs_cb
 */
mrb_value
mrb_UV_FS_get_cb(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);

  uv_fs_cb native_cb = native_self->cb;

  cb = TODO_mruby_box_uv_fs_cb(native_cb);

  return cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FS::cb_writer */
/* sha: f5ba095145d1621289c6e7f695a8a3f7f03756c590eb95ffb2cddf0855672761 */
#if BIND_FS_cb_FIELD_WRITER
/* set_cb
 *
 * Parameters:
 * - value: uv_fs_cb
 */
mrb_value
mrb_UV_FS_set_cb(mrb_state* mrb, mrb_value self) {
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
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

  mrb_value result = TODO_mruby_box_ssize_t(mrb, native_result);

  return result;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FS::result_writer */
/* sha: 945a68266ec960cc41658adfd617e16cfe99e546ecab2b8ab82ecda8d41d87c7 */
#if BIND_FS_result_FIELD_WRITER
/* set_result
 *
 * Parameters:
 * - value: ssize_t
 */
mrb_value
mrb_UV_FS_set_result(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);
  mrb_value result;

  mrb_get_args(mrb, "o", &result);

  /* type checking */
  TODO_type_check_ssize_t(result);

  ssize_t native_result = TODO_mruby_unbox_ssize_t(result);

  native_self->result = native_result;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FS::ptr_reader */
/* sha: 6f70bd9df70a1e4a00f079218f57dc4dd2e1a564f17ff030c34bf19b2322c202 */
#if BIND_FS_ptr_FIELD_READER
/* get_ptr
 *
 * Return Type: void *
 */
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
/* sha: 3a58920e47970c03c655f2414dce9ddfac94f7c22ca281b1a16e4a12cfbd7cb1 */
#if BIND_FS_ptr_FIELD_WRITER
/* set_ptr
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_UV_FS_set_ptr(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);
  mrb_value ptr;

  mrb_get_args(mrb, "o", &ptr);

  /* type checking */
  TODO_type_check_void_PTR(ptr);

  void * native_ptr = TODO_mruby_unbox_void_PTR(ptr);

  native_self->ptr = native_ptr;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FS::path_reader */
/* sha: 3b94cd9045275d0c3ee02af5b3df359b281a7de65d59d4dafe50f1f65b630288 */
#if BIND_FS_path_FIELD_READER
/* get_path
 *
 * Return Type: const char *
 */
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
/* sha: 220c1c34419fada8d692a4e62997f9ba012cb4bdd00c4521a22de313308ae682 */
#if BIND_FS_path_FIELD_WRITER
/* set_path
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_UV_FS_set_path(mrb_state* mrb, mrb_value self) {
  uv_fs_t * native_self = mruby_unbox_uv_fs_t(self);
  char * native_path = NULL;

  mrb_get_args(mrb, "z", &native_path);

  native_self->path = native_path;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FS::statbuf_reader */
/* sha: 39df7019f3fb9b8ba4121eb0a9379d16417367db772d3d11437f8252a36920dc */
#if BIND_FS_statbuf_FIELD_READER
/* get_statbuf
 *
 * Return Type: uv_stat_t
 */
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
/* sha: d32dcbcf546a3d65a05a1b95a5a88ab2f89615938299e7eb83d94ac44ede87cc */
#if BIND_FS_statbuf_FIELD_WRITER
/* set_statbuf
 *
 * Parameters:
 * - value: uv_stat_t
 */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_FS_init(mrb_state* mrb) {
/* MRUBY_BINDING: FS::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
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

/* MRUBY_BINDING: FS::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FS::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FS::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
