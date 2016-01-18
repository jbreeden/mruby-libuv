# ## int uv_async_init(uv_loop_t * arg1, uv_async_t * async, uv_async_cb async_cb)
# # Param: async_cb (uv_async_cb)
# CTypes.set_fn_param_type('uv_async_init', 'async_cb', CTypes['???'])

# ## void uv_barrier_destroy(uv_barrier_t * barrier)
# # Param: barrier (uv_barrier_t *)
# CTypes.set_fn_param_type('uv_barrier_destroy', 'barrier', CTypes['???'])

# ## int uv_barrier_init(uv_barrier_t * barrier, unsigned int count)
# # Param: barrier (uv_barrier_t *)
# CTypes.set_fn_param_type('uv_barrier_init', 'barrier', CTypes['???'])

# ## int uv_barrier_wait(uv_barrier_t * barrier)
# # Param: barrier (uv_barrier_t *)
# CTypes.set_fn_param_type('uv_barrier_wait', 'barrier', CTypes['???'])

# ## uv_buf_t uv_buf_init(char * base, unsigned int len)
# # Return value (uv_buf_t)
# CTypes.set_fn_return_type('uv_buf_init', CTypes['???'])
# # Param: base (char *)
# CTypes.set_fn_param_type('uv_buf_init', 'base', CTypes['???'])

# ## int uv_check_start(uv_check_t * check, uv_check_cb cb)
# # Param: cb (uv_check_cb)
# CTypes.set_fn_param_type('uv_check_start', 'cb', CTypes['???'])

# ## void uv_close(uv_handle_t * handle, uv_close_cb close_cb)
# # Param: close_cb (uv_close_cb)
# CTypes.set_fn_param_type('uv_close', 'close_cb', CTypes['???'])

# ## void uv_cond_broadcast(uv_cond_t * cond)
# # Param: cond (uv_cond_t *)
# CTypes.set_fn_param_type('uv_cond_broadcast', 'cond', CTypes['???'])

# ## void uv_cond_destroy(uv_cond_t * cond)
# # Param: cond (uv_cond_t *)
# CTypes.set_fn_param_type('uv_cond_destroy', 'cond', CTypes['???'])

# ## int uv_cond_init(uv_cond_t * cond)
# # Param: cond (uv_cond_t *)
# CTypes.set_fn_param_type('uv_cond_init', 'cond', CTypes['???'])

# ## void uv_cond_signal(uv_cond_t * cond)
# # Param: cond (uv_cond_t *)
# CTypes.set_fn_param_type('uv_cond_signal', 'cond', CTypes['???'])

# ## int uv_cond_timedwait(uv_cond_t * cond, uv_mutex_t * mutex, uint64_t timeout)
# # Param: cond (uv_cond_t *)
# CTypes.set_fn_param_type('uv_cond_timedwait', 'cond', CTypes['???'])
# # Param: mutex (uv_mutex_t *)
# CTypes.set_fn_param_type('uv_cond_timedwait', 'mutex', CTypes['???'])
# # Param: timeout (uint64_t)
# CTypes.set_fn_param_type('uv_cond_timedwait', 'timeout', CTypes['???'])

# ## void uv_cond_wait(uv_cond_t * cond, uv_mutex_t * mutex)
# # Param: cond (uv_cond_t *)
# CTypes.set_fn_param_type('uv_cond_wait', 'cond', CTypes['???'])
# # Param: mutex (uv_mutex_t *)
# CTypes.set_fn_param_type('uv_cond_wait', 'mutex', CTypes['???'])

# ## int uv_cpu_info(uv_cpu_info_t ** cpu_infos, int * count)
# # Param: cpu_infos (uv_cpu_info_t **)
# CTypes.set_fn_param_type('uv_cpu_info', 'cpu_infos', CTypes['???'])
# # Param: count (int *)
# CTypes.set_fn_param_type('uv_cpu_info', 'count', CTypes['???'])

# ## int uv_cwd(char * buffer, size_t * size)
# # Param: buffer (char *)
# CTypes.set_fn_param_type('uv_cwd', 'buffer', CTypes['???'])
# # Param: size (size_t *)
# CTypes.set_fn_param_type('uv_cwd', 'size', CTypes['???'])

# ## void uv_dlclose(uv_lib_t * lib)
# # Param: lib (uv_lib_t *)
# CTypes.set_fn_param_type('uv_dlclose', 'lib', CTypes['???'])

# ## const char * uv_dlerror(const uv_lib_t * lib)
# # Param: lib (const uv_lib_t *)
# CTypes.set_fn_param_type('uv_dlerror', 'lib', CTypes['???'])

# ## int uv_dlopen(const char * filename, uv_lib_t * lib)
# # Param: lib (uv_lib_t *)
# CTypes.set_fn_param_type('uv_dlopen', 'lib', CTypes['???'])

