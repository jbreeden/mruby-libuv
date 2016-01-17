/*
 * uv_tty_t
 * Defined in file uv.h @ line 206
 */

#include "mruby_UV.h"

#if BIND_UvTtyT_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvTtyT::initialize */
/* sha: b3e7ea5f47ac3113e248a30a35e9073506469a36a0493a1e3e878780e4acfbc3 */
#if BIND_UvTtyT_INITIALIZE
mrb_value
mrb_UV_UvTtyT_initialize(mrb_state* mrb, mrb_value self) {
  uv_tty_t* native_object = (uv_tty_t*)new_mruby_uv_handle(mrb, self, sizeof(uv_tty_t));
  mruby_gift_uv_tty_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTtyT::disown */
/* sha: 1a15b32dd9d3d5ac6cfe54064c5cc2d507bad788ccc59148d32b62b9a6619010 */
mrb_value
mrb_UV_UvTtyT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvTtyT.disown only accepts objects of type UV::UvTtyT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTtyT::belongs_to_ruby */
/* sha: 70c5d31a3911ddecf48115012a436cb72e689f475183fabb95b0f39d3cbfab86 */
mrb_value
mrb_UV_UvTtyT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvTtyT.belongs_to_ruby only accepts objects of type UV::UvTtyT");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_UV_UvTtyT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvTtyT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTtyT::class_definition */
/* sha: 6c5425f797837fa0383c33d3f0e058af46aa0551295cb9549519c6691face3e5 */
  struct RClass* UvTtyT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvTtyT", UvHandleT_class(mrb));
  MRB_SET_INSTANCE_TT(UvTtyT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTtyT::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTtyT::class_method_definitions */
/* sha: b0712db2c299844ac945c8f6e737c04e061f278813ebe2577300d6648869e6fd */
#if BIND_UvTtyT_INITIALIZE
  mrb_define_method(mrb, UvTtyT_class, "initialize", mrb_UV_UvTtyT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvTtyT_class, "disown", mrb_UV_UvTtyT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvTtyT_class, "belongs_to_ruby?", mrb_UV_UvTtyT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTtyT::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTtyT::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTtyT::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTtyT::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTtyT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
