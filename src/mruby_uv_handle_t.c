/*
 * uv_handle_t
 * Defined in file uv.h @ line 201
 */

#include "mruby_UV.h"

#if BIND_UvHandleT_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvHandleT::initialize */
/* sha: 48c2627eb1d7d29b7b2e7014ec70c270869d2e60726c1a5989f202a402490867 */
#if BIND_UvHandleT_INITIALIZE
mrb_value
mrb_UV_UvHandleT_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Uncomment (and optionally replace) if an initializer is desired.
  uv_handle_t* native_object = (uv_handle_t*)calloc(1, sizeof(uv_handle_t));
  mruby_gift_uv_handle_t_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvHandleT::disown */
/* sha: 78a3948582b1268ad73ae1ebe475234411711865862bf93d1110c6c5c00021df */
mrb_value
mrb_UV_UvHandleT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvHandleT.disown only accepts objects of type UV::UvHandleT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvHandleT::belongs_to_ruby */
/* sha: 363be8f58905c52961b170364e27dd1411d9f52f55ec18e067a0247d54aa4132 */
mrb_value
mrb_UV_UvHandleT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvHandleT.belongs_to_ruby only accepts objects of type UV::UvHandleT");
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

/* MRUBY_BINDING: UvHandleT::data_reader */
/* sha: 66a76f4f1ee0a13622a46b14019b0a0ed74410ca33e064145ff4a3b315a373f7 */
#if BIND_UvHandleT_data_FIELD_READER
/* get_data
 *
 * Return Type: void *
 */
mrb_value
mrb_UV_UvHandleT_get_data(mrb_state* mrb, mrb_value self) {
  uv_handle_t * native_self = mruby_unbox_uv_handle_t(self);
  void * native_data = native_self->data;
  if (native_data == NULL) {
    return mrb_nil_value();
  } else {
    return *((mrb_value*)(native_data));
  }
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvHandleT::data_writer */
/* sha: 92046cb6104b929ceb981fc82477225a6500c79431577bbf544cc85152734438 */
#if BIND_UvHandleT_data_FIELD_WRITER
/* set_data
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_UV_UvHandleT_set_data(mrb_state* mrb, mrb_value self) {
  uv_handle_t * native_self = mruby_unbox_uv_handle_t(self);
  mrb_value data;

  mrb_get_args(mrb, "o", &data);

  /* type checking */
  TODO_type_check_void_PTR(data);

  void * native_data = TODO_mruby_unbox_void_PTR(data);

  native_self->data = native_data;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvHandleT::loop_reader */
/* sha: a8906862e7f90b2382518102f886c90f2591ea411b9288d26af6f6735309ac92 */
#if BIND_UvHandleT_loop_FIELD_READER
/* get_loop
 *
 * Return Type: uv_loop_t *
 */
mrb_value
mrb_UV_UvHandleT_get_loop(mrb_state* mrb, mrb_value self) {
  uv_handle_t * native_self = mruby_unbox_uv_handle_t(self);

  uv_loop_t * native_loop = native_self->loop;

  mrb_value loop = (native_loop == NULL ? mrb_nil_value() : mruby_box_uv_loop_t(mrb, native_loop));

  return loop;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvHandleT::loop_writer */
/* sha: 7bafed240acc44ab5e313694320c94cad7d1aa7e13133db95e6cdcfeef00cf7e */
#if BIND_UvHandleT_loop_FIELD_WRITER
/* set_loop
 *
 * Parameters:
 * - value: uv_loop_t *
 */
mrb_value
mrb_UV_UvHandleT_set_loop(mrb_state* mrb, mrb_value self) {
  uv_handle_t * native_self = mruby_unbox_uv_handle_t(self);
  mrb_value loop;

  mrb_get_args(mrb, "o", &loop);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, loop, UvLoopT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvLoopT expected");
    return mrb_nil_value();
  }

  uv_loop_t * native_loop = (mrb_nil_p(loop) ? NULL : mruby_unbox_uv_loop_t(loop));

  native_self->loop = native_loop;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvHandleT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvHandleT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvHandleT::class_definition */
/* sha: ca4da74dcfff242110ad3c59a5c3cf8dec939114e2a8795e11696cfb8418a1bc */
  struct RClass* UvHandleT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvHandleT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvHandleT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvHandleT::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvHandleT::class_method_definitions */
/* sha: c1d3145a9d6abf93ac26ad6720a50f9014903cdc537e81483d732e0fd53a5b4c */
#if BIND_UvHandleT_INITIALIZE
  mrb_define_method(mrb, UvHandleT_class, "initialize", mrb_UV_UvHandleT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvHandleT_class, "disown", mrb_UV_UvHandleT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvHandleT_class, "belongs_to_ruby?", mrb_UV_UvHandleT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvHandleT::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvHandleT::attr_definitions */
/* sha: 75943be602aa0ef3b0874e2e421ddba29b04973f19ccc4c9cd2fa69a98177038 */
  /*
   * Fields
   */
#if BIND_UvHandleT_data_FIELD_READER
  mrb_define_method(mrb, UvHandleT_class, "data", mrb_UV_UvHandleT_get_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvHandleT_data_FIELD_WRITER
  mrb_define_method(mrb, UvHandleT_class, "data=", mrb_UV_UvHandleT_set_data, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvHandleT_loop_FIELD_READER
  mrb_define_method(mrb, UvHandleT_class, "loop", mrb_UV_UvHandleT_get_loop, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvHandleT_loop_FIELD_WRITER
  mrb_define_method(mrb, UvHandleT_class, "loop=", mrb_UV_UvHandleT_set_loop, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvHandleT::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvHandleT::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvHandleT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
