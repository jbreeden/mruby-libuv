/* -- MRUBY_BINDINGS_NO_CLOBBER --
 * uv_stat_t
 * Defined in file uv.h @ line 326
 */

#include "mruby_UV.h"

#if BIND_UvStatT_TYPE

/*
 * Fields
 */

/* MRUBY_BINDING: UvStatT::st_dev_reader */
/* sha: e707c31e703a1fa91deb31dd42977cf36470dd078da498a4f4da3d163c94bb34 */
#if BIND_UvStatT_st_dev_FIELD_READER
/* get_st_dev
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvStatT_get_st_dev(mrb_state* mrb, mrb_value self) {
  uv_stat_t * native_self = mruby_unbox_uv_stat_t(self);

  uint64_t native_st_dev = native_self->st_dev;

  mrb_value st_dev = mrb_fixnum_value(native_st_dev);

  return st_dev;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStatT::st_mode_reader */
/* sha: fa2b6a08655fa6fcc43e46cbf1a2fd35f26d19aa0be5d67c1ce2e0f5ce5077ca */
#if BIND_UvStatT_st_mode_FIELD_READER
/* get_st_mode
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvStatT_get_st_mode(mrb_state* mrb, mrb_value self) {
  uv_stat_t * native_self = mruby_unbox_uv_stat_t(self);

  uint64_t native_st_mode = native_self->st_mode;

  mrb_value st_mode = mrb_fixnum_value(native_st_mode);

  return st_mode;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStatT::st_nlink_reader */
/* sha: 4d52c7b8ccc6e32f226a94762097100a09c9469511d54a41e82192f6040a534f */
#if BIND_UvStatT_st_nlink_FIELD_READER
/* get_st_nlink
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvStatT_get_st_nlink(mrb_state* mrb, mrb_value self) {
  uv_stat_t * native_self = mruby_unbox_uv_stat_t(self);

  uint64_t native_st_nlink = native_self->st_nlink;

  mrb_value st_nlink = mrb_fixnum_value(native_st_nlink);

  return st_nlink;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStatT::st_uid_reader */
/* sha: 8b57c2996896f6bc0264c8b40a22ba4afc320eeea8086c8f8257b50c8a958b46 */
#if BIND_UvStatT_st_uid_FIELD_READER
/* get_st_uid
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvStatT_get_st_uid(mrb_state* mrb, mrb_value self) {
  uv_stat_t * native_self = mruby_unbox_uv_stat_t(self);

  uint64_t native_st_uid = native_self->st_uid;

  mrb_value st_uid = mrb_fixnum_value(native_st_uid);

  return st_uid;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStatT::st_gid_reader */
/* sha: e00b35d4df8a4cf9e9329be94a40810fdb800a011d1440f22732968519e1b7dc */
#if BIND_UvStatT_st_gid_FIELD_READER
/* get_st_gid
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvStatT_get_st_gid(mrb_state* mrb, mrb_value self) {
  uv_stat_t * native_self = mruby_unbox_uv_stat_t(self);

  uint64_t native_st_gid = native_self->st_gid;

  mrb_value st_gid = mrb_fixnum_value(native_st_gid);

  return st_gid;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStatT::st_rdev_reader */
/* sha: 64be85204cee80e31e451d218a5b2d00385fab97238ed62a4cf150ef0eec8557 */
#if BIND_UvStatT_st_rdev_FIELD_READER
/* get_st_rdev
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvStatT_get_st_rdev(mrb_state* mrb, mrb_value self) {
  uv_stat_t * native_self = mruby_unbox_uv_stat_t(self);

  uint64_t native_st_rdev = native_self->st_rdev;

  mrb_value st_rdev = mrb_fixnum_value(native_st_rdev);

  return st_rdev;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStatT::st_ino_reader */
/* sha: 0d754fb665d1eae9f2e07096846626762f8b7ad86fba50c182d33307d8dd1cd5 */
#if BIND_UvStatT_st_ino_FIELD_READER
/* get_st_ino
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvStatT_get_st_ino(mrb_state* mrb, mrb_value self) {
  uv_stat_t * native_self = mruby_unbox_uv_stat_t(self);

  uint64_t native_st_ino = native_self->st_ino;

  mrb_value st_ino = mrb_fixnum_value(native_st_ino);

  return st_ino;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStatT::st_size_reader */
