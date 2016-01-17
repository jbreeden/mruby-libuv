/*
 * uv_fs_event_t
 * Defined in file uv.h @ line 214
 */

#include "mruby_UV.h"

#if BIND_UvFsEventT_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvFsEventT::initialize */
/* sha: e1ab360d602334b31f02614a4ef66931df19c9b890b585a1e2c253f5adc12dca */
#if BIND_UvFsEventT_INITIALIZE
mrb_value
mrb_UV_UvFsEventT_initialize(mrb_state* mrb, mrb_value self) {
  uv_fs_event_t* native_object = (uv_fs_event_t*)new_mruby_uv_handle(mrb, self, sizeof(uv_fs_event_t));
  mruby_gift_uv_fs_event_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsEventT::disown */
/* sha: d0948d424fa99aee9c3f633df6035c9798febdb11303771d87dd3df2b28e693c */
mrb_value
mrb_UV_UvFsEventT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvFsEventT.disown only accepts objects of type UV::UvFsEventT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsEventT::belongs_to_ruby */
/* sha: 2b71bd45f34e8683b0e6fc6c170fe26f113036621fe9d74dad77ca99623d6501 */
mrb_value
mrb_UV_UvFsEventT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvFsEventT.belongs_to_ruby only accepts objects of type UV::UvFsEventT");
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

/* MRUBY_BINDING: UvFsEventT::path_reader */
/* sha: 51e46e65854670cf5b3c842cb153d97f4f92e61e356037c8751e39d530adcbc5 */
#if BIND_UvFsEventT_path_FIELD_READER
/* get_path
 *
 * Return Type: char *
 */
mrb_value
mrb_UV_UvFsEventT_get_path(mrb_state* mrb, mrb_value self) {
  uv_fs_event_t * native_self = mruby_unbox_uv_fs_event_t(self);

  char * native_path = native_self->path;

  mrb_value path = TODO_mruby_box_char_PTR(mrb, native_path);

  return path;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsEventT::path_writer */
/* sha: 3c7a736443257f00c5ebe27b982135f75f3eb014f313cb1b5a5f4ddb216f731b */
#if BIND_UvFsEventT_path_FIELD_WRITER
/* set_path
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_UV_UvFsEventT_set_path(mrb_state* mrb, mrb_value self) {
  uv_fs_event_t * native_self = mruby_unbox_uv_fs_event_t(self);
  mrb_value path;

  mrb_get_args(mrb, "o", &path);

  /* type checking */
  TODO_type_check_char_PTR(path);

  char * native_path = TODO_mruby_unbox_char_PTR(path);

  native_self->path = native_path;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvFsEventT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvFsEventT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsEventT::class_definition */
/* sha: bc622e1c5d85a450060e5c8613ecec295ab9d055abc36b8e601fdba4bed626e8 */
  struct RClass* UvFsEventT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvFsEventT", UvHandleT_class(mrb));
  MRB_SET_INSTANCE_TT(UvFsEventT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsEventT::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsEventT::class_method_definitions */
/* sha: 706d72b073720447b1f2bd9786e0af837fcab51445cbcc08b72dbae4141051c3 */
#if BIND_UvFsEventT_INITIALIZE
  mrb_define_method(mrb, UvFsEventT_class, "initialize", mrb_UV_UvFsEventT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvFsEventT_class, "disown", mrb_UV_UvFsEventT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvFsEventT_class, "belongs_to_ruby?", mrb_UV_UvFsEventT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsEventT::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsEventT::attr_definitions */
/* sha: 803fb5c08e9844ca5433ca6bf6bdc04dcf33d70f7228d8fc88210539c306fa4a */
  /*
   * Fields
   */
#if BIND_UvFsEventT_path_FIELD_READER
  mrb_define_method(mrb, UvFsEventT_class, "path", mrb_UV_UvFsEventT_get_path, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvFsEventT_path_FIELD_WRITER
  mrb_define_method(mrb, UvFsEventT_class, "path=", mrb_UV_UvFsEventT_set_path, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsEventT::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsEventT::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsEventT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