# ## int uv_dlsym(uv_lib_t * lib, const char * name, void ** ptr)
# # Param: lib (uv_lib_t *)
# CTypes.set_fn_param_type('uv_dlsym', 'lib', CTypes['???'])
# # Param: ptr (void **)
# CTypes.set_fn_param_type('uv_dlsym', 'ptr', CTypes['???'])

# ## int uv_exepath(char * buffer, size_t * size)
# # Param: buffer (char *)
# CTypes.set_fn_param_type('uv_exepath', 'buffer', CTypes['???'])
# # Param: size (size_t *)
# CTypes.set_fn_param_type('uv_exepath', 'size', CTypes['???'])

# ## int uv_fileno(const uv_handle_t * handle, uv_os_fd_t * fd)
# # Param: fd (uv_os_fd_t *)
# CTypes.set_fn_param_type('uv_fileno', 'fd', CTypes['???'])

# ## void uv_freeaddrinfo(struct addrinfo * ai)
# # Param: ai (struct addrinfo *)
# CTypes.set_fn_param_type('uv_freeaddrinfo', 'ai', CTypes['???'])

# ## int uv_fs_access(uv_loop_t * loop, uv_fs_t * req, const char * path, int mode, uv_fs_cb cb)
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_access', 'cb', CTypes['???'])

# ## int uv_fs_chmod(uv_loop_t * loop, uv_fs_t * req, const char * path, int mode, uv_fs_cb cb)
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_chmod', 'cb', CTypes['???'])

# ## int uv_fs_chown(uv_loop_t * loop, uv_fs_t * req, const char * path, uv_uid_t uid, uv_gid_t gid, uv_fs_cb cb)
# # Param: uid (uv_uid_t)
# CTypes.set_fn_param_type('uv_fs_chown', 'uid', CTypes['???'])
# # Param: gid (uv_gid_t)
# CTypes.set_fn_param_type('uv_fs_chown', 'gid', CTypes['???'])
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_chown', 'cb', CTypes['???'])

# ## int uv_fs_close(uv_loop_t * loop, uv_fs_t * req, uv_file file, uv_fs_cb cb)
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_close', 'cb', CTypes['???'])

# ## int uv_fs_event_getpath(uv_fs_event_t * handle, char * buffer, size_t * size)
# # Param: buffer (char *)
# CTypes.set_fn_param_type('uv_fs_event_getpath', 'buffer', CTypes['???'])
# # Param: size (size_t *)
# CTypes.set_fn_param_type('uv_fs_event_getpath', 'size', CTypes['???'])

# ## int uv_fs_event_start(uv_fs_event_t * handle, uv_fs_event_cb cb, const char * path, unsigned int flags)
# # Param: cb (uv_fs_event_cb)
# CTypes.set_fn_param_type('uv_fs_event_start', 'cb', CTypes['???'])

# ## int uv_fs_fchmod(uv_loop_t * loop, uv_fs_t * req, uv_file file, int mode, uv_fs_cb cb)
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_fchmod', 'cb', CTypes['???'])

# ## int uv_fs_fchown(uv_loop_t * loop, uv_fs_t * req, uv_file file, uv_uid_t uid, uv_gid_t gid, uv_fs_cb cb)
# # Param: uid (uv_uid_t)
# CTypes.set_fn_param_type('uv_fs_fchown', 'uid', CTypes['???'])
# # Param: gid (uv_gid_t)
# CTypes.set_fn_param_type('uv_fs_fchown', 'gid', CTypes['???'])
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_fchown', 'cb', CTypes['???'])

# ## int uv_fs_fdatasync(uv_loop_t * loop, uv_fs_t * req, uv_file file, uv_fs_cb cb)
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_fdatasync', 'cb', CTypes['???'])

# ## int uv_fs_fstat(uv_loop_t * loop, uv_fs_t * req, uv_file file, uv_fs_cb cb)
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_fstat', 'cb', CTypes['???'])

# ## int uv_fs_fsync(uv_loop_t * loop, uv_fs_t * req, uv_file file, uv_fs_cb cb)
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_fsync', 'cb', CTypes['???'])

# ## int uv_fs_ftruncate(uv_loop_t * loop, uv_fs_t * req, uv_file file, int64_t offset, uv_fs_cb cb)
# # Param: offset (int64_t)
# CTypes.set_fn_param_type('uv_fs_ftruncate', 'offset', CTypes['???'])
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_ftruncate', 'cb', CTypes['???'])

# ## int uv_fs_futime(uv_loop_t * loop, uv_fs_t * req, uv_file file, double atime, double mtime, uv_fs_cb cb)
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_futime', 'cb', CTypes['???'])

# ## int uv_fs_link(uv_loop_t * loop, uv_fs_t * req, const char * path, const char * new_path, uv_fs_cb cb)
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_link', 'cb', CTypes['???'])

