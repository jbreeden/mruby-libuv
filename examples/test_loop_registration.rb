main_loop = UV.uv_default_loop

def make_idle_and_lose_reference(main_loop)
  idle = UV::UvIdleT.new
  UV.uv_idle_init(main_loop, idle)
  count = 0
  UV.uv_idle_start(idle) do
    count += 1
    puts "Idle handler hit: ##{count}" if count % 10000 == 0
    if count == 100001
      UV.uv_stop(main_loop)
    end
  end
end

puts "Creating an idle handle, and purposely losing the reference to it"
make_idle_and_lose_reference(main_loop)

puts
puts "Starting another idle handle to force gc on every loop iteration."
puts "If the first idle handler correctly registers a reference to itself"
puts "from the main event loop, you should keep seeing it's hit count update"
puts "until it finally stops the loop at ~100000 iterations."
puts

idle = UV::UvIdleT.new
UV.uv_idle_init(main_loop, idle)
count = 0
UV.uv_idle_start(idle) do
  puts "Hit GC. (Won't mention this again)" if count == 0
  GC.start
  count += 1
end

UV.uv_run(main_loop)
UV.uv_loop_close(main_loop)

puts 'Done!'
