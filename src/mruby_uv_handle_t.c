/* -- MRUBY_BINDINGS_NO_CLOBBER --
 *
 * uv_handle_t
 * Defined in file uv.h @ line 201
 */

#include "mruby_UV.h"

#if BIND_Handle_TYPE

mrb_value
mrb_UV_Handle_get_data(mrb_state* mrb, mrb_value self) {
  return mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@data"));
}

mrb_value
mrb_UV_Handle_set_data(mrb_state* mrb, mrb_value self) {
  mrb_value data;
  mrb_get_args(mrb, "o", &data);
  mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "@data"), data);
  return data;
}

mrb_value
mrb_UV_Handle_get_loop(mrb_state* mrb, mrb_value self) {
  uv_handle_t * native_self = mruby_unbox_uv_handle_t(self);
  uv_loop_t * native_loop = native_self->loop;
  mrb_value loop = (native_loop == NULL ? mrb_nil_value() : mruby_box_uv_loop_t(mrb, native_loop));
  return loop;
}

mrb_value
mrb_UV_Handle_ref(mrb_state* mrb, mrb_value self) {
  uv_handle_t * native_self = mruby_unbox_uv_handle_t(self);
  uv_ref(native_self);
  return mrb_nil_value();
}

mrb_value
mrb_UV_Handle_unref(mrb_state* mrb, mrb_value self) {
  uv_handle_t * native_self = mruby_unbox_uv_handle_t(self);
  uv_unref(native_self);
  return mrb_nil_value();
}

void mrb_UV_Handle_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

  struct RClass* Handle_class = mrb_define_class_under(mrb, UV_module(mrb), "Handle", mrb->object_class);
  MRB_SET_INSTANCE_TT(Handle_class, MRB_TT_DATA);

  mrb_define_method(mrb, Handle_class, "data", mrb_UV_Handle_get_data, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Handle_class, "data=", mrb_UV_Handle_set_data, MRB_ARGS_ARG(1, 0));
  mrb_define_method(mrb, Handle_class, "loop", mrb_UV_Handle_get_loop, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Handle_class, "ref", mrb_UV_Handle_ref, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Handle_class, "unref", mrb_UV_Handle_unref, MRB_ARGS_ARG(0, 0));
}
#endif
