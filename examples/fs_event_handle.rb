main_loop = UV.uv_default_loop

puts "Creating fs event handles"
dir_event = UV::UvFsEventT.new
UV.uv_fs_event_init(main_loop, dir_event)
file_event = UV::UvFsEventT.new
UV.uv_fs_event_init(main_loop, file_event)

home = UV.uv_os_homedir
unless home
  puts "Error! Couldn't get path to home directory."
  exit 1
end

callback = proc do |handle, path, events, status|
  puts "FS event on #{UV.uv_fs_event_getpath(handle)} events = #{events} status = #{status}"
end

puts "Watching directory #{home} for changes."
UV.uv_fs_event_start(dir_event, home, 2000, &callback)

puts "Watching file #{home}/test.txt for changes."
UV.uv_fs_event_start(file_event, "#{home}/test.txt", 2000, &callback)

UV.uv_run(main_loop)

UV.uv_loop_close(main_loop)

puts 'Done!'
