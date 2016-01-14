/*
 * uv_check_t
 * Defined in file uv.h @ line 210
 */

#include "mruby_UV.h"

#if BIND_UvCheckT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvCheckT::initialize */
/* sha: 1eb36d9f217a60237100a9d77c474989032f9af57b4a09db06389a572115d0c1 */
#if BIND_UvCheckT_INITIALIZE
mrb_value
mrb_UV_UvCheckT_initialize(mrb_state* mrb, mrb_value self) {
  uv_check_t* native_object = (uv_check_t*)calloc(1, sizeof(uv_check_t));
  mruby_giftwrap_uv_check_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCheckT::initialize */
/* sha: 6c17a09b19dc23375af3b42b33ae16ca04b388b8b6e7c617b140f3b3ffe2a4ff */
mrb_value
mrb_UV_UvCheckT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvCheckT.disown only accepts objects of type UV::UvCheckT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCheckT::belongs_to_ruby */
/* sha: 3992e730e62ce43506218712f58da7c84b593da5ea85edbf694f387a4dab467e */
mrb_value
mrb_UV_UvCheckT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvCheckT.belongs_to_ruby only accepts objects of type UV::UvCheckT");
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

/* MRUBY_BINDING: UvCheckT::UV_CHECK_PRIVATE_FIELDS_reader */
/* sha: 49e5b71a5927567f94ad8b603c765ddc506a151598f0d6d2b356a6fa6a9ecacb */
#if BIND_UvCheckT_UV_CHECK_PRIVATE_FIELDS_FIELD_READER
/* get_UV_CHECK_PRIVATE_FIELDS
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvCheckT_get_UV_CHECK_PRIVATE_FIELDS(mrb_state* mrb, mrb_value self) {
  uv_check_t * native_self = mruby_unbox_uv_check_t(self);

  int native_UV_CHECK_PRIVATE_FIELDS = native_self->UV_CHECK_PRIVATE_FIELDS;

  mrb_value UV_CHECK_PRIVATE_FIELDS = mrb_fixnum_value(native_UV_CHECK_PRIVATE_FIELDS);

  return UV_CHECK_PRIVATE_FIELDS;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCheckT::UV_CHECK_PRIVATE_FIELDS_writer */
/* sha: 32f2405327fe05037b550cb11884db1355d8146c2d0472da319a1b9e583a5354 */
#if BIND_UvCheckT_UV_CHECK_PRIVATE_FIELDS_FIELD_WRITER
/* set_UV_CHECK_PRIVATE_FIELDS
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvCheckT_set_UV_CHECK_PRIVATE_FIELDS(mrb_state* mrb, mrb_value self) {
  uv_check_t * native_self = mruby_unbox_uv_check_t(self);
  mrb_int native_UV_CHECK_PRIVATE_FIELDS;

  mrb_get_args(mrb, "i", &native_UV_CHECK_PRIVATE_FIELDS);

  native_self->UV_CHECK_PRIVATE_FIELDS = native_UV_CHECK_PRIVATE_FIELDS;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvCheckT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvCheckT::class_definition */
/* sha: 0b7be8e8cbba3b1d610d7900d584dddd21a7d3f095a06e3d5ec49bb40dcc2a24 */
  struct RClass* UvCheckT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvCheckT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvCheckT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCheckT::class_method_definitions */
/* sha: c7012a721a72eb073367d0ecbc02edf51898ddd65d5b4160840bb0b53546ce64 */
#if BIND_UvCheckT_INITIALIZE
  mrb_define_method(mrb, UvCheckT_class, "initialize", mrb_UV_UvCheckT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvCheckT_class, "disown", mrb_UV_UvCheckT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvCheckT_class, "belongs_to_ruby?", mrb_UV_UvCheckT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCheckT::attr_definitions */
/* sha: c1c0f697d325075cef89cb91fddd42b099fd6405c8e768a3cb10b9d84786c826 */
  /*
   * Fields
   */
#if BIND_UvCheckT_UV_CHECK_PRIVATE_FIELDS_FIELD_READER
  mrb_define_method(mrb, UvCheckT_class, "UV_CHECK_PRIVATE_FIELDS", mrb_UV_UvCheckT_get_UV_CHECK_PRIVATE_FIELDS, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvCheckT_UV_CHECK_PRIVATE_FIELDS_FIELD_WRITER
  mrb_define_method(mrb, UvCheckT_class, "UV_CHECK_PRIVATE_FIELDS=", mrb_UV_UvCheckT_set_UV_CHECK_PRIVATE_FIELDS, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCheckT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
