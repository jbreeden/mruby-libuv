main_loop = UV.default_loop

puts "Creating fs poll handles"
dir_poll = UV::FSPoll.new
UV.fs_poll_init(main_loop, dir_poll)
file_poll = UV::FSPoll.new
UV.fs_poll_init(main_loop, file_poll)

home = UV.os_homedir
unless home
  puts "Error! Couldn't get path to home directory."
  exit 1
end

callback = proc do |handle, status, prev, cur|
  puts "Something happened to #{UV.fs_poll_getpath(handle)}"
  puts "Status: #{status}"
  next if status != 0
  puts "Previous stat data (#{prev.inspect})"
  prev.class.instance_methods(false).each do |m|
    puts " - #{m}: #{prev.send(m)}"
  end
  puts "Current stat data #{cur.inspect}"
  cur.class.instance_methods(false).each do |m|
    puts " - #{m}: #{cur.send(m)}"
  end
end

puts "Watching directory #{home} for changes."
UV.fs_poll_start(dir_poll, home, 2000, &callback)

puts "Watching file #{home}/test.txt for changes."
UV.fs_poll_start(file_poll, "#{home}/test.txt", 2000, &callback)

UV.run(main_loop)

UV.loop_close(main_loop)

puts 'Done!'
