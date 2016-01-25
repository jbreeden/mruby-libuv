/*
 * Boxing Code (Generated)
 * =======================
 *
 * The code generator learns the data types declared in the C/C++ source files
 * it is run against, and generates this boxing, unboxing, and GC code.
 * 
 * Terms
 * ------
 *
 * ### Boxing
 * In general refers to wrapping a native object in an mrb_value.
 * 
 * ### Gift Wrapping
 * A specific type of boxing, indicating that the object belongs
 * to Ruby and should be free'd when the mrb_value is GC'ed.
 * 
 * ### Unboxing
 * Retrieving the wrapped native object from an mrb_value.
 *
 * Customizing
 * -----------
 * 
 * By default, all data types are assumed to be destructable by the `free`
 * function. To use a custom destructor for your type, tell CTypes with
 * `CTypes.set_destructor`.
 *
 * Example
 * ```
 * // I have `struct GError` objects from glib,
 * // which should be freed with `g_error_free`
 * CTypes.set_destructor('struct GError', 'g_error_free')
 * ```
 */
#include "mruby_UV.h"

/* MRUBY_BINDING: header */
/* sha: user_defined */
#define MRUBY_UV_UNITIALIZE_HANDLE_TYPE UV_HANDLE_TYPE_MAX

void *
mruby_unbox_as_void_ptr(mrb_value boxed) {
  return ((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}

int set_loop_reference(mrb_state* mrb, mrb_value obj) {
  uv_handle_t * handle = (uv_handle_t *)(mruby_unbox_as_void_ptr(obj));
  if (handle->loop == NULL) {
    mrb_raise(mrb, E_RUNTIME_ERROR, "Attempt to SET_LOOP_REF on native handle with no associated loop");
    return 1;
  }
  mruby_uv_data_t * data = (mruby_uv_data_t *)(handle->loop->data);
  mrb_funcall(mrb, data->self, "ref", 1, obj);
  return 0;
}

void unset_loop_reference(mrb_state* mrb, mrb_value obj) {
  uv_handle_t * handle = (uv_handle_t *)(mruby_unbox_as_void_ptr(obj));
  if (handle->loop == NULL) {
    /* No loop associated, so nothing to be done. Not an error. */
    return;
  }
  mruby_uv_data_t * data = (mruby_uv_data_t *)(handle->loop->data);
  mrb_funcall(mrb, data->self, "unref", 1, obj);
  return;
}

uv_req_t *
new_mruby_uv_req(mrb_state* mrb, mrb_value self, size_t size) {
  uv_req_t* req = (uv_req_t*)calloc(1, size);
  mruby_uv_data_t* data = (mruby_uv_data_t*)calloc(1, sizeof(mruby_uv_data_t));
  data->mrb = mrb;
  data->self = self;
  req->data = data;
  return req;
}

uv_handle_t *
new_mruby_uv_handle(mrb_state* mrb, mrb_value self, size_t size) {
  uv_handle_t* handle = (uv_handle_t*)calloc(1, size);
  mruby_uv_data_t* data = (mruby_uv_data_t*)calloc(1, sizeof(mruby_uv_data_t));
  data->mrb = mrb;
  data->self = self;
  handle->data = data;
  handle->type = MRUBY_UV_UNITIALIZE_HANDLE_TYPE;
  return handle;
}

void
free_mruby_uv_handle(uv_handle_t * handle) {
  /*
   * NOT THREAD SAFE
   */
  
  if (MRUBY_UV_UNITIALIZE_HANDLE_TYPE != handle->type
      && !uv_is_closing(handle)) {
    uv_close(handle, free_mruby_uv_handle);
  } else {
    if (handle->data != NULL) {
      free(handle->data);
      handle->data = NULL;
    }
    free(handle);
  }
}

void
free_mruby_uv_req(uv_req_t * handle) {
  if (handle->data != NULL) {
    free(handle->data);
  }
  free(handle);
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Addrinfo_boxing */
/* sha: 9f11f4036eef3fa993e3c1ca299d2a1b9e827a5a62ca9767211e4d46650dceba */
#if BIND_Addrinfo_TYPE
/*
 * Boxing implementation for struct addrinfo
 */

static void free_addrinfo(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type addrinfo_data_type = {
   "struct addrinfo", free_addrinfo
};

mrb_value
mruby_box_addrinfo(mrb_state* mrb, struct addrinfo *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Addrinfo_class(mrb), &addrinfo_data_type, box));
}

mrb_value
mruby_giftwrap_addrinfo(mrb_state* mrb, struct addrinfo *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Addrinfo_class(mrb), &addrinfo_data_type, box));
}

void
mruby_set_addrinfo_data_ptr(mrb_value obj, struct addrinfo *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &addrinfo_data_type);
}

void
mruby_gift_addrinfo_data_ptr(mrb_value obj, struct addrinfo *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &addrinfo_data_type);
}

struct addrinfo *
mruby_unbox_addrinfo(mrb_value boxed) {
  return (struct addrinfo *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuTimesS_boxing */
/* sha: 0380401964e35bc72a90ab14a43f3f405277ec9e3651edcf63129fbc592afd18 */
#if BIND_CpuTimesS_TYPE
/*
 * Boxing implementation for struct uv_cpu_times_s
 */

static void free_uv_cpu_times_s(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_cpu_times_s_data_type = {
   "struct uv_cpu_times_s", free_uv_cpu_times_s
};

mrb_value
mruby_box_uv_cpu_times_s(mrb_state* mrb, struct uv_cpu_times_s *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, CpuTimesS_class(mrb), &uv_cpu_times_s_data_type, box));
}

mrb_value
mruby_giftwrap_uv_cpu_times_s(mrb_state* mrb, struct uv_cpu_times_s *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, CpuTimesS_class(mrb), &uv_cpu_times_s_data_type, box));
}

