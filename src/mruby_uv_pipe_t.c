/*
 * uv_pipe_t
 * Defined in file uv.h @ line 205
 */

#include "mruby_UV.h"

#if BIND_Pipe_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Pipe::initialize */
/* sha: 9acd9c0e1c9572baf95d1639fd5fc555172b2e303755c32a565247620fb74737 */
#if BIND_Pipe_INITIALIZE
mrb_value
mrb_UV_Pipe_initialize(mrb_state* mrb, mrb_value self) {
  uv_pipe_t* native_object = (uv_pipe_t*)new_mruby_uv_handle(mrb, self, sizeof(uv_pipe_t));
  mruby_gift_uv_pipe_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Pipe::ipc_reader */
/* sha: e8db80fb6347d2973d470f17977447cd7315973fc71abe5af03b782cfa51c57d */
#if BIND_Pipe_ipc_FIELD_READER
mrb_value
mrb_UV_Pipe_get_ipc(mrb_state* mrb, mrb_value self) {
  uv_pipe_t * native_self = mruby_unbox_uv_pipe_t(self);

  int native_ipc = native_self->ipc;

  mrb_value ipc = mrb_fixnum_value(native_ipc);

  return ipc;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Pipe::ipc_writer */
/* sha: 5ab4f8bdbf9f9aeaf294bbaa9eae1eae4dab66c987b2b4ab3695d7b91cf56456 */
#if BIND_Pipe_ipc_FIELD_WRITER
mrb_value
mrb_UV_Pipe_set_ipc(mrb_state* mrb, mrb_value self) {
  uv_pipe_t * native_self = mruby_unbox_uv_pipe_t(self);
  mrb_int native_ipc;

  mrb_get_args(mrb, "i", &native_ipc);

  native_self->ipc = native_ipc;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Pipe_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Pipe::class_definition */
/* sha: d234ca2959fc3ce7bb7edaf36ce4d14103207e8211ffe42ce0bdb1dfeaa82cf7 */
  struct RClass* Pipe_class = mrb_define_class_under(mrb, UV_module(mrb), "Pipe", Handle_class(mrb));
  MRB_SET_INSTANCE_TT(Pipe_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Pipe::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Pipe::class_method_definitions */
/* sha: 8abaf76f6359606225ab3b73f1f2447bc2bf7154740c1d52e391469271808160 */
#if BIND_Pipe_INITIALIZE
  mrb_define_method(mrb, Pipe_class, "initialize", mrb_UV_Pipe_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Pipe::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Pipe::attr_definitions */
/* sha: 8ded097411add4a701c368637ffbd777e07a652f7286bd874a6e02954909ed80 */
  /*
   * Fields
   */
#if BIND_Pipe_ipc_FIELD_READER
  mrb_define_method(mrb, Pipe_class, "ipc", mrb_UV_Pipe_get_ipc, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Pipe_ipc_FIELD_WRITER
  mrb_define_method(mrb, Pipe_class, "ipc=", mrb_UV_Pipe_set_ipc, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: Pipe::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