# ## int uv_fs_lstat(uv_loop_t * loop, uv_fs_t * req, const char * path, uv_fs_cb cb)
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_lstat', 'cb', CTypes['???'])

# ## int uv_fs_mkdir(uv_loop_t * loop, uv_fs_t * req, const char * path, int mode, uv_fs_cb cb)
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_mkdir', 'cb', CTypes['???'])

# ## int uv_fs_mkdtemp(uv_loop_t * loop, uv_fs_t * req, const char * tpl, uv_fs_cb cb)
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_mkdtemp', 'cb', CTypes['???'])

# ## int uv_fs_open(uv_loop_t * loop, uv_fs_t * req, const char * path, int flags, int mode, uv_fs_cb cb)
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_open', 'cb', CTypes['???'])

# ## int uv_fs_poll_getpath(uv_fs_poll_t * handle, char * buffer, size_t * size)
# # Param: buffer (char *)
# CTypes.set_fn_param_type('uv_fs_poll_getpath', 'buffer', CTypes['???'])
# # Param: size (size_t *)
# CTypes.set_fn_param_type('uv_fs_poll_getpath', 'size', CTypes['???'])

# ## int uv_fs_poll_start(uv_fs_poll_t * handle, uv_fs_poll_cb poll_cb, const char * path, unsigned int interval)
# # Param: poll_cb (uv_fs_poll_cb)
# CTypes.set_fn_param_type('uv_fs_poll_start', 'poll_cb', CTypes['???'])

# ## int uv_fs_read(uv_loop_t * loop, uv_fs_t * req, uv_file file, const uv_buf_t [] bufs, unsigned int nbufs, int64_t offset, uv_fs_cb cb)
# # Param: bufs (const uv_buf_t [])
# CTypes.set_fn_param_type('uv_fs_read', 'bufs', CTypes['???'])
# # Param: offset (int64_t)
# CTypes.set_fn_param_type('uv_fs_read', 'offset', CTypes['???'])
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_read', 'cb', CTypes['???'])

# ## int uv_fs_readlink(uv_loop_t * loop, uv_fs_t * req, const char * path, uv_fs_cb cb)
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_readlink', 'cb', CTypes['???'])

# ## int uv_fs_realpath(uv_loop_t * loop, uv_fs_t * req, const char * path, uv_fs_cb cb)
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_realpath', 'cb', CTypes['???'])

# ## int uv_fs_rename(uv_loop_t * loop, uv_fs_t * req, const char * path, const char * new_path, uv_fs_cb cb)
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_rename', 'cb', CTypes['???'])

# ## int uv_fs_rmdir(uv_loop_t * loop, uv_fs_t * req, const char * path, uv_fs_cb cb)
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_rmdir', 'cb', CTypes['???'])

# ## int uv_fs_scandir(uv_loop_t * loop, uv_fs_t * req, const char * path, int flags, uv_fs_cb cb)
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_scandir', 'cb', CTypes['???'])

# ## int uv_fs_sendfile(uv_loop_t * loop, uv_fs_t * req, uv_file out_fd, uv_file in_fd, int64_t in_offset, size_t length, uv_fs_cb cb)
# # Param: in_offset (int64_t)
# CTypes.set_fn_param_type('uv_fs_sendfile', 'in_offset', CTypes['???'])
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_sendfile', 'cb', CTypes['???'])

# ## int uv_fs_stat(uv_loop_t * loop, uv_fs_t * req, const char * path, uv_fs_cb cb)
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_stat', 'cb', CTypes['???'])

# ## int uv_fs_symlink(uv_loop_t * loop, uv_fs_t * req, const char * path, const char * new_path, int flags, uv_fs_cb cb)
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_symlink', 'cb', CTypes['???'])

# ## int uv_fs_unlink(uv_loop_t * loop, uv_fs_t * req, const char * path, uv_fs_cb cb)
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_unlink', 'cb', CTypes['???'])

# ## int uv_fs_utime(uv_loop_t * loop, uv_fs_t * req, const char * path, double atime, double mtime, uv_fs_cb cb)
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_utime', 'cb', CTypes['???'])

# ## int uv_fs_write(uv_loop_t * loop, uv_fs_t * req, uv_file file, const uv_buf_t [] bufs, unsigned int nbufs, int64_t offset, uv_fs_cb cb)
# # Param: bufs (const uv_buf_t [])
# CTypes.set_fn_param_type('uv_fs_write', 'bufs', CTypes['???'])
# # Param: offset (int64_t)
# CTypes.set_fn_param_type('uv_fs_write', 'offset', CTypes['???'])
# # Param: cb (uv_fs_cb)
# CTypes.set_fn_param_type('uv_fs_write', 'cb', CTypes['???'])

# ## uint64_t uv_get_free_memory()
# # Return value (uint64_t)
# CTypes.set_fn_return_type('uv_get_free_memory', CTypes['???'])

