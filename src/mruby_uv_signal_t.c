/*
 * uv_signal_t
 * Defined in file uv.h @ line 216
 */

#include "mruby_UV.h"

#if BIND_UvSignalT_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvSignalT::initialize */
/* sha: 269263393ae737c6b3a143fbb1b013d6e2372d45ad48a38218cb3cf1f5fd08f6 */
#if BIND_UvSignalT_INITIALIZE
mrb_value
mrb_UV_UvSignalT_initialize(mrb_state* mrb, mrb_value self) {
  uv_signal_t* native_object = (uv_signal_t*)new_mruby_uv_handle(mrb, self, sizeof(uv_signal_t));
  mruby_gift_uv_signal_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvSignalT::disown */
/* sha: 2d7224072eafa0d1922bb2f44c5713d608174d412da1620951f22363917110eb */
mrb_value
mrb_UV_UvSignalT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvSignalT.disown only accepts objects of type UV::UvSignalT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvSignalT::belongs_to_ruby */
/* sha: 5f8cef32f7b4566b8e133297bb2856d862d7d02142f6f5321510bc967f2ef6f8 */
mrb_value
mrb_UV_UvSignalT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvSignalT.belongs_to_ruby only accepts objects of type UV::UvSignalT");
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

/* MRUBY_BINDING: UvSignalT::signal_cb_reader */
/* sha: f8e0b989adfea0ccfde6df873bcf5d25413522db37148a450fdd33c70f229f74 */
#if BIND_UvSignalT_signal_cb_FIELD_READER
/* get_signal_cb
 *
 * Return Type: uv_signal_cb
 */
mrb_value
mrb_UV_UvSignalT_get_signal_cb(mrb_state* mrb, mrb_value self) {
  uv_signal_t * native_self = mruby_unbox_uv_signal_t(self);

  uv_signal_cb native_signal_cb = native_self->signal_cb;

  mrb_value signal_cb = TODO_mruby_box_uv_signal_cb(mrb, native_signal_cb);

  return signal_cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvSignalT::signal_cb_writer */
/* sha: 88c822dcf68217f5b1b721f4d5a5a7616e4d4e437826c607aaad1676c668eacc */
#if BIND_UvSignalT_signal_cb_FIELD_WRITER
/* set_signal_cb
 *
 * Parameters:
 * - value: uv_signal_cb
 */
mrb_value
mrb_UV_UvSignalT_set_signal_cb(mrb_state* mrb, mrb_value self) {
  uv_signal_t * native_self = mruby_unbox_uv_signal_t(self);
  mrb_value signal_cb;

  mrb_get_args(mrb, "o", &signal_cb);

  /* type checking */
  TODO_type_check_uv_signal_cb(signal_cb);

  uv_signal_cb native_signal_cb = TODO_mruby_unbox_uv_signal_cb(signal_cb);

  native_self->signal_cb = native_signal_cb;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvSignalT::signum_reader */
/* sha: fde328ac3fe657b93bb708409ddf6e9357f5b6a55f57e14b539e7b89a3a5d30c */
#if BIND_UvSignalT_signum_FIELD_READER
/* get_signum
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvSignalT_get_signum(mrb_state* mrb, mrb_value self) {
  uv_signal_t * native_self = mruby_unbox_uv_signal_t(self);

  int native_signum = native_self->signum;

  mrb_value signum = mrb_fixnum_value(native_signum);

  return signum;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvSignalT::signum_writer */
/* sha: a41955a7273a9190e3ebfeb818799a1bb1f1cac2e9d3871860bb6ee56c76b5eb */
#if BIND_UvSignalT_signum_FIELD_WRITER
/* set_signum
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvSignalT_set_signum(mrb_state* mrb, mrb_value self) {
  uv_signal_t * native_self = mruby_unbox_uv_signal_t(self);
  mrb_int native_signum;

  mrb_get_args(mrb, "i", &native_signum);

  native_self->signum = native_signum;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvSignalT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvSignalT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvSignalT::class_definition */
/* sha: 28c4ac1ca45cbb61913dd1c958fba4a5c973394efe70c9bd98778879509002a8 */
  struct RClass* UvSignalT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvSignalT", UvHandleT_class(mrb));
  MRB_SET_INSTANCE_TT(UvSignalT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvSignalT::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvSignalT::class_method_definitions */
/* sha: 766369183c7049e2468c00bf35d7e9c94ba169d010ed7479e528211be9884a04 */
#if BIND_UvSignalT_INITIALIZE
  mrb_define_method(mrb, UvSignalT_class, "initialize", mrb_UV_UvSignalT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvSignalT_class, "disown", mrb_UV_UvSignalT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvSignalT_class, "belongs_to_ruby?", mrb_UV_UvSignalT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvSignalT::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvSignalT::attr_definitions */
/* sha: 734764a30ec58ca3fd0065f63f0c1feaf5213ed29bf98212694ebbdb9e653213 */
  /*
   * Fields
   */
#if BIND_UvSignalT_signal_cb_FIELD_READER
  mrb_define_method(mrb, UvSignalT_class, "signal_cb", mrb_UV_UvSignalT_get_signal_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvSignalT_signal_cb_FIELD_WRITER
  mrb_define_method(mrb, UvSignalT_class, "signal_cb=", mrb_UV_UvSignalT_set_signal_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvSignalT_signum_FIELD_READER
  mrb_define_method(mrb, UvSignalT_class, "signum", mrb_UV_UvSignalT_get_signum, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvSignalT_signum_FIELD_WRITER
  mrb_define_method(mrb, UvSignalT_class, "signum=", mrb_UV_UvSignalT_set_signum, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvSignalT::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvSignalT::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvSignalT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