/* sha: 8e15c683a8a76bbe7385b81cfb4b3a911a02884bce24c38cb108d8a0ca7b803b */
#if BIND_UvStatT_st_size_FIELD_READER
/* get_st_size
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvStatT_get_st_size(mrb_state* mrb, mrb_value self) {
  uv_stat_t * native_self = mruby_unbox_uv_stat_t(self);

  uint64_t native_st_size = native_self->st_size;

  mrb_value st_size = mrb_fixnum_value(native_st_size);

  return st_size;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStatT::st_blksize_reader */
/* sha: 632a4b0bfb4fce8b2ebdfb869e300d999f4a7d613698c8c9f5e6dbf24ec76a3c */
#if BIND_UvStatT_st_blksize_FIELD_READER
/* get_st_blksize
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvStatT_get_st_blksize(mrb_state* mrb, mrb_value self) {
  uv_stat_t * native_self = mruby_unbox_uv_stat_t(self);

  uint64_t native_st_blksize = native_self->st_blksize;

  mrb_value st_blksize = mrb_fixnum_value(native_st_blksize);

  return st_blksize;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStatT::st_blocks_reader */
/* sha: b40ffb4b83b28fb2021030cfa89d884748263fcff33c49909c6b2560548b0f20 */
#if BIND_UvStatT_st_blocks_FIELD_READER
/* get_st_blocks
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvStatT_get_st_blocks(mrb_state* mrb, mrb_value self) {
  uv_stat_t * native_self = mruby_unbox_uv_stat_t(self);

  uint64_t native_st_blocks = native_self->st_blocks;

  mrb_value st_blocks = mrb_fixnum_value(native_st_blocks);

  return st_blocks;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStatT::st_flags_reader */
/* sha: adddb4c3fb76fddb9bfea9f5e107b7690dca6a22f35a3fc1c8ef5946b3241f4c */
#if BIND_UvStatT_st_flags_FIELD_READER
/* get_st_flags
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvStatT_get_st_flags(mrb_state* mrb, mrb_value self) {
  uv_stat_t * native_self = mruby_unbox_uv_stat_t(self);

  uint64_t native_st_flags = native_self->st_flags;

  mrb_value st_flags = mrb_fixnum_value(native_st_flags);

  return st_flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStatT::st_gen_reader */
/* sha: 780706858931e44577796c97d327aa6bc7377f952541aebbf65c1d2fd0a26ebb */
#if BIND_UvStatT_st_gen_FIELD_READER
/* get_st_gen
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvStatT_get_st_gen(mrb_state* mrb, mrb_value self) {
  uv_stat_t * native_self = mruby_unbox_uv_stat_t(self);

  uint64_t native_st_gen = native_self->st_gen;

  mrb_value st_gen = mrb_fixnum_value(native_st_gen);

  return st_gen;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStatT::st_atim_reader */
/* sha: 77069e3fa4995709f1cd95c38474f8dff1d3a064f5e62e0f2fffbfd6be22aa42 */
#if BIND_UvStatT_st_atim_FIELD_READER
/* get_st_atim
 *
 * Return Type: uv_timespec_t
 */
