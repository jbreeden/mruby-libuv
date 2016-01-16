/*
 * uv_timespec_t
 * Defined in file uv.h @ line 320
 */

#include "mruby_UV.h"

#if BIND_UvTimespecT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvTimespecT::initialize */
/* sha: a7538dd92d2a1ebacfb622dd5495d1dd2b4e09f42d7e149dc4b67f09da232a50 */
#if BIND_UvTimespecT_INITIALIZE
mrb_value
mrb_UV_UvTimespecT_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Uncomment (and optionally replace) if an initializer is desired.
  uv_timespec_t* native_object = (uv_timespec_t*)calloc(1, sizeof(uv_timespec_t));
  mruby_gift_uv_timespec_t_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimespecT::disown */
/* sha: fa37aaf9dd0482eb57a7b3d4e18c56f1012e73976ac1ea328f4576c94a8ce47d */
mrb_value
mrb_UV_UvTimespecT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvTimespecT.disown only accepts objects of type UV::UvTimespecT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimespecT::belongs_to_ruby */
/* sha: c0f04a226560b3bb49d921af74d430a799d1efa3b5142054e206b0f6ca3941ab */
mrb_value
mrb_UV_UvTimespecT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvTimespecT.belongs_to_ruby only accepts objects of type UV::UvTimespecT");
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

/* MRUBY_BINDING: UvTimespecT::tv_sec_reader */
/* sha: 9e97e4f7343b34921d760853f4c24832571d1c173c872dee842799ca7b27e3d2 */
#if BIND_UvTimespecT_tv_sec_FIELD_READER
/* get_tv_sec
 *
 * Return Type: long
 */
mrb_value
mrb_UV_UvTimespecT_get_tv_sec(mrb_state* mrb, mrb_value self) {
  uv_timespec_t * native_self = mruby_unbox_uv_timespec_t(self);

  long native_tv_sec = native_self->tv_sec;

  mrb_value tv_sec = mrb_fixnum_value(native_tv_sec);

  return tv_sec;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimespecT::tv_sec_writer */
/* sha: 74de5dff33530609621b76c9961a369d468dbcb7dad494c59ad896e9723051cc */
#if BIND_UvTimespecT_tv_sec_FIELD_WRITER
/* set_tv_sec
 *
 * Parameters:
 * - value: long
 */
mrb_value
mrb_UV_UvTimespecT_set_tv_sec(mrb_state* mrb, mrb_value self) {
  uv_timespec_t * native_self = mruby_unbox_uv_timespec_t(self);
  mrb_int native_tv_sec;

  mrb_get_args(mrb, "i", &native_tv_sec);

  native_self->tv_sec = native_tv_sec;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimespecT::tv_nsec_reader */
/* sha: 1142dd353d49c4823f48d8fe50f6b65d63a0c08cba50c7d4f10e706f5c3ccb8c */
#if BIND_UvTimespecT_tv_nsec_FIELD_READER
/* get_tv_nsec
 *
 * Return Type: long
 */
mrb_value
mrb_UV_UvTimespecT_get_tv_nsec(mrb_state* mrb, mrb_value self) {
  uv_timespec_t * native_self = mruby_unbox_uv_timespec_t(self);

  long native_tv_nsec = native_self->tv_nsec;

  mrb_value tv_nsec = mrb_fixnum_value(native_tv_nsec);

  return tv_nsec;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimespecT::tv_nsec_writer */
/* sha: 7b8ebb355c3d62b7db69056ec87e9dcf463d2644827439f301ef3bf63c5f1c7b */
#if BIND_UvTimespecT_tv_nsec_FIELD_WRITER
/* set_tv_nsec
 *
 * Parameters:
 * - value: long
 */
mrb_value
mrb_UV_UvTimespecT_set_tv_nsec(mrb_state* mrb, mrb_value self) {
  uv_timespec_t * native_self = mruby_unbox_uv_timespec_t(self);
  mrb_int native_tv_nsec;

  mrb_get_args(mrb, "i", &native_tv_nsec);

  native_self->tv_nsec = native_tv_nsec;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvTimespecT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvTimespecT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimespecT::class_definition */
/* sha: 8685c7a8d7c37d95bda797428afd0179006f32e1b47455ab845dfc9097d8ba02 */
  struct RClass* UvTimespecT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvTimespecT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvTimespecT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimespecT::custom_pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimespecT::class_method_definitions */
/* sha: 46dc21329b90fde6ab1942cad1d8f8d957783dfbcb32d79eeebc47bc6f38d919 */
#if BIND_UvTimespecT_INITIALIZE
  mrb_define_method(mrb, UvTimespecT_class, "initialize", mrb_UV_UvTimespecT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvTimespecT_class, "disown", mrb_UV_UvTimespecT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvTimespecT_class, "belongs_to_ruby?", mrb_UV_UvTimespecT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimespecT::custom_pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimespecT::attr_definitions */
/* sha: 37cabe202fe63e86475059f7cf230829d5e0362db82144b6ef1ff31cd6f40ab9 */
  /*
   * Fields
   */
#if BIND_UvTimespecT_tv_sec_FIELD_READER
  mrb_define_method(mrb, UvTimespecT_class, "tv_sec", mrb_UV_UvTimespecT_get_tv_sec, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvTimespecT_tv_sec_FIELD_WRITER
  mrb_define_method(mrb, UvTimespecT_class, "tv_sec=", mrb_UV_UvTimespecT_set_tv_sec, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvTimespecT_tv_nsec_FIELD_READER
  mrb_define_method(mrb, UvTimespecT_class, "tv_nsec", mrb_UV_UvTimespecT_get_tv_nsec, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvTimespecT_tv_nsec_FIELD_WRITER
  mrb_define_method(mrb, UvTimespecT_class, "tv_nsec=", mrb_UV_UvTimespecT_set_tv_nsec, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimespecT::custom_pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimespecT::instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimespecT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: custom_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
