/*
 * uv_getnameinfo_t
 * Defined in file uv.h @ line 221
 */

#include "mruby_UV.h"

#if BIND_Getnameinfo_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Getnameinfo::initialize */
/* sha: 63a5b2b1e8c4e69c5c01dd850f3e49bd6efe6e3f1518b0e01920b7ef50073ae9 */
#if BIND_Getnameinfo_INITIALIZE
mrb_value
mrb_UV_Getnameinfo_initialize(mrb_state* mrb, mrb_value self) {
  uv_getnameinfo_t* native_object = (uv_getnameinfo_t*)new_mruby_uv_req(mrb, self, sizeof(uv_getnameinfo_t));
  mruby_gift_uv_getnameinfo_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Getnameinfo::loop_reader */
/* sha: 9ea5a1c582fd8937970b0df09dc68336d3f40542ac9bf99f4f5eb3459836cb40 */
#if BIND_Getnameinfo_loop_FIELD_READER
mrb_value
mrb_UV_Getnameinfo_get_loop(mrb_state* mrb, mrb_value self) {
  uv_getnameinfo_t * native_self = mruby_unbox_uv_getnameinfo_t(self);

  uv_loop_t * native_loop = native_self->loop;

  mrb_value loop = (native_loop == NULL ? mrb_nil_value() : mruby_box_uv_loop_t(mrb, native_loop));

  return loop;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Getnameinfo::loop_writer */
/* sha: a755c3909d32cd01d146f7dc0c86fc64d5fd871292cab2fe68334feea817b7e8 */
#if BIND_Getnameinfo_loop_FIELD_WRITER
mrb_value
mrb_UV_Getnameinfo_set_loop(mrb_state* mrb, mrb_value self) {
  uv_getnameinfo_t * native_self = mruby_unbox_uv_getnameinfo_t(self);
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


void mrb_UV_Getnameinfo_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Getnameinfo::class_definition */
/* sha: 54a5a0391d03c40e3e2b681c339aae2d1210d110d9157481c4255f6cfe9be548 */
  struct RClass* Getnameinfo_class = mrb_define_class_under(mrb, UV_module(mrb), "Getnameinfo", Req_class(mrb));
  MRB_SET_INSTANCE_TT(Getnameinfo_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Getnameinfo::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Getnameinfo::class_method_definitions */
/* sha: 33618a5274bcb426e0c8d0159074a89d132f55df7b2ae0b77a850f30fcdebd0e */
#if BIND_Getnameinfo_INITIALIZE
  mrb_define_method(mrb, Getnameinfo_class, "initialize", mrb_UV_Getnameinfo_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Getnameinfo::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Getnameinfo::attr_definitions */
/* sha: 448471cf4bf11bcae0b0f1ca951899790decc6c6a5e78fe1e745acce6028b494 */
  /*
   * Fields
   */
#if BIND_Getnameinfo_loop_FIELD_READER
  mrb_define_method(mrb, Getnameinfo_class, "loop", mrb_UV_Getnameinfo_get_loop, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Getnameinfo_loop_FIELD_WRITER
  mrb_define_method(mrb, Getnameinfo_class, "loop=", mrb_UV_Getnameinfo_set_loop, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: Getnameinfo::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
