/*
 * uv_stream_t
 * Defined in file uv.h @ line 202
 */

#include "mruby_UV.h"

#if BIND_UvStreamT_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvStreamT::initialize */
/* sha: 43db76d80be36b911ac425e01b0683c28a19ef5e34da9c3aafa6abfdd4478bee */
#if BIND_UvStreamT_INITIALIZE
mrb_value
mrb_UV_UvStreamT_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Uncomment (and optionally replace) if an initializer is desired.
  uv_stream_t* native_object = (uv_stream_t*)calloc(1, sizeof(uv_stream_t));
  mruby_gift_uv_stream_t_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStreamT::disown */
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
/* MRUBY_BINDING: UvStreamT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStreamT::class_definition */
/* sha: 82ac0358505226f906224ace9b9865aedd5fd277dbd0da72e3bd21e7b520e495 */
  struct RClass* UvStreamT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvStreamT", UvHandleT_class(mrb));
  MRB_SET_INSTANCE_TT(UvStreamT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStreamT::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStreamT::class_method_definitions */
/* sha: 46851c48b550af59015fcca9ec6e02690a7e7246df4be0ae37fa52dbba0e1319 */
#if BIND_UvStreamT_INITIALIZE
  mrb_define_method(mrb, UvStreamT_class, "initialize", mrb_UV_UvStreamT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvStreamT_class, "disown", mrb_UV_UvStreamT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvStreamT_class, "belongs_to_ruby?", mrb_UV_UvStreamT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStreamT::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStreamT::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStreamT::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStreamT::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStreamT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
