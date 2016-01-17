puts 'Grabbing default loop'
main_loop = UV.uv_default_loop

puts "Creating the signal handler"
sig = UV::UvSignalT.new
UV.uv_signal_init(main_loop, sig)

UV.uv_signal_start(sig, 2) do
  puts "Got interrupt, removing signal handler. (Should exit now)"
  UV.uv_signal_stop(sig)
end

puts 'Running loop (Should block until ctrl-c)'
UV.uv_run(main_loop)

puts 'Closing default loop'
UV.uv_loop_close(main_loop)

puts 'Done!'
