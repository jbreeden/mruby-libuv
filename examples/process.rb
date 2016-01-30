cb = proc { |handle, exit_status, term_signal|
  puts "Process `#{handle.data}` (pid = #{handle.pid}) exited with status = #{exit_status} and term_signal = #{term_signal}"
}

options = UV::ProcessOptions.new
options.stdio = [0, 1, 2].map { |fd| 
  io = UV::STDIOContainter.new
  io.flags = UV::INHERIT_FD
  io.data = fd
  io
}
options.exit_cb = cb

process = UV::Process.new
options.args = ['ls']
process.data = "ls"
UV.spawn(UV.default_loop, process, options)

process = UV::Process.new
options.args = ['ruby', '-e', 'exit 2']
process.data = "ruby -e 'exit 2'"
UV.spawn(UV.default_loop, process, options)

process = UV::Process.new
options.args = ['sh', '-c', 'echo $TEST']
options.env = ["TEST=this_is_a_test_env_variable"]
process.data = "sh -c \"echo $TEST\""
UV.spawn(UV.default_loop, process, options)

UV.run(UV.default_loop)