# ## int uv_get_process_title(char * buffer, size_t size)
# # Param: buffer (char *)
# CTypes.set_fn_param_type('uv_get_process_title', 'buffer', CTypes['???'])

# ## uint64_t uv_get_total_memory()
# # Return value (uint64_t)
# CTypes.set_fn_return_type('uv_get_total_memory', CTypes['???'])

# ## int uv_getaddrinfo(uv_loop_t * loop, uv_getaddrinfo_t * req, uv_getaddrinfo_cb getaddrinfo_cb, const char * node, const char * service, const struct addrinfo * hints)
# # Param: getaddrinfo_cb (uv_getaddrinfo_cb)
# CTypes.set_fn_param_type('uv_getaddrinfo', 'getaddrinfo_cb', CTypes['???'])
# # Param: hints (const struct addrinfo *)
# CTypes.set_fn_param_type('uv_getaddrinfo', 'hints', CTypes['???'])

# ## int uv_getnameinfo(uv_loop_t * loop, uv_getnameinfo_t * req, uv_getnameinfo_cb getnameinfo_cb, const struct sockaddr * addr, int flags)
# # Param: getnameinfo_cb (uv_getnameinfo_cb)
# CTypes.set_fn_param_type('uv_getnameinfo', 'getnameinfo_cb', CTypes['???'])
# # Param: addr (const struct sockaddr *)
# CTypes.set_fn_param_type('uv_getnameinfo', 'addr', CTypes['???'])

# ## uint64_t uv_hrtime()
# # Return value (uint64_t)
# CTypes.set_fn_return_type('uv_hrtime', CTypes['???'])

# ## int uv_idle_start(uv_idle_t * idle, uv_idle_cb cb)
# # Param: cb (uv_idle_cb)
# CTypes.set_fn_param_type('uv_idle_start', 'cb', CTypes['???'])

# ## int uv_inet_ntop(int af, const void * src, char * dst, size_t size)
# # Param: src (const void *)
# CTypes.set_fn_param_type('uv_inet_ntop', 'src', CTypes['???'])
# # Param: dst (char *)
# CTypes.set_fn_param_type('uv_inet_ntop', 'dst', CTypes['???'])

# ## int uv_inet_pton(int af, const char * src, void * dst)
# # Param: dst (void *)
# CTypes.set_fn_param_type('uv_inet_pton', 'dst', CTypes['???'])

# ## int uv_interface_addresses(uv_interface_address_t ** addresses, int * count)
# # Param: addresses (uv_interface_address_t **)
# CTypes.set_fn_param_type('uv_interface_addresses', 'addresses', CTypes['???'])
# # Param: count (int *)
# CTypes.set_fn_param_type('uv_interface_addresses', 'count', CTypes['???'])

# ## int uv_ip4_addr(const char * ip, int port, struct sockaddr_in * addr)
# # Param: addr (struct sockaddr_in *)
# CTypes.set_fn_param_type('uv_ip4_addr', 'addr', CTypes['???'])

# ## int uv_ip4_name(const struct sockaddr_in * src, char * dst, size_t size)
# # Param: src (const struct sockaddr_in *)
# CTypes.set_fn_param_type('uv_ip4_name', 'src', CTypes['???'])
# # Param: dst (char *)
# CTypes.set_fn_param_type('uv_ip4_name', 'dst', CTypes['???'])

# ## int uv_ip6_addr(const char * ip, int port, struct sockaddr_in6 * addr)
# # Param: addr (struct sockaddr_in6 *)
# CTypes.set_fn_param_type('uv_ip6_addr', 'addr', CTypes['???'])

# ## int uv_ip6_name(const struct sockaddr_in6 * src, char * dst, size_t size)
# # Param: src (const struct sockaddr_in6 *)
# CTypes.set_fn_param_type('uv_ip6_name', 'src', CTypes['???'])
# # Param: dst (char *)
# CTypes.set_fn_param_type('uv_ip6_name', 'dst', CTypes['???'])

# ## int uv_key_create(uv_key_t * key)
# # Param: key (uv_key_t *)
# CTypes.set_fn_param_type('uv_key_create', 'key', CTypes['???'])

# ## void uv_key_delete(uv_key_t * key)
# # Param: key (uv_key_t *)
# CTypes.set_fn_param_type('uv_key_delete', 'key', CTypes['???'])

# ## void * uv_key_get(uv_key_t * key)
# # Return value (void *)
# CTypes.set_fn_return_type('uv_key_get', CTypes['???'])
# # Param: key (uv_key_t *)
# CTypes.set_fn_param_type('uv_key_get', 'key', CTypes['???'])

