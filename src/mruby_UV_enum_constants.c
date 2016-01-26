#include "mruby_UV.h"

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

void
mruby_UV_define_enum_constants(mrb_state* mrb) {
  struct RClass * UV_module = UV_module(mrb);
  mrb_value UV_mod = mrb_obj_value(UV_module(mrb));

/* MRUBY_BINDING: FSEvent_enum */
/* sha: 3b77a49e422614347436c0c8e30caa21a17deabe36e13d6fdc81fca1e708d155 */
  /* Moved these into mruby_uv_fs_event_t.c so I could put them on that class */
  /* (The Ruby-translated versions of the struct and enum names are identical,
      so frankly that's where they belong) */
  /* I noticed the collision of names when I couldn't start `mirb`... when trying
     to mrb_define_class_under mruby threw up because the FSEvent module had already
     been defined here (as an enum module). */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FSEventFlags_enum */
/* sha: 47e88c2c0a0d8f854fb512e6bcadae258f4fb6b6be65dc978b4eb65c1038a0b3 */
  struct RClass * FSEventFlags_module = mrb_define_module_under(mrb, UV_module, "FSEventFlags");
  mrb_value FSEventFlags_mod = mrb_obj_value(FSEventFlags_module);
  mrb_const_set(mrb, FSEventFlags_mod, mrb_intern_lit(mrb, "FS_EVENT_WATCH_ENTRY"), mrb_fixnum_value(UV_FS_EVENT_WATCH_ENTRY));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_EVENT_WATCH_ENTRY"), mrb_fixnum_value(UV_FS_EVENT_WATCH_ENTRY));
  mrb_const_set(mrb, FSEventFlags_mod, mrb_intern_lit(mrb, "FS_EVENT_STAT"), mrb_fixnum_value(UV_FS_EVENT_STAT));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_EVENT_STAT"), mrb_fixnum_value(UV_FS_EVENT_STAT));
  mrb_const_set(mrb, FSEventFlags_mod, mrb_intern_lit(mrb, "FS_EVENT_RECURSIVE"), mrb_fixnum_value(UV_FS_EVENT_RECURSIVE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_EVENT_RECURSIVE"), mrb_fixnum_value(UV_FS_EVENT_RECURSIVE));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PollEvent_enum */
/* sha: 5d0baccacdb99388b5204c6986d6443d1afc22b948cad1574816040d7c656604 */
  struct RClass * PollEvent_module = mrb_define_module_under(mrb, UV_module, "PollEvent");
  mrb_value PollEvent_mod = mrb_obj_value(PollEvent_module);
  mrb_const_set(mrb, PollEvent_mod, mrb_intern_lit(mrb, "READABLE"), mrb_fixnum_value(UV_READABLE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "READABLE"), mrb_fixnum_value(UV_READABLE));
  mrb_const_set(mrb, PollEvent_mod, mrb_intern_lit(mrb, "WRITABLE"), mrb_fixnum_value(UV_WRITABLE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "WRITABLE"), mrb_fixnum_value(UV_WRITABLE));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessFlags_enum */
/* sha: f79e49137c4aa114734603172b19675d5d79b0ca5e35f24edcbfef65f808b505 */
  struct RClass * ProcessFlags_module = mrb_define_module_under(mrb, UV_module, "ProcessFlags");
  mrb_value ProcessFlags_mod = mrb_obj_value(ProcessFlags_module);
  mrb_const_set(mrb, ProcessFlags_mod, mrb_intern_lit(mrb, "PROCESS_SETUID"), mrb_fixnum_value(UV_PROCESS_SETUID));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "PROCESS_SETUID"), mrb_fixnum_value(UV_PROCESS_SETUID));
  mrb_const_set(mrb, ProcessFlags_mod, mrb_intern_lit(mrb, "PROCESS_SETGID"), mrb_fixnum_value(UV_PROCESS_SETGID));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "PROCESS_SETGID"), mrb_fixnum_value(UV_PROCESS_SETGID));
  mrb_const_set(mrb, ProcessFlags_mod, mrb_intern_lit(mrb, "PROCESS_WINDOWS_VERBATIM_ARGUMENTS"), mrb_fixnum_value(UV_PROCESS_WINDOWS_VERBATIM_ARGUMENTS));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "PROCESS_WINDOWS_VERBATIM_ARGUMENTS"), mrb_fixnum_value(UV_PROCESS_WINDOWS_VERBATIM_ARGUMENTS));
  mrb_const_set(mrb, ProcessFlags_mod, mrb_intern_lit(mrb, "PROCESS_DETACHED"), mrb_fixnum_value(UV_PROCESS_DETACHED));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "PROCESS_DETACHED"), mrb_fixnum_value(UV_PROCESS_DETACHED));
  mrb_const_set(mrb, ProcessFlags_mod, mrb_intern_lit(mrb, "PROCESS_WINDOWS_HIDE"), mrb_fixnum_value(UV_PROCESS_WINDOWS_HIDE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "PROCESS_WINDOWS_HIDE"), mrb_fixnum_value(UV_PROCESS_WINDOWS_HIDE));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TCPFlags_enum */
