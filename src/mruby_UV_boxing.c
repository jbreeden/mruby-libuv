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
  mruby_uv_handle_data_t * data = (mruby_uv_handle_data_t *)(handle->loop->data);
  mrb_funcall(mrb, data->self, "ref", 1, obj);
  return 0;
}

int unset_loop_reference(mrb_state* mrb, mrb_value obj) {
  uv_handle_t * handle = (uv_handle_t *)(mruby_unbox_as_void_ptr(obj));
  if (handle->loop == NULL) {
    /* No loop associated, so nothing to be done. Not an error. */
    return 0;
  }
  mruby_uv_handle_data_t * data = (mruby_uv_handle_data_t *)(handle->loop->data);
  mrb_funcall(mrb, data->self, "unref", 1, obj);
  return 0;
}

uv_handle_t *
new_mruby_uv_handle(mrb_state* mrb, mrb_value self, size_t size) {
  uv_handle_t* handle = (uv_handle_t*)calloc(1, size);
  mruby_uv_handle_data_t* data = (mruby_uv_handle_data_t*)calloc(1, sizeof(mruby_uv_handle_data_t));
  data->mrb = mrb;
  data->self = self;
  handle->data = data;
  return handle;
}

void
free_mruby_uv_handle(uv_handle_t * handle) {
  if (handle->data != NULL) {
    free(handle->data);
  }
  free(handle);
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: UvCpuTimesS_boxing */
/* sha: 4502be6862da2bce112a6ba415dbb1b1ed2f6134eb74b0358a75384603024bab */
#if BIND_UvCpuTimesS_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvCpuTimesS_class(mrb), &uv_cpu_times_s_data_type, box));
}

mrb_value
mruby_giftwrap_uv_cpu_times_s(mrb_state* mrb, struct uv_cpu_times_s *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvCpuTimesS_class(mrb), &uv_cpu_times_s_data_type, box));
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

/* MRUBY_BINDING: UvAsyncT_boxing */
/* sha: 408174a0fdad1c3a07d8d87e16786e799d2c4066764602ad724dc2e4372f6cd1 */
#if BIND_UvAsyncT_TYPE
/*
 * Boxing implementation for uv_async_t
 */

static void free_uv_async_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free_mruby_uv_handle((uv_handle_t*)box->obj);
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvAsyncT_class(mrb), &uv_async_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_async_t(mrb_state* mrb, uv_async_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvAsyncT_class(mrb), &uv_async_t_data_type, box));
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

/* MRUBY_BINDING: UvCheckT_boxing */
/* sha: b4ce2606262cbeb43a0d65faa58eea460c0fe4974f961c2805021f1ff73b12b5 */
#if BIND_UvCheckT_TYPE
/*
 * Boxing implementation for uv_check_t
 */

static void free_uv_check_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free_mruby_uv_handle((uv_handle_t*)box->obj);
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvCheckT_class(mrb), &uv_check_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_check_t(mrb_state* mrb, uv_check_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvCheckT_class(mrb), &uv_check_t_data_type, box));
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

/* MRUBY_BINDING: UvConnectT_boxing */
/* sha: 465556bc4bae261b8670e8d12d1f02885bc7133ed32bd05590dc1f25f039c8d0 */
#if BIND_UvConnectT_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvConnectT_class(mrb), &uv_connect_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_connect_t(mrb_state* mrb, uv_connect_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvConnectT_class(mrb), &uv_connect_t_data_type, box));
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

/* MRUBY_BINDING: UvCpuInfoT_boxing */
/* sha: f5ae240147a3ef065396acc9c5b573ce9a572d2729fe2f2a6581d248caa8575b */
#if BIND_UvCpuInfoT_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvCpuInfoT_class(mrb), &uv_cpu_info_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_cpu_info_t(mrb_state* mrb, uv_cpu_info_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvCpuInfoT_class(mrb), &uv_cpu_info_t_data_type, box));
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

