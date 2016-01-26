/*
 * uv_work_t
 * Defined in file uv.h @ line 227
 */

#include "mruby_UV.h"

#if BIND_Work_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Work::initialize */
/* sha: b6bb881dcc1d7bfb90252282c68457fa023b6494237755ca92438ad4b29f0f29 */
#if BIND_Work_INITIALIZE
mrb_value
mrb_UV_Work_initialize(mrb_state* mrb, mrb_value self) {
  uv_work_t* native_object = (uv_work_t*)new_mruby_uv_req(mrb, self, sizeof(uv_work_t));
  mruby_gift_uv_work_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Work::loop_reader */
/* sha: de5ba48680e204cb67e5ca94cbd2e8a711572b32748f9a05fc957294ef845dcb */
#if BIND_Work_loop_FIELD_READER
/* get_loop
 *
 * Return Type: uv_loop_t *
 */
mrb_value
mrb_UV_Work_get_loop(mrb_state* mrb, mrb_value self) {
  uv_work_t * native_self = mruby_unbox_uv_work_t(self);

  uv_loop_t * native_loop = native_self->loop;

  mrb_value loop = (native_loop == NULL ? mrb_nil_value() : mruby_box_uv_loop_t(mrb, native_loop));

  return loop;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Work::loop_writer */
/* sha: 10a44d6ad29d8531e0a5ca8148e31638f30f22d48fa5762c816a421d955a7bc3 */
#if BIND_Work_loop_FIELD_WRITER
/* set_loop
 *
 * Parameters:
 * - value: uv_loop_t *
 */
mrb_value
mrb_UV_Work_set_loop(mrb_state* mrb, mrb_value self) {
  uv_work_t * native_self = mruby_unbox_uv_work_t(self);
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

/* MRUBY_BINDING: Work::work_cb_reader */
/* sha: e8e6c6e49b86af15d4aef2749cd3877f1633cc41d6c0eccc0a0ad13d66d63488 */
#if BIND_Work_work_cb_FIELD_READER
/* get_work_cb
 *
 * Return Type: uv_work_cb
 */
mrb_value
mrb_UV_Work_get_work_cb(mrb_state* mrb, mrb_value self) {
  uv_work_t * native_self = mruby_unbox_uv_work_t(self);

  uv_work_cb native_work_cb = native_self->work_cb;

  mrb_value work_cb = TODO_mruby_box_uv_work_cb(mrb, native_work_cb);

  return work_cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Work::work_cb_writer */
/* sha: 981db262c1c85b94e0c24e38752e9ead4a6b1e4cf8f218f1b04fb9cb0f315e41 */
#if BIND_Work_work_cb_FIELD_WRITER
/* set_work_cb
 *
 * Parameters:
 * - value: uv_work_cb
 */
mrb_value
mrb_UV_Work_set_work_cb(mrb_state* mrb, mrb_value self) {
  uv_work_t * native_self = mruby_unbox_uv_work_t(self);
  mrb_value work_cb;

  mrb_get_args(mrb, "o", &work_cb);

  /* type checking */
  TODO_type_check_uv_work_cb(work_cb);

  uv_work_cb native_work_cb = TODO_mruby_unbox_uv_work_cb(work_cb);

  native_self->work_cb = native_work_cb;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Work::after_work_cb_reader */
/* sha: d1239db59ffcf7a428328eb5d71d7957281aaed659cc16e08d9234a7b8ed1bcf */
#if BIND_Work_after_work_cb_FIELD_READER
/* get_after_work_cb
 *
 * Return Type: uv_after_work_cb
 */
mrb_value
mrb_UV_Work_get_after_work_cb(mrb_state* mrb, mrb_value self) {
  uv_work_t * native_self = mruby_unbox_uv_work_t(self);

  uv_after_work_cb native_after_work_cb = native_self->after_work_cb;

  mrb_value after_work_cb = TODO_mruby_box_uv_after_work_cb(mrb, native_after_work_cb);

  return after_work_cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Work::after_work_cb_writer */
/* sha: d0064e351dd509ef9cbfa4344e0cc6d3fce02edc8255435fb34098f25b6762eb */
#if BIND_Work_after_work_cb_FIELD_WRITER
/* set_after_work_cb
 *
 * Parameters:
 * - value: uv_after_work_cb
 */
mrb_value
mrb_UV_Work_set_after_work_cb(mrb_state* mrb, mrb_value self) {
  uv_work_t * native_self = mruby_unbox_uv_work_t(self);
  mrb_value after_work_cb;

  mrb_get_args(mrb, "o", &after_work_cb);

  /* type checking */
  TODO_type_check_uv_after_work_cb(after_work_cb);

  uv_after_work_cb native_after_work_cb = TODO_mruby_unbox_uv_after_work_cb(after_work_cb);

  native_self->after_work_cb = native_after_work_cb;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Work_init(mrb_state* mrb) {
/* MRUBY_BINDING: Work::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Work::class_definition */
/* sha: 347d8223289cc6b321fa66bab4dc54a3c30278d0098935769f139d3b19f2959c */
  struct RClass* Work_class = mrb_define_class_under(mrb, UV_module(mrb), "Work", Req_class(mrb));
  MRB_SET_INSTANCE_TT(Work_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Work::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Work::class_method_definitions */
/* sha: 19e36bb7de92e51a5e090cfbea9799e00fc7b4869d7d7cb7884807bdfca0ff6c */
#if BIND_Work_INITIALIZE
  mrb_define_method(mrb, Work_class, "initialize", mrb_UV_Work_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Work::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Work::attr_definitions */
/* sha: 414509ecfeb59c803ccc69e2d15e29b28da147e630477dc0cd3059f09f953c91 */
  /*
   * Fields
   */
#if BIND_Work_loop_FIELD_READER
  mrb_define_method(mrb, Work_class, "loop", mrb_UV_Work_get_loop, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Work_loop_FIELD_WRITER
  mrb_define_method(mrb, Work_class, "loop=", mrb_UV_Work_set_loop, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Work_work_cb_FIELD_READER
  mrb_define_method(mrb, Work_class, "work_cb", mrb_UV_Work_get_work_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Work_work_cb_FIELD_WRITER
  mrb_define_method(mrb, Work_class, "work_cb=", mrb_UV_Work_set_work_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Work_after_work_cb_FIELD_READER
  mrb_define_method(mrb, Work_class, "after_work_cb", mrb_UV_Work_get_after_work_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Work_after_work_cb_FIELD_WRITER
  mrb_define_method(mrb, Work_class, "after_work_cb=", mrb_UV_Work_set_after_work_cb, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Work::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Work::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Work::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
