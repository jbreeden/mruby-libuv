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
