puts 'Making a new loop'
my_loop = UV::Loop.new

puts 'Running loop (no events... should exit immediately)'
UV.run(my_loop, UV::RunMode::RUN_DEFAULT)

puts 'Closing default loop'
UV.loop_close(my_loop)

puts 'Done!'
