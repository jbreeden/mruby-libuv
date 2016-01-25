/* -- MRUBY_BINDINGS_NO_CLOBBER --
 *
 * uv_req_t
 * Defined in file uv.h @ line 219
 */

#include "mruby_UV.h"

#if BIND_UvReqT_TYPE

mrb_value
mrb_UV_UvReqT_get_data(mrb_state* mrb, mrb_value self) {
  return mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@data"));
}

mrb_value
mrb_UV_UvReqT_set_data(mrb_state* mrb, mrb_value self) {
  mrb_value data;
  mrb_get_args(mrb, "o", &data);
  mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "@data"), data);
  return data;
}

mrb_value
mrb_UV_UvReqT_get_type(mrb_state* mrb, mrb_value self) {
  uv_req_t * native_self = mruby_unbox_uv_req_t(self);
  uv_req_type native_type = native_self->type;
  mrb_value type = mrb_fixnum_value(native_type);
  return type;
}

void mrb_UV_UvReqT_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

  struct RClass* Req_class = mrb_define_class_under(mrb, UV_module(mrb), "UvReqT", mrb->object_class);
  MRB_SET_INSTANCE_TT(Req_class, MRB_TT_DATA);

  mrb_define_method(mrb, Req_class, "data", mrb_UV_UvReqT_get_data, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Req_class, "data=", mrb_UV_UvReqT_set_data, MRB_ARGS_ARG(1, 0));
  mrb_define_method(mrb, Req_class, "type", mrb_UV_UvReqT_get_type, MRB_ARGS_ARG(0, 0));
}
#endif