void
mruby_set_uv_cpu_times_s_data_ptr(mrb_value obj, struct uv_cpu_times_s *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_cpu_times_s_data_type);
}

void
mruby_gift_uv_cpu_times_s_data_ptr(mrb_value obj, struct uv_cpu_times_s *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_cpu_times_s_data_type);
}

struct uv_cpu_times_s *
mruby_unbox_uv_cpu_times_s(mrb_value boxed) {
  return (struct uv_cpu_times_s *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Async_boxing */
/* sha: 4c1877cd504b782bacb17982754c9b0643ac66b254a8f84be568bd2aef3d529e */
#if BIND_Async_TYPE
/*
 * Boxing implementation for uv_async_t
 */

static void free_uv_async_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_async_t_data_type = {
   "uv_async_t", free_uv_async_t
};

mrb_value
mruby_box_uv_async_t(mrb_state* mrb, uv_async_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Async_class(mrb), &uv_async_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_async_t(mrb_state* mrb, uv_async_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Async_class(mrb), &uv_async_t_data_type, box));
}

void
mruby_set_uv_async_t_data_ptr(mrb_value obj, uv_async_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_async_t_data_type);
}

void
mruby_gift_uv_async_t_data_ptr(mrb_value obj, uv_async_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_async_t_data_type);
}

uv_async_t *
mruby_unbox_uv_async_t(mrb_value boxed) {
  return (uv_async_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Check_boxing */
/* sha: 4e802c33f4e7fd50cb9c871952491fac7f5cec5e2c4b87b864ec681696fd0336 */
#if BIND_Check_TYPE
/*
 * Boxing implementation for uv_check_t
 */

static void free_uv_check_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_check_t_data_type = {
   "uv_check_t", free_uv_check_t
};

mrb_value
mruby_box_uv_check_t(mrb_state* mrb, uv_check_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Check_class(mrb), &uv_check_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_check_t(mrb_state* mrb, uv_check_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Check_class(mrb), &uv_check_t_data_type, box));
}

void
mruby_set_uv_check_t_data_ptr(mrb_value obj, uv_check_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_check_t_data_type);
}

void
mruby_gift_uv_check_t_data_ptr(mrb_value obj, uv_check_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_check_t_data_type);
}

uv_check_t *
mruby_unbox_uv_check_t(mrb_value boxed) {
  return (uv_check_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Connect_boxing */
/* sha: bd2dfbe83d56275a31478ddeac9e5019164696add66fff03016da6a1e2bc2d4c */
#if BIND_Connect_TYPE
/*
 * Boxing implementation for uv_connect_t
 */

static void free_uv_connect_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_connect_t_data_type = {
   "uv_connect_t", free_uv_connect_t
};

mrb_value
mruby_box_uv_connect_t(mrb_state* mrb, uv_connect_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Connect_class(mrb), &uv_connect_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_connect_t(mrb_state* mrb, uv_connect_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Connect_class(mrb), &uv_connect_t_data_type, box));
}

void
mruby_set_uv_connect_t_data_ptr(mrb_value obj, uv_connect_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_connect_t_data_type);
}

void
mruby_gift_uv_connect_t_data_ptr(mrb_value obj, uv_connect_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_connect_t_data_type);
}

uv_connect_t *
mruby_unbox_uv_connect_t(mrb_value boxed) {
  return (uv_connect_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CpuInfo_boxing */
/* sha: e287d04f3948fcbc51810839174498660dfb78f24a42b7dc6c8201118e18b24f */
#if BIND_CpuInfo_TYPE
/*
 * Boxing implementation for uv_cpu_info_t
 */

static void free_uv_cpu_info_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_cpu_info_t_data_type = {
   "uv_cpu_info_t", free_uv_cpu_info_t
};

mrb_value
mruby_box_uv_cpu_info_t(mrb_state* mrb, uv_cpu_info_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, CpuInfo_class(mrb), &uv_cpu_info_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_cpu_info_t(mrb_state* mrb, uv_cpu_info_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, CpuInfo_class(mrb), &uv_cpu_info_t_data_type, box));
}

void
mruby_set_uv_cpu_info_t_data_ptr(mrb_value obj, uv_cpu_info_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_cpu_info_t_data_type);
}

void
mruby_gift_uv_cpu_info_t_data_ptr(mrb_value obj, uv_cpu_info_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_cpu_info_t_data_type);
}

uv_cpu_info_t *
mruby_unbox_uv_cpu_info_t(mrb_value boxed) {
  return (uv_cpu_info_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Dirent_boxing */
/* sha: 992ec86150e2f777032a9e0a5adc4c970fc568bb0cf1a3ada1ecfb08b3b37cf0 */
#if BIND_Dirent_TYPE
/*
 * Boxing implementation for uv_dirent_t
 */

static void free_uv_dirent_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_dirent_t_data_type = {
   "uv_dirent_t", free_uv_dirent_t
};

mrb_value
mruby_box_uv_dirent_t(mrb_state* mrb, uv_dirent_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Dirent_class(mrb), &uv_dirent_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_dirent_t(mrb_state* mrb, uv_dirent_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Dirent_class(mrb), &uv_dirent_t_data_type, box));
}

void
mruby_set_uv_dirent_t_data_ptr(mrb_value obj, uv_dirent_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_dirent_t_data_type);
}

