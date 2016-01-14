/*
 * uv_async_t
 * Defined in file uv.h @ line 212
 */

#include "mruby_UV.h"

#if BIND_UvAsyncT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvAsyncT::initialize */
/* sha: 3e2bb5bd847e15d6596ef36a8ea7b88ecbf1513cdb2c1c02c1dc598ce4c150cd */
#if BIND_UvAsyncT_INITIALIZE
mrb_value
mrb_UV_UvAsyncT_initialize(mrb_state* mrb, mrb_value self) {
  uv_async_t* native_object = (uv_async_t*)calloc(1, sizeof(uv_async_t));
  mruby_giftwrap_uv_async_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvAsyncT::initialize */
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
/* MRUBY_BINDING: UvAsyncT::class_definition */
/* sha: d0c8267d8cfda64bab2387bf077bfdb6ca9d8bc5876c84e1d391a36d937d0628 */
  struct RClass* UvAsyncT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvAsyncT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvAsyncT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvAsyncT::class_method_definitions */
/* sha: 83843c0add30557d71b14fb7c319a255113ae0192af112b8c753e09408aa0b83 */
#if BIND_UvAsyncT_INITIALIZE
  mrb_define_method(mrb, UvAsyncT_class, "initialize", mrb_UV_UvAsyncT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvAsyncT_class, "disown", mrb_UV_UvAsyncT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvAsyncT_class, "belongs_to_ruby?", mrb_UV_UvAsyncT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvAsyncT::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvAsyncT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