# ## void uv_key_set(uv_key_t * key, void * value)
# # Param: key (uv_key_t *)
# CTypes.set_fn_param_type('uv_key_set', 'key', CTypes['???'])
# # Param: value (void *)
# CTypes.set_fn_param_type('uv_key_set', 'value', CTypes['???'])

# ## int uv_listen(uv_stream_t * stream, int backlog, uv_connection_cb cb)
# # Param: cb (uv_connection_cb)
# CTypes.set_fn_param_type('uv_listen', 'cb', CTypes['???'])

# ## void uv_loadavg(double [3] avg)
# # Param: avg (double [3])
# CTypes.set_fn_param_type('uv_loadavg', 'avg', CTypes['???'])

# ## void uv_mutex_destroy(uv_mutex_t * handle)
# # Param: handle (uv_mutex_t *)
# CTypes.set_fn_param_type('uv_mutex_destroy', 'handle', CTypes['???'])

# ## int uv_mutex_init(uv_mutex_t * handle)
# # Param: handle (uv_mutex_t *)
# CTypes.set_fn_param_type('uv_mutex_init', 'handle', CTypes['???'])

# ## void uv_mutex_lock(uv_mutex_t * handle)
# # Param: handle (uv_mutex_t *)
# CTypes.set_fn_param_type('uv_mutex_lock', 'handle', CTypes['???'])

# ## int uv_mutex_trylock(uv_mutex_t * handle)
# # Param: handle (uv_mutex_t *)
# CTypes.set_fn_param_type('uv_mutex_trylock', 'handle', CTypes['???'])

# ## void uv_mutex_unlock(uv_mutex_t * handle)
# # Param: handle (uv_mutex_t *)
# CTypes.set_fn_param_type('uv_mutex_unlock', 'handle', CTypes['???'])

# ## uint64_t uv_now(const uv_loop_t * arg1)
# # Return value (uint64_t)
# CTypes.set_fn_return_type('uv_now', CTypes['???'])

# ## void uv_once(uv_once_t * guard, void (*)(void) callback)
# # Param: guard (uv_once_t *)
# CTypes.set_fn_param_type('uv_once', 'guard', CTypes['???'])
# # Param: callback (void (*)(void))
# CTypes.set_fn_param_type('uv_once', 'callback', CTypes['???'])

# ## int uv_os_homedir(char * buffer, size_t * size)
# # Param: buffer (char *)
# CTypes.set_fn_param_type('uv_os_homedir', 'buffer', CTypes['???'])
# # Param: size (size_t *)
# CTypes.set_fn_param_type('uv_os_homedir', 'size', CTypes['???'])

# ## void uv_pipe_connect(uv_connect_t * req, uv_pipe_t * handle, const char * name, uv_connect_cb cb)
# # Param: cb (uv_connect_cb)
# CTypes.set_fn_param_type('uv_pipe_connect', 'cb', CTypes['???'])

# ## int uv_pipe_getpeername(const uv_pipe_t * handle, char * buffer, size_t * size)
# # Param: buffer (char *)
# CTypes.set_fn_param_type('uv_pipe_getpeername', 'buffer', CTypes['???'])
# # Param: size (size_t *)
# CTypes.set_fn_param_type('uv_pipe_getpeername', 'size', CTypes['???'])

# ## int uv_pipe_getsockname(const uv_pipe_t * handle, char * buffer, size_t * size)
# # Param: buffer (char *)
# CTypes.set_fn_param_type('uv_pipe_getsockname', 'buffer', CTypes['???'])
# # Param: size (size_t *)
# CTypes.set_fn_param_type('uv_pipe_getsockname', 'size', CTypes['???'])

# ## int uv_poll_init_socket(uv_loop_t * loop, uv_poll_t * handle, uv_os_sock_t socket)
# # Param: socket (uv_os_sock_t)
# CTypes.set_fn_param_type('uv_poll_init_socket', 'socket', CTypes['???'])

# ## int uv_poll_start(uv_poll_t * handle, int events, uv_poll_cb cb)
# # Param: cb (uv_poll_cb)
# CTypes.set_fn_param_type('uv_poll_start', 'cb', CTypes['???'])

# ## int uv_prepare_start(uv_prepare_t * prepare, uv_prepare_cb cb)
# # Param: cb (uv_prepare_cb)
# CTypes.set_fn_param_type('uv_prepare_start', 'cb', CTypes['???'])

# ## void uv_print_active_handles(uv_loop_t * loop, FILE * stream)
# # Param: stream (FILE *)
# CTypes.set_fn_param_type('uv_print_active_handles', 'stream', CTypes['???'])

# ## void uv_print_all_handles(uv_loop_t * loop, FILE * stream)
# # Param: stream (FILE *)
# CTypes.set_fn_param_type('uv_print_all_handles', 'stream', CTypes['???'])

