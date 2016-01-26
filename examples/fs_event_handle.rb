main_loop = UV.default_loop

puts "Creating fs event handles"
dir_event = UV::FSEvent.new
UV.fs_event_init(main_loop, dir_event)
file_event = UV::FSEvent.new
UV.fs_event_init(main_loop, file_event)

home = UV.os_homedir
unless home
  puts "Error! Couldn't get path to home directory."
  exit 1
end

callback = proc do |handle, path, events, status|
  puts "FS event on #{UV.fs_event_getpath(handle)} events = #{events} status = #{status}"
end

puts "Watching directory #{home} for changes."
UV.fs_event_start(dir_event, home, 2000, &callback)

puts "Watching file #{home}/test.txt for changes."
UV.fs_event_start(file_event, "#{home}/test.txt", 2000, &callback)

UV.run(main_loop)

UV.loop_close(main_loop)

puts 'Done!'
