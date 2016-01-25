#include "mruby_UV.h"

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

void
mruby_UV_define_enum_constants(mrb_state* mrb) {
  struct RClass * UV_module = UV_module(mrb);
  mrb_value UV_mod = mrb_obj_value(UV_module(mrb));

/* MRUBY_BINDING: Uv_Fs_Event_enum */
/* sha: c9af3bfe6857fa1d25daa10699838818e3e277e17badbad9ec2b220a3b23bcee */
  struct RClass * Uv_Fs_Event_module = mrb_define_module_under(mrb, UV_module, "Uv_Fs_Event");
  mrb_value Uv_Fs_Event_mod = mrb_obj_value(Uv_Fs_Event_module);
  mrb_const_set(mrb, Uv_Fs_Event_mod, mrb_intern_lit(mrb, "RENAME"), mrb_fixnum_value(UV_RENAME));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "RENAME"), mrb_fixnum_value(UV_RENAME));
  mrb_const_set(mrb, Uv_Fs_Event_mod, mrb_intern_lit(mrb, "CHANGE"), mrb_fixnum_value(UV_CHANGE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "CHANGE"), mrb_fixnum_value(UV_CHANGE));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Uv_Fs_Event_Flags_enum */
/* sha: 3fd26f36bd3bea7d70f8dc11a955f1014773bf763ecb80a34a89b462ef10c7cc */
  struct RClass * Uv_Fs_Event_Flags_module = mrb_define_module_under(mrb, UV_module, "Uv_Fs_Event_Flags");
  mrb_value Uv_Fs_Event_Flags_mod = mrb_obj_value(Uv_Fs_Event_Flags_module);
  mrb_const_set(mrb, Uv_Fs_Event_Flags_mod, mrb_intern_lit(mrb, "FS_EVENT_WATCH_ENTRY"), mrb_fixnum_value(UV_FS_EVENT_WATCH_ENTRY));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_EVENT_WATCH_ENTRY"), mrb_fixnum_value(UV_FS_EVENT_WATCH_ENTRY));
  mrb_const_set(mrb, Uv_Fs_Event_Flags_mod, mrb_intern_lit(mrb, "FS_EVENT_STAT"), mrb_fixnum_value(UV_FS_EVENT_STAT));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_EVENT_STAT"), mrb_fixnum_value(UV_FS_EVENT_STAT));
  mrb_const_set(mrb, Uv_Fs_Event_Flags_mod, mrb_intern_lit(mrb, "FS_EVENT_RECURSIVE"), mrb_fixnum_value(UV_FS_EVENT_RECURSIVE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_EVENT_RECURSIVE"), mrb_fixnum_value(UV_FS_EVENT_RECURSIVE));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Uv_Poll_Event_enum */
/* sha: 34e5c20cf1b0456e7a501bd1d6793385cb56f7087a1375190c3c9b55ac7e480a */
  struct RClass * Uv_Poll_Event_module = mrb_define_module_under(mrb, UV_module, "Uv_Poll_Event");
  mrb_value Uv_Poll_Event_mod = mrb_obj_value(Uv_Poll_Event_module);
  mrb_const_set(mrb, Uv_Poll_Event_mod, mrb_intern_lit(mrb, "READABLE"), mrb_fixnum_value(UV_READABLE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "READABLE"), mrb_fixnum_value(UV_READABLE));
  mrb_const_set(mrb, Uv_Poll_Event_mod, mrb_intern_lit(mrb, "WRITABLE"), mrb_fixnum_value(UV_WRITABLE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "WRITABLE"), mrb_fixnum_value(UV_WRITABLE));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Uv_Process_Flags_enum */
/* sha: a6e582cfef3f0eb98c4f48ff1bac01369b854ef1558f430173974303892986b5 */
  struct RClass * Uv_Process_Flags_module = mrb_define_module_under(mrb, UV_module, "Uv_Process_Flags");
  mrb_value Uv_Process_Flags_mod = mrb_obj_value(Uv_Process_Flags_module);
  mrb_const_set(mrb, Uv_Process_Flags_mod, mrb_intern_lit(mrb, "PROCESS_SETUID"), mrb_fixnum_value(UV_PROCESS_SETUID));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "PROCESS_SETUID"), mrb_fixnum_value(UV_PROCESS_SETUID));
  mrb_const_set(mrb, Uv_Process_Flags_mod, mrb_intern_lit(mrb, "PROCESS_SETGID"), mrb_fixnum_value(UV_PROCESS_SETGID));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "PROCESS_SETGID"), mrb_fixnum_value(UV_PROCESS_SETGID));
  mrb_const_set(mrb, Uv_Process_Flags_mod, mrb_intern_lit(mrb, "PROCESS_WINDOWS_VERBATIM_ARGUMENTS"), mrb_fixnum_value(UV_PROCESS_WINDOWS_VERBATIM_ARGUMENTS));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "PROCESS_WINDOWS_VERBATIM_ARGUMENTS"), mrb_fixnum_value(UV_PROCESS_WINDOWS_VERBATIM_ARGUMENTS));
  mrb_const_set(mrb, Uv_Process_Flags_mod, mrb_intern_lit(mrb, "PROCESS_DETACHED"), mrb_fixnum_value(UV_PROCESS_DETACHED));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "PROCESS_DETACHED"), mrb_fixnum_value(UV_PROCESS_DETACHED));
  mrb_const_set(mrb, Uv_Process_Flags_mod, mrb_intern_lit(mrb, "PROCESS_WINDOWS_HIDE"), mrb_fixnum_value(UV_PROCESS_WINDOWS_HIDE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "PROCESS_WINDOWS_HIDE"), mrb_fixnum_value(UV_PROCESS_WINDOWS_HIDE));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Uv_Tcp_Flags_enum */