/* MRUBY_BINDING: UvDirentT_boxing */
/* sha: b608897617e1163ca705c2ee2419e80a37b9ea308b3474b704a24537711920bc */
#if BIND_UvDirentT_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvDirentT_class(mrb), &uv_dirent_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_dirent_t(mrb_state* mrb, uv_dirent_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvDirentT_class(mrb), &uv_dirent_t_data_type, box));
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

/* MRUBY_BINDING: UvFsEventT_boxing */
/* sha: d25226895bfc5497af9fda43b8bf412d8f8132e1c99e13132616af51cdc66aca */
#if BIND_UvFsEventT_TYPE
/*
 * Boxing implementation for uv_fs_event_t
 */

static void free_uv_fs_event_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free_mruby_uv_handle((uv_handle_t*)box->obj);
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvFsEventT_class(mrb), &uv_fs_event_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_fs_event_t(mrb_state* mrb, uv_fs_event_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvFsEventT_class(mrb), &uv_fs_event_t_data_type, box));
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

/* MRUBY_BINDING: UvFsPollT_boxing */
/* sha: edc96e7bbe81a95d422e75a68bfa85fe39ec8f9e63f39f65941e10b760b34157 */
#if BIND_UvFsPollT_TYPE
/*
 * Boxing implementation for uv_fs_poll_t
 */

static void free_uv_fs_poll_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free_mruby_uv_handle((uv_handle_t*)box->obj);
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvFsPollT_class(mrb), &uv_fs_poll_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_fs_poll_t(mrb_state* mrb, uv_fs_poll_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvFsPollT_class(mrb), &uv_fs_poll_t_data_type, box));
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

/* MRUBY_BINDING: UvFsT_boxing */
/* sha: b503c2cfd8944c970ccd10907603be7d7a99614c7718e1c8465c8962f2b4ab6c */
#if BIND_UvFsT_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvFsT_class(mrb), &uv_fs_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_fs_t(mrb_state* mrb, uv_fs_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvFsT_class(mrb), &uv_fs_t_data_type, box));
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

/* MRUBY_BINDING: UvGetaddrinfoT_boxing */
/* sha: b530eb5c02f6e30af93b61642c399d5868f6806bfbb68a9b5c6c2b3aa23524f4 */
#if BIND_UvGetaddrinfoT_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvGetaddrinfoT_class(mrb), &uv_getaddrinfo_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_getaddrinfo_t(mrb_state* mrb, uv_getaddrinfo_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvGetaddrinfoT_class(mrb), &uv_getaddrinfo_t_data_type, box));
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

/* MRUBY_BINDING: UvGetnameinfoT_boxing */
/* sha: 402e994ee2ec277fe95c44c8110a93ca1db0d60fe8018e814817ae17af1a6a00 */
#if BIND_UvGetnameinfoT_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvGetnameinfoT_class(mrb), &uv_getnameinfo_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_getnameinfo_t(mrb_state* mrb, uv_getnameinfo_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvGetnameinfoT_class(mrb), &uv_getnameinfo_t_data_type, box));
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

/* MRUBY_BINDING: UvHandleT_boxing */
/* sha: e3f5c994e76de7382a6fd14329e4686573cbe9d2c4c24c270d647f9b0144e64c */
#if BIND_UvHandleT_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvHandleT_class(mrb), &uv_handle_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_handle_t(mrb_state* mrb, uv_handle_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvHandleT_class(mrb), &uv_handle_t_data_type, box));
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

/* MRUBY_BINDING: UvIdleT_boxing */
/* sha: 3773a8035ab710ba1dc70b6e4b7543df606e8375c466b5e18b744aacbbf55615 */
#if BIND_UvIdleT_TYPE
/*
 * Boxing implementation for uv_idle_t
 */

