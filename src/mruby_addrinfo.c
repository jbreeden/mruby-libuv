/* - MRUBY_BINDINGS_NO_CLOBBER -
 *
 * struct addrinfo
 * Defined in file dummy_decls.h @ line 3
 */

#include "mruby_UV.h"

#if BIND_Addrinfo_TYPE

static void 
free_addrinfo(mrb_state* mrb, void* ptr);

static mrb_value
mruby_giftwrap_addrinfo(mrb_state* mrb, struct addrinfo *unboxed);

static void
mruby_gift_addrinfo_data_ptr(mrb_value obj, struct addrinfo *unboxed);

/*
 * UV::Addrinfo
 * ------------
 */

mrb_value
mrb_UV_Addrinfo_initialize(mrb_state* mrb, mrb_value self) {
  struct addrinfo* native_object = (struct addrinfo*)calloc(1, sizeof(struct addrinfo));
  mruby_gift_addrinfo_data_ptr(self, native_object);
  return self;
}

mrb_value
mrb_UV_Addrinfo_get_ai_flags(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);
  int native_ai_flags = native_self->ai_flags;
  mrb_value ai_flags = mrb_fixnum_value(native_ai_flags);
  return ai_flags;
}

mrb_value
mrb_UV_Addrinfo_set_ai_flags(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);
  mrb_int native_ai_flags;
  mrb_get_args(mrb, "i", &native_ai_flags);
  native_self->ai_flags = native_ai_flags;
  return mrb_fixnum_value(native_ai_flags);
}

mrb_value
mrb_UV_Addrinfo_get_ai_family(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);
  int native_ai_family = native_self->ai_family;
  mrb_value ai_family = mrb_fixnum_value(native_ai_family);
  return ai_family;
}

mrb_value
mrb_UV_Addrinfo_set_ai_family(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);
  mrb_int native_ai_family;
  mrb_get_args(mrb, "i", &native_ai_family);
  native_self->ai_family = native_ai_family;
  return mrb_fixnum_value(native_ai_family);
}

mrb_value
mrb_UV_Addrinfo_get_ai_socktype(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);
  int native_ai_socktype = native_self->ai_socktype;
  mrb_value ai_socktype = mrb_fixnum_value(native_ai_socktype);
  return ai_socktype;
}

mrb_value
mrb_UV_Addrinfo_set_ai_socktype(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);
  mrb_int native_ai_socktype;
  mrb_get_args(mrb, "i", &native_ai_socktype);
  native_self->ai_socktype = native_ai_socktype;
  return mrb_fixnum_value(native_ai_socktype);
}

mrb_value
mrb_UV_Addrinfo_get_ai_protocol(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);
  int native_ai_protocol = native_self->ai_protocol;
  mrb_value ai_protocol = mrb_fixnum_value(native_ai_protocol);
  return ai_protocol;
}

mrb_value
mrb_UV_Addrinfo_set_ai_protocol(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);
  mrb_int native_ai_protocol;
  mrb_get_args(mrb, "i", &native_ai_protocol);
  native_self->ai_protocol = native_ai_protocol;
  return mrb_fixnum_value(native_ai_protocol);
}

mrb_value
mrb_UV_Addrinfo_get_ai_addrlen(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);
  int native_ai_addrlen = native_self->ai_addrlen;
  mrb_value ai_addrlen = mrb_fixnum_value(native_ai_addrlen);
  return ai_addrlen;
}

mrb_value
mrb_UV_Addrinfo_set_ai_addrlen(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);
  mrb_int native_ai_addrlen;
  mrb_get_args(mrb, "i", &native_ai_addrlen);
  native_self->ai_addrlen = native_ai_addrlen;
  return mrb_fixnum_value(native_ai_addrlen);
}

mrb_value
mrb_UV_Addrinfo_get_ai_addr(mrb_state* mrb, mrb_value self) {
  return mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@ai_addr"));
}

mrb_value
mrb_UV_Addrinfo_set_ai_addr(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);
  mrb_value ai_addr;

  mrb_get_args(mrb, "o", &ai_addr);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ai_addr, Sockaddr_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sockaddr expected");
    return mrb_nil_value();
  }

  mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "@ai_addr"), ai_addr);
  
  return ai_addr;
}

mrb_value
mrb_UV_Addrinfo_get_ai_canonname(mrb_state* mrb, mrb_value self) {
  return mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@ai_canonname"));
}

mrb_value
mrb_UV_Addrinfo_set_ai_canonname(mrb_state* mrb, mrb_value self) {
  mrb_value ai_canonname;
  mrb_get_args(mrb, "S", &ai_canonname);
  mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "@ai_canonname"), ai_canonname);
  return ai_canonname;
}

mrb_value
mrb_UV_Addrinfo_get_ai_next(mrb_state* mrb, mrb_value self) {
  return mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@ai_next"));
}

mrb_value
mrb_UV_Addrinfo_set_ai_next(mrb_state* mrb, mrb_value self) {
  struct addrinfo * native_self = mruby_unbox_addrinfo(self);
  mrb_value ai_next;

  mrb_get_args(mrb, "o", &ai_next);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ai_next, Addrinfo_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Addrinfo expected");
    return mrb_nil_value();
  }

  mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "@ai_next"), ai_next);
  return ai_next;
}