/* sha: 2cc9c0cc8fbd5f9947da4052f6d8dc39cf418bb84d2278306267e7393e0d80c3 */
  struct RClass * Uv_Tcp_Flags_module = mrb_define_module_under(mrb, UV_module, "Uv_Tcp_Flags");
  mrb_value Uv_Tcp_Flags_mod = mrb_obj_value(Uv_Tcp_Flags_module);
  mrb_const_set(mrb, Uv_Tcp_Flags_mod, mrb_intern_lit(mrb, "TCP_IPV6ONLY"), mrb_fixnum_value(UV_TCP_IPV6ONLY));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "TCP_IPV6ONLY"), mrb_fixnum_value(UV_TCP_IPV6ONLY));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Uv_Udp_Flags_enum */
/* sha: 6fa14e7d4a7246dd36f123d2e80eee4f0caeeeb4e497bca18b297f50eefd9118 */
  struct RClass * Uv_Udp_Flags_module = mrb_define_module_under(mrb, UV_module, "Uv_Udp_Flags");
  mrb_value Uv_Udp_Flags_mod = mrb_obj_value(Uv_Udp_Flags_module);
  mrb_const_set(mrb, Uv_Udp_Flags_mod, mrb_intern_lit(mrb, "UDP_IPV6ONLY"), mrb_fixnum_value(UV_UDP_IPV6ONLY));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "UDP_IPV6ONLY"), mrb_fixnum_value(UV_UDP_IPV6ONLY));
  mrb_const_set(mrb, Uv_Udp_Flags_mod, mrb_intern_lit(mrb, "UDP_PARTIAL"), mrb_fixnum_value(UV_UDP_PARTIAL));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "UDP_PARTIAL"), mrb_fixnum_value(UV_UDP_PARTIAL));
  mrb_const_set(mrb, Uv_Udp_Flags_mod, mrb_intern_lit(mrb, "UDP_REUSEADDR"), mrb_fixnum_value(UV_UDP_REUSEADDR));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "UDP_REUSEADDR"), mrb_fixnum_value(UV_UDP_REUSEADDR));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Uv_Dirent_Type_T_enum */
