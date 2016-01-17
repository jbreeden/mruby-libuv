/*
 * uv_write_t
 * Defined in file uv.h @ line 223
 */

#include "mruby_UV.h"

#if BIND_UvWriteT_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvWriteT::initialize */
/* sha: 724af6fc5e3049f316140516645ab9e41e1794653692ec6a748ade56344b967a */
#if BIND_UvWriteT_INITIALIZE
mrb_value
mrb_UV_UvWriteT_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Uncomment (and optionally replace) if an initializer is desired.
  uv_write_t* native_object = (uv_write_t*)calloc(1, sizeof(uv_write_t));
  mruby_gift_uv_write_t_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::disown */
/* sha: 17e2173dfc6cecadaa68f77b3037bdc1b25b84dfc2dc35a04d95a431d01a5a67 */
mrb_value
mrb_UV_UvWriteT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvWriteT.disown only accepts objects of type UV::UvWriteT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::belongs_to_ruby */
/* sha: 815f46e7d8faf070d2c3164ef95abd5404005c03ed7b81776b498906b2ca29ca */
mrb_value
mrb_UV_UvWriteT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvWriteT.belongs_to_ruby only accepts objects of type UV::UvWriteT");
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

/* MRUBY_BINDING: UvWriteT::cb_reader */
/* sha: aa0859230ae7414d5d52957560d2ddddde1458ebb349799294fddc2498238833 */
#if BIND_UvWriteT_cb_FIELD_READER
/* get_cb
 *
 * Return Type: uv_write_cb
 */
mrb_value
mrb_UV_UvWriteT_get_cb(mrb_state* mrb, mrb_value self) {
  uv_write_t * native_self = mruby_unbox_uv_write_t(self);

  uv_write_cb native_cb = native_self->cb;

  mrb_value cb = TODO_mruby_box_uv_write_cb(mrb, native_cb);

  return cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::cb_writer */
/* sha: 16485cb6ecefc66ff30ebb1f84addd78d6fe2c6872b925ef40f73c12d2de2ff9 */
#if BIND_UvWriteT_cb_FIELD_WRITER
/* set_cb
 *
 * Parameters:
 * - value: uv_write_cb
 */
mrb_value
mrb_UV_UvWriteT_set_cb(mrb_state* mrb, mrb_value self) {
  uv_write_t * native_self = mruby_unbox_uv_write_t(self);
  mrb_value cb;

  mrb_get_args(mrb, "o", &cb);

  /* type checking */
  TODO_type_check_uv_write_cb(cb);

  uv_write_cb native_cb = TODO_mruby_unbox_uv_write_cb(cb);

  native_self->cb = native_cb;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::send_handle_reader */
/* sha: 56b683ee7b7683c08464355db048af482bb9303fab95dfdf39c34000d1e11d9d */
#if BIND_UvWriteT_send_handle_FIELD_READER
/* get_send_handle
 *
 * Return Type: uv_stream_t *
 */
mrb_value
mrb_UV_UvWriteT_get_send_handle(mrb_state* mrb, mrb_value self) {
  uv_write_t * native_self = mruby_unbox_uv_write_t(self);

  uv_stream_t * native_send_handle = native_self->send_handle;

  mrb_value send_handle = (native_send_handle == NULL ? mrb_nil_value() : mruby_box_uv_stream_t(mrb, native_send_handle));

  return send_handle;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::send_handle_writer */
/* sha: 82540e359fe143d1993a58edb687a704026177e7de2a9cb69ba75c4c3de28558 */
#if BIND_UvWriteT_send_handle_FIELD_WRITER
/* set_send_handle
 *
 * Parameters:
 * - value: uv_stream_t *
 */
mrb_value
mrb_UV_UvWriteT_set_send_handle(mrb_state* mrb, mrb_value self) {
  uv_write_t * native_self = mruby_unbox_uv_write_t(self);
  mrb_value send_handle;

  mrb_get_args(mrb, "o", &send_handle);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, send_handle, UvStreamT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvStreamT expected");
    return mrb_nil_value();
  }

  uv_stream_t * native_send_handle = (mrb_nil_p(send_handle) ? NULL : mruby_unbox_uv_stream_t(send_handle));

  native_self->send_handle = native_send_handle;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::handle_reader */
/* sha: 1752622278799949232f659fd050d57463ab4365c3db3f89405d244a18cd6710 */
#if BIND_UvWriteT_handle_FIELD_READER
/* get_handle
 *
 * Return Type: uv_stream_t *
 */
mrb_value
mrb_UV_UvWriteT_get_handle(mrb_state* mrb, mrb_value self) {
  uv_write_t * native_self = mruby_unbox_uv_write_t(self);

  uv_stream_t * native_handle = native_self->handle;

  mrb_value handle = (native_handle == NULL ? mrb_nil_value() : mruby_box_uv_stream_t(mrb, native_handle));

  return handle;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::handle_writer */
/* sha: 61403368b33aaf1c00f6a6b380e52a401028c4ae847e01b40b67b217a20c6d6d */
#if BIND_UvWriteT_handle_FIELD_WRITER
/* set_handle
 *
 * Parameters:
 * - value: uv_stream_t *
 */
mrb_value
mrb_UV_UvWriteT_set_handle(mrb_state* mrb, mrb_value self) {
  uv_write_t * native_self = mruby_unbox_uv_write_t(self);
  mrb_value handle;

  mrb_get_args(mrb, "o", &handle);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, handle, UvStreamT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvStreamT expected");
    return mrb_nil_value();
  }

  uv_stream_t * native_handle = (mrb_nil_p(handle) ? NULL : mruby_unbox_uv_stream_t(handle));

  native_self->handle = native_handle;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvWriteT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvWriteT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::class_definition */
/* sha: c882fbb9a584a916f2433dfa715533c79b92564324fe9de6d87bb10e749e1b67 */
  struct RClass* UvWriteT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvWriteT", UvReqT_class(mrb));
  MRB_SET_INSTANCE_TT(UvWriteT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::class_method_definitions */
/* sha: bdb03ed5fd6ee5c8e0960542ca885f990063cb9535fa53a20b906b4642fbe68a */
#if BIND_UvWriteT_INITIALIZE
  mrb_define_method(mrb, UvWriteT_class, "initialize", mrb_UV_UvWriteT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvWriteT_class, "disown", mrb_UV_UvWriteT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvWriteT_class, "belongs_to_ruby?", mrb_UV_UvWriteT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::attr_definitions */
/* sha: 57791c40a580e0000c7040e449776e7bdb945226274d0e07a03b7620d9925c2a */
  /*
   * Fields
   */
#if BIND_UvWriteT_cb_FIELD_READER
  mrb_define_method(mrb, UvWriteT_class, "cb", mrb_UV_UvWriteT_get_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvWriteT_cb_FIELD_WRITER
  mrb_define_method(mrb, UvWriteT_class, "cb=", mrb_UV_UvWriteT_set_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvWriteT_send_handle_FIELD_READER
  mrb_define_method(mrb, UvWriteT_class, "send_handle", mrb_UV_UvWriteT_get_send_handle, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvWriteT_send_handle_FIELD_WRITER
  mrb_define_method(mrb, UvWriteT_class, "send_handle=", mrb_UV_UvWriteT_set_send_handle, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvWriteT_handle_FIELD_READER
  mrb_define_method(mrb, UvWriteT_class, "handle", mrb_UV_UvWriteT_get_handle, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvWriteT_handle_FIELD_WRITER
  mrb_define_method(mrb, UvWriteT_class, "handle=", mrb_UV_UvWriteT_set_handle, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvWriteT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
