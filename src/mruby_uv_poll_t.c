/*
 * uv_poll_t
 * Defined in file uv.h @ line 207
 */

#include "mruby_UV.h"

#if BIND_Poll_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Poll::initialize */
/* sha: a2b8ebfb3b421d77937eba4a430e6c7b891b8bd2e9e00eef981503567de4f736 */
#if BIND_Poll_INITIALIZE
mrb_value
mrb_UV_Poll_initialize(mrb_state* mrb, mrb_value self) {
  uv_poll_t* native_object = (uv_poll_t*)new_mruby_uv_handle(mrb, self, sizeof(uv_poll_t));
  mruby_gift_uv_poll_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Poll::poll_cb_reader */
/* sha: b6216e113523c4aedbf0798fdc3b9b658ed6eb049c8a2263cb976592f77267cb */
#if BIND_Poll_poll_cb_FIELD_READER
mrb_value
mrb_UV_Poll_get_poll_cb(mrb_state* mrb, mrb_value self) {
  uv_poll_t * native_self = mruby_unbox_uv_poll_t(self);

  uv_poll_cb native_poll_cb = native_self->poll_cb;

  mrb_value poll_cb = TODO_mruby_box_uv_poll_cb(mrb, native_poll_cb);

  return poll_cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Poll::poll_cb_writer */
/* sha: 4fc55c73690bd12b32dd374112fe872466c6da6c3aa9b525daa3b72af6c4f30c */
#if BIND_Poll_poll_cb_FIELD_WRITER
mrb_value
mrb_UV_Poll_set_poll_cb(mrb_state* mrb, mrb_value self) {
  uv_poll_t * native_self = mruby_unbox_uv_poll_t(self);
  mrb_value poll_cb;

  mrb_get_args(mrb, "o", &poll_cb);

  /* type checking */
  TODO_type_check_uv_poll_cb(poll_cb);

  uv_poll_cb native_poll_cb = TODO_mruby_unbox_uv_poll_cb(poll_cb);

  native_self->poll_cb = native_poll_cb;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_Poll_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Poll::class_definition */
/* sha: df73b39c818e70593f9ed0d4fe3b5b7c999ad65b09f8e1b84c925db418e45f57 */
  struct RClass* Poll_class = mrb_define_class_under(mrb, UV_module(mrb), "Poll", Handle_class(mrb));
  MRB_SET_INSTANCE_TT(Poll_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Poll::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Poll::class_method_definitions */
/* sha: 572042cfb803cd19918392d20ca2e4d2dc51d6647c68a3cfffcf0e0361750b24 */
#if BIND_Poll_INITIALIZE
  mrb_define_method(mrb, Poll_class, "initialize", mrb_UV_Poll_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Poll::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Poll::attr_definitions */
/* sha: abf461f6a6946362d16d4f7e75f97fcb708a8c8cb93374a46b5ae0a43dbae24f */
  /*
   * Fields
   */
#if BIND_Poll_poll_cb_FIELD_READER
  mrb_define_method(mrb, Poll_class, "poll_cb", mrb_UV_Poll_get_poll_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Poll_poll_cb_FIELD_WRITER
  mrb_define_method(mrb, Poll_class, "poll_cb=", mrb_UV_Poll_set_poll_cb, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: Poll::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