/* sha: f12cab078327ad9e3417e37f459f531bfda0acede37275add41b8e2b53914b0d */
  struct RClass * Uv_Dirent_Type_T_module = mrb_define_module_under(mrb, UV_module, "Uv_Dirent_Type_T");
  mrb_value Uv_Dirent_Type_T_mod = mrb_obj_value(Uv_Dirent_Type_T_module);
  mrb_const_set(mrb, Uv_Dirent_Type_T_mod, mrb_intern_lit(mrb, "DIRENT_UNKNOWN"), mrb_fixnum_value(UV_DIRENT_UNKNOWN));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "DIRENT_UNKNOWN"), mrb_fixnum_value(UV_DIRENT_UNKNOWN));
  mrb_const_set(mrb, Uv_Dirent_Type_T_mod, mrb_intern_lit(mrb, "DIRENT_FILE"), mrb_fixnum_value(UV_DIRENT_FILE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "DIRENT_FILE"), mrb_fixnum_value(UV_DIRENT_FILE));
  mrb_const_set(mrb, Uv_Dirent_Type_T_mod, mrb_intern_lit(mrb, "DIRENT_DIR"), mrb_fixnum_value(UV_DIRENT_DIR));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "DIRENT_DIR"), mrb_fixnum_value(UV_DIRENT_DIR));
  mrb_const_set(mrb, Uv_Dirent_Type_T_mod, mrb_intern_lit(mrb, "DIRENT_LINK"), mrb_fixnum_value(UV_DIRENT_LINK));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "DIRENT_LINK"), mrb_fixnum_value(UV_DIRENT_LINK));
  mrb_const_set(mrb, Uv_Dirent_Type_T_mod, mrb_intern_lit(mrb, "DIRENT_FIFO"), mrb_fixnum_value(UV_DIRENT_FIFO));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "DIRENT_FIFO"), mrb_fixnum_value(UV_DIRENT_FIFO));
  mrb_const_set(mrb, Uv_Dirent_Type_T_mod, mrb_intern_lit(mrb, "DIRENT_SOCKET"), mrb_fixnum_value(UV_DIRENT_SOCKET));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "DIRENT_SOCKET"), mrb_fixnum_value(UV_DIRENT_SOCKET));
  mrb_const_set(mrb, Uv_Dirent_Type_T_mod, mrb_intern_lit(mrb, "DIRENT_CHAR"), mrb_fixnum_value(UV_DIRENT_CHAR));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "DIRENT_CHAR"), mrb_fixnum_value(UV_DIRENT_CHAR));
  mrb_const_set(mrb, Uv_Dirent_Type_T_mod, mrb_intern_lit(mrb, "DIRENT_BLOCK"), mrb_fixnum_value(UV_DIRENT_BLOCK));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "DIRENT_BLOCK"), mrb_fixnum_value(UV_DIRENT_BLOCK));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Uv_Errno_T_enum */
/* sha: 8f6a4c29a14cb969bc705add3fc82298f37dbb5304de10b9d6cd39efe9955c3c */
  struct RClass * Uv_Errno_T_module = mrb_define_module_under(mrb, UV_module, "Uv_Errno_T");
  mrb_value Uv_Errno_T_mod = mrb_obj_value(Uv_Errno_T_module);
  mrb_const_set(mrb, Uv_Errno_T_mod, mrb_intern_lit(mrb, "ERRNO_MAX"), mrb_fixnum_value(UV_ERRNO_MAX));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "ERRNO_MAX"), mrb_fixnum_value(UV_ERRNO_MAX));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Uv_Fs_Type_enum */
