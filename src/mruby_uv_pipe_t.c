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
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  uv_pipe_t* native_object = (uv_pipe_t*)calloc(1, sizeof(uv_pipe_t));
  mruby_gift_uv_pipe_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Pipe::ipc_reader */
/* sha: ce31cd8150e5e685c0f48d181c6092bc7c21d3010cdd88cac02e256bf4cf4035 */
#if BIND_Pipe_ipc_FIELD_READER
/* get_ipc
 *
 * Return Type: int
 */
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
/* sha: 6c61b171fa5cdb658a8813a3cd68a7adc4b069cf992ff7a85569525979052e3b */
#if BIND_Pipe_ipc_FIELD_WRITER
/* set_ipc
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_Pipe_set_ipc(mrb_state* mrb, mrb_value self) {
  uv_pipe_t * native_self = mruby_unbox_uv_pipe_t(self);
  mrb_int native_ipc;

  mrb_get_args(mrb, "i", &native_ipc);

  native_self->ipc = native_ipc;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Pipe_init(mrb_state* mrb) {
/* MRUBY_BINDING: Pipe::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Pipe::class_definition */
/* sha: d234ca2959fc3ce7bb7edaf36ce4d14103207e8211ffe42ce0bdb1dfeaa82cf7 */
  struct RClass* Pipe_class = mrb_define_class_under(mrb, UV_module(mrb), "Pipe", mrb->object_class);
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

/* MRUBY_BINDING: Pipe::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Pipe::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Pipe::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