void
mruby_gift_uv_dirent_t_data_ptr(mrb_value obj, uv_dirent_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_dirent_t_data_type);
}

uv_dirent_t *
mruby_unbox_uv_dirent_t(mrb_value boxed) {
  return (uv_dirent_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FSEvent_boxing */
/* sha: 1a677459dc192ef2621676aeac2f177a9fb77756dd4551be9bf94ae506cd2e4c */
#if BIND_FSEvent_TYPE
/*
 * Boxing implementation for uv_fs_event_t
 */

static void free_uv_fs_event_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_fs_event_t_data_type = {
   "uv_fs_event_t", free_uv_fs_event_t
};

mrb_value
mruby_box_uv_fs_event_t(mrb_state* mrb, uv_fs_event_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, FSEvent_class(mrb), &uv_fs_event_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_fs_event_t(mrb_state* mrb, uv_fs_event_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, FSEvent_class(mrb), &uv_fs_event_t_data_type, box));
}

void
mruby_set_uv_fs_event_t_data_ptr(mrb_value obj, uv_fs_event_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_fs_event_t_data_type);
}

void
mruby_gift_uv_fs_event_t_data_ptr(mrb_value obj, uv_fs_event_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_fs_event_t_data_type);
}

uv_fs_event_t *
mruby_unbox_uv_fs_event_t(mrb_value boxed) {
  return (uv_fs_event_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FSPoll_boxing */
/* sha: de18906b4ffd6cb52067589ad4c8afd35acc8df8a8936a3d3f69046114399825 */
#if BIND_FSPoll_TYPE
/*
 * Boxing implementation for uv_fs_poll_t
 */

static void free_uv_fs_poll_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_fs_poll_t_data_type = {
   "uv_fs_poll_t", free_uv_fs_poll_t
};

mrb_value
mruby_box_uv_fs_poll_t(mrb_state* mrb, uv_fs_poll_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, FSPoll_class(mrb), &uv_fs_poll_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_fs_poll_t(mrb_state* mrb, uv_fs_poll_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, FSPoll_class(mrb), &uv_fs_poll_t_data_type, box));
}

void
mruby_set_uv_fs_poll_t_data_ptr(mrb_value obj, uv_fs_poll_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_fs_poll_t_data_type);
}

void
mruby_gift_uv_fs_poll_t_data_ptr(mrb_value obj, uv_fs_poll_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_fs_poll_t_data_type);
}

uv_fs_poll_t *
mruby_unbox_uv_fs_poll_t(mrb_value boxed) {
  return (uv_fs_poll_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FS_boxing */
/* sha: d9aa4da0de3f05cf6b2b628892e38b344efca850f209d55830cdc54246de7c69 */
#if BIND_FS_TYPE
/*
 * Boxing implementation for uv_fs_t
 */

static void free_uv_fs_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_fs_t_data_type = {
   "uv_fs_t", free_uv_fs_t
};

mrb_value
mruby_box_uv_fs_t(mrb_state* mrb, uv_fs_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, FS_class(mrb), &uv_fs_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_fs_t(mrb_state* mrb, uv_fs_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, FS_class(mrb), &uv_fs_t_data_type, box));
}

void
mruby_set_uv_fs_t_data_ptr(mrb_value obj, uv_fs_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_fs_t_data_type);
}

void
mruby_gift_uv_fs_t_data_ptr(mrb_value obj, uv_fs_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_fs_t_data_type);
}

uv_fs_t *
mruby_unbox_uv_fs_t(mrb_value boxed) {
  return (uv_fs_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Getaddrinfo_boxing */
/* sha: 96781cd41c8848ce0c0638b74a20c5633016adcb50dc85d1afdcf2ac6d5560e3 */
#if BIND_Getaddrinfo_TYPE
/*
 * Boxing implementation for uv_getaddrinfo_t
 */

static void free_uv_getaddrinfo_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_getaddrinfo_t_data_type = {
   "uv_getaddrinfo_t", free_uv_getaddrinfo_t
};

mrb_value
mruby_box_uv_getaddrinfo_t(mrb_state* mrb, uv_getaddrinfo_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Getaddrinfo_class(mrb), &uv_getaddrinfo_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_getaddrinfo_t(mrb_state* mrb, uv_getaddrinfo_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Getaddrinfo_class(mrb), &uv_getaddrinfo_t_data_type, box));
}

void
mruby_set_uv_getaddrinfo_t_data_ptr(mrb_value obj, uv_getaddrinfo_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_getaddrinfo_t_data_type);
}

void
mruby_gift_uv_getaddrinfo_t_data_ptr(mrb_value obj, uv_getaddrinfo_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_getaddrinfo_t_data_type);
}