/* sha: 5cf5d536d5167e541ccabca1dba96fe7873889e76a7a481072e1dc41fbdd7c99 */
  struct RClass * Uv_Fs_Type_module = mrb_define_module_under(mrb, UV_module, "Uv_Fs_Type");
  mrb_value Uv_Fs_Type_mod = mrb_obj_value(Uv_Fs_Type_module);
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_UNKNOWN"), mrb_fixnum_value(UV_FS_UNKNOWN));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_UNKNOWN"), mrb_fixnum_value(UV_FS_UNKNOWN));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_CUSTOM"), mrb_fixnum_value(UV_FS_CUSTOM));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_CUSTOM"), mrb_fixnum_value(UV_FS_CUSTOM));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_OPEN"), mrb_fixnum_value(UV_FS_OPEN));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_OPEN"), mrb_fixnum_value(UV_FS_OPEN));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_CLOSE"), mrb_fixnum_value(UV_FS_CLOSE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_CLOSE"), mrb_fixnum_value(UV_FS_CLOSE));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_READ"), mrb_fixnum_value(UV_FS_READ));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_READ"), mrb_fixnum_value(UV_FS_READ));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_WRITE"), mrb_fixnum_value(UV_FS_WRITE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_WRITE"), mrb_fixnum_value(UV_FS_WRITE));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_SENDFILE"), mrb_fixnum_value(UV_FS_SENDFILE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_SENDFILE"), mrb_fixnum_value(UV_FS_SENDFILE));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_STAT"), mrb_fixnum_value(UV_FS_STAT));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_STAT"), mrb_fixnum_value(UV_FS_STAT));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_LSTAT"), mrb_fixnum_value(UV_FS_LSTAT));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_LSTAT"), mrb_fixnum_value(UV_FS_LSTAT));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_FSTAT"), mrb_fixnum_value(UV_FS_FSTAT));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_FSTAT"), mrb_fixnum_value(UV_FS_FSTAT));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_FTRUNCATE"), mrb_fixnum_value(UV_FS_FTRUNCATE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_FTRUNCATE"), mrb_fixnum_value(UV_FS_FTRUNCATE));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_UTIME"), mrb_fixnum_value(UV_FS_UTIME));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_UTIME"), mrb_fixnum_value(UV_FS_UTIME));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_FUTIME"), mrb_fixnum_value(UV_FS_FUTIME));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_FUTIME"), mrb_fixnum_value(UV_FS_FUTIME));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_ACCESS"), mrb_fixnum_value(UV_FS_ACCESS));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_ACCESS"), mrb_fixnum_value(UV_FS_ACCESS));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_CHMOD"), mrb_fixnum_value(UV_FS_CHMOD));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_CHMOD"), mrb_fixnum_value(UV_FS_CHMOD));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_FCHMOD"), mrb_fixnum_value(UV_FS_FCHMOD));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_FCHMOD"), mrb_fixnum_value(UV_FS_FCHMOD));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_FSYNC"), mrb_fixnum_value(UV_FS_FSYNC));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_FSYNC"), mrb_fixnum_value(UV_FS_FSYNC));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_FDATASYNC"), mrb_fixnum_value(UV_FS_FDATASYNC));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_FDATASYNC"), mrb_fixnum_value(UV_FS_FDATASYNC));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_UNLINK"), mrb_fixnum_value(UV_FS_UNLINK));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_UNLINK"), mrb_fixnum_value(UV_FS_UNLINK));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_RMDIR"), mrb_fixnum_value(UV_FS_RMDIR));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_RMDIR"), mrb_fixnum_value(UV_FS_RMDIR));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_MKDIR"), mrb_fixnum_value(UV_FS_MKDIR));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_MKDIR"), mrb_fixnum_value(UV_FS_MKDIR));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_MKDTEMP"), mrb_fixnum_value(UV_FS_MKDTEMP));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_MKDTEMP"), mrb_fixnum_value(UV_FS_MKDTEMP));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_RENAME"), mrb_fixnum_value(UV_FS_RENAME));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_RENAME"), mrb_fixnum_value(UV_FS_RENAME));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_SCANDIR"), mrb_fixnum_value(UV_FS_SCANDIR));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_SCANDIR"), mrb_fixnum_value(UV_FS_SCANDIR));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_LINK"), mrb_fixnum_value(UV_FS_LINK));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_LINK"), mrb_fixnum_value(UV_FS_LINK));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_SYMLINK"), mrb_fixnum_value(UV_FS_SYMLINK));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_SYMLINK"), mrb_fixnum_value(UV_FS_SYMLINK));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_READLINK"), mrb_fixnum_value(UV_FS_READLINK));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_READLINK"), mrb_fixnum_value(UV_FS_READLINK));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_CHOWN"), mrb_fixnum_value(UV_FS_CHOWN));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_CHOWN"), mrb_fixnum_value(UV_FS_CHOWN));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_FCHOWN"), mrb_fixnum_value(UV_FS_FCHOWN));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_FCHOWN"), mrb_fixnum_value(UV_FS_FCHOWN));
  mrb_const_set(mrb, Uv_Fs_Type_mod, mrb_intern_lit(mrb, "FS_REALPATH"), mrb_fixnum_value(UV_FS_REALPATH));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_REALPATH"), mrb_fixnum_value(UV_FS_REALPATH));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Uv_Handle_Type_enum */
