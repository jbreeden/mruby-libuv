main_loop = UV.default_loop

puts "Creating the check handle."
check = UV::Check.new
UV.check_init(main_loop, check)

puts "Starting check. Stop at 5 hits."
count = 1
UV.check_start(check) do
  puts "Check hit: ##{count}"
  if count == 5
    UV.stop(main_loop)
  end
  count += 1
end

puts "Starting an idle handle to keep the event loop running."
idle = UV::Idle.new
UV.idle_init(main_loop, idle)
UV.idle_start(idle) do
  # Just keep the event loop running
end

puts 'Running loop'
UV.run(main_loop)

UV.loop_close(main_loop)

puts 'Done!'