uv_getaddrinfo_t *
mruby_unbox_uv_getaddrinfo_t(mrb_value boxed) {
  return (uv_getaddrinfo_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Getnameinfo_boxing */
/* sha: 9d05358300a13d73b06dfd084afc043022855f7178581d100ff32c7df2b4728e */
#if BIND_Getnameinfo_TYPE
/*
 * Boxing implementation for uv_getnameinfo_t
 */

static void free_uv_getnameinfo_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_getnameinfo_t_data_type = {
   "uv_getnameinfo_t", free_uv_getnameinfo_t
};

mrb_value
mruby_box_uv_getnameinfo_t(mrb_state* mrb, uv_getnameinfo_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Getnameinfo_class(mrb), &uv_getnameinfo_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_getnameinfo_t(mrb_state* mrb, uv_getnameinfo_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Getnameinfo_class(mrb), &uv_getnameinfo_t_data_type, box));
}

void
mruby_set_uv_getnameinfo_t_data_ptr(mrb_value obj, uv_getnameinfo_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_getnameinfo_t_data_type);
}

void
mruby_gift_uv_getnameinfo_t_data_ptr(mrb_value obj, uv_getnameinfo_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_getnameinfo_t_data_type);
}

uv_getnameinfo_t *
mruby_unbox_uv_getnameinfo_t(mrb_value boxed) {
  return (uv_getnameinfo_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Handle_boxing */
/* sha: 6d7d856291e590304ca4691131514e9e402bd00eee7d4b404c98f1c4607d126e */
#if BIND_Handle_TYPE
/*
 * Boxing implementation for uv_handle_t
 */

static void free_uv_handle_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_handle_t_data_type = {
   "uv_handle_t", free_uv_handle_t
};

mrb_value
mruby_box_uv_handle_t(mrb_state* mrb, uv_handle_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Handle_class(mrb), &uv_handle_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_handle_t(mrb_state* mrb, uv_handle_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Handle_class(mrb), &uv_handle_t_data_type, box));
}

void
mruby_set_uv_handle_t_data_ptr(mrb_value obj, uv_handle_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_handle_t_data_type);
}

void
mruby_gift_uv_handle_t_data_ptr(mrb_value obj, uv_handle_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_handle_t_data_type);
}

uv_handle_t *
mruby_unbox_uv_handle_t(mrb_value boxed) {
  return (uv_handle_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Idle_boxing */
/* sha: 83a35e5fca8d2a4ffa5da8f1e677ff63326c73d02ffb8a45d1a64095bcfcc721 */
#if BIND_Idle_TYPE
/*
 * Boxing implementation for uv_idle_t
 */

static void free_uv_idle_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_idle_t_data_type = {
   "uv_idle_t", free_uv_idle_t
};

mrb_value
mruby_box_uv_idle_t(mrb_state* mrb, uv_idle_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Idle_class(mrb), &uv_idle_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_idle_t(mrb_state* mrb, uv_idle_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Idle_class(mrb), &uv_idle_t_data_type, box));
}

void
mruby_set_uv_idle_t_data_ptr(mrb_value obj, uv_idle_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_idle_t_data_type);
}

void
mruby_gift_uv_idle_t_data_ptr(mrb_value obj, uv_idle_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_idle_t_data_type);
}

uv_idle_t *
mruby_unbox_uv_idle_t(mrb_value boxed) {
  return (uv_idle_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: InterfaceAddress_boxing */
/* sha: 47e0daa3940651ec4057de2afdbb7758cbe1cbe02a479aa56dd2da40fd8f4f65 */
#if BIND_InterfaceAddress_TYPE
/*
 * Boxing implementation for uv_interface_address_t
 */

static void free_uv_interface_address_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_interface_address_t_data_type = {
   "uv_interface_address_t", free_uv_interface_address_t
};

mrb_value
mruby_box_uv_interface_address_t(mrb_state* mrb, uv_interface_address_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, InterfaceAddress_class(mrb), &uv_interface_address_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_interface_address_t(mrb_state* mrb, uv_interface_address_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, InterfaceAddress_class(mrb), &uv_interface_address_t_data_type, box));
}

void
mruby_set_uv_interface_address_t_data_ptr(mrb_value obj, uv_interface_address_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_interface_address_t_data_type);
}

void
mruby_gift_uv_interface_address_t_data_ptr(mrb_value obj, uv_interface_address_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_interface_address_t_data_type);
}

uv_interface_address_t *
mruby_unbox_uv_interface_address_t(mrb_value boxed) {
  return (uv_interface_address_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Loop_boxing */
/* sha: 1a63a8ff5532cc04c820e724ab2f27d1486ea18920c431dbccd2a96c6bd0a7b8 */
#if BIND_Loop_TYPE
/*
 * Boxing implementation for uv_loop_t
 */

static void free_uv_loop_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_loop_t_data_type = {
   "uv_loop_t", free_uv_loop_t
};

mrb_value
mruby_box_uv_loop_t(mrb_state* mrb, uv_loop_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Loop_class(mrb), &uv_loop_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_loop_t(mrb_state* mrb, uv_loop_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Loop_class(mrb), &uv_loop_t_data_type, box));
}

void
mruby_set_uv_loop_t_data_ptr(mrb_value obj, uv_loop_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_loop_t_data_type);
}

void
mruby_gift_uv_loop_t_data_ptr(mrb_value obj, uv_loop_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_loop_t_data_type);
}