/* sha: b72c6e93c139e6f3742147b3d108585faf45374b7654ee994ab7820f7b460ef3 */
  struct RClass * TCPFlags_module = mrb_define_module_under(mrb, UV_module, "TCPFlags");
  mrb_value TCPFlags_mod = mrb_obj_value(TCPFlags_module);
  mrb_const_set(mrb, TCPFlags_mod, mrb_intern_lit(mrb, "TCP_IPV6ONLY"), mrb_fixnum_value(UV_TCP_IPV6ONLY));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "TCP_IPV6ONLY"), mrb_fixnum_value(UV_TCP_IPV6ONLY));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UDPFlags_enum */
/* sha: 2683ba9bb8b09ae37ef01bb653a10f3816850432e534f7c1990e910466fa0990 */
  struct RClass * UDPFlags_module = mrb_define_module_under(mrb, UV_module, "UDPFlags");
  mrb_value UDPFlags_mod = mrb_obj_value(UDPFlags_module);
  mrb_const_set(mrb, UDPFlags_mod, mrb_intern_lit(mrb, "UDP_IPV6ONLY"), mrb_fixnum_value(UV_UDP_IPV6ONLY));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "UDP_IPV6ONLY"), mrb_fixnum_value(UV_UDP_IPV6ONLY));
  mrb_const_set(mrb, UDPFlags_mod, mrb_intern_lit(mrb, "UDP_PARTIAL"), mrb_fixnum_value(UV_UDP_PARTIAL));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "UDP_PARTIAL"), mrb_fixnum_value(UV_UDP_PARTIAL));
  mrb_const_set(mrb, UDPFlags_mod, mrb_intern_lit(mrb, "UDP_REUSEADDR"), mrb_fixnum_value(UV_UDP_REUSEADDR));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "UDP_REUSEADDR"), mrb_fixnum_value(UV_UDP_REUSEADDR));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DirentType_enum */
