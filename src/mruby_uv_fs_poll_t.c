/*
 * uv_fs_poll_t
 * Defined in file uv.h @ line 215
 */

#include "mruby_UV.h"

#if BIND_FSPoll_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FSPoll::initialize */
/* sha: 4b035bc9e0bd45150b5791238c21df0398758b3a2cdf65c90f909a016b723e17 */
#if BIND_FSPoll_INITIALIZE
mrb_value
mrb_UV_FSPoll_initialize(mrb_state* mrb, mrb_value self) {
  uv_fs_poll_t* native_object = (uv_fs_poll_t*)new_mruby_uv_handle(mrb, self, sizeof(uv_fs_poll_t));
  mruby_gift_uv_fs_poll_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: FSPoll::poll_ctx_reader */
/* sha: 736b542b01ea2ca55228a908e688cbecd5c6df6e9d6b3e43775b1207fed97a1c */
#if BIND_FSPoll_poll_ctx_FIELD_READER
/* get_poll_ctx
 *
 * Return Type: void *
 */
mrb_value
mrb_UV_FSPoll_get_poll_ctx(mrb_state* mrb, mrb_value self) {
  uv_fs_poll_t * native_self = mruby_unbox_uv_fs_poll_t(self);

  void * native_poll_ctx = native_self->poll_ctx;

  mrb_value poll_ctx = TODO_mruby_box_void_PTR(mrb, native_poll_ctx);

  return poll_ctx;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FSPoll::poll_ctx_writer */
/* sha: c0dbf2545a0d5e5ac460434edf31801e995fc7d0b7c13673837642620279cf1e */
#if BIND_FSPoll_poll_ctx_FIELD_WRITER
/* set_poll_ctx
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_UV_FSPoll_set_poll_ctx(mrb_state* mrb, mrb_value self) {
  uv_fs_poll_t * native_self = mruby_unbox_uv_fs_poll_t(self);
  mrb_value poll_ctx;

  mrb_get_args(mrb, "o", &poll_ctx);

  /* type checking */
  TODO_type_check_void_PTR(poll_ctx);

  void * native_poll_ctx = TODO_mruby_unbox_void_PTR(poll_ctx);

  native_self->poll_ctx = native_poll_ctx;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_FSPoll_init(mrb_state* mrb) {
/* MRUBY_BINDING: FSPoll::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FSPoll::class_definition */
/* sha: 62af106d7e5993cdb5aa0e4d09b00faa224110ba22f64f9a783df38c793297c2 */
  struct RClass* FSPoll_class = mrb_define_class_under(mrb, UV_module(mrb), "FSPoll", Handle_class(mrb));
  MRB_SET_INSTANCE_TT(FSPoll_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FSPoll::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FSPoll::class_method_definitions */
/* sha: f00d78737e6395b810242c3ddb3613c398f4e20f11b0c19bd21ec2c20f702950 */
#if BIND_FSPoll_INITIALIZE
  mrb_define_method(mrb, FSPoll_class, "initialize", mrb_UV_FSPoll_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FSPoll::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FSPoll::attr_definitions */
/* sha: 2a1a710f604b33e988a51293f6dce7e27b8e57e6ea3f81893a45c0b5c3e8f46d */
  /*
   * Fields
   */
#if BIND_FSPoll_poll_ctx_FIELD_READER
  mrb_define_method(mrb, FSPoll_class, "poll_ctx", mrb_UV_FSPoll_get_poll_ctx, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_FSPoll_poll_ctx_FIELD_WRITER
  mrb_define_method(mrb, FSPoll_class, "poll_ctx=", mrb_UV_FSPoll_set_poll_ctx, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FSPoll::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FSPoll::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FSPoll::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