static void free_uv_idle_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free_mruby_uv_handle((uv_handle_t*)box->obj);
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvIdleT_class(mrb), &uv_idle_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_idle_t(mrb_state* mrb, uv_idle_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvIdleT_class(mrb), &uv_idle_t_data_type, box));
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

/* MRUBY_BINDING: UvInterfaceAddressT_boxing */
/* sha: 18f3fb64bd762a0ada77845ad94dad80cb4a505f29db28a83888a9f4732cac8b */
#if BIND_UvInterfaceAddressT_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvInterfaceAddressT_class(mrb), &uv_interface_address_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_interface_address_t(mrb_state* mrb, uv_interface_address_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvInterfaceAddressT_class(mrb), &uv_interface_address_t_data_type, box));
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

/* MRUBY_BINDING: UvLoopT_boxing */
/* sha: eaaaf42c0467582c7f23708ce47089173ae26cfbb265c79cc46ff93ef50d1cca */
#if BIND_UvLoopT_TYPE
/*
 * Boxing implementation for uv_loop_t
 */

static void free_uv_loop_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      uv_loop_close(box->obj);
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvLoopT_class(mrb), &uv_loop_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_loop_t(mrb_state* mrb, uv_loop_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvLoopT_class(mrb), &uv_loop_t_data_type, box));
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

/* MRUBY_BINDING: UvPipeT_boxing */
/* sha: 6ea8533d7e9204e292e4d961e8f87d9db97309fd1964f4182376ca68517f8548 */
#if BIND_UvPipeT_TYPE
/*
 * Boxing implementation for uv_pipe_t
 */

static void free_uv_pipe_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free_mruby_uv_handle((uv_handle_t*)box->obj);
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvPipeT_class(mrb), &uv_pipe_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_pipe_t(mrb_state* mrb, uv_pipe_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvPipeT_class(mrb), &uv_pipe_t_data_type, box));
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

/* MRUBY_BINDING: UvPollT_boxing */
/* sha: f0bd2fecd94a31da5b4dfb423d5fe0ca8edca7e0a0e0e2ce421395df9465258d */
#if BIND_UvPollT_TYPE
/*
 * Boxing implementation for uv_poll_t
 */

static void free_uv_poll_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free_mruby_uv_handle((uv_handle_t*)box->obj);
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvPollT_class(mrb), &uv_poll_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_poll_t(mrb_state* mrb, uv_poll_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvPollT_class(mrb), &uv_poll_t_data_type, box));
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

/* MRUBY_BINDING: UvPrepareT_boxing */
/* sha: e008686f21445e20f193241825950a0ed1c278c291112dec84a13fab0ca20f37 */
#if BIND_UvPrepareT_TYPE
/*
 * Boxing implementation for uv_prepare_t
 */

static void free_uv_prepare_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free_mruby_uv_handle((uv_handle_t*)box->obj);
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvPrepareT_class(mrb), &uv_prepare_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_prepare_t(mrb_state* mrb, uv_prepare_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvPrepareT_class(mrb), &uv_prepare_t_data_type, box));
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

/* MRUBY_BINDING: UvProcessOptionsT_boxing */
/* sha: c900919a1ce81f8cd1239740a208ea6351b8de63164ad51888d906f7f4b572f4 */
#if BIND_UvProcessOptionsT_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvProcessOptionsT_class(mrb), &uv_process_options_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_process_options_t(mrb_state* mrb, uv_process_options_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvProcessOptionsT_class(mrb), &uv_process_options_t_data_type, box));
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

/* MRUBY_BINDING: UvProcessT_boxing */
/* sha: 90d197bc16d329c4d1bda2638ad6f8ba3ee79c39caecfb52e01f26d68ee96b9f */
#if BIND_UvProcessT_TYPE
/*
 * Boxing implementation for uv_process_t
 */

static void free_uv_process_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free_mruby_uv_handle((uv_handle_t*)box->obj);
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvProcessT_class(mrb), &uv_process_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_process_t(mrb_state* mrb, uv_process_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvProcessT_class(mrb), &uv_process_t_data_type, box));
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

