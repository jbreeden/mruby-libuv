/*
 * uv_stream_t
 * Defined in file uv.h @ line 202
 */

#include "mruby_UV.h"

#if BIND_UvStreamT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvStreamT::initialize */
/* sha: 7eb185ef8c83ab1af4add9bcd6b72fb53f94dd6269447897fa127816e366e6e6 */
#if BIND_UvStreamT_INITIALIZE
mrb_value
mrb_UV_UvStreamT_initialize(mrb_state* mrb, mrb_value self) {
  uv_stream_t* native_object = (uv_stream_t*)calloc(1, sizeof(uv_stream_t));
  mruby_giftwrap_uv_stream_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStreamT::initialize */
/* sha: 172d2348b2367bd5ceede49059126eb6ae1fd809e581c59f10ca5651ef784ced */
mrb_value
mrb_UV_UvStreamT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvStreamT.disown only accepts objects of type UV::UvStreamT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStreamT::belongs_to_ruby */
/* sha: 878d2a7b516a21f3be72a487ccd68879d499eb06c8dab572d9d69cda96995353 */
mrb_value
mrb_UV_UvStreamT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvStreamT.belongs_to_ruby only accepts objects of type UV::UvStreamT");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_UV_UvStreamT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvStreamT::class_definition */
/* sha: 82ac0358505226f906224ace9b9865aedd5fd277dbd0da72e3bd21e7b520e495 */
  struct RClass* UvStreamT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvStreamT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvStreamT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStreamT::class_method_definitions */
/* sha: 46851c48b550af59015fcca9ec6e02690a7e7246df4be0ae37fa52dbba0e1319 */
#if BIND_UvStreamT_INITIALIZE
  mrb_define_method(mrb, UvStreamT_class, "initialize", mrb_UV_UvStreamT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvStreamT_class, "disown", mrb_UV_UvStreamT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvStreamT_class, "belongs_to_ruby?", mrb_UV_UvStreamT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStreamT::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStreamT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
