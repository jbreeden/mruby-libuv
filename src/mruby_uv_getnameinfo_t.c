/*
 * uv_getnameinfo_t
 * Defined in file uv.h @ line 221
 */

#include "mruby_UV.h"

#if BIND_UvGetnameinfoT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvGetnameinfoT::initialize */
/* sha: 653957d86f9e4a97041e128cbdc416296d800f7d02d4f2f25cecc26feb128e38 */
#if BIND_UvGetnameinfoT_INITIALIZE
mrb_value
mrb_UV_UvGetnameinfoT_initialize(mrb_state* mrb, mrb_value self) {
  uv_getnameinfo_t* native_object = (uv_getnameinfo_t*)calloc(1, sizeof(uv_getnameinfo_t));
  mruby_giftwrap_uv_getnameinfo_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetnameinfoT::initialize */
/* sha: 4e0192652a056f6a1953d90ca639a10e6a9f45aac0f04c0a9fde9e828c62dca5 */
mrb_value
mrb_UV_UvGetnameinfoT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvGetnameinfoT.disown only accepts objects of type UV::UvGetnameinfoT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetnameinfoT::belongs_to_ruby */
/* sha: 17057495592647ef2bdf91cf6a5421f96a0d7460c6659c8e77bac0bb54fd93c6 */
mrb_value
mrb_UV_UvGetnameinfoT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvGetnameinfoT.belongs_to_ruby only accepts objects of type UV::UvGetnameinfoT");
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

/* MRUBY_BINDING: UvGetnameinfoT::uv_loop_t_reader */
/* sha: dfe9bf1733d0cb1afc1f5d9421543dd277eadb72969e3ee58ade17305f5041b7 */
#if BIND_UvGetnameinfoT_uv_loop_t_FIELD_READER
/* get_uv_loop_t
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvGetnameinfoT_get_uv_loop_t(mrb_state* mrb, mrb_value self) {
  uv_getnameinfo_t * native_self = mruby_unbox_uv_getnameinfo_t(self);

  int native_uv_loop_t = native_self->uv_loop_t;

  mrb_value uv_loop_t = mrb_fixnum_value(native_uv_loop_t);

  return uv_loop_t;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetnameinfoT::uv_loop_t_writer */
/* sha: 621fda2f6bb94ad0c685351c90d3b66a323859eea45f3e3fc06e4ad7645ca6bd */
#if BIND_UvGetnameinfoT_uv_loop_t_FIELD_WRITER
/* set_uv_loop_t
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvGetnameinfoT_set_uv_loop_t(mrb_state* mrb, mrb_value self) {
  uv_getnameinfo_t * native_self = mruby_unbox_uv_getnameinfo_t(self);
  mrb_int native_uv_loop_t;

  mrb_get_args(mrb, "i", &native_uv_loop_t);

  native_self->uv_loop_t = native_uv_loop_t;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetnameinfoT::_reader */
/* sha: 97a7ca18117aea206847401d5ee1be9ce47eff932848ed806d9ed058d0a5c4fa */
#if BIND_UvGetnameinfoT__FIELD_READER
/* get_
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvGetnameinfoT_get_(mrb_state* mrb, mrb_value self) {
  uv_getnameinfo_t * native_self = mruby_unbox_uv_getnameinfo_t(self);

  int native_ = native_self->;

  mrb_value  = mrb_fixnum_value(native_);

  return ;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetnameinfoT::_writer */
/* sha: bd98e4ce2b4ec0bddfefe007074b6a6718635bf9ecb5f893da3f46b51995896f */
#if BIND_UvGetnameinfoT__FIELD_WRITER
/* set_
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvGetnameinfoT_set_(mrb_state* mrb, mrb_value self) {
  uv_getnameinfo_t * native_self = mruby_unbox_uv_getnameinfo_t(self);
  mrb_int native_;

  mrb_get_args(mrb, "i", &native_);

  native_self-> = native_;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvGetnameinfoT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvGetnameinfoT::class_definition */
/* sha: 3b8a52ccaf35bd9a062da6d63fd7a30cd3556c87fdd0747faaa144bac4c8af0a */
  struct RClass* UvGetnameinfoT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvGetnameinfoT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvGetnameinfoT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetnameinfoT::class_method_definitions */
/* sha: 27debc01f4a2d47d69422dd9997a887185838fdaa680b4ec43e54d1190332127 */
#if BIND_UvGetnameinfoT_INITIALIZE
  mrb_define_method(mrb, UvGetnameinfoT_class, "initialize", mrb_UV_UvGetnameinfoT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvGetnameinfoT_class, "disown", mrb_UV_UvGetnameinfoT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvGetnameinfoT_class, "belongs_to_ruby?", mrb_UV_UvGetnameinfoT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetnameinfoT::attr_definitions */
/* sha: 67444cfff197c8ea0bc44207bc267ad93d21a1ddae95aa432cefe150a6bd623d */
  /*
   * Fields
   */
#if BIND_UvGetnameinfoT_uv_loop_t_FIELD_READER
  mrb_define_method(mrb, UvGetnameinfoT_class, "uv_loop_t", mrb_UV_UvGetnameinfoT_get_uv_loop_t, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvGetnameinfoT_uv_loop_t_FIELD_WRITER
  mrb_define_method(mrb, UvGetnameinfoT_class, "uv_loop_t=", mrb_UV_UvGetnameinfoT_set_uv_loop_t, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvGetnameinfoT__FIELD_READER
  mrb_define_method(mrb, UvGetnameinfoT_class, "", mrb_UV_UvGetnameinfoT_get_, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvGetnameinfoT__FIELD_WRITER
  mrb_define_method(mrb, UvGetnameinfoT_class, "=", mrb_UV_UvGetnameinfoT_set_, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvGetnameinfoT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