/* sha: 27e17fb03b0931d403c93d96049e98932ec3029a7847b1689342afaf8cf0f7f0 */
  struct RClass * Uv_Handle_Type_module = mrb_define_module_under(mrb, UV_module, "Uv_Handle_Type");
  mrb_value Uv_Handle_Type_mod = mrb_obj_value(Uv_Handle_Type_module);
  mrb_const_set(mrb, Uv_Handle_Type_mod, mrb_intern_lit(mrb, "UNKNOWN_HANDLE"), mrb_fixnum_value(UV_UNKNOWN_HANDLE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "UNKNOWN_HANDLE"), mrb_fixnum_value(UV_UNKNOWN_HANDLE));
  mrb_const_set(mrb, Uv_Handle_Type_mod, mrb_intern_lit(mrb, "FILE"), mrb_fixnum_value(UV_FILE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FILE"), mrb_fixnum_value(UV_FILE));
  mrb_const_set(mrb, Uv_Handle_Type_mod, mrb_intern_lit(mrb, "HANDLE_TYPE_MAX"), mrb_fixnum_value(UV_HANDLE_TYPE_MAX));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "HANDLE_TYPE_MAX"), mrb_fixnum_value(UV_HANDLE_TYPE_MAX));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Uv_Loop_Option_enum */
/* sha: 562ba5ca0ab33f001b7c32878ab9459a29ed49074a7776c89d30d44eae134d22 */
  struct RClass * Uv_Loop_Option_module = mrb_define_module_under(mrb, UV_module, "Uv_Loop_Option");
  mrb_value Uv_Loop_Option_mod = mrb_obj_value(Uv_Loop_Option_module);
  mrb_const_set(mrb, Uv_Loop_Option_mod, mrb_intern_lit(mrb, "LOOP_BLOCK_SIGNAL"), mrb_fixnum_value(UV_LOOP_BLOCK_SIGNAL));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "LOOP_BLOCK_SIGNAL"), mrb_fixnum_value(UV_LOOP_BLOCK_SIGNAL));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Uv_Membership_enum */
/* sha: ed81589aecf91144ff0fc9ddbffc7f186ed0e5200165ba2c477342d774666668 */
  struct RClass * Uv_Membership_module = mrb_define_module_under(mrb, UV_module, "Uv_Membership");
  mrb_value Uv_Membership_mod = mrb_obj_value(Uv_Membership_module);
  mrb_const_set(mrb, Uv_Membership_mod, mrb_intern_lit(mrb, "LEAVE_GROUP"), mrb_fixnum_value(UV_LEAVE_GROUP));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "LEAVE_GROUP"), mrb_fixnum_value(UV_LEAVE_GROUP));
  mrb_const_set(mrb, Uv_Membership_mod, mrb_intern_lit(mrb, "JOIN_GROUP"), mrb_fixnum_value(UV_JOIN_GROUP));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "JOIN_GROUP"), mrb_fixnum_value(UV_JOIN_GROUP));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Uv_Req_Type_enum */
/* sha: 01fd52f497c808dac8d39b35f10ec8ac99b6b6a2ddd10198478a8cc61d6c6554 */
  struct RClass * Uv_Req_Type_module = mrb_define_module_under(mrb, UV_module, "Uv_Req_Type");
  mrb_value Uv_Req_Type_mod = mrb_obj_value(Uv_Req_Type_module);
  mrb_const_set(mrb, Uv_Req_Type_mod, mrb_intern_lit(mrb, "UNKNOWN_REQ"), mrb_fixnum_value(UV_UNKNOWN_REQ));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "UNKNOWN_REQ"), mrb_fixnum_value(UV_UNKNOWN_REQ));
  mrb_const_set(mrb, Uv_Req_Type_mod, mrb_intern_lit(mrb, "REQ_TYPE_MAX"), mrb_fixnum_value(UV_REQ_TYPE_MAX));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "REQ_TYPE_MAX"), mrb_fixnum_value(UV_REQ_TYPE_MAX));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Uv_Run_Mode_enum */