uv_loop_t *
mruby_unbox_uv_loop_t(mrb_value boxed) {
  return (uv_loop_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Pipe_boxing */
/* sha: e434e3c63475d61a3c1e160ffc80922be2367d36a22e1472533edf13829fd579 */
#if BIND_Pipe_TYPE
/*
 * Boxing implementation for uv_pipe_t
 */

static void free_uv_pipe_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_pipe_t_data_type = {
   "uv_pipe_t", free_uv_pipe_t
};

mrb_value
mruby_box_uv_pipe_t(mrb_state* mrb, uv_pipe_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Pipe_class(mrb), &uv_pipe_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_pipe_t(mrb_state* mrb, uv_pipe_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Pipe_class(mrb), &uv_pipe_t_data_type, box));
}

void
mruby_set_uv_pipe_t_data_ptr(mrb_value obj, uv_pipe_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_pipe_t_data_type);
}

void
mruby_gift_uv_pipe_t_data_ptr(mrb_value obj, uv_pipe_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_pipe_t_data_type);
}

uv_pipe_t *
mruby_unbox_uv_pipe_t(mrb_value boxed) {
  return (uv_pipe_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Poll_boxing */
/* sha: 6536c895ed3ab7f2e47554ca1201c2f02a4121588aa6ae5d295514bb04c2fb88 */
#if BIND_Poll_TYPE
/*
 * Boxing implementation for uv_poll_t
 */

static void free_uv_poll_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_poll_t_data_type = {
   "uv_poll_t", free_uv_poll_t
};

mrb_value
mruby_box_uv_poll_t(mrb_state* mrb, uv_poll_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Poll_class(mrb), &uv_poll_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_poll_t(mrb_state* mrb, uv_poll_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Poll_class(mrb), &uv_poll_t_data_type, box));
}

void
mruby_set_uv_poll_t_data_ptr(mrb_value obj, uv_poll_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_poll_t_data_type);
}

void
mruby_gift_uv_poll_t_data_ptr(mrb_value obj, uv_poll_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_poll_t_data_type);
}

uv_poll_t *
mruby_unbox_uv_poll_t(mrb_value boxed) {
  return (uv_poll_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Prepare_boxing */
/* sha: d6e48e8277c96d9fd8222a9108b502338f9dc9c6973730e20a69833e9aee842a */
#if BIND_Prepare_TYPE
/*
 * Boxing implementation for uv_prepare_t
 */

static void free_uv_prepare_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_prepare_t_data_type = {
   "uv_prepare_t", free_uv_prepare_t
};

mrb_value
mruby_box_uv_prepare_t(mrb_state* mrb, uv_prepare_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Prepare_class(mrb), &uv_prepare_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_prepare_t(mrb_state* mrb, uv_prepare_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Prepare_class(mrb), &uv_prepare_t_data_type, box));
}

void
mruby_set_uv_prepare_t_data_ptr(mrb_value obj, uv_prepare_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_prepare_t_data_type);
}

void
mruby_gift_uv_prepare_t_data_ptr(mrb_value obj, uv_prepare_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_prepare_t_data_type);
}

uv_prepare_t *
mruby_unbox_uv_prepare_t(mrb_value boxed) {
  return (uv_prepare_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ProcessOptions_boxing */
/* sha: 0b763cf8ecd1d5836d3ebddc74e7eaf6dacbe5eee980827cacc4eba1ce7dab84 */
#if BIND_ProcessOptions_TYPE
/*
 * Boxing implementation for uv_process_options_t
 */

static void free_uv_process_options_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_process_options_t_data_type = {
   "uv_process_options_t", free_uv_process_options_t
};

mrb_value
mruby_box_uv_process_options_t(mrb_state* mrb, uv_process_options_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, ProcessOptions_class(mrb), &uv_process_options_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_process_options_t(mrb_state* mrb, uv_process_options_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, ProcessOptions_class(mrb), &uv_process_options_t_data_type, box));
}

void
mruby_set_uv_process_options_t_data_ptr(mrb_value obj, uv_process_options_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_process_options_t_data_type);
}

void
mruby_gift_uv_process_options_t_data_ptr(mrb_value obj, uv_process_options_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_process_options_t_data_type);
}

uv_process_options_t *
mruby_unbox_uv_process_options_t(mrb_value boxed) {
  return (uv_process_options_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Process_boxing */
/* sha: 117518fbc36ae2bda51f7f35a6f2075d96400041e50b9e1ddf42d9f36adafa86 */
#if BIND_Process_TYPE
/*
 * Boxing implementation for uv_process_t
 */

static void free_uv_process_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_process_t_data_type = {
   "uv_process_t", free_uv_process_t
};

mrb_value
mruby_box_uv_process_t(mrb_state* mrb, uv_process_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Process_class(mrb), &uv_process_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_process_t(mrb_state* mrb, uv_process_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Process_class(mrb), &uv_process_t_data_type, box));
}

void
mruby_set_uv_process_t_data_ptr(mrb_value obj, uv_process_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_process_t_data_type);
}

void
mruby_gift_uv_process_t_data_ptr(mrb_value obj, uv_process_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_process_t_data_type);
}

uv_process_t *
mruby_unbox_uv_process_t(mrb_value boxed) {
  return (uv_process_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Req_boxing */
/* sha: bf722c9a0264c1e7c87ab494170ba395659e25b561e413093642deec7414d1e2 */
#if BIND_Req_TYPE
/*
 * Boxing implementation for uv_req_t
 */

static void free_uv_req_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_req_t_data_type = {
   "uv_req_t", free_uv_req_t
};

mrb_value
mruby_box_uv_req_t(mrb_state* mrb, uv_req_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Req_class(mrb), &uv_req_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_req_t(mrb_state* mrb, uv_req_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Req_class(mrb), &uv_req_t_data_type, box));
}

void
mruby_set_uv_req_t_data_ptr(mrb_value obj, uv_req_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_req_t_data_type);
}

