/*
 * uv_tty_t
 * Defined in file uv.h @ line 206
 */

#include "mruby_UV.h"

#if BIND_UvTtyT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvTtyT::initialize */
/* sha: 93b54cbd4ba84af5580932af953104fdcf9f8b6654fc94e7ee858c309aa29c55 */
#if BIND_UvTtyT_INITIALIZE
mrb_value
mrb_UV_UvTtyT_initialize(mrb_state* mrb, mrb_value self) {
  uv_tty_t* native_object = (uv_tty_t*)calloc(1, sizeof(uv_tty_t));
  mruby_giftwrap_uv_tty_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTtyT::initialize */
/* sha: 1a15b32dd9d3d5ac6cfe54064c5cc2d507bad788ccc59148d32b62b9a6619010 */
mrb_value
mrb_UV_UvTtyT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvTtyT.disown only accepts objects of type UV::UvTtyT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTtyT::belongs_to_ruby */
/* sha: 70c5d31a3911ddecf48115012a436cb72e689f475183fabb95b0f39d3cbfab86 */
mrb_value
mrb_UV_UvTtyT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvTtyT.belongs_to_ruby only accepts objects of type UV::UvTtyT");
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

/* MRUBY_BINDING: UvTtyT::UV_TTY_PRIVATE_FIELDS_reader */
/* sha: 972869c31f408efe3baff4fb4d38ce6a4b100745a007238c27cac59ea5149a75 */
#if BIND_UvTtyT_UV_TTY_PRIVATE_FIELDS_FIELD_READER
/* get_UV_TTY_PRIVATE_FIELDS
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvTtyT_get_UV_TTY_PRIVATE_FIELDS(mrb_state* mrb, mrb_value self) {
  uv_tty_t * native_self = mruby_unbox_uv_tty_t(self);

  int native_UV_TTY_PRIVATE_FIELDS = native_self->UV_TTY_PRIVATE_FIELDS;

  mrb_value UV_TTY_PRIVATE_FIELDS = mrb_fixnum_value(native_UV_TTY_PRIVATE_FIELDS);

  return UV_TTY_PRIVATE_FIELDS;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTtyT::UV_TTY_PRIVATE_FIELDS_writer */
/* sha: 0687d0b9baed91e9449083a08525681c91acad7d61e91551be323a225ffb2a16 */
#if BIND_UvTtyT_UV_TTY_PRIVATE_FIELDS_FIELD_WRITER
/* set_UV_TTY_PRIVATE_FIELDS
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvTtyT_set_UV_TTY_PRIVATE_FIELDS(mrb_state* mrb, mrb_value self) {
  uv_tty_t * native_self = mruby_unbox_uv_tty_t(self);
  mrb_int native_UV_TTY_PRIVATE_FIELDS;

  mrb_get_args(mrb, "i", &native_UV_TTY_PRIVATE_FIELDS);

  native_self->UV_TTY_PRIVATE_FIELDS = native_UV_TTY_PRIVATE_FIELDS;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvTtyT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvTtyT::class_definition */
/* sha: 6c5425f797837fa0383c33d3f0e058af46aa0551295cb9549519c6691face3e5 */
  struct RClass* UvTtyT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvTtyT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvTtyT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTtyT::class_method_definitions */
/* sha: b0712db2c299844ac945c8f6e737c04e061f278813ebe2577300d6648869e6fd */
#if BIND_UvTtyT_INITIALIZE
  mrb_define_method(mrb, UvTtyT_class, "initialize", mrb_UV_UvTtyT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvTtyT_class, "disown", mrb_UV_UvTtyT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvTtyT_class, "belongs_to_ruby?", mrb_UV_UvTtyT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTtyT::attr_definitions */
/* sha: e78d003132ca599e9e8eb964632f8e3044659ad300439c7eac5c19655bf922f3 */
  /*
   * Fields
   */
#if BIND_UvTtyT_UV_TTY_PRIVATE_FIELDS_FIELD_READER
  mrb_define_method(mrb, UvTtyT_class, "UV_TTY_PRIVATE_FIELDS", mrb_UV_UvTtyT_get_UV_TTY_PRIVATE_FIELDS, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvTtyT_UV_TTY_PRIVATE_FIELDS_FIELD_WRITER
  mrb_define_method(mrb, UvTtyT_class, "UV_TTY_PRIVATE_FIELDS=", mrb_UV_UvTtyT_set_UV_TTY_PRIVATE_FIELDS, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvTtyT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
