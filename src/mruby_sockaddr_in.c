/* - MRUBY_BINDINGS_NO_CLOBBER -
 * struct sockaddr_in
 * Defined in file dummy_decls.h @ line 21
 */

#include "mruby_UV.h"

#if BIND_SockaddrIn_TYPE

void mrb_UV_SockaddrIn_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

  struct RClass* SockaddrIn_class = mrb_define_class_under(mrb, UV_module(mrb), "SockaddrIn", Sockaddr_class(mrb));
  MRB_SET_INSTANCE_TT(SockaddrIn_class, MRB_TT_DATA);
}
#endif