void
mruby_gift_uv_req_t_data_ptr(mrb_value obj, uv_req_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_req_t_data_type);
}

uv_req_t *
mruby_unbox_uv_req_t(mrb_value boxed) {
  return (uv_req_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RUsage_boxing */
/* sha: 3da5869607cb1910ec2c40c2376aef3d76b5885f0b1b89eec66692d240d75ab3 */
#if BIND_RUsage_TYPE
/*
 * Boxing implementation for uv_rusage_t
 */

static void free_uv_rusage_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_rusage_t_data_type = {
   "uv_rusage_t", free_uv_rusage_t
};

mrb_value
mruby_box_uv_rusage_t(mrb_state* mrb, uv_rusage_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, RUsage_class(mrb), &uv_rusage_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_rusage_t(mrb_state* mrb, uv_rusage_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, RUsage_class(mrb), &uv_rusage_t_data_type, box));
}

void
mruby_set_uv_rusage_t_data_ptr(mrb_value obj, uv_rusage_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_rusage_t_data_type);
}

void
mruby_gift_uv_rusage_t_data_ptr(mrb_value obj, uv_rusage_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_rusage_t_data_type);
}

uv_rusage_t *
mruby_unbox_uv_rusage_t(mrb_value boxed) {
  return (uv_rusage_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Shutdown_boxing */
/* sha: daa364edf682c1d7e4b7bb8e38060736a971e54ee139bf18911ac3b826a3945e */
#if BIND_Shutdown_TYPE
/*
 * Boxing implementation for uv_shutdown_t
 */

static void free_uv_shutdown_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_shutdown_t_data_type = {
   "uv_shutdown_t", free_uv_shutdown_t
};

mrb_value
mruby_box_uv_shutdown_t(mrb_state* mrb, uv_shutdown_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Shutdown_class(mrb), &uv_shutdown_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_shutdown_t(mrb_state* mrb, uv_shutdown_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Shutdown_class(mrb), &uv_shutdown_t_data_type, box));
}

void
mruby_set_uv_shutdown_t_data_ptr(mrb_value obj, uv_shutdown_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_shutdown_t_data_type);
}

void
mruby_gift_uv_shutdown_t_data_ptr(mrb_value obj, uv_shutdown_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_shutdown_t_data_type);
}

uv_shutdown_t *
mruby_unbox_uv_shutdown_t(mrb_value boxed) {
  return (uv_shutdown_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signal_boxing */
/* sha: 7931afeced14ac0614a48dfa9fd94aad21649bc076ff12e8c8f6e5cf8640d821 */
#if BIND_Signal_TYPE
/*
 * Boxing implementation for uv_signal_t
 */

static void free_uv_signal_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_signal_t_data_type = {
   "uv_signal_t", free_uv_signal_t
};

mrb_value
mruby_box_uv_signal_t(mrb_state* mrb, uv_signal_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Signal_class(mrb), &uv_signal_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_signal_t(mrb_state* mrb, uv_signal_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Signal_class(mrb), &uv_signal_t_data_type, box));
}

void
mruby_set_uv_signal_t_data_ptr(mrb_value obj, uv_signal_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_signal_t_data_type);
}

void
mruby_gift_uv_signal_t_data_ptr(mrb_value obj, uv_signal_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_signal_t_data_type);
}

uv_signal_t *
mruby_unbox_uv_signal_t(mrb_value boxed) {
  return (uv_signal_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Stat_boxing */
/* sha: 0f160f0d58b6899e338ba2f7c76606cb77fcdacb3634e0fdb60fef2b352a3174 */
#if BIND_Stat_TYPE
/*
 * Boxing implementation for uv_stat_t
 */

static void free_uv_stat_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_stat_t_data_type = {
   "uv_stat_t", free_uv_stat_t
};

mrb_value
mruby_box_uv_stat_t(mrb_state* mrb, uv_stat_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Stat_class(mrb), &uv_stat_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_stat_t(mrb_state* mrb, uv_stat_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Stat_class(mrb), &uv_stat_t_data_type, box));
}

void
mruby_set_uv_stat_t_data_ptr(mrb_value obj, uv_stat_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_stat_t_data_type);
}

void
mruby_gift_uv_stat_t_data_ptr(mrb_value obj, uv_stat_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_stat_t_data_type);
}

uv_stat_t *
mruby_unbox_uv_stat_t(mrb_value boxed) {
  return (uv_stat_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StdioContainer_boxing */
/* sha: 561bb669c560a4da7c16a3b72e4de0e1b3757ced13d86e27ec9476371e755093 */
#if BIND_StdioContainer_TYPE
/*
 * Boxing implementation for uv_stdio_container_t
 */

static void free_uv_stdio_container_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_stdio_container_t_data_type = {
   "uv_stdio_container_t", free_uv_stdio_container_t
};

mrb_value
mruby_box_uv_stdio_container_t(mrb_state* mrb, uv_stdio_container_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, StdioContainer_class(mrb), &uv_stdio_container_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_stdio_container_t(mrb_state* mrb, uv_stdio_container_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, StdioContainer_class(mrb), &uv_stdio_container_t_data_type, box));
}

void
mruby_set_uv_stdio_container_t_data_ptr(mrb_value obj, uv_stdio_container_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_stdio_container_t_data_type);
}