/* MRUBY_BINDING: UvReqT_boxing */
/* sha: e423f9a1bd560cb83eb8623eb5dab2098a1e9d5ad03ae34b076ab6f3e79c0d69 */
#if BIND_UvReqT_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvReqT_class(mrb), &uv_req_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_req_t(mrb_state* mrb, uv_req_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvReqT_class(mrb), &uv_req_t_data_type, box));
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

/* MRUBY_BINDING: UvRusageT_boxing */
/* sha: 92287780049f9f38003e5265c21af20e3457d7852bae0564a6afbe1d459bc57d */
#if BIND_UvRusageT_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvRusageT_class(mrb), &uv_rusage_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_rusage_t(mrb_state* mrb, uv_rusage_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvRusageT_class(mrb), &uv_rusage_t_data_type, box));
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

/* MRUBY_BINDING: UvShutdownT_boxing */
/* sha: d960caea9e1606675a66e09479c54cb74ef78dba2b8f8b3d80121ea6d4a5f8db */
#if BIND_UvShutdownT_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvShutdownT_class(mrb), &uv_shutdown_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_shutdown_t(mrb_state* mrb, uv_shutdown_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvShutdownT_class(mrb), &uv_shutdown_t_data_type, box));
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

/* MRUBY_BINDING: UvSignalT_boxing */
/* sha: 2412b43918bbbb1dde19e76285a08c02076e84ea613285bb5dfd601939441215 */
#if BIND_UvSignalT_TYPE
/*
 * Boxing implementation for uv_signal_t
 */

static void free_uv_signal_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free_mruby_uv_handle((uv_handle_t*)box->obj);
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvSignalT_class(mrb), &uv_signal_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_signal_t(mrb_state* mrb, uv_signal_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvSignalT_class(mrb), &uv_signal_t_data_type, box));
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

/* MRUBY_BINDING: UvStatT_boxing */
/* sha: 60daa61160f7a17df6ee06faefb6872d4a25335b2d1121a10c2f2bfbb8523d6f */
#if BIND_UvStatT_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvStatT_class(mrb), &uv_stat_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_stat_t(mrb_state* mrb, uv_stat_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvStatT_class(mrb), &uv_stat_t_data_type, box));
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

/* MRUBY_BINDING: UvStdioContainerT_boxing */
/* sha: 6d2face3e9fc29f3c084ea63980d08bf8a8e22c4024538d5119f9d2014050246 */
#if BIND_UvStdioContainerT_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvStdioContainerT_class(mrb), &uv_stdio_container_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_stdio_container_t(mrb_state* mrb, uv_stdio_container_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvStdioContainerT_class(mrb), &uv_stdio_container_t_data_type, box));
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

/* MRUBY_BINDING: UvStreamT_boxing */
/* sha: 297538538676f14ef050513c2570e30cf993125a55af63005458573b37eef3b9 */
#if BIND_UvStreamT_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvStreamT_class(mrb), &uv_stream_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_stream_t(mrb_state* mrb, uv_stream_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvStreamT_class(mrb), &uv_stream_t_data_type, box));
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

/* MRUBY_BINDING: UvTcpT_boxing */
/* sha: a8dc31e93cac43bde0a80f04d10b2d52e75c67c9d2575914760cc9170c1b27c3 */
#if BIND_UvTcpT_TYPE
/*
 * Boxing implementation for uv_tcp_t
 */

static void free_uv_tcp_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free_mruby_uv_handle((uv_handle_t*)box->obj);
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvTcpT_class(mrb), &uv_tcp_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_tcp_t(mrb_state* mrb, uv_tcp_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvTcpT_class(mrb), &uv_tcp_t_data_type, box));
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

