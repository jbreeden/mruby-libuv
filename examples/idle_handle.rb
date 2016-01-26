puts 'Grabbing default loop'
main_loop = UV.default_loop

puts 'Making an idle handle'
idle = UV::Idle.new

puts 'Init idle handle on main loop'
UV.idle_init(main_loop, idle)

puts 'Setup idle handler to cancel itself after 3 invocations'
count = 0
UV.idle_start(idle) do
  count += 1
  puts "Idle handler hit ##{count}"
  if count >= 3
    puts "Stopping idle handle: #{idle.inspect}"
    UV.idle_stop(idle)
  end
end

puts 'Running loop'
UV.run(main_loop, UV::RunMode::RUN_DEFAULT)

puts 'Closing default loop'
UV.loop_close(main_loop)

puts 'Done!'
