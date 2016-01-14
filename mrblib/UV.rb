module UV

  module Uv_Fs_Event
    UV_RENAME = 1
    UV_CHANGE = 2
  end

  module Uv_Fs_Event_Flags
    UV_FS_EVENT_WATCH_ENTRY = 1
    UV_FS_EVENT_STAT = 2
    UV_FS_EVENT_RECURSIVE = 4
  end

  module Uv_Poll_Event
    UV_READABLE = 1
    UV_WRITABLE = 2
  end

  module Uv_Process_Flags
    UV_PROCESS_SETUID = 1
    UV_PROCESS_SETGID = 2
    UV_PROCESS_WINDOWS_VERBATIM_ARGUMENTS = 4
    UV_PROCESS_DETACHED = 8
    UV_PROCESS_WINDOWS_HIDE = 16
  end

  module Uv_Tcp_Flags
    UV_TCP_IPV6ONLY = 1
  end

  module Uv_Udp_Flags
    UV_UDP_IPV6ONLY = 1
    UV_UDP_PARTIAL = 2
    UV_UDP_REUSEADDR = 4
  end

  module Uv_Dirent_Type_T
    UV_DIRENT_UNKNOWN = 0
    UV_DIRENT_FILE = 1
    UV_DIRENT_DIR = 2
    UV_DIRENT_LINK = 3
    UV_DIRENT_FIFO = 4
    UV_DIRENT_SOCKET = 5
    UV_DIRENT_CHAR = 6
    UV_DIRENT_BLOCK = 7
  end

  module Uv_Errno_T
    UV_ERRNO_MAX = 76
  end

  module Uv_Fs_Type
    UV_FS_UNKNOWN = -1
    UV_FS_CUSTOM = 0
    UV_FS_OPEN = 1
    UV_FS_CLOSE = 2
    UV_FS_READ = 3
    UV_FS_WRITE = 4
    UV_FS_SENDFILE = 5
    UV_FS_STAT = 6
    UV_FS_LSTAT = 7
    UV_FS_FSTAT = 8
    UV_FS_FTRUNCATE = 9
    UV_FS_UTIME = 10
    UV_FS_FUTIME = 11
    UV_FS_ACCESS = 12
    UV_FS_CHMOD = 13
    UV_FS_FCHMOD = 14
    UV_FS_FSYNC = 15
    UV_FS_FDATASYNC = 16
    UV_FS_UNLINK = 17
    UV_FS_RMDIR = 18
    UV_FS_MKDIR = 19
    UV_FS_MKDTEMP = 20
    UV_FS_RENAME = 21
    UV_FS_SCANDIR = 22
    UV_FS_LINK = 23
    UV_FS_SYMLINK = 24
    UV_FS_READLINK = 25
    UV_FS_CHOWN = 26
    UV_FS_FCHOWN = 27
    UV_FS_REALPATH = 28
  end

  module Uv_Handle_Type
    UV_UNKNOWN_HANDLE = 0
    UV_FILE = 17
    UV_HANDLE_TYPE_MAX = 18
  end

  module Uv_Loop_Option
    UV_LOOP_BLOCK_SIGNAL = 0
  end

  module Uv_Membership
    UV_LEAVE_GROUP = 0
    UV_JOIN_GROUP = 1
  end

  module Uv_Req_Type
    UV_UNKNOWN_REQ = 0
    UV_REQ_TYPE_PRIVATE = 10
    UV_REQ_TYPE_MAX = 11
  end

  module Uv_Run_Mode
    UV_RUN_DEFAULT = 0
    UV_RUN_ONCE = 1
    UV_RUN_NOWAIT = 2
  end

  module Uv_Stdio_Flags
    UV_IGNORE = 0
    UV_CREATE_PIPE = 1
    UV_INHERIT_FD = 2
    UV_INHERIT_STREAM = 4
    UV_READABLE_PIPE = 16
    UV_WRITABLE_PIPE = 32
  end

  module Uv_Tty_Mode_T
    UV_TTY_MODE_NORMAL = 0
    UV_TTY_MODE_RAW = 1
    UV_TTY_MODE_IO = 2
  end
end
