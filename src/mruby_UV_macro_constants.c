#include "mruby_UV.h"

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

void
mruby_UV_define_macro_constants(mrb_state* mrb) {
/* MRUBY_BINDING: pre_macro_definitions */
/* sha: user_defined */
  struct RClass * uv_module = UV_module(mrb);

  mrb_define_const(mrb, uv_module, "SYMLINK_DIR", mrb_fixnum_value(UV_FS_SYMLINK_DIR));
  mrb_define_const(mrb, uv_module, "SYMLINK_JUNCTION", mrb_fixnum_value(UV_FS_SYMLINK_JUNCTION));

  mrb_define_const(mrb, uv_module, "O_RDONLY", mrb_fixnum_value(O_RDONLY));
  mrb_define_const(mrb, uv_module, "O_WRONLY", mrb_fixnum_value(O_WRONLY));
  mrb_define_const(mrb, uv_module, "O_RDWR", mrb_fixnum_value(O_RDWR));
  mrb_define_const(mrb, uv_module, "O_CREAT", mrb_fixnum_value(O_CREAT));
  mrb_define_const(mrb, uv_module, "O_TRUNC", mrb_fixnum_value(O_TRUNC));
  mrb_define_const(mrb, uv_module, "O_APPEND", mrb_fixnum_value(O_APPEND));

#ifdef O_TEXT
  mrb_define_const(mrb, uv_module, "O_TEXT", mrb_fixnum_value(O_TEXT));
#endif
#ifdef O_BINARY
  mrb_define_const(mrb, uv_module, "O_BINARY", mrb_fixnum_value(O_BINARY));
#endif

#ifdef S_IWRITE
  mrb_define_const(mrb, uv_module, "S_IWRITE", mrb_fixnum_value(S_IWUSR));
#endif
#ifdef S_IREAD
  mrb_define_const(mrb, uv_module, "S_IREAD", mrb_fixnum_value(S_IRUSR));
#endif
#ifdef S_IEXEC
  mrb_define_const(mrb, uv_module, "S_IEXEC", mrb_fixnum_value(S_IXUSR));
#endif

  mrb_define_const(mrb, uv_module, "F_OK", mrb_fixnum_value(F_OK));
  mrb_define_const(mrb, uv_module, "R_OK", mrb_fixnum_value(R_OK));
  mrb_define_const(mrb, uv_module, "W_OK", mrb_fixnum_value(W_OK));
  mrb_define_const(mrb, uv_module, "X_OK", mrb_fixnum_value(X_OK));

#ifdef SIGINT
  mrb_define_const(mrb, uv_module, "SIGINT", mrb_fixnum_value(SIGINT));
#endif
#ifdef SIGPIPE
  mrb_define_const(mrb, uv_module, "SIGPIPE", mrb_fixnum_value(SIGPIPE));
#endif
#ifdef SIGBREAK
  mrb_define_const(mrb, uv_module, "SIGBREAK", mrb_fixnum_value(SIGBREAK));
#endif
#ifdef SIGHUP
  mrb_define_const(mrb, uv_module, "SIGHUP", mrb_fixnum_value(SIGHUP));
#endif
#ifdef SIGWINCH
  mrb_define_const(mrb, uv_module, "SIGWINCH", mrb_fixnum_value(SIGWINCH));
#endif
#ifdef SIGILL
  mrb_define_const(mrb, uv_module, "SIGILL", mrb_fixnum_value(SIGILL));
#endif
#ifdef SIGABRT
  mrb_define_const(mrb, uv_module, "SIGABRT", mrb_fixnum_value(SIGABRT));
#endif
#ifdef SIGFPE
  mrb_define_const(mrb, uv_module, "SIGFPE", mrb_fixnum_value(SIGFPE));
#endif
#ifdef SIGSEGV
  mrb_define_const(mrb, uv_module, "SIGSEGV", mrb_fixnum_value(SIGSEGV));
#endif
#ifdef SIGTERM
  mrb_define_const(mrb, uv_module, "SIGTERM", mrb_fixnum_value(SIGTERM));
#endif
#ifdef SIGKILL
  mrb_define_const(mrb, uv_module, "SIGKILL", mrb_fixnum_value(SIGKILL));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: post_macro_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