void
mruby_gift_uv_stdio_container_t_data_ptr(mrb_value obj, uv_stdio_container_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_stdio_container_t_data_type);
}

uv_stdio_container_t *
mruby_unbox_uv_stdio_container_t(mrb_value boxed) {
  return (uv_stdio_container_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Stream_boxing */
/* sha: c19f106674916b89d6255f4992c09e54ca0e181f6ce395d4ab892947af727ba3 */
#if BIND_Stream_TYPE
/*
 * Boxing implementation for uv_stream_t
 */

static void free_uv_stream_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_stream_t_data_type = {
   "uv_stream_t", free_uv_stream_t
};

mrb_value
mruby_box_uv_stream_t(mrb_state* mrb, uv_stream_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Stream_class(mrb), &uv_stream_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_stream_t(mrb_state* mrb, uv_stream_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Stream_class(mrb), &uv_stream_t_data_type, box));
}

void
mruby_set_uv_stream_t_data_ptr(mrb_value obj, uv_stream_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_stream_t_data_type);
}

void
mruby_gift_uv_stream_t_data_ptr(mrb_value obj, uv_stream_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_stream_t_data_type);
}

uv_stream_t *
mruby_unbox_uv_stream_t(mrb_value boxed) {
  return (uv_stream_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TCP_boxing */
/* sha: 1cdc65423ecaf9ff6bc0f17514f1f3e9566f40ff0b8ad49c3a7984b516787469 */
#if BIND_TCP_TYPE
/*
 * Boxing implementation for uv_tcp_t
 */

static void free_uv_tcp_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_tcp_t_data_type = {
   "uv_tcp_t", free_uv_tcp_t
};

mrb_value
mruby_box_uv_tcp_t(mrb_state* mrb, uv_tcp_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, TCP_class(mrb), &uv_tcp_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_tcp_t(mrb_state* mrb, uv_tcp_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, TCP_class(mrb), &uv_tcp_t_data_type, box));
}

void
mruby_set_uv_tcp_t_data_ptr(mrb_value obj, uv_tcp_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_tcp_t_data_type);
}

void
mruby_gift_uv_tcp_t_data_ptr(mrb_value obj, uv_tcp_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_tcp_t_data_type);
}

uv_tcp_t *
mruby_unbox_uv_tcp_t(mrb_value boxed) {
  return (uv_tcp_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timer_boxing */
/* sha: 3a9681f8b99b0bb248045a30adf742d9c3af970b60a656dbd06db72d59aa5b98 */
#if BIND_Timer_TYPE
/*
 * Boxing implementation for uv_timer_t
 */

static void free_uv_timer_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_timer_t_data_type = {
   "uv_timer_t", free_uv_timer_t
};

mrb_value
mruby_box_uv_timer_t(mrb_state* mrb, uv_timer_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Timer_class(mrb), &uv_timer_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_timer_t(mrb_state* mrb, uv_timer_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Timer_class(mrb), &uv_timer_t_data_type, box));
}

void
mruby_set_uv_timer_t_data_ptr(mrb_value obj, uv_timer_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_timer_t_data_type);
}

void
mruby_gift_uv_timer_t_data_ptr(mrb_value obj, uv_timer_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_timer_t_data_type);
}

uv_timer_t *
mruby_unbox_uv_timer_t(mrb_value boxed) {
  return (uv_timer_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timespec_boxing */
/* sha: 2f1607bb72410f9730df0c871bbfdbe110d648d798f6feedc33a799119d1fa65 */
#if BIND_Timespec_TYPE
/*
 * Boxing implementation for uv_timespec_t
 */

static void free_uv_timespec_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_timespec_t_data_type = {
   "uv_timespec_t", free_uv_timespec_t
};

mrb_value
mruby_box_uv_timespec_t(mrb_state* mrb, uv_timespec_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Timespec_class(mrb), &uv_timespec_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_timespec_t(mrb_state* mrb, uv_timespec_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Timespec_class(mrb), &uv_timespec_t_data_type, box));
}

void
mruby_set_uv_timespec_t_data_ptr(mrb_value obj, uv_timespec_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_timespec_t_data_type);
}

void
mruby_gift_uv_timespec_t_data_ptr(mrb_value obj, uv_timespec_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_timespec_t_data_type);
}

uv_timespec_t *
mruby_unbox_uv_timespec_t(mrb_value boxed) {
  return (uv_timespec_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Timeval_boxing */
/* sha: e41c64a8959f821a6614c2f6256b851e1c1aa80e8e76d25fccacedadeb689c98 */
#if BIND_Timeval_TYPE
/*
 * Boxing implementation for uv_timeval_t
 */

static void free_uv_timeval_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_timeval_t_data_type = {
   "uv_timeval_t", free_uv_timeval_t
};

mrb_value
mruby_box_uv_timeval_t(mrb_state* mrb, uv_timeval_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Timeval_class(mrb), &uv_timeval_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_timeval_t(mrb_state* mrb, uv_timeval_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Timeval_class(mrb), &uv_timeval_t_data_type, box));
}

void
mruby_set_uv_timeval_t_data_ptr(mrb_value obj, uv_timeval_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_timeval_t_data_type);
}