/* sha: 53b0e6213d1d83fb3305f29d90e83bfb033d34735d99e1d8136d6c7ffd66449b */
  struct RClass * DirentType_module = mrb_define_module_under(mrb, UV_module, "DirentType");
  mrb_value DirentType_mod = mrb_obj_value(DirentType_module);
  mrb_const_set(mrb, DirentType_mod, mrb_intern_lit(mrb, "DIRENT_UNKNOWN"), mrb_fixnum_value(UV_DIRENT_UNKNOWN));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "DIRENT_UNKNOWN"), mrb_fixnum_value(UV_DIRENT_UNKNOWN));
  mrb_const_set(mrb, DirentType_mod, mrb_intern_lit(mrb, "DIRENT_FILE"), mrb_fixnum_value(UV_DIRENT_FILE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "DIRENT_FILE"), mrb_fixnum_value(UV_DIRENT_FILE));
  mrb_const_set(mrb, DirentType_mod, mrb_intern_lit(mrb, "DIRENT_DIR"), mrb_fixnum_value(UV_DIRENT_DIR));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "DIRENT_DIR"), mrb_fixnum_value(UV_DIRENT_DIR));
  mrb_const_set(mrb, DirentType_mod, mrb_intern_lit(mrb, "DIRENT_LINK"), mrb_fixnum_value(UV_DIRENT_LINK));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "DIRENT_LINK"), mrb_fixnum_value(UV_DIRENT_LINK));
  mrb_const_set(mrb, DirentType_mod, mrb_intern_lit(mrb, "DIRENT_FIFO"), mrb_fixnum_value(UV_DIRENT_FIFO));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "DIRENT_FIFO"), mrb_fixnum_value(UV_DIRENT_FIFO));
  mrb_const_set(mrb, DirentType_mod, mrb_intern_lit(mrb, "DIRENT_SOCKET"), mrb_fixnum_value(UV_DIRENT_SOCKET));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "DIRENT_SOCKET"), mrb_fixnum_value(UV_DIRENT_SOCKET));
  mrb_const_set(mrb, DirentType_mod, mrb_intern_lit(mrb, "DIRENT_CHAR"), mrb_fixnum_value(UV_DIRENT_CHAR));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "DIRENT_CHAR"), mrb_fixnum_value(UV_DIRENT_CHAR));
  mrb_const_set(mrb, DirentType_mod, mrb_intern_lit(mrb, "DIRENT_BLOCK"), mrb_fixnum_value(UV_DIRENT_BLOCK));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "DIRENT_BLOCK"), mrb_fixnum_value(UV_DIRENT_BLOCK));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Errno_enum */
/* sha: 49aa860a6042bdc726c6fe0347a3ccde9227ef29de7a38a444cdc23d7fbd9f34 */
  struct RClass * Errno_module = mrb_define_module_under(mrb, UV_module, "Errno");
  mrb_value Errno_mod = mrb_obj_value(Errno_module);
  mrb_const_set(mrb, Errno_mod, mrb_intern_lit(mrb, "ERRNO_MAX"), mrb_fixnum_value(UV_ERRNO_MAX));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "ERRNO_MAX"), mrb_fixnum_value(UV_ERRNO_MAX));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FSType_enum */
