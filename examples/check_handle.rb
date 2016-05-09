def start_check_handle
  puts "Starting check. Stop at 5 hits."
  check = UV::Check.new
  UV.check_init(UV.default_loop, check)
  count = 1
  UV.check_start(check) do
    puts "Check hit: ##{count}"
    if count == 5
      UV.stop(UV.default_loop)
    end
    count += 1
  end
end

def start_idle_handle
  puts "Starting an idle handle to keep the event loop running."
  idle = UV::Idle.new
  UV.idle_init(UV.default_loop, idle)
  UV.idle_start(idle) do
    # Just keep the event loop running
  end
end

def run_loop
  puts 'Running loop'
  UV.run(UV.default_loop)
  UV.loop_close(UV.default_loop)
  puts 'Done!'
end

start_check_handle
start_idle_handle
run_loop
