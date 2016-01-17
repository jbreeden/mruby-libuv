puts 'Grabbing default loop'
main_loop = UV.uv_default_loop

puts 'Running loop (no events... should exit immediately)'
UV.uv_run(main_loop, UV::Uv_Run_Mode::UV_RUN_ONCE)

puts 'Closing default loop'
UV.uv_loop_close(main_loop)

puts 'Done!'
