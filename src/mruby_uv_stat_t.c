/*
 * uv_stat_t
 * Defined in file uv.h @ line 326
 */

#include "mruby_UV.h"

#if BIND_UvStatT_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/*
 * Note: All attr writers for this type are disabled.
 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvStatT::initialize */
/* sha: b47ebd5bf14a1538ff672e229e66d83a05282d6625566fb6184245bb6d454300 */
#if BIND_UvStatT_INITIALIZE
mrb_value
mrb_UV_UvStatT_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Uncomment (and optionally replace) if an initializer is desired.
  uv_stat_t* native_object = (uv_stat_t*)calloc(1, sizeof(uv_stat_t));
  mruby_gift_uv_stat_t_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStatT::disown */
/* sha: ec6f896f2c9f19389939ce8a84795e77596fa8b4d84e62471e62222a35467fd6 */
mrb_value
mrb_UV_UvStatT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvStatT.disown only accepts objects of type UV::UvStatT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStatT::belongs_to_ruby */
/* sha: 3917a330267ad42583ce7d4c77b0c5c1e8671702c6b2a227218ec1ea1f03f3ab */
mrb_value
mrb_UV_UvStatT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvStatT.belongs_to_ruby only accepts objects of type UV::UvStatT");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */

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

/* MRUBY_BINDING: UvStatT::st_dev_writer */
/* sha: 691711ceaba5e60f1675528619fb36e50beaebf300dda06fa50d03deefff35e5 */
/* TODO: Keep this comment so mruby-bindings keeps this binding disabled */
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

/* MRUBY_BINDING: UvStatT::st_mode_writer */
/* sha: 0c6b95d064ea413891925fdb091899e9ac7bee965abf9c40790cd2a0ff0576c4 */
/* TODO: Keep this comment so mruby-bindings keeps this binding disabled */
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

/* MRUBY_BINDING: UvStatT::st_nlink_writer */
/* sha: a4ba26fbe15290c4b39c719eaa39658d39c9b32a8d4ee62837e5751c8b532293 */
/* TODO: Keep this comment so mruby-bindings keeps this binding disabled */
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

/* MRUBY_BINDING: UvStatT::st_uid_writer */
/* sha: 4d29e7b1bb3a9cd5bd665e0951cf4cc4af397109dd89bda241d92901b64a122e */
/* TODO: Keep this comment so mruby-bindings keeps this binding disabled */
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

/* MRUBY_BINDING: UvStatT::st_gid_writer */
/* sha: f273e83642c2294a496462eaa5e77f66d4639a350fb8cca5be025465cde9b38d */
/* TODO: Keep this comment so mruby-bindings keeps this binding disabled */
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

/* MRUBY_BINDING: UvStatT::st_rdev_writer */
/* sha: 84517306f9409919377854fcbdb3951ef1cc6246cb61d85e5bf10e2221d45b60 */
/* TODO: Keep this comment so mruby-bindings keeps this binding disabled */
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

/* MRUBY_BINDING: UvStatT::st_ino_writer */
/* sha: f9c006b7e65c6ac75d11036b474a07ff4db9e2d32b18205c551552a240eddda0 */
/* TODO: Keep this comment so mruby-bindings keeps this binding disabled */
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

/* MRUBY_BINDING: UvStatT::st_size_writer */
/* sha: 14803d186eb467759850533fcd07f30bb45c525134821203c0baec793eb68306 */
/* TODO: Keep this comment so mruby-bindings keeps this binding disabled */
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

/* MRUBY_BINDING: UvStatT::st_blksize_writer */
/* sha: 591360bb3b33a25d6c657c7906c4e6c5a71e47c455a90cb856a737280f33781a */
/* TODO: Keep this comment so mruby-bindings keeps this binding disabled */
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

/* MRUBY_BINDING: UvStatT::st_blocks_writer */
/* sha: 6103dfabd3d56bf611e56a8c3840ec7e72f85315e43c1a6a29f02d3ac0aaee58 */
/* TODO: Keep this comment so mruby-bindings keeps this binding disabled */
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

/* MRUBY_BINDING: UvStatT::st_flags_writer */
/* sha: 79e390be94ba9ef9e8e39aa3881ef6598eb68aaa097cdc102806c49f341e8161 */
/* TODO: Keep this comment so mruby-bindings keeps this binding disabled */
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

/* MRUBY_BINDING: UvStatT::st_gen_writer */
/* sha: 88b0ed5d3dc131bb4380b59de42d9243d5cd7b93df0924cfadec8476a49fbb21 */
/* TODO: Keep this comment so mruby-bindings keeps this binding disabled */
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

