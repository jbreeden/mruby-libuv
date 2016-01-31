/* - MRUBY_BINDINGS_NO_CLOBBER -
 * uv_tcp_t
 * Defined in file uv.h @ line 203
 */

#include "mruby_UV.h"

#if BIND_TCP_TYPE

mrb_value
mrb_UV_TCP_initialize(mrb_state* mrb, mrb_value self) {
  uv_tcp_t* native_object = (uv_tcp_t*)new_mruby_uv_handle(mrb, self, sizeof(uv_tcp_t));
  mruby_gift_uv_tcp_t_data_ptr(self, native_object);
  return self;
}

void mrb_UV_TCP_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
  
  struct RClass* TCP_class = mrb_define_class_under(mrb, UV_module(mrb), "TCP", Stream_class(mrb));
  MRB_SET_INSTANCE_TT(TCP_class, MRB_TT_DATA);

  mrb_define_method(mrb, TCP_class, "initialize", mrb_UV_TCP_initialize, MRB_ARGS_NONE());
}
#endif
