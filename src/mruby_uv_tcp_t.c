/*
 * uv_tcp_t
 * Defined in file uv.h @ line 203
 */

#include "mruby_UV.h"

#if BIND_UvTcpT_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvTcpT::initialize */
/* sha: af1b44df68a0ade7f726982b0772dfe95ae56fa69431d1db6577df79cc6f8449 */
#if BIND_UvTcpT_INITIALIZE
mrb_value
mrb_UV_UvTcpT_initialize(mrb_state* mrb, mrb_value self) {
  uv_tcp_t* native_object = (uv_tcp_t*)new_mruby_uv_handle(mrb, self, sizeof(uv_tcp_t));
  mruby_gift_uv_tcp_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTcpT::disown */
/* sha: 0ffa0c5784d52ce38cbb14eabddb386a09f556877553ff0d3fd86d4b6e6bb189 */
mrb_value
mrb_UV_UvTcpT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvTcpT.disown only accepts objects of type UV::UvTcpT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTcpT::belongs_to_ruby */
/* sha: 0c576e148cfebd9e20709edcae9a4a554d048ced9f09bc13cc496f87e95d2155 */
mrb_value
mrb_UV_UvTcpT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvTcpT.belongs_to_ruby only accepts objects of type UV::UvTcpT");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_UV_UvTcpT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvTcpT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTcpT::class_definition */
/* sha: b46c27f8334d32c02c51944766b708b6136e8aedee5861507611a677e5f425d2 */
  struct RClass* UvTcpT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvTcpT", UvHandleT_class(mrb));
  MRB_SET_INSTANCE_TT(UvTcpT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTcpT::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTcpT::class_method_definitions */
/* sha: 9f05e1d3d0a195ed5f3228bf23f45ef946d72db459562e37ef3c39f728397180 */
#if BIND_UvTcpT_INITIALIZE
  mrb_define_method(mrb, UvTcpT_class, "initialize", mrb_UV_UvTcpT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvTcpT_class, "disown", mrb_UV_UvTcpT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvTcpT_class, "belongs_to_ruby?", mrb_UV_UvTcpT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTcpT::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTcpT::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTcpT::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTcpT::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTcpT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
