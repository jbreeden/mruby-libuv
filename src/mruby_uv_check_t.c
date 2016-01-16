/*
 * uv_check_t
 * Defined in file uv.h @ line 210
 */

#include "mruby_UV.h"

#if BIND_UvCheckT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvCheckT::initialize */
/* sha: bfb3edeb5b865a13af4d73c6a67e708dd532a89d009f365419160685dcaeb8a6 */
#if BIND_UvCheckT_INITIALIZE
mrb_value
mrb_UV_UvCheckT_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Uncomment (and optionally replace) if an initializer is desired.
  uv_check_t* native_object = (uv_check_t*)calloc(1, sizeof(uv_check_t));
  mruby_gift_uv_check_t_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCheckT::disown */
/* sha: 6c17a09b19dc23375af3b42b33ae16ca04b388b8b6e7c617b140f3b3ffe2a4ff */
mrb_value
mrb_UV_UvCheckT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvCheckT.disown only accepts objects of type UV::UvCheckT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCheckT::belongs_to_ruby */
/* sha: 3992e730e62ce43506218712f58da7c84b593da5ea85edbf694f387a4dab467e */
mrb_value
mrb_UV_UvCheckT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvCheckT.belongs_to_ruby only accepts objects of type UV::UvCheckT");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_UV_UvCheckT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvCheckT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCheckT::class_definition */
/* sha: 0b7be8e8cbba3b1d610d7900d584dddd21a7d3f095a06e3d5ec49bb40dcc2a24 */
  struct RClass* UvCheckT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvCheckT", UvHandleT_class(mrb));
  MRB_SET_INSTANCE_TT(UvCheckT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCheckT::custom_pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCheckT::class_method_definitions */
/* sha: c7012a721a72eb073367d0ecbc02edf51898ddd65d5b4160840bb0b53546ce64 */
#if BIND_UvCheckT_INITIALIZE
  mrb_define_method(mrb, UvCheckT_class, "initialize", mrb_UV_UvCheckT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvCheckT_class, "disown", mrb_UV_UvCheckT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvCheckT_class, "belongs_to_ruby?", mrb_UV_UvCheckT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCheckT::custom_pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCheckT::attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCheckT::custom_pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCheckT::instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCheckT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: custom_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