/* sha: 641d06933ec1f8f7db670168f817723b0d6a0804f47850aefbe9a165fab7145a */
  struct RClass * Uv_Run_Mode_module = mrb_define_module_under(mrb, UV_module, "Uv_Run_Mode");
  mrb_value Uv_Run_Mode_mod = mrb_obj_value(Uv_Run_Mode_module);
  mrb_const_set(mrb, Uv_Run_Mode_mod, mrb_intern_lit(mrb, "RUN_DEFAULT"), mrb_fixnum_value(UV_RUN_DEFAULT));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "RUN_DEFAULT"), mrb_fixnum_value(UV_RUN_DEFAULT));
  mrb_const_set(mrb, Uv_Run_Mode_mod, mrb_intern_lit(mrb, "RUN_ONCE"), mrb_fixnum_value(UV_RUN_ONCE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "RUN_ONCE"), mrb_fixnum_value(UV_RUN_ONCE));
  mrb_const_set(mrb, Uv_Run_Mode_mod, mrb_intern_lit(mrb, "RUN_NOWAIT"), mrb_fixnum_value(UV_RUN_NOWAIT));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "RUN_NOWAIT"), mrb_fixnum_value(UV_RUN_NOWAIT));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Uv_Stdio_Flags_enum */
/* sha: 284f5ba7a688da0a619f4438c2b6cb60be9a44de5d5d5ec622c70f98ae8e5146 */
  struct RClass * Uv_Stdio_Flags_module = mrb_define_module_under(mrb, UV_module, "Uv_Stdio_Flags");
  mrb_value Uv_Stdio_Flags_mod = mrb_obj_value(Uv_Stdio_Flags_module);
  mrb_const_set(mrb, Uv_Stdio_Flags_mod, mrb_intern_lit(mrb, "IGNORE"), mrb_fixnum_value(UV_IGNORE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "IGNORE"), mrb_fixnum_value(UV_IGNORE));
  mrb_const_set(mrb, Uv_Stdio_Flags_mod, mrb_intern_lit(mrb, "CREATE_PIPE"), mrb_fixnum_value(UV_CREATE_PIPE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "CREATE_PIPE"), mrb_fixnum_value(UV_CREATE_PIPE));
  mrb_const_set(mrb, Uv_Stdio_Flags_mod, mrb_intern_lit(mrb, "INHERIT_FD"), mrb_fixnum_value(UV_INHERIT_FD));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "INHERIT_FD"), mrb_fixnum_value(UV_INHERIT_FD));
  mrb_const_set(mrb, Uv_Stdio_Flags_mod, mrb_intern_lit(mrb, "INHERIT_STREAM"), mrb_fixnum_value(UV_INHERIT_STREAM));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "INHERIT_STREAM"), mrb_fixnum_value(UV_INHERIT_STREAM));
  mrb_const_set(mrb, Uv_Stdio_Flags_mod, mrb_intern_lit(mrb, "READABLE_PIPE"), mrb_fixnum_value(UV_READABLE_PIPE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "READABLE_PIPE"), mrb_fixnum_value(UV_READABLE_PIPE));
  mrb_const_set(mrb, Uv_Stdio_Flags_mod, mrb_intern_lit(mrb, "WRITABLE_PIPE"), mrb_fixnum_value(UV_WRITABLE_PIPE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "WRITABLE_PIPE"), mrb_fixnum_value(UV_WRITABLE_PIPE));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Uv_Tty_Mode_T_enum */
/* sha: 0a414855fae94f71b4adcbdf9ca824d08136cbb05f15d568b0948d428643e0ea */
  struct RClass * Uv_Tty_Mode_T_module = mrb_define_module_under(mrb, UV_module, "Uv_Tty_Mode_T");
  mrb_value Uv_Tty_Mode_T_mod = mrb_obj_value(Uv_Tty_Mode_T_module);
  mrb_const_set(mrb, Uv_Tty_Mode_T_mod, mrb_intern_lit(mrb, "TTY_MODE_NORMAL"), mrb_fixnum_value(UV_TTY_MODE_NORMAL));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "TTY_MODE_NORMAL"), mrb_fixnum_value(UV_TTY_MODE_NORMAL));
  mrb_const_set(mrb, Uv_Tty_Mode_T_mod, mrb_intern_lit(mrb, "TTY_MODE_RAW"), mrb_fixnum_value(UV_TTY_MODE_RAW));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "TTY_MODE_RAW"), mrb_fixnum_value(UV_TTY_MODE_RAW));
  mrb_const_set(mrb, Uv_Tty_Mode_T_mod, mrb_intern_lit(mrb, "TTY_MODE_IO"), mrb_fixnum_value(UV_TTY_MODE_IO));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "TTY_MODE_IO"), mrb_fixnum_value(UV_TTY_MODE_IO));
/* MRUBY_BINDING_END */

}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
