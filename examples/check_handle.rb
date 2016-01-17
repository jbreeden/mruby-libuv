main_loop = UV.uv_default_loop

puts "Creating the check handle."
check = UV::UvCheckT.new
UV.uv_check_init(main_loop, check)

puts "Starting check. Stop at 5 hits."
count = 1
UV.uv_check_start(check) do
  puts "Check hit: ##{count}"
  if count == 5
    UV.uv_stop(main_loop)
  end
  count += 1
end

puts "Starting an idle handle to keep the event loop running."
idle = UV::UvIdleT.new
UV.uv_idle_init(main_loop, idle)
UV.uv_idle_start(idle) do
  # Just keep the event loop running
end

puts 'Running loop'
UV.uv_run(main_loop)

UV.uv_loop_close(main_loop)

puts 'Done!'
