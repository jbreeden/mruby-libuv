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
/* sha: fc87c44fd15f5d75d07e29b2d0e1bd70b13a99e0a5bc4c16386bf177a957bbe0 */
#if BIND_RUsage_ru_utime_FIELD_READER
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
/* sha: 8b6ae26158f87340db0c35ba1d0d7f7d44e87f9a8aac88ef166d69615dd2b27c */
#if BIND_RUsage_ru_utime_FIELD_WRITER
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
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_stime_reader */
/* sha: 2bf16774ff2e03a475b41f0f7ca4d29b3e6173dd341a5338def7aa8300a2398a */
#if BIND_RUsage_ru_stime_FIELD_READER
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
/* sha: 730075bf1814c97fea0b105e59037b6d3de6067fad2768dbb5826018cc06bb2f */
#if BIND_RUsage_ru_stime_FIELD_WRITER
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
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_maxrss_reader */
/* sha: 4d727295ad1ac03482af713fa0ff5fb3e8283e8fb91d0849ac6bbf5e3986276e */
#if BIND_RUsage_ru_maxrss_FIELD_READER
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
/* sha: 41be5216f286d5a06902da4b5a8ee92fd81432bbbb8d468e6af7a082e919febd */
#if BIND_RUsage_ru_maxrss_FIELD_WRITER
mrb_value
mrb_UV_RUsage_set_ru_maxrss(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_maxrss;

  mrb_get_args(mrb, "o", &ru_maxrss);

  /* type checking */
  TODO_type_check_uint64_t(ru_maxrss);

  uint64_t native_ru_maxrss = TODO_mruby_unbox_uint64_t(ru_maxrss);

  native_self->ru_maxrss = native_ru_maxrss;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_ixrss_reader */
/* sha: d35f46659be07e76d3c7770f7581227347f99b9613c3b2af87b506df6e06cb35 */
#if BIND_RUsage_ru_ixrss_FIELD_READER
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
/* sha: 3d4f450d6b82e70cb4a4979a76af9a5255119690c689d4e0327ae49a5566e298 */
#if BIND_RUsage_ru_ixrss_FIELD_WRITER
mrb_value
mrb_UV_RUsage_set_ru_ixrss(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_ixrss;

  mrb_get_args(mrb, "o", &ru_ixrss);

  /* type checking */
  TODO_type_check_uint64_t(ru_ixrss);

  uint64_t native_ru_ixrss = TODO_mruby_unbox_uint64_t(ru_ixrss);

  native_self->ru_ixrss = native_ru_ixrss;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_idrss_reader */
/* sha: 70b5f20b1779c11b573e6f85f38c0e75a02bf7273f486aae6e04d904c659dd1a */
#if BIND_RUsage_ru_idrss_FIELD_READER
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
/* sha: e7302e491be34a8a841535dc70ac524eb5186a8585c7dc2daf8aa15034ef2365 */
#if BIND_RUsage_ru_idrss_FIELD_WRITER
mrb_value
mrb_UV_RUsage_set_ru_idrss(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_idrss;

  mrb_get_args(mrb, "o", &ru_idrss);

  /* type checking */
  TODO_type_check_uint64_t(ru_idrss);

  uint64_t native_ru_idrss = TODO_mruby_unbox_uint64_t(ru_idrss);

  native_self->ru_idrss = native_ru_idrss;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_isrss_reader */
/* sha: bfb54826f40d8851a62c7bfaaf0a81ededfa18cf89e9a13340ded687ebcd0525 */
#if BIND_RUsage_ru_isrss_FIELD_READER
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
/* sha: 56e2757fc4c281911ca3fadc54238a9186e3fa7cf3096565da4b74c86735742f */
#if BIND_RUsage_ru_isrss_FIELD_WRITER
mrb_value
mrb_UV_RUsage_set_ru_isrss(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_isrss;

  mrb_get_args(mrb, "o", &ru_isrss);

  /* type checking */
  TODO_type_check_uint64_t(ru_isrss);

  uint64_t native_ru_isrss = TODO_mruby_unbox_uint64_t(ru_isrss);

  native_self->ru_isrss = native_ru_isrss;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_minflt_reader */
/* sha: a06ea416943c4a807cde0244d98ff5edb242cf20f2dee7df1d0998a4fc2c0e1f */
#if BIND_RUsage_ru_minflt_FIELD_READER
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
/* sha: 8809078f55302bf87f24fd7167d354b143296ab4224d9bdd75392d5af1d0bb7a */
#if BIND_RUsage_ru_minflt_FIELD_WRITER
mrb_value
mrb_UV_RUsage_set_ru_minflt(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_minflt;

  mrb_get_args(mrb, "o", &ru_minflt);

  /* type checking */
  TODO_type_check_uint64_t(ru_minflt);

  uint64_t native_ru_minflt = TODO_mruby_unbox_uint64_t(ru_minflt);

  native_self->ru_minflt = native_ru_minflt;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_majflt_reader */
/* sha: 36f75766f870f7dc7f9edd507876b350892ccf67f8dec8e56c6976a830e9dc2b */
#if BIND_RUsage_ru_majflt_FIELD_READER
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
/* sha: 37a75fdd542b5f0e30833df019c09f5358077fc25b6a9c997785741506e55f5a */
#if BIND_RUsage_ru_majflt_FIELD_WRITER
mrb_value
mrb_UV_RUsage_set_ru_majflt(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_majflt;

  mrb_get_args(mrb, "o", &ru_majflt);

  /* type checking */
  TODO_type_check_uint64_t(ru_majflt);

  uint64_t native_ru_majflt = TODO_mruby_unbox_uint64_t(ru_majflt);

  native_self->ru_majflt = native_ru_majflt;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_nswap_reader */
/* sha: 941527de1d836fb3cd8027f220d3e8a47506cec3894e4bcfdbbf2e7fcd88bd04 */
#if BIND_RUsage_ru_nswap_FIELD_READER
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
/* sha: 9938db762e71006dd8f4ba9efafa44181f549e3d9bff9cff244a9ae963fb49c9 */
#if BIND_RUsage_ru_nswap_FIELD_WRITER
mrb_value
mrb_UV_RUsage_set_ru_nswap(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_nswap;

  mrb_get_args(mrb, "o", &ru_nswap);

  /* type checking */
  TODO_type_check_uint64_t(ru_nswap);

  uint64_t native_ru_nswap = TODO_mruby_unbox_uint64_t(ru_nswap);

  native_self->ru_nswap = native_ru_nswap;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_inblock_reader */
/* sha: a95f8d6e4c2ea2e53ac4d75590ddf51d1c0ec8e104af0a0283e275f2488b1b54 */
#if BIND_RUsage_ru_inblock_FIELD_READER
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
/* sha: a0d1ca9d04f447eee28a52b98d4cc2e364dfc2be2a4eb9611908869ac9beaa04 */
#if BIND_RUsage_ru_inblock_FIELD_WRITER
mrb_value
mrb_UV_RUsage_set_ru_inblock(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_inblock;

  mrb_get_args(mrb, "o", &ru_inblock);

  /* type checking */
  TODO_type_check_uint64_t(ru_inblock);

  uint64_t native_ru_inblock = TODO_mruby_unbox_uint64_t(ru_inblock);

  native_self->ru_inblock = native_ru_inblock;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_oublock_reader */
/* sha: 5b7454909b5762981f2087e50cc731ee084886150843b858049f6faf56bb09b3 */
#if BIND_RUsage_ru_oublock_FIELD_READER
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
/* sha: 9d5e7d60e2f6072f17ff139b163ca1b5584999a3aa3d7a814d297ad3ed9f172e */
#if BIND_RUsage_ru_oublock_FIELD_WRITER
mrb_value
mrb_UV_RUsage_set_ru_oublock(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_oublock;

  mrb_get_args(mrb, "o", &ru_oublock);

  /* type checking */
  TODO_type_check_uint64_t(ru_oublock);

  uint64_t native_ru_oublock = TODO_mruby_unbox_uint64_t(ru_oublock);

  native_self->ru_oublock = native_ru_oublock;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_msgsnd_reader */
/* sha: 3d0e5ec136e53060001ba1a138af108b32e751df872c5d28dce35df4ef866c87 */
#if BIND_RUsage_ru_msgsnd_FIELD_READER
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
/* sha: 95d23c105226edd7b9807d4911daaaf2c4423da16bc1d5e0d9e1ab549d2525bb */
#if BIND_RUsage_ru_msgsnd_FIELD_WRITER
mrb_value
mrb_UV_RUsage_set_ru_msgsnd(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_msgsnd;

  mrb_get_args(mrb, "o", &ru_msgsnd);

  /* type checking */
  TODO_type_check_uint64_t(ru_msgsnd);

  uint64_t native_ru_msgsnd = TODO_mruby_unbox_uint64_t(ru_msgsnd);

  native_self->ru_msgsnd = native_ru_msgsnd;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_msgrcv_reader */
/* sha: bad6d13588a6a52f0073342dd181c35980ab471f7fa5625213b185bb7d1cda74 */
#if BIND_RUsage_ru_msgrcv_FIELD_READER
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
/* sha: 2a14f9f692af353ecc5b8d8cc994f809d84f13698183d7ee18201cd3c3f463d2 */
#if BIND_RUsage_ru_msgrcv_FIELD_WRITER
mrb_value
mrb_UV_RUsage_set_ru_msgrcv(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_msgrcv;

  mrb_get_args(mrb, "o", &ru_msgrcv);

  /* type checking */
  TODO_type_check_uint64_t(ru_msgrcv);

  uint64_t native_ru_msgrcv = TODO_mruby_unbox_uint64_t(ru_msgrcv);

  native_self->ru_msgrcv = native_ru_msgrcv;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_nsignals_reader */
/* sha: 8270c3f36fd9d04ce77ba2563e4f649ab09750554d592a728fb111e0efd44ed2 */
#if BIND_RUsage_ru_nsignals_FIELD_READER
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
/* sha: 89faff8a697e6c02a2748adde59bc43a0af40ae99c7bb43afcb5af2392cae8f3 */
#if BIND_RUsage_ru_nsignals_FIELD_WRITER
mrb_value
mrb_UV_RUsage_set_ru_nsignals(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_nsignals;

  mrb_get_args(mrb, "o", &ru_nsignals);

  /* type checking */
  TODO_type_check_uint64_t(ru_nsignals);

  uint64_t native_ru_nsignals = TODO_mruby_unbox_uint64_t(ru_nsignals);

  native_self->ru_nsignals = native_ru_nsignals;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_nvcsw_reader */
/* sha: ba982ee02d7c549e240ff18eedae8f1a63a9025d42602e7aff6966ee474ab946 */
#if BIND_RUsage_ru_nvcsw_FIELD_READER
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
/* sha: e1fb2637965b81759fb127e52010ac4966a1ab0915dc645a6a30e3deef62b2ad */
#if BIND_RUsage_ru_nvcsw_FIELD_WRITER
mrb_value
mrb_UV_RUsage_set_ru_nvcsw(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_nvcsw;

  mrb_get_args(mrb, "o", &ru_nvcsw);

  /* type checking */
  TODO_type_check_uint64_t(ru_nvcsw);

  uint64_t native_ru_nvcsw = TODO_mruby_unbox_uint64_t(ru_nvcsw);

  native_self->ru_nvcsw = native_ru_nvcsw;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage::ru_nivcsw_reader */
/* sha: a97dfbc9a727d1bf8dc1f6b7c7a9d4c64a18a147e17c0d6f6a7e1f41df17bed6 */
#if BIND_RUsage_ru_nivcsw_FIELD_READER
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
/* sha: dd1e4b7d60e6701e1c2c065f73033e8c1b781701c900a5e9c14deb6fb5fea20a */
#if BIND_RUsage_ru_nivcsw_FIELD_WRITER
mrb_value
mrb_UV_RUsage_set_ru_nivcsw(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_nivcsw;

  mrb_get_args(mrb, "o", &ru_nivcsw);

  /* type checking */
  TODO_type_check_uint64_t(ru_nivcsw);

  uint64_t native_ru_nivcsw = TODO_mruby_unbox_uint64_t(ru_nivcsw);

  native_self->ru_nivcsw = native_ru_nivcsw;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_UV_RUsage_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

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


/* MRUBY_BINDING: RUsage::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
