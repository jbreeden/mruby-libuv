/*
 * uv_async_t
 * Defined in file uv.h @ line 212
 */

#include "mruby_UV.h"

#if BIND_UvAsyncT_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvAsyncT::initialize */
/* sha: 063b32fe8c98f2415dfa52ac524228464fabf85c56e0becf3423f3db7e2ebb4f */
#if BIND_UvAsyncT_INITIALIZE
mrb_value
mrb_UV_UvAsyncT_initialize(mrb_state* mrb, mrb_value self) {
  uv_async_t* native_object = (uv_async_t*)new_mruby_uv_handle(mrb, self, sizeof(uv_async_t));
  mruby_gift_uv_async_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvAsyncT::disown */
/* sha: c5bd646063f9c85dc3f146413236c6fffb6d9942290a42c00380c2dc92f476ec */
mrb_value
mrb_UV_UvAsyncT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvAsyncT.disown only accepts objects of type UV::UvAsyncT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvAsyncT::belongs_to_ruby */
/* sha: 5278c9bdd80a745611ddeaebd04ecba88de6ede8be445a7037c0f21e391c3545 */
mrb_value
mrb_UV_UvAsyncT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvAsyncT.belongs_to_ruby only accepts objects of type UV::UvAsyncT");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_UV_UvAsyncT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvAsyncT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvAsyncT::class_definition */
/* sha: d0c8267d8cfda64bab2387bf077bfdb6ca9d8bc5876c84e1d391a36d937d0628 */
  struct RClass* UvAsyncT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvAsyncT", UvHandleT_class(mrb));
  MRB_SET_INSTANCE_TT(UvAsyncT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvAsyncT::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvAsyncT::class_method_definitions */
/* sha: 83843c0add30557d71b14fb7c319a255113ae0192af112b8c753e09408aa0b83 */
#if BIND_UvAsyncT_INITIALIZE
  mrb_define_method(mrb, UvAsyncT_class, "initialize", mrb_UV_UvAsyncT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvAsyncT_class, "disown", mrb_UV_UvAsyncT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvAsyncT_class, "belongs_to_ruby?", mrb_UV_UvAsyncT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvAsyncT::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvAsyncT::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvAsyncT::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvAsyncT::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvAsyncT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
