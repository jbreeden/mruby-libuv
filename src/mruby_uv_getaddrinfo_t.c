/*
 * uv_getaddrinfo_t
 * Defined in file uv.h @ line 220
 */

#include "mruby_UV.h"

#if BIND_Getaddrinfo_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Getaddrinfo::initialize */
/* sha: 27d67abd5e20c1b161057ae14dd5b8415234a9f6cee496e1e4017774a4e41c70 */
#if BIND_Getaddrinfo_INITIALIZE
mrb_value
mrb_UV_Getaddrinfo_initialize(mrb_state* mrb, mrb_value self) {
  uv_getaddrinfo_t* native_object = (uv_getaddrinfo_t*)new_mruby_uv_req(mrb, self, sizeof(uv_getaddrinfo_t));
  mruby_gift_uv_getaddrinfo_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Getaddrinfo::loop_reader */
/* sha: 784bdf99f5fd377456e8e15e79c07a62484219d8443320a93ce72c712d22b4f4 */
#if BIND_Getaddrinfo_loop_FIELD_READER
mrb_value
mrb_UV_Getaddrinfo_get_loop(mrb_state* mrb, mrb_value self) {
  uv_getaddrinfo_t * native_self = mruby_unbox_uv_getaddrinfo_t(self);

  uv_loop_t * native_loop = native_self->loop;

  mrb_value loop = (native_loop == NULL ? mrb_nil_value() : mruby_box_uv_loop_t(mrb, native_loop));

  return loop;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Getaddrinfo::loop_writer */
/* sha: 464e320fe61cb6d0a59966959348a93bb5744afb3ace890173dfc6fc214f75b1 */
#if BIND_Getaddrinfo_loop_FIELD_WRITER
mrb_value
mrb_UV_Getaddrinfo_set_loop(mrb_state* mrb, mrb_value self) {
  uv_getaddrinfo_t * native_self = mruby_unbox_uv_getaddrinfo_t(self);
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


void mrb_UV_Getaddrinfo_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Getaddrinfo::class_definition */
/* sha: c5d46b4493545880926f3e30a75230232e34575ec563efb2f1537717b7592b0b */
  struct RClass* Getaddrinfo_class = mrb_define_class_under(mrb, UV_module(mrb), "Getaddrinfo", Req_class(mrb));
  MRB_SET_INSTANCE_TT(Getaddrinfo_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Getaddrinfo::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Getaddrinfo::class_method_definitions */
/* sha: 0d2ec538ddbc24784ea8c99982662a7263d11dcfc2f9cf666d0d9f76672b6624 */
#if BIND_Getaddrinfo_INITIALIZE
  mrb_define_method(mrb, Getaddrinfo_class, "initialize", mrb_UV_Getaddrinfo_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Getaddrinfo::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Getaddrinfo::attr_definitions */
/* sha: d6d17f19d7a9e063fe438560a116d1750fbba1f3a62b4501a9aedbebcf92a0ea */
  /*
   * Fields
   */
#if BIND_Getaddrinfo_loop_FIELD_READER
  mrb_define_method(mrb, Getaddrinfo_class, "loop", mrb_UV_Getaddrinfo_get_loop, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Getaddrinfo_loop_FIELD_WRITER
  mrb_define_method(mrb, Getaddrinfo_class, "loop=", mrb_UV_Getaddrinfo_set_loop, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: Getaddrinfo::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
