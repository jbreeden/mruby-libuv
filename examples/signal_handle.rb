puts 'Grabbing default loop'
main_loop = UV.default_loop

puts "Creating the signal handler"
sig = UV::Signal.new
UV.signal_init(main_loop, sig)

UV.signal_start(sig, 2) do
  puts "Got interrupt, removing signal handler. (Should exit now)"
  UV.signal_stop(sig)
end

puts 'Running loop (Should block until ctrl-c)'
UV.run(main_loop)

puts 'Closing default loop'
UV.loop_close(main_loop)

puts 'Done!'
