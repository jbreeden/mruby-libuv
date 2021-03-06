module UV
  ERRNO_TO_SYM = {
    E2BIG => :E2BIG,
    EACCES => :EACCES,
    EADDRINUSE => :EADDRINUSE,
    EADDRNOTAVAIL => :EADDRNOTAVAIL,
    EAFNOSUPPORT => :EAFNOSUPPORT,
    EAGAIN => :EAGAIN,
    EAI_ADDRFAMILY => :EAI_ADDRFAMILY,
    EAI_AGAIN => :EAI_AGAIN,
    EAI_BADFLAGS => :EAI_BADFLAGS,
    EAI_BADHINTS => :EAI_BADHINTS,
    EAI_CANCELED => :EAI_CANCELED,
    EAI_FAIL => :EAI_FAIL,
    EAI_FAMILY => :EAI_FAMILY,
    EAI_MEMORY => :EAI_MEMORY,
    EAI_NODATA => :EAI_NODATA,
    EAI_NONAME => :EAI_NONAME,
    EAI_OVERFLOW => :EAI_OVERFLOW,
    EAI_PROTOCOL => :EAI_PROTOCOL,
    EAI_SERVICE => :EAI_SERVICE,
    EAI_SOCKTYPE => :EAI_SOCKTYPE,
    EALREADY => :EALREADY,
    EBADF => :EBADF,
    EBUSY => :EBUSY,
    ECANCELED => :ECANCELED,
    ECHARSET => :ECHARSET,
    ECONNABORTED => :ECONNABORTED,
    ECONNREFUSED => :ECONNREFUSED,
    ECONNRESET => :ECONNRESET,
    EDESTADDRREQ => :EDESTADDRREQ,
    EEXIST => :EEXIST,
    EFAULT => :EFAULT,
    EFBIG => :EFBIG,
    EHOSTUNREACH => :EHOSTUNREACH,
    EINTR => :EINTR,
    EINVAL => :EINVAL,
    EIO => :EIO,
    EISCONN => :EISCONN,
    EISDIR => :EISDIR,
    ELOOP => :ELOOP,
    EMFILE => :EMFILE,
    EMSGSIZE => :EMSGSIZE,
    ENAMETOOLONG => :ENAMETOOLONG,
    ENETDOWN => :ENETDOWN,
    ENETUNREACH => :ENETUNREACH,
    ENFILE => :ENFILE,
    ENOBUFS => :ENOBUFS,
    ENODEV => :ENODEV,
    ENOENT => :ENOENT,
    ENOMEM => :ENOMEM,
    ENONET => :ENONET,
    ENOPROTOOPT => :ENOPROTOOPT,
    ENOSPC => :ENOSPC,
    ENOSYS => :ENOSYS,
    ENOTCONN => :ENOTCONN,
    ENOTDIR => :ENOTDIR,
    ENOTEMPTY => :ENOTEMPTY,
    ENOTSOCK => :ENOTSOCK,
    ENOTSUP => :ENOTSUP,
    EPERM => :EPERM,
    EPIPE => :EPIPE,
    EPROTO => :EPROTO,
    EPROTONOSUPPORT => :EPROTONOSUPPORT,
    EPROTOTYPE => :EPROTOTYPE,
    ERANGE => :ERANGE,
    EROFS => :EROFS,
    ESHUTDOWN => :ESHUTDOWN,
    ESPIPE => :ESPIPE,
    ESRCH => :ESRCH,
    ETIMEDOUT => :ETIMEDOUT,
    ETXTBSY => :ETXTBSY,
    EXDEV => :EXDEV,
    EOF => :EOF,
    ENXIO => :ENXIO,
    EMLINK => :EMLINK,
    EHOSTDOWN => :EHOSTDOWN
  }

  SYM_TO_ERRNO = {}
  ERRNO_TO_SYM.each do |key, value|
    SYM_TO_ERRNO[value] = key
  end

  class SystemCallError < StandardError
  end

  SYM_TO_ERRNO.keys.each do |k|
    error_class = UV.const_set(k, Class.new(SystemCallError))
    error_class.define_singleton_method(:name) { k }
    error_class.define_method(:inspect) {
      "#<#{self.class.name}:0x#{self.object_id.to_s(16)}>: #{self.message}"
    }
  end

  def self.errno_to_error(errno, msg=nil)
    raise "Expected a Fixnum but got #{errno.class}" unless errno.kind_of?(Fixnum)
    sym = ERRNO_TO_SYM[errno]
    raise "Unrecognized errno: #{errno}" unless sym
    UV.const_get(sym).new(msg || sym.to_s)
  end
end