/* sha: fa809f852d4f725b3a4404f24a1d40170cfac2b2ee87e914eea596c197edfb46 */
  struct RClass * FSType_module = mrb_define_module_under(mrb, UV_module, "FSType");
  mrb_value FSType_mod = mrb_obj_value(FSType_module);
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_UNKNOWN"), mrb_fixnum_value(UV_FS_UNKNOWN));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_UNKNOWN"), mrb_fixnum_value(UV_FS_UNKNOWN));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_CUSTOM"), mrb_fixnum_value(UV_FS_CUSTOM));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_CUSTOM"), mrb_fixnum_value(UV_FS_CUSTOM));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_OPEN"), mrb_fixnum_value(UV_FS_OPEN));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_OPEN"), mrb_fixnum_value(UV_FS_OPEN));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_CLOSE"), mrb_fixnum_value(UV_FS_CLOSE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_CLOSE"), mrb_fixnum_value(UV_FS_CLOSE));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_READ"), mrb_fixnum_value(UV_FS_READ));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_READ"), mrb_fixnum_value(UV_FS_READ));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_WRITE"), mrb_fixnum_value(UV_FS_WRITE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_WRITE"), mrb_fixnum_value(UV_FS_WRITE));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_SENDFILE"), mrb_fixnum_value(UV_FS_SENDFILE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_SENDFILE"), mrb_fixnum_value(UV_FS_SENDFILE));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_STAT"), mrb_fixnum_value(UV_FS_STAT));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_STAT"), mrb_fixnum_value(UV_FS_STAT));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_LSTAT"), mrb_fixnum_value(UV_FS_LSTAT));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_LSTAT"), mrb_fixnum_value(UV_FS_LSTAT));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_FSTAT"), mrb_fixnum_value(UV_FS_FSTAT));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_FSTAT"), mrb_fixnum_value(UV_FS_FSTAT));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_FTRUNCATE"), mrb_fixnum_value(UV_FS_FTRUNCATE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_FTRUNCATE"), mrb_fixnum_value(UV_FS_FTRUNCATE));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_UTIME"), mrb_fixnum_value(UV_FS_UTIME));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_UTIME"), mrb_fixnum_value(UV_FS_UTIME));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_FUTIME"), mrb_fixnum_value(UV_FS_FUTIME));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_FUTIME"), mrb_fixnum_value(UV_FS_FUTIME));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_ACCESS"), mrb_fixnum_value(UV_FS_ACCESS));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_ACCESS"), mrb_fixnum_value(UV_FS_ACCESS));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_CHMOD"), mrb_fixnum_value(UV_FS_CHMOD));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_CHMOD"), mrb_fixnum_value(UV_FS_CHMOD));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_FCHMOD"), mrb_fixnum_value(UV_FS_FCHMOD));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_FCHMOD"), mrb_fixnum_value(UV_FS_FCHMOD));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_FSYNC"), mrb_fixnum_value(UV_FS_FSYNC));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_FSYNC"), mrb_fixnum_value(UV_FS_FSYNC));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_FDATASYNC"), mrb_fixnum_value(UV_FS_FDATASYNC));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_FDATASYNC"), mrb_fixnum_value(UV_FS_FDATASYNC));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_UNLINK"), mrb_fixnum_value(UV_FS_UNLINK));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_UNLINK"), mrb_fixnum_value(UV_FS_UNLINK));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_RMDIR"), mrb_fixnum_value(UV_FS_RMDIR));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_RMDIR"), mrb_fixnum_value(UV_FS_RMDIR));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_MKDIR"), mrb_fixnum_value(UV_FS_MKDIR));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_MKDIR"), mrb_fixnum_value(UV_FS_MKDIR));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_MKDTEMP"), mrb_fixnum_value(UV_FS_MKDTEMP));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_MKDTEMP"), mrb_fixnum_value(UV_FS_MKDTEMP));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_RENAME"), mrb_fixnum_value(UV_FS_RENAME));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_RENAME"), mrb_fixnum_value(UV_FS_RENAME));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_SCANDIR"), mrb_fixnum_value(UV_FS_SCANDIR));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_SCANDIR"), mrb_fixnum_value(UV_FS_SCANDIR));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_LINK"), mrb_fixnum_value(UV_FS_LINK));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_LINK"), mrb_fixnum_value(UV_FS_LINK));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_SYMLINK"), mrb_fixnum_value(UV_FS_SYMLINK));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_SYMLINK"), mrb_fixnum_value(UV_FS_SYMLINK));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_READLINK"), mrb_fixnum_value(UV_FS_READLINK));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_READLINK"), mrb_fixnum_value(UV_FS_READLINK));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_CHOWN"), mrb_fixnum_value(UV_FS_CHOWN));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_CHOWN"), mrb_fixnum_value(UV_FS_CHOWN));
  mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_FCHOWN"), mrb_fixnum_value(UV_FS_FCHOWN));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_FCHOWN"), mrb_fixnum_value(UV_FS_FCHOWN));
  /* These aren't included in the version `brew install libuv` brings down, it seems. */
  // mrb_const_set(mrb, FSType_mod, mrb_intern_lit(mrb, "FS_REALPATH"), mrb_fixnum_value(UV_FS_REALPATH));
  // mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FS_REALPATH"), mrb_fixnum_value(UV_FS_REALPATH));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: HandleType_enum */