void
mruby_gift_uv_timeval_t_data_ptr(mrb_value obj, uv_timeval_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_timeval_t_data_type);
}

uv_timeval_t *
mruby_unbox_uv_timeval_t(mrb_value boxed) {
  return (uv_timeval_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tty_boxing */
/* sha: 88859a96111abe9145e410b723dbff203ff6fcbb2282c2681a6b6a27b2b2f50d */
#if BIND_Tty_TYPE
/*
 * Boxing implementation for uv_tty_t
 */

static void free_uv_tty_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_tty_t_data_type = {
   "uv_tty_t", free_uv_tty_t
};

mrb_value
mruby_box_uv_tty_t(mrb_state* mrb, uv_tty_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Tty_class(mrb), &uv_tty_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_tty_t(mrb_state* mrb, uv_tty_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Tty_class(mrb), &uv_tty_t_data_type, box));
}

void
mruby_set_uv_tty_t_data_ptr(mrb_value obj, uv_tty_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_tty_t_data_type);
}

void
mruby_gift_uv_tty_t_data_ptr(mrb_value obj, uv_tty_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_tty_t_data_type);
}

uv_tty_t *
mruby_unbox_uv_tty_t(mrb_value boxed) {
  return (uv_tty_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UDPSend_boxing */
/* sha: f259221b96fc4f96ec1645c9fa136e45776d13d97d73abf7ca6cb68ebd1741b0 */
#if BIND_UDPSend_TYPE
/*
 * Boxing implementation for uv_udp_send_t
 */

static void free_uv_udp_send_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_udp_send_t_data_type = {
   "uv_udp_send_t", free_uv_udp_send_t
};

mrb_value
mruby_box_uv_udp_send_t(mrb_state* mrb, uv_udp_send_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, UDPSend_class(mrb), &uv_udp_send_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_udp_send_t(mrb_state* mrb, uv_udp_send_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UDPSend_class(mrb), &uv_udp_send_t_data_type, box));
}

void
mruby_set_uv_udp_send_t_data_ptr(mrb_value obj, uv_udp_send_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_udp_send_t_data_type);
}

void
mruby_gift_uv_udp_send_t_data_ptr(mrb_value obj, uv_udp_send_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_udp_send_t_data_type);
}

uv_udp_send_t *
mruby_unbox_uv_udp_send_t(mrb_value boxed) {
  return (uv_udp_send_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UDP_boxing */
/* sha: 1ad973e6a69b7d9b3d20a01a4393618639d486c4bb44b1bed1922ef76f9b75b1 */
#if BIND_UDP_TYPE
/*
 * Boxing implementation for uv_udp_t
 */

static void free_uv_udp_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_udp_t_data_type = {
   "uv_udp_t", free_uv_udp_t
};

mrb_value
mruby_box_uv_udp_t(mrb_state* mrb, uv_udp_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, UDP_class(mrb), &uv_udp_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_udp_t(mrb_state* mrb, uv_udp_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UDP_class(mrb), &uv_udp_t_data_type, box));
}

void
mruby_set_uv_udp_t_data_ptr(mrb_value obj, uv_udp_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_udp_t_data_type);
}

void
mruby_gift_uv_udp_t_data_ptr(mrb_value obj, uv_udp_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_udp_t_data_type);
}

uv_udp_t *
mruby_unbox_uv_udp_t(mrb_value boxed) {
  return (uv_udp_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Work_boxing */
/* sha: a3e18ecb4184b126a5cbdd2b263540d0077f1827f8e9de5c73a02f8b65d10231 */
#if BIND_Work_TYPE
/*
 * Boxing implementation for uv_work_t
 */

static void free_uv_work_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_work_t_data_type = {
   "uv_work_t", free_uv_work_t
};

mrb_value
mruby_box_uv_work_t(mrb_state* mrb, uv_work_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Work_class(mrb), &uv_work_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_work_t(mrb_state* mrb, uv_work_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Work_class(mrb), &uv_work_t_data_type, box));
}

void
mruby_set_uv_work_t_data_ptr(mrb_value obj, uv_work_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_work_t_data_type);
}

void
mruby_gift_uv_work_t_data_ptr(mrb_value obj, uv_work_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_work_t_data_type);
}

uv_work_t *
mruby_unbox_uv_work_t(mrb_value boxed) {
  return (uv_work_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Write_boxing */
/* sha: 9ce1f472817b68a8fcfbdb9b1f0fb5a779d19461f9905cf92e42daf301f35cfb */
#if BIND_Write_TYPE
/*
 * Boxing implementation for uv_write_t
 */

static void free_uv_write_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type uv_write_t_data_type = {
   "uv_write_t", free_uv_write_t
};

mrb_value
mruby_box_uv_write_t(mrb_state* mrb, uv_write_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Write_class(mrb), &uv_write_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_write_t(mrb_state* mrb, uv_write_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Write_class(mrb), &uv_write_t_data_type, box));
}

void
mruby_set_uv_write_t_data_ptr(mrb_value obj, uv_write_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_write_t_data_type);
}

void
mruby_gift_uv_write_t_data_ptr(mrb_value obj, uv_write_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &uv_write_t_data_type);
}

uv_write_t *
mruby_unbox_uv_write_t(mrb_value boxed) {
  return (uv_write_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
