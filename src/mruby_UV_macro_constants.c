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

  mrb_define_const(mrb, uv_module, "E2BIG", mrb_fixnum_value(UV_E2BIG));
  mrb_define_const(mrb, uv_module, "EACCES", mrb_fixnum_value(UV_EACCES));
  mrb_define_const(mrb, uv_module, "EADDRINUSE", mrb_fixnum_value(UV_EADDRINUSE));
  mrb_define_const(mrb, uv_module, "EADDRNOTAVAIL", mrb_fixnum_value(UV_EADDRNOTAVAIL));
  mrb_define_const(mrb, uv_module, "EAFNOSUPPORT", mrb_fixnum_value(UV_EAFNOSUPPORT));
  mrb_define_const(mrb, uv_module, "EAGAIN", mrb_fixnum_value(UV_EAGAIN));
  mrb_define_const(mrb, uv_module, "EAI_ADDRFAMILY", mrb_fixnum_value(UV_EAI_ADDRFAMILY));
  mrb_define_const(mrb, uv_module, "EAI_AGAIN", mrb_fixnum_value(UV_EAI_AGAIN));
  mrb_define_const(mrb, uv_module, "EAI_BADFLAGS", mrb_fixnum_value(UV_EAI_BADFLAGS));
  mrb_define_const(mrb, uv_module, "EAI_BADHINTS", mrb_fixnum_value(UV_EAI_BADHINTS));
  mrb_define_const(mrb, uv_module, "EAI_CANCELED", mrb_fixnum_value(UV_EAI_CANCELED));
  mrb_define_const(mrb, uv_module, "EAI_FAIL", mrb_fixnum_value(UV_EAI_FAIL));
  mrb_define_const(mrb, uv_module, "EAI_FAMILY", mrb_fixnum_value(UV_EAI_FAMILY));
  mrb_define_const(mrb, uv_module, "EAI_MEMORY", mrb_fixnum_value(UV_EAI_MEMORY));
  mrb_define_const(mrb, uv_module, "EAI_NODATA", mrb_fixnum_value(UV_EAI_NODATA));
  mrb_define_const(mrb, uv_module, "EAI_NONAME", mrb_fixnum_value(UV_EAI_NONAME));
  mrb_define_const(mrb, uv_module, "EAI_OVERFLOW", mrb_fixnum_value(UV_EAI_OVERFLOW));
  mrb_define_const(mrb, uv_module, "EAI_PROTOCOL", mrb_fixnum_value(UV_EAI_PROTOCOL));
  mrb_define_const(mrb, uv_module, "EAI_SERVICE", mrb_fixnum_value(UV_EAI_SERVICE));
  mrb_define_const(mrb, uv_module, "EAI_SOCKTYPE", mrb_fixnum_value(UV_EAI_SOCKTYPE));
  mrb_define_const(mrb, uv_module, "EALREADY", mrb_fixnum_value(UV_EALREADY));
  mrb_define_const(mrb, uv_module, "EBADF", mrb_fixnum_value(UV_EBADF));
  mrb_define_const(mrb, uv_module, "EBUSY", mrb_fixnum_value(UV_EBUSY));
  mrb_define_const(mrb, uv_module, "ECANCELED", mrb_fixnum_value(UV_ECANCELED));
  mrb_define_const(mrb, uv_module, "ECHARSET", mrb_fixnum_value(UV_ECHARSET));
  mrb_define_const(mrb, uv_module, "ECONNABORTED", mrb_fixnum_value(UV_ECONNABORTED));
  mrb_define_const(mrb, uv_module, "ECONNREFUSED", mrb_fixnum_value(UV_ECONNREFUSED));
  mrb_define_const(mrb, uv_module, "ECONNRESET", mrb_fixnum_value(UV_ECONNRESET));
  mrb_define_const(mrb, uv_module, "EDESTADDRREQ", mrb_fixnum_value(UV_EDESTADDRREQ));
  mrb_define_const(mrb, uv_module, "EEXIST", mrb_fixnum_value(UV_EEXIST));
  mrb_define_const(mrb, uv_module, "EFAULT", mrb_fixnum_value(UV_EFAULT));
  mrb_define_const(mrb, uv_module, "EFBIG", mrb_fixnum_value(UV_EFBIG));
  mrb_define_const(mrb, uv_module, "EHOSTUNREACH", mrb_fixnum_value(UV_EHOSTUNREACH));
  mrb_define_const(mrb, uv_module, "EINTR", mrb_fixnum_value(UV_EINTR));
  mrb_define_const(mrb, uv_module, "EINVAL", mrb_fixnum_value(UV_EINVAL));
  mrb_define_const(mrb, uv_module, "EIO", mrb_fixnum_value(UV_EIO));
  mrb_define_const(mrb, uv_module, "EISCONN", mrb_fixnum_value(UV_EISCONN));
  mrb_define_const(mrb, uv_module, "EISDIR", mrb_fixnum_value(UV_EISDIR));
  mrb_define_const(mrb, uv_module, "ELOOP", mrb_fixnum_value(UV_ELOOP));
  mrb_define_const(mrb, uv_module, "EMFILE", mrb_fixnum_value(UV_EMFILE));
  mrb_define_const(mrb, uv_module, "EMSGSIZE", mrb_fixnum_value(UV_EMSGSIZE));
  mrb_define_const(mrb, uv_module, "ENAMETOOLONG", mrb_fixnum_value(UV_ENAMETOOLONG));
  mrb_define_const(mrb, uv_module, "ENETDOWN", mrb_fixnum_value(UV_ENETDOWN));
  mrb_define_const(mrb, uv_module, "ENETUNREACH", mrb_fixnum_value(UV_ENETUNREACH));
  mrb_define_const(mrb, uv_module, "ENFILE", mrb_fixnum_value(UV_ENFILE));
  mrb_define_const(mrb, uv_module, "ENOBUFS", mrb_fixnum_value(UV_ENOBUFS));
  mrb_define_const(mrb, uv_module, "ENODEV", mrb_fixnum_value(UV_ENODEV));
  mrb_define_const(mrb, uv_module, "ENOENT", mrb_fixnum_value(UV_ENOENT));
  mrb_define_const(mrb, uv_module, "ENOMEM", mrb_fixnum_value(UV_ENOMEM));
  mrb_define_const(mrb, uv_module, "ENONET", mrb_fixnum_value(UV_ENONET));
  mrb_define_const(mrb, uv_module, "ENOPROTOOPT", mrb_fixnum_value(UV_ENOPROTOOPT));
  mrb_define_const(mrb, uv_module, "ENOSPC", mrb_fixnum_value(UV_ENOSPC));
  mrb_define_const(mrb, uv_module, "ENOSYS", mrb_fixnum_value(UV_ENOSYS));
  mrb_define_const(mrb, uv_module, "ENOTCONN", mrb_fixnum_value(UV_ENOTCONN));
  mrb_define_const(mrb, uv_module, "ENOTDIR", mrb_fixnum_value(UV_ENOTDIR));
  mrb_define_const(mrb, uv_module, "ENOTEMPTY", mrb_fixnum_value(UV_ENOTEMPTY));
  mrb_define_const(mrb, uv_module, "ENOTSOCK", mrb_fixnum_value(UV_ENOTSOCK));
  mrb_define_const(mrb, uv_module, "ENOTSUP", mrb_fixnum_value(UV_ENOTSUP));
  mrb_define_const(mrb, uv_module, "EPERM", mrb_fixnum_value(UV_EPERM));
  mrb_define_const(mrb, uv_module, "EPIPE", mrb_fixnum_value(UV_EPIPE));
  mrb_define_const(mrb, uv_module, "EPROTO", mrb_fixnum_value(UV_EPROTO));
  mrb_define_const(mrb, uv_module, "EPROTONOSUPPORT", mrb_fixnum_value(UV_EPROTONOSUPPORT));
  mrb_define_const(mrb, uv_module, "EPROTOTYPE", mrb_fixnum_value(UV_EPROTOTYPE));
  mrb_define_const(mrb, uv_module, "ERANGE", mrb_fixnum_value(UV_ERANGE));
  mrb_define_const(mrb, uv_module, "EROFS", mrb_fixnum_value(UV_EROFS));
  mrb_define_const(mrb, uv_module, "ESHUTDOWN", mrb_fixnum_value(UV_ESHUTDOWN));
  mrb_define_const(mrb, uv_module, "ESPIPE", mrb_fixnum_value(UV_ESPIPE));
  mrb_define_const(mrb, uv_module, "ESRCH", mrb_fixnum_value(UV_ESRCH));
  mrb_define_const(mrb, uv_module, "ETIMEDOUT", mrb_fixnum_value(UV_ETIMEDOUT));
  mrb_define_const(mrb, uv_module, "ETXTBSY", mrb_fixnum_value(UV_ETXTBSY));
  mrb_define_const(mrb, uv_module, "EXDEV", mrb_fixnum_value(UV_EXDEV));
  mrb_define_const(mrb, uv_module, "EOF", mrb_fixnum_value(UV_EOF));
  mrb_define_const(mrb, uv_module, "ENXIO", mrb_fixnum_value(UV_ENXIO));
  mrb_define_const(mrb, uv_module, "EMLINK", mrb_fixnum_value(UV_EMLINK));
  mrb_define_const(mrb, uv_module, "EHOSTDOWN", mrb_fixnum_value(UV_EHOSTDOWN));
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: post_macro_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
