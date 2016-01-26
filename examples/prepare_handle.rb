main_loop = UV.default_loop

puts "Creating the prepare handle."
prepare = UV::Prepare.new
UV.prepare_init(main_loop, prepare)

puts "Starting an idle handle to keep the event loop running."
idle = UV::Idle.new
UV.idle_init(main_loop, idle)
UV.idle_start(idle) do
  # Just keep the event loop running
end

puts "Starting prepare. Stop at 5 hits."
count = 1
UV.prepare_start(prepare) do
  puts "Prepare hit: ##{count}"
  if count == 5
    UV.prepare_stop(prepare)
    UV.idle_stop(idle)
  end
  count += 1
end

puts 'Running loop'
UV.run(main_loop)

UV.loop_close(main_loop)

puts 'Done!'
