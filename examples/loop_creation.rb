puts 'Making a new loop'
my_loop = UV::UvLoopT.new

puts 'Running loop (no events... should exit immediately)'
UV.uv_run(my_loop, UV::Uv_Run_Mode::UV_RUN_DEFAULT)

puts 'Closing default loop'
UV.uv_loop_close(my_loop)

puts 'Done!'
