puts 'Grabbing default loop'
main_loop = UV.default_loop

puts 'Running loop (no events... should exit immediately)'
UV.run(main_loop, UV::RunMode::RUN_ONCE)

puts 'Closing default loop'
UV.loop_close(main_loop)

puts 'Done!'
