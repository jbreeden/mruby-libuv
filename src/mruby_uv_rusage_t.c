/*
 * uv_rusage_t
 * Defined in file uv.h @ line 1030
 */

#include "mruby_UV.h"

#if BIND_RUsage_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::initialize */
/* sha: f483b67c554f5e6f1cda926462062d95ccdb8cf0683fe8e752901acb55858a01 */
#if BIND_RUsage_INITIALIZE
mrb_value
mrb_UV_RUsage_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  uv_rusage_t* native_object = (uv_rusage_t*)calloc(1, sizeof(uv_rusage_t));
  mruby_gift_uv_rusage_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: RUsage::ru_utime_reader */
/* sha: acf286c2a0aa909a318bc9c14a33641a25188f6ee8d845b6366ef8266d8ced28 */
#if BIND_RUsage_ru_utime_FIELD_READER
/* get_ru_utime
 *
 * Return Type: uv_timeval_t
 */
mrb_value
mrb_UV_RUsage_get_ru_utime(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uv_timeval_t native_ru_utime = native_self->ru_utime;

  uv_timeval_t* new_ru_utime = TODO_move_uv_timeval_t_to_heap(native_ru_utime);
  mrb_value ru_utime = mruby_box_uv_timeval_t(mrb, &native_ru_utime);

  return ru_utime;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_utime_writer */
/* sha: 2d71bec89e6b1c881ecd085476f4d91d1eb49e46d0582e2ef33ab6426dde1522 */
#if BIND_RUsage_ru_utime_FIELD_WRITER
/* set_ru_utime
 *
 * Parameters:
 * - value: uv_timeval_t
 */
mrb_value
mrb_UV_RUsage_set_ru_utime(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_utime;

  mrb_get_args(mrb, "o", &ru_utime);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ru_utime, Timeval_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Timeval expected");
    return mrb_nil_value();
  }

  uv_timeval_t native_ru_utime = *(mruby_unbox_uv_timeval_t(ru_utime));

  native_self->ru_utime = native_ru_utime;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_stime_reader */
/* sha: 867f45fa3dde3b186f962ac2c7498b759d27ab267689153bf78e84cdc214087e */
#if BIND_RUsage_ru_stime_FIELD_READER
/* get_ru_stime
 *
 * Return Type: uv_timeval_t
 */
mrb_value
mrb_UV_RUsage_get_ru_stime(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uv_timeval_t native_ru_stime = native_self->ru_stime;

  uv_timeval_t* new_ru_stime = TODO_move_uv_timeval_t_to_heap(native_ru_stime);
  mrb_value ru_stime = mruby_box_uv_timeval_t(mrb, &native_ru_stime);

  return ru_stime;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_stime_writer */
/* sha: aef958c919524b282d827bbbba93ef46abe5785c36cf94b41c1caa77ea5a7cf3 */
#if BIND_RUsage_ru_stime_FIELD_WRITER
/* set_ru_stime
 *
 * Parameters:
 * - value: uv_timeval_t
 */
mrb_value
mrb_UV_RUsage_set_ru_stime(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_stime;

  mrb_get_args(mrb, "o", &ru_stime);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ru_stime, Timeval_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Timeval expected");
    return mrb_nil_value();
  }

  uv_timeval_t native_ru_stime = *(mruby_unbox_uv_timeval_t(ru_stime));

  native_self->ru_stime = native_ru_stime;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_maxrss_reader */
/* sha: a4db80a3121fb6742e3b4654413e3b64ae3541c333656611957390a562b278d4 */
#if BIND_RUsage_ru_maxrss_FIELD_READER
/* get_ru_maxrss
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_RUsage_get_ru_maxrss(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_maxrss = native_self->ru_maxrss;

  mrb_value ru_maxrss = TODO_mruby_box_uint64_t(mrb, native_ru_maxrss);

  return ru_maxrss;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_maxrss_writer */
/* sha: 15bd7255f6b5db4a351e4fc985f068ea210e2c711e2cfd58bae7bd23244f4f02 */
#if BIND_RUsage_ru_maxrss_FIELD_WRITER
/* set_ru_maxrss
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_RUsage_set_ru_maxrss(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_maxrss;

  mrb_get_args(mrb, "o", &ru_maxrss);

  /* type checking */
  TODO_type_check_uint64_t(ru_maxrss);

  uint64_t native_ru_maxrss = TODO_mruby_unbox_uint64_t(ru_maxrss);

  native_self->ru_maxrss = native_ru_maxrss;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_ixrss_reader */
/* sha: 9904967ef666eeee1ea541124c5043e3d8a5f9dbb6b94479aa152d58e114fd8e */
#if BIND_RUsage_ru_ixrss_FIELD_READER
/* get_ru_ixrss
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_RUsage_get_ru_ixrss(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_ixrss = native_self->ru_ixrss;

  mrb_value ru_ixrss = TODO_mruby_box_uint64_t(mrb, native_ru_ixrss);

  return ru_ixrss;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_ixrss_writer */
/* sha: 0e5d97d625c68b913cd0c07a4a021af7d45547160087c06a0610b7d6cce8459b */
#if BIND_RUsage_ru_ixrss_FIELD_WRITER
/* set_ru_ixrss
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_RUsage_set_ru_ixrss(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_ixrss;

  mrb_get_args(mrb, "o", &ru_ixrss);

  /* type checking */
  TODO_type_check_uint64_t(ru_ixrss);

  uint64_t native_ru_ixrss = TODO_mruby_unbox_uint64_t(ru_ixrss);

  native_self->ru_ixrss = native_ru_ixrss;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_idrss_reader */
/* sha: dd673f515c2fe590e8bb56047e5fb9721ea2686b57c0da057d6085388be78946 */
#if BIND_RUsage_ru_idrss_FIELD_READER
/* get_ru_idrss
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_RUsage_get_ru_idrss(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_idrss = native_self->ru_idrss;

  mrb_value ru_idrss = TODO_mruby_box_uint64_t(mrb, native_ru_idrss);

  return ru_idrss;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_idrss_writer */
/* sha: 12e79245241ca85c28352e07ba772f53a2867df2043cca4fe00fa3714a0fde51 */
#if BIND_RUsage_ru_idrss_FIELD_WRITER
/* set_ru_idrss
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_RUsage_set_ru_idrss(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_idrss;

  mrb_get_args(mrb, "o", &ru_idrss);

  /* type checking */
  TODO_type_check_uint64_t(ru_idrss);

  uint64_t native_ru_idrss = TODO_mruby_unbox_uint64_t(ru_idrss);

  native_self->ru_idrss = native_ru_idrss;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_isrss_reader */
/* sha: 97d69e9070d1c22c482b77870da215d1fc5b339a294a101fb66a9653b49e90b9 */
#if BIND_RUsage_ru_isrss_FIELD_READER
/* get_ru_isrss
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_RUsage_get_ru_isrss(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_isrss = native_self->ru_isrss;

  mrb_value ru_isrss = TODO_mruby_box_uint64_t(mrb, native_ru_isrss);

  return ru_isrss;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_isrss_writer */
/* sha: 4a0826a754b0ab1d98895236ad7dc30617df3120734e0f8f679552b71456c595 */
#if BIND_RUsage_ru_isrss_FIELD_WRITER
/* set_ru_isrss
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_RUsage_set_ru_isrss(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_isrss;

  mrb_get_args(mrb, "o", &ru_isrss);

  /* type checking */
  TODO_type_check_uint64_t(ru_isrss);

  uint64_t native_ru_isrss = TODO_mruby_unbox_uint64_t(ru_isrss);

  native_self->ru_isrss = native_ru_isrss;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_minflt_reader */
/* sha: d31b5fee94e9a804da5e1ebf3dd8f99d74144de6535447957e63a3fd998617f4 */
#if BIND_RUsage_ru_minflt_FIELD_READER
/* get_ru_minflt
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_RUsage_get_ru_minflt(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_minflt = native_self->ru_minflt;

  mrb_value ru_minflt = TODO_mruby_box_uint64_t(mrb, native_ru_minflt);

  return ru_minflt;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_minflt_writer */
/* sha: f5dac9be8925497e947ea2e9dc9acbbe9373970de32e8b0f0e7c9d81b054c60e */
#if BIND_RUsage_ru_minflt_FIELD_WRITER
/* set_ru_minflt
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_RUsage_set_ru_minflt(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_minflt;

  mrb_get_args(mrb, "o", &ru_minflt);

  /* type checking */
  TODO_type_check_uint64_t(ru_minflt);

  uint64_t native_ru_minflt = TODO_mruby_unbox_uint64_t(ru_minflt);

  native_self->ru_minflt = native_ru_minflt;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_majflt_reader */
/* sha: 614d610cb5b25571333a7828fd5e2ff92bf08d4c1293c7109baa2d9128b2dbfb */
#if BIND_RUsage_ru_majflt_FIELD_READER
/* get_ru_majflt
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_RUsage_get_ru_majflt(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_majflt = native_self->ru_majflt;

  mrb_value ru_majflt = TODO_mruby_box_uint64_t(mrb, native_ru_majflt);

  return ru_majflt;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_majflt_writer */
/* sha: 30ab2b4f04be3e92c4e3002660f1fd03467e2ea1638dce5cba440f092bef1698 */
#if BIND_RUsage_ru_majflt_FIELD_WRITER
/* set_ru_majflt
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_RUsage_set_ru_majflt(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_majflt;

  mrb_get_args(mrb, "o", &ru_majflt);

  /* type checking */
  TODO_type_check_uint64_t(ru_majflt);

  uint64_t native_ru_majflt = TODO_mruby_unbox_uint64_t(ru_majflt);

  native_self->ru_majflt = native_ru_majflt;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_nswap_reader */
/* sha: c5a167e545b81b4698197f0fcd4997749c87be48d03dec83663226a09150a907 */
#if BIND_RUsage_ru_nswap_FIELD_READER
/* get_ru_nswap
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_RUsage_get_ru_nswap(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_nswap = native_self->ru_nswap;

  mrb_value ru_nswap = TODO_mruby_box_uint64_t(mrb, native_ru_nswap);

  return ru_nswap;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_nswap_writer */
/* sha: 8a3e4452bcc8653b831045adf42bacda3eee0d76dab30c60ea3f9891a5b5e0cc */
#if BIND_RUsage_ru_nswap_FIELD_WRITER
/* set_ru_nswap
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_RUsage_set_ru_nswap(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_nswap;

  mrb_get_args(mrb, "o", &ru_nswap);

  /* type checking */
  TODO_type_check_uint64_t(ru_nswap);

  uint64_t native_ru_nswap = TODO_mruby_unbox_uint64_t(ru_nswap);

  native_self->ru_nswap = native_ru_nswap;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_inblock_reader */
/* sha: 58b87934d5693f9893e0e68a5d09f09b2440427a19336c6488d00fc1e4f4c1a9 */
#if BIND_RUsage_ru_inblock_FIELD_READER
/* get_ru_inblock
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_RUsage_get_ru_inblock(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_inblock = native_self->ru_inblock;

  mrb_value ru_inblock = TODO_mruby_box_uint64_t(mrb, native_ru_inblock);

  return ru_inblock;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_inblock_writer */
/* sha: be00ced2e211d10ee93319902fa1a318f89317681a2255e09ffbc4fa38dc37e9 */
#if BIND_RUsage_ru_inblock_FIELD_WRITER
/* set_ru_inblock
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_RUsage_set_ru_inblock(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_inblock;

  mrb_get_args(mrb, "o", &ru_inblock);

  /* type checking */
  TODO_type_check_uint64_t(ru_inblock);

  uint64_t native_ru_inblock = TODO_mruby_unbox_uint64_t(ru_inblock);

  native_self->ru_inblock = native_ru_inblock;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_oublock_reader */
/* sha: 4afab4711cdfcc695bbd4303c1fd9e44f9e481c91db945ec2c02a938cd73ea60 */
#if BIND_RUsage_ru_oublock_FIELD_READER
/* get_ru_oublock
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_RUsage_get_ru_oublock(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_oublock = native_self->ru_oublock;

  mrb_value ru_oublock = TODO_mruby_box_uint64_t(mrb, native_ru_oublock);

  return ru_oublock;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_oublock_writer */
/* sha: 73791f4e3efae76081f7e77ba3f6d40f5372096db94e2b4952e76445ae9b45d1 */
#if BIND_RUsage_ru_oublock_FIELD_WRITER
/* set_ru_oublock
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_RUsage_set_ru_oublock(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_oublock;

  mrb_get_args(mrb, "o", &ru_oublock);

  /* type checking */
  TODO_type_check_uint64_t(ru_oublock);

  uint64_t native_ru_oublock = TODO_mruby_unbox_uint64_t(ru_oublock);

  native_self->ru_oublock = native_ru_oublock;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_msgsnd_reader */
/* sha: afc046ab4dce170a3a4f852fdbde1948a72c18ab56cf26275a81844f1917b94d */
#if BIND_RUsage_ru_msgsnd_FIELD_READER
/* get_ru_msgsnd
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_RUsage_get_ru_msgsnd(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_msgsnd = native_self->ru_msgsnd;

  mrb_value ru_msgsnd = TODO_mruby_box_uint64_t(mrb, native_ru_msgsnd);

  return ru_msgsnd;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_msgsnd_writer */
/* sha: a8d9dfefa025e4580317050273e66a9f86fd1eec831f8c530fb1e7718f2ae519 */
#if BIND_RUsage_ru_msgsnd_FIELD_WRITER
/* set_ru_msgsnd
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_RUsage_set_ru_msgsnd(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_msgsnd;

  mrb_get_args(mrb, "o", &ru_msgsnd);

  /* type checking */
  TODO_type_check_uint64_t(ru_msgsnd);

  uint64_t native_ru_msgsnd = TODO_mruby_unbox_uint64_t(ru_msgsnd);

  native_self->ru_msgsnd = native_ru_msgsnd;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_msgrcv_reader */
/* sha: 1a14c57d3c1a6bfaa73c52404d5d46b6374d3953498f620e56062928e4bd3ec7 */
#if BIND_RUsage_ru_msgrcv_FIELD_READER
/* get_ru_msgrcv
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_RUsage_get_ru_msgrcv(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_msgrcv = native_self->ru_msgrcv;

  mrb_value ru_msgrcv = TODO_mruby_box_uint64_t(mrb, native_ru_msgrcv);

  return ru_msgrcv;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_msgrcv_writer */
/* sha: 7c8fda584f4da9654b86e7572f90d7591db240f0ba79179d8e3333d6db7838ab */
#if BIND_RUsage_ru_msgrcv_FIELD_WRITER
/* set_ru_msgrcv
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_RUsage_set_ru_msgrcv(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_msgrcv;

  mrb_get_args(mrb, "o", &ru_msgrcv);

  /* type checking */
  TODO_type_check_uint64_t(ru_msgrcv);

  uint64_t native_ru_msgrcv = TODO_mruby_unbox_uint64_t(ru_msgrcv);

  native_self->ru_msgrcv = native_ru_msgrcv;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_nsignals_reader */
/* sha: 1fdf614c24e6f5e201c88617ec284734f31ddbd2c08a1ecfe943f3fe51d69f65 */
#if BIND_RUsage_ru_nsignals_FIELD_READER
/* get_ru_nsignals
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_RUsage_get_ru_nsignals(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_nsignals = native_self->ru_nsignals;

  mrb_value ru_nsignals = TODO_mruby_box_uint64_t(mrb, native_ru_nsignals);

  return ru_nsignals;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_nsignals_writer */
/* sha: e542fc27341460d15744140e98f3cba16c4929c4833d4d6559658a36f9ca7d34 */
#if BIND_RUsage_ru_nsignals_FIELD_WRITER
/* set_ru_nsignals
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_RUsage_set_ru_nsignals(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_nsignals;

  mrb_get_args(mrb, "o", &ru_nsignals);

  /* type checking */
  TODO_type_check_uint64_t(ru_nsignals);

  uint64_t native_ru_nsignals = TODO_mruby_unbox_uint64_t(ru_nsignals);

  native_self->ru_nsignals = native_ru_nsignals;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_nvcsw_reader */
/* sha: 4cacfb259ffc7ba4f0edf8cf0eb729bb1fe87109a2bbd42d22fa721860dacc50 */
#if BIND_RUsage_ru_nvcsw_FIELD_READER
/* get_ru_nvcsw
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_RUsage_get_ru_nvcsw(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_nvcsw = native_self->ru_nvcsw;

  mrb_value ru_nvcsw = TODO_mruby_box_uint64_t(mrb, native_ru_nvcsw);

  return ru_nvcsw;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_nvcsw_writer */
/* sha: f880d0cb004e0a02bc1abeab6839237c9dd38944368bf904737fae6068e237d2 */
#if BIND_RUsage_ru_nvcsw_FIELD_WRITER
/* set_ru_nvcsw
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_RUsage_set_ru_nvcsw(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_nvcsw;

  mrb_get_args(mrb, "o", &ru_nvcsw);

  /* type checking */
  TODO_type_check_uint64_t(ru_nvcsw);

  uint64_t native_ru_nvcsw = TODO_mruby_unbox_uint64_t(ru_nvcsw);

  native_self->ru_nvcsw = native_ru_nvcsw;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_nivcsw_reader */
/* sha: e0e462969a0affa014a989f88a69f66f9756f5c7e281cf20038fce5836194474 */
#if BIND_RUsage_ru_nivcsw_FIELD_READER
/* get_ru_nivcsw
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_RUsage_get_ru_nivcsw(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_nivcsw = native_self->ru_nivcsw;

  mrb_value ru_nivcsw = TODO_mruby_box_uint64_t(mrb, native_ru_nivcsw);

  return ru_nivcsw;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_nivcsw_writer */
/* sha: 8dc8c21590a3799cf16a81fe696e63b5c911b57b0c5864218f885a182f8c59b8 */
#if BIND_RUsage_ru_nivcsw_FIELD_WRITER
/* set_ru_nivcsw
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_RUsage_set_ru_nivcsw(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_nivcsw;

  mrb_get_args(mrb, "o", &ru_nivcsw);

  /* type checking */
  TODO_type_check_uint64_t(ru_nivcsw);

  uint64_t native_ru_nivcsw = TODO_mruby_unbox_uint64_t(ru_nivcsw);

  native_self->ru_nivcsw = native_ru_nivcsw;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_RUsage_init(mrb_state* mrb) {
/* MRUBY_BINDING: RUsage::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::class_definition */
/* sha: d5cc2aeb3c404f9871e6755845bac403ab61750441ad6e1019e361dcab8f3a23 */
  struct RClass* RUsage_class = mrb_define_class_under(mrb, UV_module(mrb), "RUsage", mrb->object_class);
  MRB_SET_INSTANCE_TT(RUsage_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::class_method_definitions */
/* sha: bb38093fb2f7fd41d4ce4332cfddf4a58c99e03ac114c13b5bce3ecc39f58b04 */
#if BIND_RUsage_INITIALIZE
  mrb_define_method(mrb, RUsage_class, "initialize", mrb_UV_RUsage_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::attr_definitions */
/* sha: 7c44d370648bc22ad91d5c85c3bac1dc0d2cbdb218d87a9ab5686386fe2ec908 */
  /*
   * Fields
   */
#if BIND_RUsage_ru_utime_FIELD_READER
  mrb_define_method(mrb, RUsage_class, "ru_utime", mrb_UV_RUsage_get_ru_utime, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RUsage_ru_utime_FIELD_WRITER
  mrb_define_method(mrb, RUsage_class, "ru_utime=", mrb_UV_RUsage_set_ru_utime, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RUsage_ru_stime_FIELD_READER
  mrb_define_method(mrb, RUsage_class, "ru_stime", mrb_UV_RUsage_get_ru_stime, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RUsage_ru_stime_FIELD_WRITER
  mrb_define_method(mrb, RUsage_class, "ru_stime=", mrb_UV_RUsage_set_ru_stime, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RUsage_ru_maxrss_FIELD_READER
  mrb_define_method(mrb, RUsage_class, "ru_maxrss", mrb_UV_RUsage_get_ru_maxrss, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RUsage_ru_maxrss_FIELD_WRITER
  mrb_define_method(mrb, RUsage_class, "ru_maxrss=", mrb_UV_RUsage_set_ru_maxrss, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RUsage_ru_ixrss_FIELD_READER
  mrb_define_method(mrb, RUsage_class, "ru_ixrss", mrb_UV_RUsage_get_ru_ixrss, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RUsage_ru_ixrss_FIELD_WRITER
  mrb_define_method(mrb, RUsage_class, "ru_ixrss=", mrb_UV_RUsage_set_ru_ixrss, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RUsage_ru_idrss_FIELD_READER
  mrb_define_method(mrb, RUsage_class, "ru_idrss", mrb_UV_RUsage_get_ru_idrss, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RUsage_ru_idrss_FIELD_WRITER
  mrb_define_method(mrb, RUsage_class, "ru_idrss=", mrb_UV_RUsage_set_ru_idrss, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RUsage_ru_isrss_FIELD_READER
  mrb_define_method(mrb, RUsage_class, "ru_isrss", mrb_UV_RUsage_get_ru_isrss, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RUsage_ru_isrss_FIELD_WRITER
  mrb_define_method(mrb, RUsage_class, "ru_isrss=", mrb_UV_RUsage_set_ru_isrss, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RUsage_ru_minflt_FIELD_READER
  mrb_define_method(mrb, RUsage_class, "ru_minflt", mrb_UV_RUsage_get_ru_minflt, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RUsage_ru_minflt_FIELD_WRITER
  mrb_define_method(mrb, RUsage_class, "ru_minflt=", mrb_UV_RUsage_set_ru_minflt, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RUsage_ru_majflt_FIELD_READER
  mrb_define_method(mrb, RUsage_class, "ru_majflt", mrb_UV_RUsage_get_ru_majflt, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RUsage_ru_majflt_FIELD_WRITER
  mrb_define_method(mrb, RUsage_class, "ru_majflt=", mrb_UV_RUsage_set_ru_majflt, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RUsage_ru_nswap_FIELD_READER
  mrb_define_method(mrb, RUsage_class, "ru_nswap", mrb_UV_RUsage_get_ru_nswap, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RUsage_ru_nswap_FIELD_WRITER
  mrb_define_method(mrb, RUsage_class, "ru_nswap=", mrb_UV_RUsage_set_ru_nswap, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RUsage_ru_inblock_FIELD_READER
  mrb_define_method(mrb, RUsage_class, "ru_inblock", mrb_UV_RUsage_get_ru_inblock, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RUsage_ru_inblock_FIELD_WRITER
  mrb_define_method(mrb, RUsage_class, "ru_inblock=", mrb_UV_RUsage_set_ru_inblock, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RUsage_ru_oublock_FIELD_READER
  mrb_define_method(mrb, RUsage_class, "ru_oublock", mrb_UV_RUsage_get_ru_oublock, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RUsage_ru_oublock_FIELD_WRITER
  mrb_define_method(mrb, RUsage_class, "ru_oublock=", mrb_UV_RUsage_set_ru_oublock, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RUsage_ru_msgsnd_FIELD_READER
  mrb_define_method(mrb, RUsage_class, "ru_msgsnd", mrb_UV_RUsage_get_ru_msgsnd, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RUsage_ru_msgsnd_FIELD_WRITER
  mrb_define_method(mrb, RUsage_class, "ru_msgsnd=", mrb_UV_RUsage_set_ru_msgsnd, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RUsage_ru_msgrcv_FIELD_READER
  mrb_define_method(mrb, RUsage_class, "ru_msgrcv", mrb_UV_RUsage_get_ru_msgrcv, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RUsage_ru_msgrcv_FIELD_WRITER
  mrb_define_method(mrb, RUsage_class, "ru_msgrcv=", mrb_UV_RUsage_set_ru_msgrcv, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RUsage_ru_nsignals_FIELD_READER
  mrb_define_method(mrb, RUsage_class, "ru_nsignals", mrb_UV_RUsage_get_ru_nsignals, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RUsage_ru_nsignals_FIELD_WRITER
  mrb_define_method(mrb, RUsage_class, "ru_nsignals=", mrb_UV_RUsage_set_ru_nsignals, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RUsage_ru_nvcsw_FIELD_READER
  mrb_define_method(mrb, RUsage_class, "ru_nvcsw", mrb_UV_RUsage_get_ru_nvcsw, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RUsage_ru_nvcsw_FIELD_WRITER
  mrb_define_method(mrb, RUsage_class, "ru_nvcsw=", mrb_UV_RUsage_set_ru_nvcsw, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RUsage_ru_nivcsw_FIELD_READER
  mrb_define_method(mrb, RUsage_class, "ru_nivcsw", mrb_UV_RUsage_get_ru_nivcsw, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RUsage_ru_nivcsw_FIELD_WRITER
  mrb_define_method(mrb, RUsage_class, "ru_nivcsw=", mrb_UV_RUsage_set_ru_nivcsw, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
