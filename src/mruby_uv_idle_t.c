/*
 * uv_idle_t
 * Defined in file uv.h @ line 211
 */

#include "mruby_UV.h"

#if BIND_UvIdleT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvIdleT::initialize */
/* sha: 8100843cef8d87e8d55962a80a46967f1bc5d1fb1cadfa26f44971234876eb73 */
#if BIND_UvIdleT_INITIALIZE
mrb_value
mrb_UV_UvIdleT_initialize(mrb_state* mrb, mrb_value self) {
  uv_idle_t* native_object = (uv_idle_t*)calloc(1, sizeof(uv_idle_t));
  mruby_giftwrap_uv_idle_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvIdleT::initialize */
/* sha: a6d01803f5a3866f80362ff305dfe3d524d9e77e06573cc39cf25f1216e1354b */
mrb_value
mrb_UV_UvIdleT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvIdleT.disown only accepts objects of type UV::UvIdleT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvIdleT::belongs_to_ruby */
/* sha: 1f35e38183c5c6e124d1da580c0c307e610ef69d671cddcf6f2aa1660e219c83 */
mrb_value
mrb_UV_UvIdleT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvIdleT.belongs_to_ruby only accepts objects of type UV::UvIdleT");
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

/* MRUBY_BINDING: UvIdleT::UV_IDLE_PRIVATE_FIELDS_reader */
/* sha: 84c517563bfb1bf443aa67cb411b0b5b59299e42ba79c63890b1f2d6a30f26e6 */
#if BIND_UvIdleT_UV_IDLE_PRIVATE_FIELDS_FIELD_READER
/* get_UV_IDLE_PRIVATE_FIELDS
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvIdleT_get_UV_IDLE_PRIVATE_FIELDS(mrb_state* mrb, mrb_value self) {
  uv_idle_t * native_self = mruby_unbox_uv_idle_t(self);

  int native_UV_IDLE_PRIVATE_FIELDS = native_self->UV_IDLE_PRIVATE_FIELDS;

  mrb_value UV_IDLE_PRIVATE_FIELDS = mrb_fixnum_value(native_UV_IDLE_PRIVATE_FIELDS);

  return UV_IDLE_PRIVATE_FIELDS;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvIdleT::UV_IDLE_PRIVATE_FIELDS_writer */
/* sha: af3bf012934e83103b95b9d7f8ebe8424f2258d41af00fcc90e7273a28a08d82 */
#if BIND_UvIdleT_UV_IDLE_PRIVATE_FIELDS_FIELD_WRITER
/* set_UV_IDLE_PRIVATE_FIELDS
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvIdleT_set_UV_IDLE_PRIVATE_FIELDS(mrb_state* mrb, mrb_value self) {
  uv_idle_t * native_self = mruby_unbox_uv_idle_t(self);
  mrb_int native_UV_IDLE_PRIVATE_FIELDS;

  mrb_get_args(mrb, "i", &native_UV_IDLE_PRIVATE_FIELDS);

  native_self->UV_IDLE_PRIVATE_FIELDS = native_UV_IDLE_PRIVATE_FIELDS;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvIdleT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvIdleT::class_definition */
/* sha: dd270b63d538abc8f87beed5bf09abf9bc198eed5da627ad6b34dc9b630ae35a */
  struct RClass* UvIdleT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvIdleT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvIdleT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvIdleT::class_method_definitions */
/* sha: dadf36377c6ec218ae6b9a26eecc763c4f14b9d8daafc5db1d24771101291c3a */
#if BIND_UvIdleT_INITIALIZE
  mrb_define_method(mrb, UvIdleT_class, "initialize", mrb_UV_UvIdleT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvIdleT_class, "disown", mrb_UV_UvIdleT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvIdleT_class, "belongs_to_ruby?", mrb_UV_UvIdleT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvIdleT::attr_definitions */
/* sha: 921c7778f6d8af5d7955239e56e8212578195a8f2211fd325007433db6439c0a */
  /*
   * Fields
   */
#if BIND_UvIdleT_UV_IDLE_PRIVATE_FIELDS_FIELD_READER
  mrb_define_method(mrb, UvIdleT_class, "UV_IDLE_PRIVATE_FIELDS", mrb_UV_UvIdleT_get_UV_IDLE_PRIVATE_FIELDS, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvIdleT_UV_IDLE_PRIVATE_FIELDS_FIELD_WRITER
  mrb_define_method(mrb, UvIdleT_class, "UV_IDLE_PRIVATE_FIELDS=", mrb_UV_UvIdleT_set_UV_IDLE_PRIVATE_FIELDS, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvIdleT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
