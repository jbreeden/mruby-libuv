puts 'Grabbing default loop'
main_loop = UV.uv_default_loop

puts 'Making an idle handle'
idle = UV::UvIdleT.new

puts 'Init idle handle on main loop'
UV.uv_idle_init(main_loop, idle)

puts 'Setup idle handler to cancel itself after 3 invocations'
count = 0
UV.uv_idle_start(idle) do
  count += 1
  puts "Idle handler hit ##{count}"
  if count >= 3
    puts "Stopping idle handle: #{idle.inspect}"
    UV.uv_idle_stop(idle)
  end
end

puts 'Running loop'
UV.uv_run(main_loop, UV::Uv_Run_Mode::UV_RUN_DEFAULT)

puts 'Closing default loop'
UV.uv_loop_close(main_loop)

puts 'Done!'
