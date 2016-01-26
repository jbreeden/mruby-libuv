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
/* sha: 1ff69fdfd8af587b8231b0e4a422b1cce50239248cfe9a9a3e95098df554036e */
#if BIND_Getnameinfo_loop_FIELD_READER
/* get_loop
 *
 * Return Type: uv_loop_t *
 */
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
/* sha: 10f8b461cec3b50f4903aa1809c78ec142f39cc7a79cf95c6d2003eab2201cb8 */
#if BIND_Getnameinfo_loop_FIELD_WRITER
/* set_loop
 *
 * Parameters:
 * - value: uv_loop_t *
 */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Getnameinfo_init(mrb_state* mrb) {
/* MRUBY_BINDING: Getnameinfo::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Getnameinfo::class_definition */
/* sha: 54a5a0391d03c40e3e2b681c339aae2d1210d110d9157481c4255f6cfe9be548 */
  struct RClass* Getnameinfo_class = mrb_define_class_under(mrb, UV_module(mrb), "Getnameinfo", mrb->object_class);
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

/* MRUBY_BINDING: Getnameinfo::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Getnameinfo::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Getnameinfo::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