/* sha: a36b4d00e49890cc469bc79192ee3c391a930b6ffe4e4c227fb04e6ffa094093 */
  struct RClass * HandleType_module = mrb_define_module_under(mrb, UV_module, "HandleType");
  mrb_value HandleType_mod = mrb_obj_value(HandleType_module);
  mrb_const_set(mrb, HandleType_mod, mrb_intern_lit(mrb, "UNKNOWN_HANDLE"), mrb_fixnum_value(UV_UNKNOWN_HANDLE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "UNKNOWN_HANDLE"), mrb_fixnum_value(UV_UNKNOWN_HANDLE));
  mrb_const_set(mrb, HandleType_mod, mrb_intern_lit(mrb, "FILE"), mrb_fixnum_value(UV_FILE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "FILE"), mrb_fixnum_value(UV_FILE));
  mrb_const_set(mrb, HandleType_mod, mrb_intern_lit(mrb, "HANDLE_TYPE_MAX"), mrb_fixnum_value(UV_HANDLE_TYPE_MAX));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "HANDLE_TYPE_MAX"), mrb_fixnum_value(UV_HANDLE_TYPE_MAX));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LoopOption_enum */
/* sha: 3c46de34d31051667bb0b7179d93da8f60de7e5fa1e869583d9cf9f465707e69 */
  struct RClass * LoopOption_module = mrb_define_module_under(mrb, UV_module, "LoopOption");
  mrb_value LoopOption_mod = mrb_obj_value(LoopOption_module);
  mrb_const_set(mrb, LoopOption_mod, mrb_intern_lit(mrb, "LOOP_BLOCK_SIGNAL"), mrb_fixnum_value(UV_LOOP_BLOCK_SIGNAL));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "LOOP_BLOCK_SIGNAL"), mrb_fixnum_value(UV_LOOP_BLOCK_SIGNAL));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Membership_enum */
/* sha: ee933350ccea59ac31c6bd5f7fc51b8b63396f4e84aa3ced2aebd44e1a71997d */
  struct RClass * Membership_module = mrb_define_module_under(mrb, UV_module, "Membership");
  mrb_value Membership_mod = mrb_obj_value(Membership_module);
  mrb_const_set(mrb, Membership_mod, mrb_intern_lit(mrb, "LEAVE_GROUP"), mrb_fixnum_value(UV_LEAVE_GROUP));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "LEAVE_GROUP"), mrb_fixnum_value(UV_LEAVE_GROUP));
  mrb_const_set(mrb, Membership_mod, mrb_intern_lit(mrb, "JOIN_GROUP"), mrb_fixnum_value(UV_JOIN_GROUP));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "JOIN_GROUP"), mrb_fixnum_value(UV_JOIN_GROUP));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReqType_enum */
/* sha: 0e0da804dfa33149a4fd8a473aedc37a6bc25f04c3527e824af33a4514d74bb3 */
  struct RClass * ReqType_module = mrb_define_module_under(mrb, UV_module, "ReqType");
  mrb_value ReqType_mod = mrb_obj_value(ReqType_module);
  mrb_const_set(mrb, ReqType_mod, mrb_intern_lit(mrb, "UNKNOWN_REQ"), mrb_fixnum_value(UV_UNKNOWN_REQ));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "UNKNOWN_REQ"), mrb_fixnum_value(UV_UNKNOWN_REQ));
  mrb_const_set(mrb, ReqType_mod, mrb_intern_lit(mrb, "REQ_TYPE_MAX"), mrb_fixnum_value(UV_REQ_TYPE_MAX));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "REQ_TYPE_MAX"), mrb_fixnum_value(UV_REQ_TYPE_MAX));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RunMode_enum */
