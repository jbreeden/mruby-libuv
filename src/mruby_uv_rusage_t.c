/*
 * uv_rusage_t
 * Defined in file uv.h @ line 1030
 */

#include "mruby_UV.h"

#if BIND_UvRusageT_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: UvRusageT::initialize */
/* sha: 23b775d2edb4732529d744fd172ea48d86d158b5453bf3eb726c34e3a9fe2f28 */
#if BIND_UvRusageT_INITIALIZE
mrb_value
mrb_UV_UvRusageT_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Uncomment (and optionally replace) if an initializer is desired.
  uv_rusage_t* native_object = (uv_rusage_t*)calloc(1, sizeof(uv_rusage_t));
  mruby_gift_uv_rusage_t_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::disown */
/* sha: 49b4dcaf4be4de1010910cd20cec5d06178160e63ecae43c21a086baea212a1d */
mrb_value
mrb_UV_UvRusageT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvRusageT.disown only accepts objects of type UV::UvRusageT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::belongs_to_ruby */
/* sha: cb15b32a7a1d03cae06068dc5df67287ce3dfaaf4a818adceb5f1ee3d408727c */
mrb_value
mrb_UV_UvRusageT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UV::UvRusageT.belongs_to_ruby only accepts objects of type UV::UvRusageT");
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

/* MRUBY_BINDING: UvRusageT::ru_utime_reader */
/* sha: 03f2208d21a068f26efa55d62cb00721a6231a171c6ab573e316f8c027710b9f */
#if BIND_UvRusageT_ru_utime_FIELD_READER
/* get_ru_utime
 *
 * Return Type: uv_timeval_t
 */