void mrb_UV_Addrinfo_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

  struct RClass* Addrinfo_class = mrb_define_class_under(mrb, UV_module(mrb), "Addrinfo", mrb->object_class);
  MRB_SET_INSTANCE_TT(Addrinfo_class, MRB_TT_DATA);

  mrb_define_method(mrb, Addrinfo_class, "initialize", mrb_UV_Addrinfo_initialize, MRB_ARGS_NONE());

  mrb_define_method(mrb, Addrinfo_class, "ai_flags", mrb_UV_Addrinfo_get_ai_flags, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Addrinfo_class, "ai_flags=", mrb_UV_Addrinfo_set_ai_flags, MRB_ARGS_ARG(1, 0));
  mrb_define_method(mrb, Addrinfo_class, "ai_family", mrb_UV_Addrinfo_get_ai_family, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Addrinfo_class, "ai_family=", mrb_UV_Addrinfo_set_ai_family, MRB_ARGS_ARG(1, 0));
  mrb_define_method(mrb, Addrinfo_class, "ai_socktype", mrb_UV_Addrinfo_get_ai_socktype, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Addrinfo_class, "ai_socktype=", mrb_UV_Addrinfo_set_ai_socktype, MRB_ARGS_ARG(1, 0));
  mrb_define_method(mrb, Addrinfo_class, "ai_protocol", mrb_UV_Addrinfo_get_ai_protocol, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Addrinfo_class, "ai_protocol=", mrb_UV_Addrinfo_set_ai_protocol, MRB_ARGS_ARG(1, 0));
  mrb_define_method(mrb, Addrinfo_class, "ai_addrlen", mrb_UV_Addrinfo_get_ai_addrlen, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Addrinfo_class, "ai_addrlen=", mrb_UV_Addrinfo_set_ai_addrlen, MRB_ARGS_ARG(1, 0));
  mrb_define_method(mrb, Addrinfo_class, "ai_addr", mrb_UV_Addrinfo_get_ai_addr, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Addrinfo_class, "ai_addr=", mrb_UV_Addrinfo_set_ai_addr, MRB_ARGS_ARG(1, 0));
  mrb_define_method(mrb, Addrinfo_class, "ai_canonname", mrb_UV_Addrinfo_get_ai_canonname, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Addrinfo_class, "ai_canonname=", mrb_UV_Addrinfo_set_ai_canonname, MRB_ARGS_ARG(1, 0));
  mrb_define_method(mrb, Addrinfo_class, "ai_next", mrb_UV_Addrinfo_get_ai_next, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Addrinfo_class, "ai_next=", mrb_UV_Addrinfo_set_ai_next, MRB_ARGS_ARG(1, 0));
}

/*
 * Boxing Code
 * -----------
 */

void 
free_addrinfo(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      uv_freeaddrinfo(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

const mrb_data_type addrinfo_data_type = {
   "struct addrinfo", free_addrinfo
};

/* Static to ensure these are _only_ ever marshaled into MRuby */
static mrb_value
mruby_giftwrap_addrinfo(mrb_state* mrb, struct addrinfo *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Addrinfo_class(mrb), &addrinfo_data_type, box));
}

static void
mruby_gift_addrinfo_data_ptr(mrb_value obj, struct addrinfo *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &addrinfo_data_type);
}

mrb_value
mruby_marshal_load_addrinfo(mrb_state* mrb, struct addrinfo *native_src) {
  struct addrinfo * native_dst = (struct addrinfo *)calloc(1, sizeof(struct addrinfo));
  *native_dst = *native_src;
   
  mrb_value dst = mruby_giftwrap_addrinfo(mrb, native_dst);
   
  /* Remove native next link to prevent free's from cascading */
  native_dst->ai_next = NULL;
  struct addrinfo * native_next = native_dst->ai_next;
  if (native_next != NULL) {
    mrb_iv_set(mrb, dst, mrb_intern_cstr(mrb, "@ai_next"), mruby_marshal_load_addrinfo(mrb, native_next));
  }
   
  /* Clone the sockaddr member */
  native_dst->ai_addr = NULL;
  struct sockaddr_storage * native_addr = NULL;
  if (!(native_src->ai_addr == NULL)) {
    native_addr = (struct sockaddr *)calloc(1, sizeof(struct sockaddr_storage));
    if (native_src->ai_family == AF_INET) {
      *((sockaddr_in*)native_addr) = *((sockaddr_in*)native_src->ai_addr);
    } else if (native_src->ai_family == AF_INET6) {
      *((sockaddr_in6*)native_addr) = *((sockaddr_in6*)native_src->ai_addr);
    }
    mrb_iv_set(mrb, dst, mrb_intern_cstr(mrb, "@ai_addr"), mruby_giftwrap_sockaddr(mrb, native_addr));
  }

  /* Clone the canonname */
  native_dst->ai_canonname = NULL;
  mrb_iv_set(mrb, dst, mrb_intern_cstr(mrb, "@ai_canonname"), mrb_str_new_cstr(mrb, native_src->ai_canonname));

  return dst;
}

struct addrinfo *
mruby_unbox_addrinfo(mrb_value boxed) {
  return (struct addrinfo *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}

#endif