/* sha: 5e00130a8a9f1a830724906a4e4cf9ba7bbf7708c4d18ec190d204156085f4d2 */
  struct RClass * RunMode_module = mrb_define_module_under(mrb, UV_module, "RunMode");
  mrb_value RunMode_mod = mrb_obj_value(RunMode_module);
  mrb_const_set(mrb, RunMode_mod, mrb_intern_lit(mrb, "RUN_DEFAULT"), mrb_fixnum_value(UV_RUN_DEFAULT));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "RUN_DEFAULT"), mrb_fixnum_value(UV_RUN_DEFAULT));
  mrb_const_set(mrb, RunMode_mod, mrb_intern_lit(mrb, "RUN_ONCE"), mrb_fixnum_value(UV_RUN_ONCE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "RUN_ONCE"), mrb_fixnum_value(UV_RUN_ONCE));
  mrb_const_set(mrb, RunMode_mod, mrb_intern_lit(mrb, "RUN_NOWAIT"), mrb_fixnum_value(UV_RUN_NOWAIT));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "RUN_NOWAIT"), mrb_fixnum_value(UV_RUN_NOWAIT));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: STDIOFlags_enum */
/* sha: e364e16f4fbfc8e41420f9294d6d382f3f662d2e1c1f64bdebb4be484226c463 */
  struct RClass * STDIOFlags_module = mrb_define_module_under(mrb, UV_module, "STDIOFlags");
  mrb_value STDIOFlags_mod = mrb_obj_value(STDIOFlags_module);
  mrb_const_set(mrb, STDIOFlags_mod, mrb_intern_lit(mrb, "IGNORE"), mrb_fixnum_value(UV_IGNORE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "IGNORE"), mrb_fixnum_value(UV_IGNORE));
  mrb_const_set(mrb, STDIOFlags_mod, mrb_intern_lit(mrb, "CREATE_PIPE"), mrb_fixnum_value(UV_CREATE_PIPE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "CREATE_PIPE"), mrb_fixnum_value(UV_CREATE_PIPE));
  mrb_const_set(mrb, STDIOFlags_mod, mrb_intern_lit(mrb, "INHERIT_FD"), mrb_fixnum_value(UV_INHERIT_FD));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "INHERIT_FD"), mrb_fixnum_value(UV_INHERIT_FD));
  mrb_const_set(mrb, STDIOFlags_mod, mrb_intern_lit(mrb, "INHERIT_STREAM"), mrb_fixnum_value(UV_INHERIT_STREAM));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "INHERIT_STREAM"), mrb_fixnum_value(UV_INHERIT_STREAM));
  mrb_const_set(mrb, STDIOFlags_mod, mrb_intern_lit(mrb, "READABLE_PIPE"), mrb_fixnum_value(UV_READABLE_PIPE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "READABLE_PIPE"), mrb_fixnum_value(UV_READABLE_PIPE));
  mrb_const_set(mrb, STDIOFlags_mod, mrb_intern_lit(mrb, "WRITABLE_PIPE"), mrb_fixnum_value(UV_WRITABLE_PIPE));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "WRITABLE_PIPE"), mrb_fixnum_value(UV_WRITABLE_PIPE));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TTYMode_enum */
/* sha: 005a5c27db9e142fdd7640f99b3812b4184dc00d831ff88bfdc7fb2a98c78c0d */
  struct RClass * TTYMode_module = mrb_define_module_under(mrb, UV_module, "TTYMode");
  mrb_value TTYMode_mod = mrb_obj_value(TTYMode_module);
  mrb_const_set(mrb, TTYMode_mod, mrb_intern_lit(mrb, "TTY_MODE_NORMAL"), mrb_fixnum_value(UV_TTY_MODE_NORMAL));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "TTY_MODE_NORMAL"), mrb_fixnum_value(UV_TTY_MODE_NORMAL));
  mrb_const_set(mrb, TTYMode_mod, mrb_intern_lit(mrb, "TTY_MODE_RAW"), mrb_fixnum_value(UV_TTY_MODE_RAW));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "TTY_MODE_RAW"), mrb_fixnum_value(UV_TTY_MODE_RAW));
  mrb_const_set(mrb, TTYMode_mod, mrb_intern_lit(mrb, "TTY_MODE_IO"), mrb_fixnum_value(UV_TTY_MODE_IO));
  mrb_const_set(mrb, UV_mod, mrb_intern_lit(mrb, "TTY_MODE_IO"), mrb_fixnum_value(UV_TTY_MODE_IO));
/* MRUBY_BINDING_END */

}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