mrb_value
mrb_UV_UvRusageT_get_ru_utime(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uv_timeval_t native_ru_utime = native_self->ru_utime;

  uv_timeval_t* new_ru_utime = TODO_move_uv_timeval_t_to_heap(native_ru_utime);
  mrb_value ru_utime = mruby_box_uv_timeval_t(mrb, &native_ru_utime);

  return ru_utime;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::ru_utime_writer */
/* sha: b90d359e3e084781bcb0e5b92959418406ea7376ee76975671fd96675abb7e7f */
#if BIND_UvRusageT_ru_utime_FIELD_WRITER
/* set_ru_utime
 *
 * Parameters:
 * - value: uv_timeval_t
 */
mrb_value
mrb_UV_UvRusageT_set_ru_utime(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_utime;

  mrb_get_args(mrb, "o", &ru_utime);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ru_utime, UvTimevalT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvTimevalT expected");
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

/* MRUBY_BINDING: UvRusageT::ru_stime_reader */
/* sha: 7380f2506316bd14b773fd445304ca41b4cc02f22b65e772787d1ad94ecbafbe */
#if BIND_UvRusageT_ru_stime_FIELD_READER
/* get_ru_stime
 *
 * Return Type: uv_timeval_t
 */
mrb_value
mrb_UV_UvRusageT_get_ru_stime(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uv_timeval_t native_ru_stime = native_self->ru_stime;

  uv_timeval_t* new_ru_stime = TODO_move_uv_timeval_t_to_heap(native_ru_stime);
  mrb_value ru_stime = mruby_box_uv_timeval_t(mrb, &native_ru_stime);

  return ru_stime;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::ru_stime_writer */
/* sha: 16d5b7aae5395b7cf46ecd79e3e1f3c7ef897da529da194c018417048352800f */
#if BIND_UvRusageT_ru_stime_FIELD_WRITER
/* set_ru_stime
 *
 * Parameters:
 * - value: uv_timeval_t
 */
mrb_value
mrb_UV_UvRusageT_set_ru_stime(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);
  mrb_value ru_stime;

  mrb_get_args(mrb, "o", &ru_stime);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ru_stime, UvTimevalT_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "UvTimevalT expected");
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

/* MRUBY_BINDING: UvRusageT::ru_maxrss_reader */
/* sha: 188fb2a1963e0d2a91c0fb5815add08a49b5bec4b29dcf299801fb626f452878 */
#if BIND_UvRusageT_ru_maxrss_FIELD_READER
/* get_ru_maxrss
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_get_ru_maxrss(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_maxrss = native_self->ru_maxrss;

  mrb_value ru_maxrss = TODO_mruby_box_uint64_t(mrb, native_ru_maxrss);

  return ru_maxrss;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::ru_maxrss_writer */
/* sha: fc9e03537fb78f7d3c9e22765b8e56130674528883456a088c1e205534a8cdba */
#if BIND_UvRusageT_ru_maxrss_FIELD_WRITER
/* set_ru_maxrss
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_set_ru_maxrss(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvRusageT::ru_ixrss_reader */
/* sha: e59a09337d5252d7317d992971d76c4fd682d1c74dae6fc28e25be961a8644f9 */
#if BIND_UvRusageT_ru_ixrss_FIELD_READER
/* get_ru_ixrss
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_get_ru_ixrss(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_ixrss = native_self->ru_ixrss;

  mrb_value ru_ixrss = TODO_mruby_box_uint64_t(mrb, native_ru_ixrss);

  return ru_ixrss;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::ru_ixrss_writer */
/* sha: 77054b395515b53824516cf0bcdd8a09b3709089d2128024f2d549e785c264e9 */
#if BIND_UvRusageT_ru_ixrss_FIELD_WRITER
/* set_ru_ixrss
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_set_ru_ixrss(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvRusageT::ru_idrss_reader */
/* sha: a1b6f39c259ec17809b00d2ce7071d69d5b4fd5b92564888379f0aec1123d7a2 */
#if BIND_UvRusageT_ru_idrss_FIELD_READER
/* get_ru_idrss
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_get_ru_idrss(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_idrss = native_self->ru_idrss;

  mrb_value ru_idrss = TODO_mruby_box_uint64_t(mrb, native_ru_idrss);

  return ru_idrss;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::ru_idrss_writer */
/* sha: 1f058e9556eebc5f12bf57734436b1d6208f003cbcfbb46a3842511fabe2f939 */
#if BIND_UvRusageT_ru_idrss_FIELD_WRITER
/* set_ru_idrss
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_set_ru_idrss(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvRusageT::ru_isrss_reader */
/* sha: b2bed7266d9537420d3478d172b866955e7064fd186e4d3a9f5fef0a26a3e35d */
#if BIND_UvRusageT_ru_isrss_FIELD_READER
/* get_ru_isrss
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_get_ru_isrss(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_isrss = native_self->ru_isrss;

  mrb_value ru_isrss = TODO_mruby_box_uint64_t(mrb, native_ru_isrss);

  return ru_isrss;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::ru_isrss_writer */
/* sha: 5156b684962ac5693b546b959351b05d2b79d270d8c4d64604c1c560be47a8ce */
#if BIND_UvRusageT_ru_isrss_FIELD_WRITER
/* set_ru_isrss
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_set_ru_isrss(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvRusageT::ru_minflt_reader */
/* sha: 7b8d0fb6cff300a881c5a3abcbab1814df6dce915e2a8d27a56a3390afbd3155 */
#if BIND_UvRusageT_ru_minflt_FIELD_READER
/* get_ru_minflt
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_get_ru_minflt(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_minflt = native_self->ru_minflt;

  mrb_value ru_minflt = TODO_mruby_box_uint64_t(mrb, native_ru_minflt);

  return ru_minflt;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::ru_minflt_writer */
/* sha: aa6d55ce37bdf8760278152246a4eb7fbac06c713b05d4644b1a4e9e7098828b */
#if BIND_UvRusageT_ru_minflt_FIELD_WRITER
/* set_ru_minflt
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_set_ru_minflt(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvRusageT::ru_majflt_reader */
/* sha: e2851b5a89ef79d4f4e0873e5270f6bd232e56fe387c0c220bdb234fadabe9f5 */
#if BIND_UvRusageT_ru_majflt_FIELD_READER
/* get_ru_majflt
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_get_ru_majflt(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_majflt = native_self->ru_majflt;

  mrb_value ru_majflt = TODO_mruby_box_uint64_t(mrb, native_ru_majflt);

  return ru_majflt;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::ru_majflt_writer */
/* sha: 9919bd7ef9a0433bc85bfde19bb4e3ae7e3ece3c78ebbb40af5a1900ff07a236 */
#if BIND_UvRusageT_ru_majflt_FIELD_WRITER
/* set_ru_majflt
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_set_ru_majflt(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvRusageT::ru_nswap_reader */
/* sha: 2f369fcf9ff8555ebea49f980d2168f8031a8645ca42878d7ec81cb1dc530cc1 */
#if BIND_UvRusageT_ru_nswap_FIELD_READER
/* get_ru_nswap
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_get_ru_nswap(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_nswap = native_self->ru_nswap;

  mrb_value ru_nswap = TODO_mruby_box_uint64_t(mrb, native_ru_nswap);

  return ru_nswap;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::ru_nswap_writer */
/* sha: 8f6cee7006c0466686a04e3f7224f5b35e62c27527bfa33f53bbc66a611fdd87 */
#if BIND_UvRusageT_ru_nswap_FIELD_WRITER
/* set_ru_nswap
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_set_ru_nswap(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvRusageT::ru_inblock_reader */
/* sha: 8258e559e8a9998dc300cf99589ebeca04419d66f89bc672de7967bd77736b19 */
#if BIND_UvRusageT_ru_inblock_FIELD_READER
/* get_ru_inblock
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_get_ru_inblock(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_inblock = native_self->ru_inblock;

  mrb_value ru_inblock = TODO_mruby_box_uint64_t(mrb, native_ru_inblock);

  return ru_inblock;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::ru_inblock_writer */
/* sha: f23568ab8193d3277379189bfcc88100b9742a929ac3cce873077888a795a463 */
#if BIND_UvRusageT_ru_inblock_FIELD_WRITER
/* set_ru_inblock
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_set_ru_inblock(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvRusageT::ru_oublock_reader */
/* sha: 0d7163e24b80443d1e4d32eaf97453bd1071f7d33f19634725ad1b7283dad470 */
#if BIND_UvRusageT_ru_oublock_FIELD_READER
/* get_ru_oublock
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_get_ru_oublock(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_oublock = native_self->ru_oublock;

  mrb_value ru_oublock = TODO_mruby_box_uint64_t(mrb, native_ru_oublock);

  return ru_oublock;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::ru_oublock_writer */
/* sha: d3467874f56415175757ca5d151ee873923bd5b15259101331cbe43b24dcf5c7 */
#if BIND_UvRusageT_ru_oublock_FIELD_WRITER
/* set_ru_oublock
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_set_ru_oublock(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvRusageT::ru_msgsnd_reader */
/* sha: 6e249a9312cbed3625e4dae7e62011f9f43cf9bf78a14b8145b9244e8b8cb392 */
#if BIND_UvRusageT_ru_msgsnd_FIELD_READER
/* get_ru_msgsnd
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_get_ru_msgsnd(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_msgsnd = native_self->ru_msgsnd;

  mrb_value ru_msgsnd = TODO_mruby_box_uint64_t(mrb, native_ru_msgsnd);

  return ru_msgsnd;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::ru_msgsnd_writer */
/* sha: f19d0b4242d3513dab75629be55ffe151563ac1746ec45468236c5ecae5d26a6 */
#if BIND_UvRusageT_ru_msgsnd_FIELD_WRITER
/* set_ru_msgsnd
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_set_ru_msgsnd(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvRusageT::ru_msgrcv_reader */
/* sha: 7d1d5cdbf79c97b641c56b927cec1c2d373ed0705b0fcd676a0e6e74a68b1f51 */
#if BIND_UvRusageT_ru_msgrcv_FIELD_READER
/* get_ru_msgrcv
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_get_ru_msgrcv(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_msgrcv = native_self->ru_msgrcv;

  mrb_value ru_msgrcv = TODO_mruby_box_uint64_t(mrb, native_ru_msgrcv);

  return ru_msgrcv;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::ru_msgrcv_writer */
/* sha: 31bb38fdad14e43eeb97d2181e5d147040f6dd252b1312663b332dca796294fc */
#if BIND_UvRusageT_ru_msgrcv_FIELD_WRITER
/* set_ru_msgrcv
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_set_ru_msgrcv(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvRusageT::ru_nsignals_reader */
/* sha: 7813ccfd3dd78e36a04abd86b50c9d7d356e57a58b18780365d957be8b866fa0 */
#if BIND_UvRusageT_ru_nsignals_FIELD_READER
/* get_ru_nsignals
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_get_ru_nsignals(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_nsignals = native_self->ru_nsignals;

  mrb_value ru_nsignals = TODO_mruby_box_uint64_t(mrb, native_ru_nsignals);

  return ru_nsignals;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::ru_nsignals_writer */
/* sha: 90de9ae0c989bc62d4addcb3bed47675fd91232b5df4d8cb7eee8fb9e528e6cd */
#if BIND_UvRusageT_ru_nsignals_FIELD_WRITER
/* set_ru_nsignals
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_set_ru_nsignals(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvRusageT::ru_nvcsw_reader */
/* sha: f0eb5ffc3f6e01996736e7eb37cbeaea8295885df557f515b69a1a65da8beca8 */
#if BIND_UvRusageT_ru_nvcsw_FIELD_READER
/* get_ru_nvcsw
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_get_ru_nvcsw(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_nvcsw = native_self->ru_nvcsw;

  mrb_value ru_nvcsw = TODO_mruby_box_uint64_t(mrb, native_ru_nvcsw);

  return ru_nvcsw;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::ru_nvcsw_writer */
/* sha: eb8f15803a5277c789207ee158dd6b31f3c0c557d6ee16fc5bf759b857b26ba7 */
#if BIND_UvRusageT_ru_nvcsw_FIELD_WRITER
/* set_ru_nvcsw
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_set_ru_nvcsw(mrb_state* mrb, mrb_value self) {
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

/* MRUBY_BINDING: UvRusageT::ru_nivcsw_reader */
/* sha: e4d3072decefb3d66dbe6a98b55a3ea1d5a6a270bc767fd807edb946721f3237 */
#if BIND_UvRusageT_ru_nivcsw_FIELD_READER
/* get_ru_nivcsw
 *
 * Return Type: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_get_ru_nivcsw(mrb_state* mrb, mrb_value self) {
  uv_rusage_t * native_self = mruby_unbox_uv_rusage_t(self);

  uint64_t native_ru_nivcsw = native_self->ru_nivcsw;

  mrb_value ru_nivcsw = TODO_mruby_box_uint64_t(mrb, native_ru_nivcsw);

  return ru_nivcsw;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::ru_nivcsw_writer */
/* sha: 9aafb5574f310799557a0c068234cff2b331f1575f15b678fcc3fc4cca8abf46 */
#if BIND_UvRusageT_ru_nivcsw_FIELD_WRITER
/* set_ru_nivcsw
 *
 * Parameters:
 * - value: uint64_t
 */
mrb_value
mrb_UV_UvRusageT_set_ru_nivcsw(mrb_state* mrb, mrb_value self) {
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


void mrb_UV_UvRusageT_init(mrb_state* mrb) {
/* MRUBY_BINDING: UvRusageT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::class_definition */
/* sha: 7a46624da266baccac199ebe8bb196906b109bc24814c7ad9f3b5b500c9fbc2e */
  struct RClass* UvRusageT_class = mrb_define_class_under(mrb, UV_module(mrb), "UvRusageT", mrb->object_class);
  MRB_SET_INSTANCE_TT(UvRusageT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::class_method_definitions */
/* sha: 8c72b0ab031bee04893ab87ed228d876b49f4132aa73c5f184d65f664bfcdc5e */
#if BIND_UvRusageT_INITIALIZE
  mrb_define_method(mrb, UvRusageT_class, "initialize", mrb_UV_UvRusageT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, UvRusageT_class, "disown", mrb_UV_UvRusageT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, UvRusageT_class, "belongs_to_ruby?", mrb_UV_UvRusageT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::attr_definitions */
/* sha: 3c39b25ef4664d79e7f450954234295e8e94ed217a5b4ca67d5158172ad2f1e1 */
  /*
   * Fields
   */
#if BIND_UvRusageT_ru_utime_FIELD_READER
  mrb_define_method(mrb, UvRusageT_class, "ru_utime", mrb_UV_UvRusageT_get_ru_utime, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvRusageT_ru_utime_FIELD_WRITER
  mrb_define_method(mrb, UvRusageT_class, "ru_utime=", mrb_UV_UvRusageT_set_ru_utime, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvRusageT_ru_stime_FIELD_READER
  mrb_define_method(mrb, UvRusageT_class, "ru_stime", mrb_UV_UvRusageT_get_ru_stime, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvRusageT_ru_stime_FIELD_WRITER
  mrb_define_method(mrb, UvRusageT_class, "ru_stime=", mrb_UV_UvRusageT_set_ru_stime, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvRusageT_ru_maxrss_FIELD_READER
  mrb_define_method(mrb, UvRusageT_class, "ru_maxrss", mrb_UV_UvRusageT_get_ru_maxrss, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvRusageT_ru_maxrss_FIELD_WRITER
  mrb_define_method(mrb, UvRusageT_class, "ru_maxrss=", mrb_UV_UvRusageT_set_ru_maxrss, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvRusageT_ru_ixrss_FIELD_READER
  mrb_define_method(mrb, UvRusageT_class, "ru_ixrss", mrb_UV_UvRusageT_get_ru_ixrss, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvRusageT_ru_ixrss_FIELD_WRITER
  mrb_define_method(mrb, UvRusageT_class, "ru_ixrss=", mrb_UV_UvRusageT_set_ru_ixrss, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvRusageT_ru_idrss_FIELD_READER
  mrb_define_method(mrb, UvRusageT_class, "ru_idrss", mrb_UV_UvRusageT_get_ru_idrss, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvRusageT_ru_idrss_FIELD_WRITER
  mrb_define_method(mrb, UvRusageT_class, "ru_idrss=", mrb_UV_UvRusageT_set_ru_idrss, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvRusageT_ru_isrss_FIELD_READER
  mrb_define_method(mrb, UvRusageT_class, "ru_isrss", mrb_UV_UvRusageT_get_ru_isrss, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvRusageT_ru_isrss_FIELD_WRITER
  mrb_define_method(mrb, UvRusageT_class, "ru_isrss=", mrb_UV_UvRusageT_set_ru_isrss, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvRusageT_ru_minflt_FIELD_READER
  mrb_define_method(mrb, UvRusageT_class, "ru_minflt", mrb_UV_UvRusageT_get_ru_minflt, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvRusageT_ru_minflt_FIELD_WRITER
  mrb_define_method(mrb, UvRusageT_class, "ru_minflt=", mrb_UV_UvRusageT_set_ru_minflt, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvRusageT_ru_majflt_FIELD_READER
  mrb_define_method(mrb, UvRusageT_class, "ru_majflt", mrb_UV_UvRusageT_get_ru_majflt, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvRusageT_ru_majflt_FIELD_WRITER
  mrb_define_method(mrb, UvRusageT_class, "ru_majflt=", mrb_UV_UvRusageT_set_ru_majflt, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvRusageT_ru_nswap_FIELD_READER
  mrb_define_method(mrb, UvRusageT_class, "ru_nswap", mrb_UV_UvRusageT_get_ru_nswap, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvRusageT_ru_nswap_FIELD_WRITER
  mrb_define_method(mrb, UvRusageT_class, "ru_nswap=", mrb_UV_UvRusageT_set_ru_nswap, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvRusageT_ru_inblock_FIELD_READER
  mrb_define_method(mrb, UvRusageT_class, "ru_inblock", mrb_UV_UvRusageT_get_ru_inblock, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvRusageT_ru_inblock_FIELD_WRITER
  mrb_define_method(mrb, UvRusageT_class, "ru_inblock=", mrb_UV_UvRusageT_set_ru_inblock, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvRusageT_ru_oublock_FIELD_READER
  mrb_define_method(mrb, UvRusageT_class, "ru_oublock", mrb_UV_UvRusageT_get_ru_oublock, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvRusageT_ru_oublock_FIELD_WRITER
  mrb_define_method(mrb, UvRusageT_class, "ru_oublock=", mrb_UV_UvRusageT_set_ru_oublock, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvRusageT_ru_msgsnd_FIELD_READER
  mrb_define_method(mrb, UvRusageT_class, "ru_msgsnd", mrb_UV_UvRusageT_get_ru_msgsnd, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvRusageT_ru_msgsnd_FIELD_WRITER
  mrb_define_method(mrb, UvRusageT_class, "ru_msgsnd=", mrb_UV_UvRusageT_set_ru_msgsnd, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvRusageT_ru_msgrcv_FIELD_READER
  mrb_define_method(mrb, UvRusageT_class, "ru_msgrcv", mrb_UV_UvRusageT_get_ru_msgrcv, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvRusageT_ru_msgrcv_FIELD_WRITER
  mrb_define_method(mrb, UvRusageT_class, "ru_msgrcv=", mrb_UV_UvRusageT_set_ru_msgrcv, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvRusageT_ru_nsignals_FIELD_READER
  mrb_define_method(mrb, UvRusageT_class, "ru_nsignals", mrb_UV_UvRusageT_get_ru_nsignals, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvRusageT_ru_nsignals_FIELD_WRITER
  mrb_define_method(mrb, UvRusageT_class, "ru_nsignals=", mrb_UV_UvRusageT_set_ru_nsignals, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvRusageT_ru_nvcsw_FIELD_READER
  mrb_define_method(mrb, UvRusageT_class, "ru_nvcsw", mrb_UV_UvRusageT_get_ru_nvcsw, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvRusageT_ru_nvcsw_FIELD_WRITER
  mrb_define_method(mrb, UvRusageT_class, "ru_nvcsw=", mrb_UV_UvRusageT_set_ru_nvcsw, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_UvRusageT_ru_nivcsw_FIELD_READER
  mrb_define_method(mrb, UvRusageT_class, "ru_nivcsw", mrb_UV_UvRusageT_get_ru_nivcsw, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_UvRusageT_ru_nivcsw_FIELD_WRITER
  mrb_define_method(mrb, UvRusageT_class, "ru_nivcsw=", mrb_UV_UvRusageT_set_ru_nivcsw, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvRusageT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
