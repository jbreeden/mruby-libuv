require 'pry'
require 'mruby_bindings'

namespace :bindings do
  desc 'Extract type information from C files'
  task :scrape do
    File.delete('declarations.json') if File.exists?('declarations.json')
    
    headers = ['headers/uv.h']
    
    if headers.length == 0
      $stderr.puts 'No headers defined. Please update rakelib/mruby-bindings.rake'
      exit 1
    end
    
    headers.each do |header|
      sh "clang2json #{header} >> declarations.json"
    end
    
    # Don't want to scan the platform dependent headers, so I've
    # plucked a few required declarations into another file
    sh "clang2json mruby-bindings.in/dummy_decls.h >> declarations.json"
    
    # libuv uses macros for some struct members that clang2json doesn't pick up.
    # Append hand-written declarations
    sh "cat mruby-bindings.in/declarations_patch.json >> declarations.json"
  end

  desc 'Generate bindings'
  task :generate do
    cmd = ['mrbind generate']
    cmd << '-input declarations.json'
    cmd << '-module UV'
    cmd << '-gem mruby-libuv'
    cmd << '-load mruby-bindings.in/ctypes.rb' if File.exists?('mruby-bindings.in/ctypes.rb')
    cmd << '-load mruby-bindings.in/fn_types.rb' if File.exists?('mruby-bindings.in/fn_types.rb')
    cmd << '-load mruby-bindings.in/macro_types.rb' if File.exists?('mruby-bindings.in/macro_types.rb')
    cmd << '-output bindings'
    cmd << '-force'
    sh cmd.join(' ')
  end
  
  desc 'Interactive pry console with all json declarations parsed'
  task :pry do
    MRubyBindings.read_declarations('declarations.json') do |lib|
      binding.pry
    end
  end
  
  desc "Merge generated code into mrbgem"
  task :merge do
    sh "mrbind merge -from bindings -to ."
  end
  
  namespace :merge do
    desc "Merge generated code from src folder"
    task :src do
      sh "mrbind merge -from bindings -to . src"
    end
    
    desc "Merge generated code from include folder"
    task :include do
      sh "mrbind merge -from bindings -to . include"
    end
    
    desc "Merge generated code from mrblib folder"
    task :mrblib do
      sh "mrbind merge -from bindings -to . mrblib"
    end
  end
  
  desc 'Regenerate functions & classes headers'
  task :'enable-functions' do
    sh 'mrbind enable-functions -m UV -g mruby-libuv -o .'
  end
  
  task :fn_count do
    sh "cat include/mruby_UV_functions.h | egrep 'TRUE|FALSE' | wc -l"
  end

  task :bound_fns do
    sh "cat include/mruby_UV_functions.h | egrep 'TRUE'"
  end

  task :bound_fn_count do
    sh "cat include/mruby_UV_functions.h | egrep 'TRUE' | wc -l"
  end

  task :unbound_fns do
    sh "cat include/mruby_UV_functions.h | egrep 'FALSE'"
  end

  task :unbound_fn_count do
    sh "cat include/mruby_UV_functions.h | egrep 'FALSE' | wc -l"
  end
end