# ## int uv_queue_work(uv_loop_t * loop, uv_work_t * req, uv_work_cb work_cb, uv_after_work_cb after_work_cb)
# # Param: work_cb (uv_work_cb)
# CTypes.set_fn_param_type('uv_queue_work', 'work_cb', CTypes['???'])
# # Param: after_work_cb (uv_after_work_cb)
# CTypes.set_fn_param_type('uv_queue_work', 'after_work_cb', CTypes['???'])

# ## int uv_read_start(uv_stream_t * arg1, uv_alloc_cb alloc_cb, uv_read_cb read_cb)
# # Param: alloc_cb (uv_alloc_cb)
# CTypes.set_fn_param_type('uv_read_start', 'alloc_cb', CTypes['???'])
# # Param: read_cb (uv_read_cb)
# CTypes.set_fn_param_type('uv_read_start', 'read_cb', CTypes['???'])

# ## int uv_recv_buffer_size(uv_handle_t * handle, int * value)
# # Param: value (int *)
# CTypes.set_fn_param_type('uv_recv_buffer_size', 'value', CTypes['???'])

# ## int uv_replace_allocator(uv_malloc_func malloc_func, uv_realloc_func realloc_func, uv_calloc_func calloc_func, uv_free_func free_func)
# # Param: malloc_func (uv_malloc_func)
# CTypes.set_fn_param_type('uv_replace_allocator', 'malloc_func', CTypes['???'])
# # Param: realloc_func (uv_realloc_func)
# CTypes.set_fn_param_type('uv_replace_allocator', 'realloc_func', CTypes['???'])
# # Param: calloc_func (uv_calloc_func)
# CTypes.set_fn_param_type('uv_replace_allocator', 'calloc_func', CTypes['???'])
# # Param: free_func (uv_free_func)
# CTypes.set_fn_param_type('uv_replace_allocator', 'free_func', CTypes['???'])

# ## int uv_resident_set_memory(size_t * rss)
# # Param: rss (size_t *)
# CTypes.set_fn_param_type('uv_resident_set_memory', 'rss', CTypes['???'])

# ## void uv_rwlock_destroy(uv_rwlock_t * rwlock)
# # Param: rwlock (uv_rwlock_t *)
# CTypes.set_fn_param_type('uv_rwlock_destroy', 'rwlock', CTypes['???'])

# ## int uv_rwlock_init(uv_rwlock_t * rwlock)
# # Param: rwlock (uv_rwlock_t *)
# CTypes.set_fn_param_type('uv_rwlock_init', 'rwlock', CTypes['???'])

# ## void uv_rwlock_rdlock(uv_rwlock_t * rwlock)
# # Param: rwlock (uv_rwlock_t *)
# CTypes.set_fn_param_type('uv_rwlock_rdlock', 'rwlock', CTypes['???'])

# ## void uv_rwlock_rdunlock(uv_rwlock_t * rwlock)
# # Param: rwlock (uv_rwlock_t *)
# CTypes.set_fn_param_type('uv_rwlock_rdunlock', 'rwlock', CTypes['???'])

# ## int uv_rwlock_tryrdlock(uv_rwlock_t * rwlock)
# # Param: rwlock (uv_rwlock_t *)
# CTypes.set_fn_param_type('uv_rwlock_tryrdlock', 'rwlock', CTypes['???'])

# ## int uv_rwlock_trywrlock(uv_rwlock_t * rwlock)
# # Param: rwlock (uv_rwlock_t *)
# CTypes.set_fn_param_type('uv_rwlock_trywrlock', 'rwlock', CTypes['???'])

# ## void uv_rwlock_wrlock(uv_rwlock_t * rwlock)
# # Param: rwlock (uv_rwlock_t *)
# CTypes.set_fn_param_type('uv_rwlock_wrlock', 'rwlock', CTypes['???'])

# ## void uv_rwlock_wrunlock(uv_rwlock_t * rwlock)
# # Param: rwlock (uv_rwlock_t *)
# CTypes.set_fn_param_type('uv_rwlock_wrunlock', 'rwlock', CTypes['???'])

# ## void uv_sem_destroy(uv_sem_t * sem)
# # Param: sem (uv_sem_t *)
# CTypes.set_fn_param_type('uv_sem_destroy', 'sem', CTypes['???'])

# ## int uv_sem_init(uv_sem_t * sem, unsigned int value)
# # Param: sem (uv_sem_t *)
# CTypes.set_fn_param_type('uv_sem_init', 'sem', CTypes['???'])

# ## void uv_sem_post(uv_sem_t * sem)
# # Param: sem (uv_sem_t *)
# CTypes.set_fn_param_type('uv_sem_post', 'sem', CTypes['???'])

# ## int uv_sem_trywait(uv_sem_t * sem)
# # Param: sem (uv_sem_t *)
# CTypes.set_fn_param_type('uv_sem_trywait', 'sem', CTypes['???'])

