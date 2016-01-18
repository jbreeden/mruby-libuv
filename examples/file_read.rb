main_loop = UV.uv_default_loop

req = UV::UvFsT.new
req.data = {}

puts "Opening file..."
UV.uv_fs_open(main_loop, req, "../mrbgem.rake", UV::O_RDONLY, 0) do
  if req.result < 0
    puts "ERROR: Failed to open file ../mrbgem.rake"
    puts "Hint: This example expects to be run from within the examples folder"
    exit 1
  end
  
  req.data[:fd] = req.result
  puts "File opened, reading..."
  
  read_cb = proc do
    puts "Read Result: #{req.result}"
    if req.result > 0
      puts "\nContent"
      puts   "-------"
      puts req.buf || '(nil)'
      puts   "-------\n\n"
      UV.uv_fs_read(main_loop, req, req.data[:fd], 50, -1, &read_cb)
    end
  end
  
  UV.uv_fs_read(main_loop, req, req.data[:fd], 50, -1, &read_cb)
end

UV.uv_run(main_loop)
UV.uv_loop_close(main_loop)

puts 'Done!'
