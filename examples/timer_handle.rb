main_loop = UV.default_loop

puts "Creating the timer handle"
timer = UV::Timer.new
UV.timer_init(main_loop, timer)

puts "Starting timer. 2 second initial delay. 0.5 second interval."
count = 1
UV.timer_start(timer, 2000, 500) do
  puts "Timer hit: ##{count}"
  if count == 5
    UV.timer_stop(timer)
  end
  count += 1
end

puts 'Running loop'
UV.run(main_loop)

UV.loop_close(main_loop)

puts 'Done!'