# ## void uv_sem_wait(uv_sem_t * sem)
# # Param: sem (uv_sem_t *)
# CTypes.set_fn_param_type('uv_sem_wait', 'sem', CTypes['???'])

# ## int uv_send_buffer_size(uv_handle_t * handle, int * value)
# # Param: value (int *)
# CTypes.set_fn_param_type('uv_send_buffer_size', 'value', CTypes['???'])

# ## char ** uv_setup_args(int argc, char ** argv)
# # Return value (char **)
# CTypes.set_fn_return_type('uv_setup_args', CTypes['???'])
# # Param: argv (char **)
# CTypes.set_fn_param_type('uv_setup_args', 'argv', CTypes['???'])

# ## int uv_shutdown(uv_shutdown_t * req, uv_stream_t * handle, uv_shutdown_cb cb)
# # Param: cb (uv_shutdown_cb)
# CTypes.set_fn_param_type('uv_shutdown', 'cb', CTypes['???'])

# ## int uv_signal_start(uv_signal_t * handle, uv_signal_cb signal_cb, int signum)
# # Param: signal_cb (uv_signal_cb)
# CTypes.set_fn_param_type('uv_signal_start', 'signal_cb', CTypes['???'])

# ## int uv_tcp_bind(uv_tcp_t * handle, const struct sockaddr * addr, unsigned int flags)
# # Param: addr (const struct sockaddr *)
# CTypes.set_fn_param_type('uv_tcp_bind', 'addr', CTypes['???'])

# ## int uv_tcp_connect(uv_connect_t * req, uv_tcp_t * handle, const struct sockaddr * addr, uv_connect_cb cb)
# # Param: addr (const struct sockaddr *)
# CTypes.set_fn_param_type('uv_tcp_connect', 'addr', CTypes['???'])
# # Param: cb (uv_connect_cb)
# CTypes.set_fn_param_type('uv_tcp_connect', 'cb', CTypes['???'])

# ## int uv_tcp_getpeername(const uv_tcp_t * handle, struct sockaddr * name, int * namelen)
# # Param: name (struct sockaddr *)
# CTypes.set_fn_param_type('uv_tcp_getpeername', 'name', CTypes['???'])
# # Param: namelen (int *)
# CTypes.set_fn_param_type('uv_tcp_getpeername', 'namelen', CTypes['???'])

# ## int uv_tcp_getsockname(const uv_tcp_t * handle, struct sockaddr * name, int * namelen)
# # Param: name (struct sockaddr *)
# CTypes.set_fn_param_type('uv_tcp_getsockname', 'name', CTypes['???'])
# # Param: namelen (int *)
# CTypes.set_fn_param_type('uv_tcp_getsockname', 'namelen', CTypes['???'])

# ## int uv_tcp_open(uv_tcp_t * handle, uv_os_sock_t sock)
# # Param: sock (uv_os_sock_t)
# CTypes.set_fn_param_type('uv_tcp_open', 'sock', CTypes['???'])

# ## int uv_thread_create(uv_thread_t * tid, uv_thread_cb entry, void * arg)
# # Param: tid (uv_thread_t *)
# CTypes.set_fn_param_type('uv_thread_create', 'tid', CTypes['???'])
# # Param: entry (uv_thread_cb)
# CTypes.set_fn_param_type('uv_thread_create', 'entry', CTypes['???'])
# # Param: arg (void *)
# CTypes.set_fn_param_type('uv_thread_create', 'arg', CTypes['???'])

# ## int uv_thread_equal(const uv_thread_t * t1, const uv_thread_t * t2)
# # Param: t1 (const uv_thread_t *)
# CTypes.set_fn_param_type('uv_thread_equal', 't1', CTypes['???'])
# # Param: t2 (const uv_thread_t *)
# CTypes.set_fn_param_type('uv_thread_equal', 't2', CTypes['???'])

# ## int uv_thread_join(uv_thread_t * tid)
# # Param: tid (uv_thread_t *)
# CTypes.set_fn_param_type('uv_thread_join', 'tid', CTypes['???'])

# ## uv_thread_t uv_thread_self()
# # Return value (uv_thread_t)
# CTypes.set_fn_return_type('uv_thread_self', CTypes['???'])

# ## uint64_t uv_timer_get_repeat(const uv_timer_t * handle)
# # Return value (uint64_t)
# CTypes.set_fn_return_type('uv_timer_get_repeat', CTypes['???'])

# ## void uv_timer_set_repeat(uv_timer_t * handle, uint64_t repeat)
# # Param: repeat (uint64_t)
# CTypes.set_fn_param_type('uv_timer_set_repeat', 'repeat', CTypes['???'])

