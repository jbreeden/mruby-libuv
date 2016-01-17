/*
 * uv_getnameinfo_t
 * Defined in file uv.h @ line 221
 */

#include "mruby_UV.h"

#if BIND_UvGetnameinfoT_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvGetnameinfoT::initialize */
/* sha: f11150a244953b5a5107a87e5cab3c13e7f93e594280f421d4e9e5431c809b09 */
#if BIND_UvGetnameinfoT_INITIALIZE
mrb_value
mrb_UV_UvGetnameinfoT_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Uncomment (and optionally replace) if an initializer is desired.
  uv_getnameinfo_t* native_object = (uv_getnameinfo_t*)calloc(1, sizeof(uv_getnameinfo_t));
  mruby_gift_uv_getnameinfo_t_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetnameinfoT::disown */
/* sha: 4e0192652a056f6a1953d90ca639a10e6a9f45aac0f04c0a9fde9e828c62dca5 */
mrb_value
mrb_UV_UvGetnameinfoT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvGetnameinfoT.disown only accepts objects of type UV::UvGetnameinfoT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetnameinfoT::belongs_to_ruby */
/* sha: 17057495592647ef2bdf91cf6a5421f96a0d7460c6659c8e77bac0bb54fd93c6 */
mrb_value
mrb_UV_UvGetnameinfoT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvGetnameinfoT.belongs_to_ruby only accepts objects of type UV::UvGetnameinfoT");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: UvGetnameinfoT::loop_reader */
/* sha: 6acc7e15231261c536765deda9cd28c702a80df6cf044cb17bc8c4050b3dd321 */
#if BIND_UvGetnameinfoT_loop_FIELD_READER
/* get_loop
 *
 * Return Type: uv_loop_t *
 */
mrb_value
mrb_UV_UvGetnameinfoT_get_loop(mrb_state* mrb, mrb_value self) {
  uv_getnameinfo_t * native_self = mruby_unbox_uv_getnameinfo_t(self);

  uv_loop_t * native_loop = native_self->loop;

  mrb_value loop = (native_loop == NULL ? mrb_nil_value() : mruby_box_uv_loop_t(mrb, native_loop));

  return loop;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetnameinfoT::loop_writer */
/* sha: 4fbe9662f30a788b3b89448ff17a1129ddf4c46ac94a4d5be333f5e59a317147 */
#if BIND_UvGetnameinfoT_loop_FIELD_WRITER
/* set_loop
 *
 * Parameters:
 * - value: uv_loop_t *
 */
mrb_value
mrb_UV_UvGetnameinfoT_set_loop(mrb_state* mrb, mrb_value self) {
  uv_getnameinfo_t * native_self = mruby_unbox_uv_getnameinfo_t(self);
  mrb_value loop;

  mrb_get_args(mrb, "o", &loop);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
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


void mrb_UV_UvGetnameinfoT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvGetnameinfoT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetnameinfoT::class_definition */
/* sha: 3b8a52ccaf35bd9a062da6d63fd7a30cd3556c87fdd0747faaa144bac4c8af0a */
  struct RClass* UvGetnameinfoT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvGetnameinfoT", UvReqT_class(mrb));
  MRB_SET_INSTANCE_TT(UvGetnameinfoT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetnameinfoT::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetnameinfoT::class_method_definitions */
/* sha: 27debc01f4a2d47d69422dd9997a887185838fdaa680b4ec43e54d1190332127 */
#if BIND_UvGetnameinfoT_INITIALIZE
  mrb_define_method(mrb, UvGetnameinfoT_class, "initialize", mrb_UV_UvGetnameinfoT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvGetnameinfoT_class, "disown", mrb_UV_UvGetnameinfoT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvGetnameinfoT_class, "belongs_to_ruby?", mrb_UV_UvGetnameinfoT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetnameinfoT::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetnameinfoT::attr_definitions */
/* sha: ff71f8e0b7332acbd72eca277923b9280015dc248df70ec169b382a87fa89564 */
  /*
   * Fields
   */
#if BIND_UvGetnameinfoT_loop_FIELD_READER
  mrb_define_method(mrb, UvGetnameinfoT_class, "loop", mrb_UV_UvGetnameinfoT_get_loop, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvGetnameinfoT_loop_FIELD_WRITER
  mrb_define_method(mrb, UvGetnameinfoT_class, "loop=", mrb_UV_UvGetnameinfoT_set_loop, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetnameinfoT::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetnameinfoT::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetnameinfoT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
