/*
 * uv_fs_poll_t
 * Defined in file uv.h @ line 215
 */

#include "mruby_UV.h"

#if BIND_UvFsPollT_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvFsPollT::initialize */
/* sha: f80c87517fac7f00520115d11f89e5fbd0bcfe2c4003531832c7dee155f460d0 */
#if BIND_UvFsPollT_INITIALIZE
mrb_value
mrb_UV_UvFsPollT_initialize(mrb_state* mrb, mrb_value self) {
  uv_fs_poll_t* native_object = (uv_fs_poll_t*)calloc(1, sizeof(uv_fs_poll_t));
  mruby_giftwrap_uv_fs_poll_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsPollT::initialize */
/* sha: 3313c16f21bf5f4e8229e63a47e1a5bbf8bae62868463620a07124136c9688a0 */
mrb_value
mrb_UV_UvFsPollT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvFsPollT.disown only accepts objects of type UV::UvFsPollT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsPollT::belongs_to_ruby */
/* sha: 8f7b4682415fe94d4a3993107e479c48025db6b46104d7b5ec37f3e57ef4ee48 */
mrb_value
mrb_UV_UvFsPollT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvFsPollT.belongs_to_ruby only accepts objects of type UV::UvFsPollT");
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

/* MRUBY_BINDING: UvFsPollT::poll_ctx_reader */
/* sha: 656854f88f00e9ebf7f0808f2bf8dbf38ad54f81298a2ccf5366bb314a02f9f4 */
#if BIND_UvFsPollT_poll_ctx_FIELD_READER
/* get_poll_ctx
 *
 * Return Type: void *
 */
mrb_value
mrb_UV_UvFsPollT_get_poll_ctx(mrb_state* mrb, mrb_value self) {
  uv_fs_poll_t * native_self = mruby_unbox_uv_fs_poll_t(self);

  void * native_poll_ctx = native_self->poll_ctx;

  mrb_value poll_ctx = TODO_mruby_box_void_PTR(mrb, native_poll_ctx);

  return poll_ctx;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsPollT::poll_ctx_writer */
/* sha: 97990f66a08d5a07ae139705ad4f2212c1d2646fa9957a794aaebfe8c7e1372f */
#if BIND_UvFsPollT_poll_ctx_FIELD_WRITER
/* set_poll_ctx
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_UV_UvFsPollT_set_poll_ctx(mrb_state* mrb, mrb_value self) {
  uv_fs_poll_t * native_self = mruby_unbox_uv_fs_poll_t(self);
  mrb_value poll_ctx;

  mrb_get_args(mrb, "o", &poll_ctx);

  /* type checking */
  TODO_type_check_void_PTR(poll_ctx);

  void * native_poll_ctx = TODO_mruby_unbox_void_PTR(poll_ctx);

  native_self->poll_ctx = native_poll_ctx;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_UvFsPollT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvFsPollT::class_definition */
/* sha: 991efabed9822fe2783fb73f98d30f97bf6677587238eba301a6a428f818fd22 */
  struct RClass* UvFsPollT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvFsPollT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvFsPollT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsPollT::class_method_definitions */
/* sha: 621df9c22563517f8e44df711254c5d957ff7208bd820c0cb4cfed061043e012 */
#if BIND_UvFsPollT_INITIALIZE
  mrb_define_method(mrb, UvFsPollT_class, "initialize", mrb_UV_UvFsPollT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvFsPollT_class, "disown", mrb_UV_UvFsPollT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvFsPollT_class, "belongs_to_ruby?", mrb_UV_UvFsPollT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsPollT::attr_definitions */
/* sha: 976c027a6e5b83f6ff5a0a972d5bfd7fa795fd850e66439aea685c3d57aeabf6 */
  /*
   * Fields
   */
#if BIND_UvFsPollT_poll_ctx_FIELD_READER
  mrb_define_method(mrb, UvFsPollT_class, "poll_ctx", mrb_UV_UvFsPollT_get_poll_ctx, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvFsPollT_poll_ctx_FIELD_WRITER
  mrb_define_method(mrb, UvFsPollT_class, "poll_ctx=", mrb_UV_UvFsPollT_set_poll_ctx, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvFsPollT::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
