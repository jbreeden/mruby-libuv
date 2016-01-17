main_loop = UV.uv_default_loop

puts "Creating the prepare handle."
prepare = UV::UvPrepareT.new
UV.uv_prepare_init(main_loop, prepare)

puts "Starting prepare. Stop at 5 hits."
count = 1
UV.uv_prepare_start(prepare) do
  puts "Prepare hit: ##{count}"
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