mrb_value
mrb_UV_UvStatT_get_st_atim(mrb_state* mrb, mrb_value self) {
  uv_stat_t * native_self = mruby_unbox_uv_stat_t(self);

  struct RClass* time_class = mrb_class_get(mrb, "Time");
  return mrb_funcall(mrb, mrb_obj_value(time_class), "at", 1, mrb_fixnum_value(native_self->st_atim.tv_sec));
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStatT::st_mtim_reader */
/* sha: 7847262c18adcc6cff5910b452ea5761c367173b944ea7c443d326e3be5a4657 */
#if BIND_UvStatT_st_mtim_FIELD_READER
/* get_st_mtim
 *
 * Return Type: uv_timespec_t
 */
mrb_value
mrb_UV_UvStatT_get_st_mtim(mrb_state* mrb, mrb_value self) {
  uv_stat_t * native_self = mruby_unbox_uv_stat_t(self);

  struct RClass* time_class = mrb_class_get(mrb, "Time");
  return mrb_funcall(mrb, mrb_obj_value(time_class), "at", 1, mrb_fixnum_value(native_self->st_mtim.tv_sec));
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStatT::st_ctim_reader */
/* sha: b6d10c7787e2eca5839b75454059097706e1d7ccc6fdedc154e030f9a9275215 */
#if BIND_UvStatT_st_ctim_FIELD_READER
/* get_st_ctim
 *
 * Return Type: uv_timespec_t
 */
mrb_value
mrb_UV_UvStatT_get_st_ctim(mrb_state* mrb, mrb_value self) {
  uv_stat_t * native_self = mruby_unbox_uv_stat_t(self);

  struct RClass* time_class = mrb_class_get(mrb, "Time");
  return mrb_funcall(mrb, mrb_obj_value(time_class), "at", 1, mrb_fixnum_value(native_self->st_ctim.tv_sec));
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStatT::st_birthtim_reader */
/* sha: d14da4405c22d47b139b6786c442356b78ca6208869d5471dc0b1bd7bef61355 */
#if BIND_UvStatT_st_birthtim_FIELD_READER
/* get_st_birthtim
 *
 * Return Type: uv_timespec_t
 */
mrb_value
mrb_UV_UvStatT_get_st_birthtim(mrb_state* mrb, mrb_value self) {
  uv_stat_t * native_self = mruby_unbox_uv_stat_t(self);

  struct RClass* time_class = mrb_class_get(mrb, "Time");
  return mrb_funcall(mrb, mrb_obj_value(time_class), "at", 1, mrb_fixnum_value(native_self->st_birthtim.tv_sec));
}
#endif
/* MRUBY_BINDING_END */

void mrb_UV_UvStatT_init(mrb_state* mrb) {
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

  struct RClass* Stat_class = mrb_define_class_under(mrb, UV_module(mrb), "UvStatT", mrb->object_class);
  MRB_SET_INSTANCE_TT(Stat_class, MRB_TT_DATA);

  /*
   * Fields
   */
#if BIND_UvStatT_st_dev_FIELD_READER
  mrb_define_method(mrb, Stat_class, "st_dev", mrb_UV_UvStatT_get_st_dev, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_mode_FIELD_READER
  mrb_define_method(mrb, Stat_class, "st_mode", mrb_UV_UvStatT_get_st_mode, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_nlink_FIELD_READER
  mrb_define_method(mrb, Stat_class, "st_nlink", mrb_UV_UvStatT_get_st_nlink, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_uid_FIELD_READER
  mrb_define_method(mrb, Stat_class, "st_uid", mrb_UV_UvStatT_get_st_uid, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_gid_FIELD_READER
  mrb_define_method(mrb, Stat_class, "st_gid", mrb_UV_UvStatT_get_st_gid, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_rdev_FIELD_READER
  mrb_define_method(mrb, Stat_class, "st_rdev", mrb_UV_UvStatT_get_st_rdev, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_ino_FIELD_READER
  mrb_define_method(mrb, Stat_class, "st_ino", mrb_UV_UvStatT_get_st_ino, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_size_FIELD_READER
  mrb_define_method(mrb, Stat_class, "st_size", mrb_UV_UvStatT_get_st_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_blksize_FIELD_READER
  mrb_define_method(mrb, Stat_class, "st_blksize", mrb_UV_UvStatT_get_st_blksize, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_blocks_FIELD_READER
  mrb_define_method(mrb, Stat_class, "st_blocks", mrb_UV_UvStatT_get_st_blocks, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_flags_FIELD_READER
  mrb_define_method(mrb, Stat_class, "st_flags", mrb_UV_UvStatT_get_st_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_gen_FIELD_READER
  mrb_define_method(mrb, Stat_class, "st_gen", mrb_UV_UvStatT_get_st_gen, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_atim_FIELD_READER
  mrb_define_method(mrb, Stat_class, "st_atim", mrb_UV_UvStatT_get_st_atim, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_mtim_FIELD_READER
  mrb_define_method(mrb, Stat_class, "st_mtim", mrb_UV_UvStatT_get_st_mtim, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_ctim_FIELD_READER
  mrb_define_method(mrb, Stat_class, "st_ctim", mrb_UV_UvStatT_get_st_ctim, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_birthtim_FIELD_READER
  mrb_define_method(mrb, Stat_class, "st_birthtim", mrb_UV_UvStatT_get_st_birthtim, MRB_ARGS_ARG(0, 0));
#endif
}
#endif
