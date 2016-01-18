main_loop = UV.uv_default_loop

req = UV::UvFsT.new
req.data = {}

puts "Opening file delete_me.txt"
UV.uv_fs_open(main_loop, req, "delete_me.txt", UV::O_WRONLY | UV::O_CREAT, 0600) do
  if req.result < 0
    puts "ERROR: Failed to open file delete_me.txt"
    puts "Hint: This example expects to be run from within the examples folder"
    exit 1
  end
  
  req.data[:fd] = req.result
  puts "File opened, writing some lorem ipsum into it."
  
  str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.\n"
  UV.uv_fs_write(main_loop, req, req.data[:fd], str, -1) do
    puts "Wrote #{req.result} bytes (request type #{req.type})"
  end
  str.clear
  puts 'Cleared str. If libuv is copying the buffer, lorem ipsum should still be written.'
  
  GC.start
end

UV.uv_run(main_loop)
UV.uv_loop_close(main_loop)

puts 'Done!'
