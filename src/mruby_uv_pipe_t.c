/*
 * uv_pipe_t
 * Defined in file uv.h @ line 205
 */

#include "mruby_UV.h"

#if BIND_UvPipeT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvPipeT::initialize */
/* sha: e2a0f16d733e794df0af4c61046955d3c8dd53e5bd39d60fb4da52390ecba1cf */
#if BIND_UvPipeT_INITIALIZE
mrb_value
mrb_UV_UvPipeT_initialize(mrb_state* mrb, mrb_value self) {
  uv_pipe_t* native_object = (uv_pipe_t*)calloc(1, sizeof(uv_pipe_t));
  mruby_giftwrap_uv_pipe_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPipeT::initialize */
/* sha: 3714f1ca7d1f1290363f24f6c8e5dad1d41886b348ccd1b5d8c1f98153d38381 */
mrb_value
mrb_UV_UvPipeT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvPipeT.disown only accepts objects of type UV::UvPipeT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPipeT::belongs_to_ruby */
/* sha: 1d4ab93ce7ffc80b7189b076ca43219ab6615eddf9f0f60bcb99685820ed3fe6 */
mrb_value
mrb_UV_UvPipeT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvPipeT.belongs_to_ruby only accepts objects of type UV::UvPipeT");
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

/* MRUBY_BINDING: UvPipeT::_reader */
/* sha: 2632ea7cd0afd11b189cc3624df2e808a124198dffcf99cfd4c914eacf0c1f4e */
#if BIND_UvPipeT__FIELD_READER
/* get_
 *
 * Return Type: int
 */
mrb_value
mrb_UV_UvPipeT_get_(mrb_state* mrb, mrb_value self) {
  uv_pipe_t * native_self = mruby_unbox_uv_pipe_t(self);

  int native_ = native_self->;

  mrb_value  = mrb_fixnum_value(native_);

  return ;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPipeT::_writer */
/* sha: 757a0f4939c9af3f3c708a004d50f7b671b080b3d59cd73a81b1adb149158387 */
#if BIND_UvPipeT__FIELD_WRITER
/* set_
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_UV_UvPipeT_set_(mrb_state* mrb, mrb_value self) {
  uv_pipe_t * native_self = mruby_unbox_uv_pipe_t(self);
  mrb_int native_;

  mrb_get_args(mrb, "i", &native_);

  native_self-> = native_;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvPipeT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvPipeT::class_definition */
/* sha: 92941b396cf368e150f241e3a379e15dd2ff5182496d769364e996154ecee380 */
  struct RClass* UvPipeT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvPipeT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvPipeT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPipeT::class_method_definitions */
/* sha: d38601396ae480f12499f77dc1f483fae9d2d554f04309f30cbf05d557031157 */
#if BIND_UvPipeT_INITIALIZE
  mrb_define_method(mrb, UvPipeT_class, "initialize", mrb_UV_UvPipeT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvPipeT_class, "disown", mrb_UV_UvPipeT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvPipeT_class, "belongs_to_ruby?", mrb_UV_UvPipeT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPipeT::attr_definitions */
/* sha: a8db421efcb36440d6b7c22be31eda7da0f147fb705ff3057b9d43761785ce9b */
  /*
   * Fields
   */
#if BIND_UvPipeT__FIELD_READER
  mrb_define_method(mrb, UvPipeT_class, "", mrb_UV_UvPipeT_get_, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvPipeT__FIELD_WRITER
  mrb_define_method(mrb, UvPipeT_class, "=", mrb_UV_UvPipeT_set_, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvPipeT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