# ## int uv_timer_start(uv_timer_t * handle, uv_timer_cb cb, uint64_t timeout, uint64_t repeat)
# # Param: cb (uv_timer_cb)
# CTypes.set_fn_param_type('uv_timer_start', 'cb', CTypes['???'])
# # Param: timeout (uint64_t)
# CTypes.set_fn_param_type('uv_timer_start', 'timeout', CTypes['???'])
# # Param: repeat (uint64_t)
# CTypes.set_fn_param_type('uv_timer_start', 'repeat', CTypes['???'])

# ## int uv_try_write(uv_stream_t * handle, const uv_buf_t [] bufs, unsigned int nbufs)
# # Param: bufs (const uv_buf_t [])
# CTypes.set_fn_param_type('uv_try_write', 'bufs', CTypes['???'])

# ## int uv_tty_get_winsize(uv_tty_t * arg1, int * width, int * height)
# # Param: width (int *)
# CTypes.set_fn_param_type('uv_tty_get_winsize', 'width', CTypes['???'])
# # Param: height (int *)
# CTypes.set_fn_param_type('uv_tty_get_winsize', 'height', CTypes['???'])

# ## int uv_udp_bind(uv_udp_t * handle, const struct sockaddr * addr, unsigned int flags)
# # Param: addr (const struct sockaddr *)
# CTypes.set_fn_param_type('uv_udp_bind', 'addr', CTypes['???'])

# ## int uv_udp_getsockname(const uv_udp_t * handle, struct sockaddr * name, int * namelen)
# # Param: name (struct sockaddr *)
# CTypes.set_fn_param_type('uv_udp_getsockname', 'name', CTypes['???'])
# # Param: namelen (int *)
# CTypes.set_fn_param_type('uv_udp_getsockname', 'namelen', CTypes['???'])

# ## int uv_udp_open(uv_udp_t * handle, uv_os_sock_t sock)
# # Param: sock (uv_os_sock_t)
# CTypes.set_fn_param_type('uv_udp_open', 'sock', CTypes['???'])

# ## int uv_udp_recv_start(uv_udp_t * handle, uv_alloc_cb alloc_cb, uv_udp_recv_cb recv_cb)
# # Param: alloc_cb (uv_alloc_cb)
# CTypes.set_fn_param_type('uv_udp_recv_start', 'alloc_cb', CTypes['???'])
# # Param: recv_cb (uv_udp_recv_cb)
# CTypes.set_fn_param_type('uv_udp_recv_start', 'recv_cb', CTypes['???'])

# ## int uv_udp_send(uv_udp_send_t * req, uv_udp_t * handle, const uv_buf_t [] bufs, unsigned int nbufs, const struct sockaddr * addr, uv_udp_send_cb send_cb)
# # Param: bufs (const uv_buf_t [])
# CTypes.set_fn_param_type('uv_udp_send', 'bufs', CTypes['???'])
# # Param: addr (const struct sockaddr *)
# CTypes.set_fn_param_type('uv_udp_send', 'addr', CTypes['???'])
# # Param: send_cb (uv_udp_send_cb)
# CTypes.set_fn_param_type('uv_udp_send', 'send_cb', CTypes['???'])

# ## int uv_udp_try_send(uv_udp_t * handle, const uv_buf_t [] bufs, unsigned int nbufs, const struct sockaddr * addr)
# # Param: bufs (const uv_buf_t [])
# CTypes.set_fn_param_type('uv_udp_try_send', 'bufs', CTypes['???'])
# # Param: addr (const struct sockaddr *)
# CTypes.set_fn_param_type('uv_udp_try_send', 'addr', CTypes['???'])

# ## int uv_uptime(double * uptime)
# # Param: uptime (double *)
# CTypes.set_fn_param_type('uv_uptime', 'uptime', CTypes['???'])

# ## void uv_walk(uv_loop_t * loop, uv_walk_cb walk_cb, void * arg)
# # Param: walk_cb (uv_walk_cb)
# CTypes.set_fn_param_type('uv_walk', 'walk_cb', CTypes['???'])
# # Param: arg (void *)
# CTypes.set_fn_param_type('uv_walk', 'arg', CTypes['???'])

# ## int uv_write(uv_write_t * req, uv_stream_t * handle, const uv_buf_t [] bufs, unsigned int nbufs, uv_write_cb cb)
# # Param: bufs (const uv_buf_t [])
# CTypes.set_fn_param_type('uv_write', 'bufs', CTypes['???'])
# # Param: cb (uv_write_cb)
# CTypes.set_fn_param_type('uv_write', 'cb', CTypes['???'])

# ## int uv_write2(uv_write_t * req, uv_stream_t * handle, const uv_buf_t [] bufs, unsigned int nbufs, uv_stream_t * send_handle, uv_write_cb cb)
# # Param: bufs (const uv_buf_t [])
# CTypes.set_fn_param_type('uv_write2', 'bufs', CTypes['???'])
# # Param: cb (uv_write_cb)
# CTypes.set_fn_param_type('uv_write2', 'cb', CTypes['???'])
