# CTypes.define('Example') do
#   self.needs_unboxing = true
#   self.needs_boxing_cleanup = false
#   self.needs_unboxing_cleanup = false
#   self.needs_type_check = true
#   
#   self.recv_template = 'mrb_value %{value};'
#   self.format_specifier = 'o'
#   self.get_args_template = '&%{value}'
#   self.type_check_template = nil
#   self.invocation_arg_template = '%{value}'
#   self.field_swap_template = %{old} = %{new};
#   
#   self.unboxing_fn.invocation_template = '%{as} = TODO_mruby_unbox_Example(%{unbox});'
#   self.unboxing_fn.cleanup_template = 'free(%{value});'
#   
#   self.boxing_fn.invocation_template = '%{as} = TODO_mruby_box_Example(%{box});'
#   self.boxing_fn.cleanup_template = 'free(%{value});'
# end

CTypes.translate_fn_names do |fn|
  if fn.start_with?("uv_")
    fn[/uv_(.*)/, 1]
  else
    fn
  end
end

CTypes.translate_enum_names do |enum|
  enum.sub(/^UV_/, '')
end

CTypes.translate_type_names do |type|
  type = MRubyBindings.type_name_to_rb_class(type)
  
  # Order is important
  type = type.sub(/^uv(_?)/i, '').sub(/([a-z])T$/, "\\1")
  type.sub!(/^Rusage/, 'RUsage')
  type.sub!(/^Stdio/, 'STDIO')
  type.sub!(/^Tty/, 'TTY')
  type.sub!(/^CpuTimesS/, 'CPUTimes')
  type.sub!(/^Cpu/, 'CPU')
  type.sub!(/^Fs/, 'FS')
  type.sub!(/^Tcp/, 'TCP')
  type.sub!(/^Udp/, 'UDP')
  type
end

# uv_fs_cb stubs
# --------------

# This CType just inserts stubs. Up to the bindings writer to go find the
# request object out of all the params and pass it into mrb_iv_set.

CTypes.define('uv_fs_cb') do
  self.needs_unboxing = false
  self.needs_boxing_cleanup = false
  self.needs_unboxing_cleanup = false
  self.needs_type_check = true
  
  self.recv_template = 'mrb_value %{value};'
  self.format_specifier = '&'
  self.get_args_template = '&%{value}'
  self.type_check_template = <<EOS
if (mrb_nil_p(%{value})) {
  mrb_raise(mrb, E_ARGUMENT_ERROR, "No block provided");
  return mrb_nil_value();
}
// TODO: mrb_iv_set(mrb, req???, mrb_intern_cstr(mrb, "@mruby_uv_fs_cb"), %{value});
EOS
  self.invocation_arg_template = 'mruby_uv_fs_cb_thunk'
end

# uv_write_cb stubs
# -----------------

# This CType just inserts stubs. Up to the bindings writer to go find the
# request object out of all the params and pass it into mrb_iv_set.

CTypes.define('uv_write_cb') do
  self.needs_unboxing = false
  self.needs_boxing_cleanup = false
  self.needs_unboxing_cleanup = false
  self.needs_type_check = true
  
  self.recv_template = 'mrb_value %{value};'
  self.format_specifier = '&'
  self.get_args_template = '&%{value}'
  self.type_check_template = <<EOS
if (mrb_nil_p(%{value})) {
  mrb_raise(mrb, E_ARGUMENT_ERROR, "No block provided");
  return mrb_nil_value();
}
// TODO: mrb_iv_set(mrb, req???, mrb_intern_cstr(mrb, "@mruby_uv_write_cb"), %{value});
EOS
  self.invocation_arg_template = 'mruby_uv_write_cb_thunk'
end

# uv_buf_t array parameters
# -------------------------

# lib['ParmDecls'].select { |p| p['type']['type_name'].include?('uv_buf_t []') }.map { |p| [p['function'], p['type']['type_name'], p['name']] }

CTypes.define('write:uv_buf_t') do
  self.type_name = 'uv_buf_t'
  self.recv_template = 'mrb_value %{value};'
  self.format_specifier = 'S'
  self.get_args_template = '&%{value}'
  self.needs_unboxing = true
  self.unboxing_fn.invocation_template = "uv_buf_t %{as} = MRUBY_UV_PREPARE_WRITE_BUF(/* TODO: REQ/HANDLE */, %{unbox});"
  self.invocation_arg_template = '&%{value}, 1'
end

[["uv_write", "const uv_buf_t []", "bufs"],
 ["uv_write2", "const uv_buf_t []", "bufs"],
 ["uv_try_write", "const uv_buf_t []", "bufs"],
 ["uv_udp_send", "const uv_buf_t []", "bufs"],
 ["uv_udp_try_send", "const uv_buf_t []", "bufs"],
 ["uv_fs_write", "const uv_buf_t []", "bufs"]].each do |fn, type, name|
   CTypes.set_fn_param_type(fn, name, CTypes['write:uv_buf_t'])
   CTypes.set_fn_param_type(fn, 'nbufs', CTypes['ignore'])
end

# uv_process_options_t fields
# ---------------------------

CTypes.define('field:cstring') do
  self.recv_template = 'mrb_value %{value};'
  self.needs_unboxing = true
  self.format_specifier = 'S!'
  self.unboxing_fn.invocation_template = 'const char * %{as} = mrb_nil_p(%{unbox}) ? NULL : mrb_string_value_cstr(mrb, %{unbox});'
  self.boxing_fn.invocation_template = 'mrb_value %{as} = mrb_str_new_cstr(mrb, %{box});'
  self.field_swap_template = <<-EOS
if (%{old} != NULL) {
  free(%{old});
}
if (%{new} == NULL) {
  %{old} = NULL;
} else {
  %{old} = strdup(%{new});
}
EOS
end

[["exit_cb", "uv_exit_cb"],
 ["file", "const char *"],
 ["args", "char **"],
 ["env", "char **"],
 ["cwd", "const char *"],
 ["flags", "unsigned int"],
 ["stdio_count", "int"],
 ["stdio", "uv_stdio_container_t *"],
 ["uid", "uv_uid_t"],
 ["gid", "uv_gid_t"]].each do |name, type|
  case type
  when 'uv_exit_cb'
    ; # nothing yet
  when 'const char *'
    CTypes.set_field_type('uv_process_options_t', name, CTypes['field:cstring'])
  when 'char **'
    CTypes.set_field_type('uv_process_options_t', name, CTypes['nullterminated:cstring:array'])
  when 'unsigned int'
    ; # nothing yet
  when 'uv_stdio_container_t *'
    ; # nothing yet
  when 'uv_uid_t'
    ; # nothing yet
  when 'uv_gid_t'
    ; # nothing yet
  end
end
