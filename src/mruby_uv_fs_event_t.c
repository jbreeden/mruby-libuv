/*
 * uv_fs_event_t
 * Defined in file uv.h @ line 214
 */

#include "mruby_UV.h"

#if BIND_FSEvent_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FSEvent::initialize */
/* sha: 7b4327fa0731e5e6f6334d64e1718ff4a066210d8eb03628b41ed9cffb25477c */
#if BIND_FSEvent_INITIALIZE
mrb_value
mrb_UV_FSEvent_initialize(mrb_state* mrb, mrb_value self) {
  uv_fs_event_t* native_object = (uv_fs_event_t*)new_mruby_uv_handle(mrb, self, sizeof(uv_fs_event_t));
  mruby_gift_uv_fs_event_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: FSEvent::path_reader */
/* sha: de2578ca4347c836d1f9123b70f1c638e99cdb03be757d0b77a4473cc6a595f0 */
#if BIND_FSEvent_path_FIELD_READER
/* get_path
 *
 * Return Type: char *
 */
mrb_value
mrb_UV_FSEvent_get_path(mrb_state* mrb, mrb_value self) {
  uv_fs_event_t * native_self = mruby_unbox_uv_fs_event_t(self);

  char * native_path = native_self->path;

  mrb_value path = TODO_mruby_box_char_PTR(mrb, native_path);

  return path;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FSEvent::path_writer */
/* sha: 2c90fdc06fc744d009f89f87288d7f21f5cdd64dad29e7395ab6ebafc100b522 */
#if BIND_FSEvent_path_FIELD_WRITER
/* set_path
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_UV_FSEvent_set_path(mrb_state* mrb, mrb_value self) {
  uv_fs_event_t * native_self = mruby_unbox_uv_fs_event_t(self);
  mrb_value path;

  mrb_get_args(mrb, "o", &path);

  /* type checking */
  TODO_type_check_char_PTR(path);

  char * native_path = TODO_mruby_unbox_char_PTR(path);

  native_self->path = native_path;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_FSEvent_init(mrb_state* mrb) {
/* MRUBY_BINDING: FSEvent::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FSEvent::class_definition */
/* sha: 85c2e74bb919f593f88df02f4a68164e3c40649ac2d14d1811c97d66751224a8 */
  struct RClass* FSEvent_class = mrb_define_class_under(mrb, UV_module(mrb), "FSEvent", Handle_class(mrb));
  MRB_SET_INSTANCE_TT(FSEvent_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FSEvent::pre_class_method_definitions */
/* sha: user_defined */
mrb_const_set(mrb, mrb_obj_value(FSEvent_class), mrb_intern_lit(mrb, "RENAME"), mrb_fixnum_value(UV_RENAME));
mrb_const_set(mrb, mrb_obj_value(UV_module(mrb)), mrb_intern_lit(mrb, "RENAME"), mrb_fixnum_value(UV_RENAME));
mrb_const_set(mrb, mrb_obj_value(FSEvent_class), mrb_intern_lit(mrb, "CHANGE"), mrb_fixnum_value(UV_CHANGE));
mrb_const_set(mrb, mrb_obj_value(UV_module(mrb)), mrb_intern_lit(mrb, "CHANGE"), mrb_fixnum_value(UV_CHANGE));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FSEvent::class_method_definitions */
/* sha: 2c3d41df1c34500edb4c5bab4b6f71254df22fb3443380a4bf8cf76d6790bdf3 */
#if BIND_FSEvent_INITIALIZE
  mrb_define_method(mrb, FSEvent_class, "initialize", mrb_UV_FSEvent_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FSEvent::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FSEvent::attr_definitions */
/* sha: bf66dfa5580a9b880256100ab02d2cad79aabbe6422be92c4b9c73b01273c6d5 */
  /*
   * Fields
   */
#if BIND_FSEvent_path_FIELD_READER
  mrb_define_method(mrb, FSEvent_class, "path", mrb_UV_FSEvent_get_path, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_FSEvent_path_FIELD_WRITER
  mrb_define_method(mrb, FSEvent_class, "path=", mrb_UV_FSEvent_set_path, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FSEvent::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FSEvent::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FSEvent::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
