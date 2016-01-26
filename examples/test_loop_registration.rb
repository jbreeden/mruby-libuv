main_loop = UV.default_loop

def make_idle_and_lose_reference(main_loop)
  idle = UV::Idle.new
  UV.idle_init(main_loop, idle)
  count = 0
  UV.idle_start(idle) do
    count += 1
    
    # Make sure GC is working with initialized/uninitialized handles
    # ie: Shouldn't be any segfaults or failed assertions from UV.
    if count < 1000
      trash = UV::Idle.new
      UV.idle_init(main_loop, trash) if count % 2 == 0
    end
    
    if count % 10000 == 0
      puts "Idle handler hit: ##{count}"
    end
    if count == 50001
      UV.stop(main_loop)
    end
  end
end

puts "Creating an idle handle, and purposely losing the reference to it"
make_idle_and_lose_reference(main_loop)

puts
puts "Starting another idle handle to force gc on every loop iteration."
puts "If the first idle handler correctly registers a reference to itself"
puts "from the main event loop, you should keep seeing it's hit count update"
puts "until it finally stops the loop at ~50000 iterations."
puts

idle = UV::Idle.new
UV.idle_init(main_loop, idle)
count = 0
UV.idle_start(idle) do
  puts "Hit GC. (Won't mention this again)" if count == 0
  GC.start
  count += 1
end

UV.run(main_loop)
UV.loop_close(main_loop)

puts 'Done!'
