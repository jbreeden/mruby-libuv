/*
 * uv_poll_t
 * Defined in file uv.h @ line 207
 */

#include "mruby_UV.h"

#if BIND_UvPollT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvPollT::initialize */
/* sha: c525ff25a6977ce5261b11488e27c1cc523a25f7c50afdfcb8facf9dfa834671 */
#if BIND_UvPollT_INITIALIZE
mrb_value
mrb_UV_UvPollT_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Uncomment (and optionally replace) if an initializer is desired.
  uv_poll_t* native_object = (uv_poll_t*)calloc(1, sizeof(uv_poll_t));
  mruby_gift_uv_poll_t_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPollT::disown */
/* sha: 268d789972c2bf736e80f54d9867e8c14a61e0768e9cc363986332cbdb32a789 */
mrb_value
mrb_UV_UvPollT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvPollT.disown only accepts objects of type UV::UvPollT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPollT::belongs_to_ruby */
/* sha: 31897d7e87189cc1ca210abe72b90a047043bcd07874273db01dbecf20748914 */
mrb_value
mrb_UV_UvPollT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvPollT.belongs_to_ruby only accepts objects of type UV::UvPollT");
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

/* MRUBY_BINDING: UvPollT::poll_cb_reader */
/* sha: f4229b760f6e91e9397430c5a49f6a5acb5828594468b61664474dc62b65e8b4 */
#if BIND_UvPollT_poll_cb_FIELD_READER
/* get_poll_cb
 *
 * Return Type: uv_poll_cb
 */
mrb_value
mrb_UV_UvPollT_get_poll_cb(mrb_state* mrb, mrb_value self) {
  uv_poll_t * native_self = mruby_unbox_uv_poll_t(self);

  uv_poll_cb native_poll_cb = native_self->poll_cb;

  mrb_value poll_cb = TODO_mruby_box_uv_poll_cb(mrb, native_poll_cb);

  return poll_cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPollT::poll_cb_writer */
/* sha: 4bbcd0d948f8358579de8530db6d7e0433fa095c90fbc042ac72b5b809084b18 */
#if BIND_UvPollT_poll_cb_FIELD_WRITER
/* set_poll_cb
 *
 * Parameters:
 * - value: uv_poll_cb
 */
mrb_value
mrb_UV_UvPollT_set_poll_cb(mrb_state* mrb, mrb_value self) {
  uv_poll_t * native_self = mruby_unbox_uv_poll_t(self);
  mrb_value poll_cb;

  mrb_get_args(mrb, "o", &poll_cb);

  /* type checking */
  TODO_type_check_uv_poll_cb(poll_cb);

  uv_poll_cb native_poll_cb = TODO_mruby_unbox_uv_poll_cb(poll_cb);

  native_self->poll_cb = native_poll_cb;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvPollT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvPollT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPollT::class_definition */
/* sha: ebd056baea7c0d52e277c6874d8c987923e7fbae4c13dc224698aa5a58339c00 */
  struct RClass* UvPollT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvPollT", UvHandleT_class(mrb));
  MRB_SET_INSTANCE_TT(UvPollT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPollT::custom_pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPollT::class_method_definitions */
/* sha: 7cc6996f119ebd7d1ff64e8a08fc27991814be80891e22f52c993944b78011b2 */
#if BIND_UvPollT_INITIALIZE
  mrb_define_method(mrb, UvPollT_class, "initialize", mrb_UV_UvPollT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvPollT_class, "disown", mrb_UV_UvPollT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvPollT_class, "belongs_to_ruby?", mrb_UV_UvPollT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPollT::custom_pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPollT::attr_definitions */
/* sha: aae1c144c21e9b67787f623ed6625d147f2ce0914444ea1b7b8ed2683f5204f6 */
  /*
   * Fields
   */
#if BIND_UvPollT_poll_cb_FIELD_READER
  mrb_define_method(mrb, UvPollT_class, "poll_cb", mrb_UV_UvPollT_get_poll_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvPollT_poll_cb_FIELD_WRITER
  mrb_define_method(mrb, UvPollT_class, "poll_cb=", mrb_UV_UvPollT_set_poll_cb, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPollT::custom_pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPollT::instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPollT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: custom_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
