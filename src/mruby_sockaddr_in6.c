/* - MRUBY_BINDINGS_NO_CLOBBER -
 * struct sockaddr_in6
 * Defined in file dummy_decls.h @ line 22
 */

#include "mruby_UV.h"

#if BIND_SockaddrIn6_TYPE

void mrb_UV_SockaddrIn6_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

  struct RClass* SockaddrIn6_class = mrb_define_class_under(mrb, UV_module(mrb), "SockaddrIn6", Sockaddr_class(mrb));
  MRB_SET_INSTANCE_TT(SockaddrIn6_class, MRB_TT_DATA);
}
#endif