/* MRUBY_BINDING: UvTimerT_boxing */
/* sha: 4fbaaf286ba9ef5a6358c4710e290b1ed4d7395579c6b0705fc29ffb51ed250b */
#if BIND_UvTimerT_TYPE
/*
 * Boxing implementation for uv_timer_t
 */

static void free_uv_timer_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free_mruby_uv_handle((uv_handle_t*)box->obj);
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvTimerT_class(mrb), &uv_timer_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_timer_t(mrb_state* mrb, uv_timer_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvTimerT_class(mrb), &uv_timer_t_data_type, box));
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

/* MRUBY_BINDING: UvTimespecT_boxing */
/* sha: a442ebcaf0b1dc2b951b02e6685e8cb42e1c0e1f449dbc6af95cb6a431e034a2 */
#if BIND_UvTimespecT_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvTimespecT_class(mrb), &uv_timespec_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_timespec_t(mrb_state* mrb, uv_timespec_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvTimespecT_class(mrb), &uv_timespec_t_data_type, box));
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

/* MRUBY_BINDING: UvTimevalT_boxing */
/* sha: 5077e1f8213605d96d96727b975eab320eb298ebe77819d8c2d7d9afa7813c61 */
#if BIND_UvTimevalT_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvTimevalT_class(mrb), &uv_timeval_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_timeval_t(mrb_state* mrb, uv_timeval_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvTimevalT_class(mrb), &uv_timeval_t_data_type, box));
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

/* MRUBY_BINDING: UvTtyT_boxing */
/* sha: a29a2b5e005ba46e924ddb5622477a78b5f9448e0014df254538c0fb9d1774ad */
#if BIND_UvTtyT_TYPE
/*
 * Boxing implementation for uv_tty_t
 */

static void free_uv_tty_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free_mruby_uv_handle((uv_handle_t*)box->obj);
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvTtyT_class(mrb), &uv_tty_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_tty_t(mrb_state* mrb, uv_tty_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvTtyT_class(mrb), &uv_tty_t_data_type, box));
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

/* MRUBY_BINDING: UvUdpSendT_boxing */
/* sha: 665de35504de78a2b8c42c0b1ff48c41e3a8302ba74e2668ce4eeac45e316f88 */
#if BIND_UvUdpSendT_TYPE
/*
 * Boxing implementation for uv_udp_send_t
 */

static void free_uv_udp_send_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free_mruby_uv_handle((uv_handle_t*)box->obj);
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvUdpSendT_class(mrb), &uv_udp_send_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_udp_send_t(mrb_state* mrb, uv_udp_send_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvUdpSendT_class(mrb), &uv_udp_send_t_data_type, box));
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

/* MRUBY_BINDING: UvUdpT_boxing */
/* sha: c9f94a30e21f9a8b016cc944631e5396855742405122880663dcec8fbcb6197b */
#if BIND_UvUdpT_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvUdpT_class(mrb), &uv_udp_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_udp_t(mrb_state* mrb, uv_udp_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvUdpT_class(mrb), &uv_udp_t_data_type, box));
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

/* MRUBY_BINDING: UvWorkT_boxing */
/* sha: 6b7c7fed0ed23c016af4d4fdd2dc05ee46e7217acf4a15a6bcae8420b0bd3568 */
#if BIND_UvWorkT_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvWorkT_class(mrb), &uv_work_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_work_t(mrb_state* mrb, uv_work_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvWorkT_class(mrb), &uv_work_t_data_type, box));
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

/* MRUBY_BINDING: UvWriteT_boxing */
/* sha: f2dd3939ef382465e20bd4978a7b91bd6f0e972596dd1bec62f361e77bc5352e */
#if BIND_UvWriteT_TYPE
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
  return mrb_obj_value(Data_Wrap_Struct(mrb, UvWriteT_class(mrb), &uv_write_t_data_type, box));
}

mrb_value
mruby_giftwrap_uv_write_t(mrb_state* mrb, uv_write_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, UvWriteT_class(mrb), &uv_write_t_data_type, box));
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