/* MRUBY_BINDING: UvStatT::st_atim_writer */
/* sha: 7f6b39342e471a974e44c0232b8b385511ebb8c2d1b8d4c4c34c08a9834824c3 */
/* TODO: Keep this comment so mruby-bindings keeps this binding disabled */
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

/* MRUBY_BINDING: UvStatT::st_mtim_writer */
/* sha: daf7ee031d448e4c7a511c0959de9547379abe30602b02c31e439ef53c046236 */
/* TODO: Keep this comment so mruby-bindings keeps this binding disabled */
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

/* MRUBY_BINDING: UvStatT::st_ctim_writer */
/* sha: fb65cba62ede0fc8e79ac195c8159a99942245c5b03663ff5b7ef5fab0c07f08 */
/* TODO: Keep this comment so mruby-bindings keeps this binding disabled */
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

/* MRUBY_BINDING: UvStatT::st_birthtim_writer */
/* sha: 652a488cb3aba8a2bd53311cd88daacf0a6b38b546399de9ad16b8b269a52288 */
/* TODO: Keep this comment so mruby-bindings keeps this binding disabled */
/* MRUBY_BINDING_END */


void mrb_UV_UvStatT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvStatT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStatT::class_definition */
/* sha: 866886d81b3ddc18e12831dd100728122c62541f843aeb2fce405c9a0f1b902c */
  struct RClass* UvStatT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvStatT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvStatT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStatT::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStatT::class_method_definitions */
/* sha: e21110db72e30af27c9764f12d78c7906f0709963b7e425b00feb35c64327a11 */
#if BIND_UvStatT_INITIALIZE
  mrb_define_method(mrb, UvStatT_class, "initialize", mrb_UV_UvStatT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvStatT_class, "disown", mrb_UV_UvStatT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvStatT_class, "belongs_to_ruby?", mrb_UV_UvStatT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStatT::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStatT::attr_definitions */
/* sha: 7944132512ab4369b8448ab3a93906533dba3675d90640a365d47b070410656b */
  /*
   * Fields
   */
#if BIND_UvStatT_st_dev_FIELD_READER
  mrb_define_method(mrb, UvStatT_class, "st_dev", mrb_UV_UvStatT_get_st_dev, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_mode_FIELD_READER
  mrb_define_method(mrb, UvStatT_class, "st_mode", mrb_UV_UvStatT_get_st_mode, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_nlink_FIELD_READER
  mrb_define_method(mrb, UvStatT_class, "st_nlink", mrb_UV_UvStatT_get_st_nlink, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_uid_FIELD_READER
  mrb_define_method(mrb, UvStatT_class, "st_uid", mrb_UV_UvStatT_get_st_uid, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_gid_FIELD_READER
  mrb_define_method(mrb, UvStatT_class, "st_gid", mrb_UV_UvStatT_get_st_gid, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_rdev_FIELD_READER
  mrb_define_method(mrb, UvStatT_class, "st_rdev", mrb_UV_UvStatT_get_st_rdev, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_ino_FIELD_READER
  mrb_define_method(mrb, UvStatT_class, "st_ino", mrb_UV_UvStatT_get_st_ino, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_size_FIELD_READER
  mrb_define_method(mrb, UvStatT_class, "st_size", mrb_UV_UvStatT_get_st_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_blksize_FIELD_READER
  mrb_define_method(mrb, UvStatT_class, "st_blksize", mrb_UV_UvStatT_get_st_blksize, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_blocks_FIELD_READER
  mrb_define_method(mrb, UvStatT_class, "st_blocks", mrb_UV_UvStatT_get_st_blocks, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_flags_FIELD_READER
  mrb_define_method(mrb, UvStatT_class, "st_flags", mrb_UV_UvStatT_get_st_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_gen_FIELD_READER
  mrb_define_method(mrb, UvStatT_class, "st_gen", mrb_UV_UvStatT_get_st_gen, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_atim_FIELD_READER
  mrb_define_method(mrb, UvStatT_class, "st_atim", mrb_UV_UvStatT_get_st_atim, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_mtim_FIELD_READER
  mrb_define_method(mrb, UvStatT_class, "st_mtim", mrb_UV_UvStatT_get_st_mtim, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_ctim_FIELD_READER
  mrb_define_method(mrb, UvStatT_class, "st_ctim", mrb_UV_UvStatT_get_st_ctim, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvStatT_st_birthtim_FIELD_READER
  mrb_define_method(mrb, UvStatT_class, "st_birthtim", mrb_UV_UvStatT_get_st_birthtim, MRB_ARGS_ARG(0, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStatT::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStatT::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvStatT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
