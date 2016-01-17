/*
 * uv_timeval_t
 * Defined in file uv.h @ line 1025
 */

#include "mruby_UV.h"

#if BIND_UvTimevalT_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvTimevalT::initialize */
/* sha: a4fdecf396ca1cf0b5484425cd9410ed57787e5fdabc801d42877d20bb72f41c */
#if BIND_UvTimevalT_INITIALIZE
mrb_value
mrb_UV_UvTimevalT_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Uncomment (and optionally replace) if an initializer is desired.
  uv_timeval_t* native_object = (uv_timeval_t*)calloc(1, sizeof(uv_timeval_t));
  mruby_gift_uv_timeval_t_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimevalT::disown */
/* sha: 37f3f860b40dc95a6e75dc0f04f807c8ef7fea6b68a36fca19877fbb049b1f29 */
mrb_value
mrb_UV_UvTimevalT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvTimevalT.disown only accepts objects of type UV::UvTimevalT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimevalT::belongs_to_ruby */
/* sha: 5ac07304ade70fd5084c2c2ce1afff2b8152d486d2426813f0864ebfd6302355 */
mrb_value
mrb_UV_UvTimevalT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvTimevalT.belongs_to_ruby only accepts objects of type UV::UvTimevalT");
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

/* MRUBY_BINDING: UvTimevalT::tv_sec_reader */
/* sha: b3faf21c6323d6102c2bbf3a83495672b2dc924ffcfca58376ae96f1542c7c87 */
#if BIND_UvTimevalT_tv_sec_FIELD_READER
/* get_tv_sec
 *
 * Return Type: long
 */
mrb_value
mrb_UV_UvTimevalT_get_tv_sec(mrb_state* mrb, mrb_value self) {
  uv_timeval_t * native_self = mruby_unbox_uv_timeval_t(self);

  long native_tv_sec = native_self->tv_sec;

  mrb_value tv_sec = mrb_fixnum_value(native_tv_sec);

  return tv_sec;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimevalT::tv_sec_writer */
/* sha: 9772ffaf8167cf7298d4335e18c6b8802904a29c5580b9ea1caa56404d3c2478 */
#if BIND_UvTimevalT_tv_sec_FIELD_WRITER
/* set_tv_sec
 *
 * Parameters:
 * - value: long
 */
mrb_value
mrb_UV_UvTimevalT_set_tv_sec(mrb_state* mrb, mrb_value self) {
  uv_timeval_t * native_self = mruby_unbox_uv_timeval_t(self);
  mrb_int native_tv_sec;

  mrb_get_args(mrb, "i", &native_tv_sec);

  native_self->tv_sec = native_tv_sec;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimevalT::tv_usec_reader */
/* sha: 059bae3bd56c42d66fe550f69aaa54006fb4f309a00fee1a6889935bdd9dfbea */
#if BIND_UvTimevalT_tv_usec_FIELD_READER
/* get_tv_usec
 *
 * Return Type: long
 */
mrb_value
mrb_UV_UvTimevalT_get_tv_usec(mrb_state* mrb, mrb_value self) {
  uv_timeval_t * native_self = mruby_unbox_uv_timeval_t(self);

  long native_tv_usec = native_self->tv_usec;

  mrb_value tv_usec = mrb_fixnum_value(native_tv_usec);

  return tv_usec;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimevalT::tv_usec_writer */
/* sha: f9688fe1b3dba97a22f360d10a7223ae475aa143225c422b14ba22d81c3f5c23 */
#if BIND_UvTimevalT_tv_usec_FIELD_WRITER
/* set_tv_usec
 *
 * Parameters:
 * - value: long
 */
mrb_value
mrb_UV_UvTimevalT_set_tv_usec(mrb_state* mrb, mrb_value self) {
  uv_timeval_t * native_self = mruby_unbox_uv_timeval_t(self);
  mrb_int native_tv_usec;

  mrb_get_args(mrb, "i", &native_tv_usec);

  native_self->tv_usec = native_tv_usec;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvTimevalT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvTimevalT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimevalT::class_definition */
/* sha: 5eb6fac059070ed92ff172dc6a213dfee4e75d3e8435116afae0ec370c552d93 */
  struct RClass* UvTimevalT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvTimevalT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvTimevalT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimevalT::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimevalT::class_method_definitions */
/* sha: 10dbfb3add777508845192b84f91bd98534f9ad41c1a2e67126abb7a5d5aff79 */
#if BIND_UvTimevalT_INITIALIZE
  mrb_define_method(mrb, UvTimevalT_class, "initialize", mrb_UV_UvTimevalT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvTimevalT_class, "disown", mrb_UV_UvTimevalT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvTimevalT_class, "belongs_to_ruby?", mrb_UV_UvTimevalT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimevalT::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimevalT::attr_definitions */
/* sha: 8bd8885aadecaf6d48968baaa775a8b76dc36129e2da41fdcb4d023aa68bea2a */
  /*
   * Fields
   */
#if BIND_UvTimevalT_tv_sec_FIELD_READER
  mrb_define_method(mrb, UvTimevalT_class, "tv_sec", mrb_UV_UvTimevalT_get_tv_sec, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvTimevalT_tv_sec_FIELD_WRITER
  mrb_define_method(mrb, UvTimevalT_class, "tv_sec=", mrb_UV_UvTimevalT_set_tv_sec, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvTimevalT_tv_usec_FIELD_READER
  mrb_define_method(mrb, UvTimevalT_class, "tv_usec", mrb_UV_UvTimevalT_get_tv_usec, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvTimevalT_tv_usec_FIELD_WRITER
  mrb_define_method(mrb, UvTimevalT_class, "tv_usec=", mrb_UV_UvTimevalT_set_tv_usec, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimevalT::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimevalT::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTimevalT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
