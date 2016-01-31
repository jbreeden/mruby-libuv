tcp = UV::TCP.new
UV.tcp_init(UV.default_loop, tcp)

dns_req = UV::Getaddrinfo.new

log = File.open('log.txt', 'w')

UV.getaddrinfo(UV.default_loop, dns_req, "www.google.com", '80') do |req, status, addr|
  if status != 0
    puts "Error: #{UV.strerror(status)}"
  else
    connect = UV::Connect.new
    UV.tcp_connect(connect, tcp, addr.ai_addr) do |req, status|
      if status != 0
        puts "Error connecting to www.google.com: #{UV.strerror(status)}"
      else
        puts "Connected to www.google.com!"
        
        msg = <<-EOS
GET / HTTP/1.1
Connection: close\n
EOS
        
        write = UV::Write.new
        UV.write(write, tcp, msg)

        UV.read_start(tcp) do |handle, size, str|
          if size > 0
            puts str
          else
            puts UV::ERRNO_TO_SYM[size]
          end
        end
        
      end
    end
  end
end

UV.run
