/*
 * uv_stream_t
 * Defined in file uv.h @ line 202
 */

#include "mruby_UV.h"

#if BIND_Stream_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Stream::initialize */
/* sha: 11978911b82d42892355775c83f7e902b914d21bd1a18ea9a3928d8626cd9996 */
#if BIND_Stream_INITIALIZE
mrb_value
mrb_UV_Stream_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  uv_stream_t* native_object = (uv_stream_t*)calloc(1, sizeof(uv_stream_t));
  mruby_gift_uv_stream_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Stream_init(mrb_state* mrb) {
/* MRUBY_BINDING: Stream::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Stream::class_definition */
/* sha: 67cfc37ffa86c11f27e9581c0938f2f54767319600b2637cea71fa9f590ed7b4 */
  struct RClass* Stream_class = mrb_define_class_under(mrb, UV_module(mrb), "Stream", mrb->object_class);
  MRB_SET_INSTANCE_TT(Stream_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Stream::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Stream::class_method_definitions */
/* sha: 6b63916f6d8d66b031eb1d3ba1bb03347a781188320b5978f6b9578d7ff89bf8 */
#if BIND_Stream_INITIALIZE
  mrb_define_method(mrb, Stream_class, "initialize", mrb_UV_Stream_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Stream::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Stream::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Stream::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Stream::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Stream::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
