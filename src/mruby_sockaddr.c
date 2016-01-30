/* - MRUBY_BINDINGS_NO_CLOBBER -
 * struct sockaddr
 * Defined in file dummy_decls.h @ line 15
 */

#include "mruby_UV.h"

#if BIND_Sockaddr_TYPE

mrb_value
mrb_UV_Sockaddr_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No constructor for Sockaddrs. Use UV::ip4_addr or UV::ip6_addr");
  return mrb_nil_value();
}

void mrb_UV_Sockaddr_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

  struct RClass* Sockaddr_class = mrb_define_class_under(mrb, UV_module(mrb), "Sockaddr", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sockaddr_class, MRB_TT_DATA);

  mrb_define_method(mrb, Sockaddr_class, "initialize", mrb_UV_Sockaddr_initialize, MRB_ARGS_NONE());
}
#endif
