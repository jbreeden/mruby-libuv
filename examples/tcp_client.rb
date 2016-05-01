class HttpClient
  attr_accessor :tcp, :host
  
  def get(host, port, path, &cb)
    msg = <<-EOS
GET #{path} HTTP/1.1
Connection: close\n
EOS
    lookup(host, port)
      .then { |addr| connect(addr) }
      .then { |tcp| send_recv(tcp, msg, &cb) }
      .catch { |err| $stderr.puts(err.inspect) }
  end

  def lookup(host, port)
    Promise.new { |res, rej|
      dns_req = UV::Getaddrinfo.new
      UV.getaddrinfo(UV.default_loop, dns_req, host.to_s, port.to_s) do |req, status, addr|
        if status != 0
          rej.call(StandardError.new(UV.strerror(status)))
        else
          res.call(addr)
        end
      end
    }
  end
  
  def connect(addr)
    Promise.new { |res, rej|
      connect = UV::Connect.new
      tcp = UV::TCP.new
      UV.tcp_init(UV.default_loop, tcp)
      UV.tcp_connect(connect, tcp, addr.ai_addr) do |req, status|
        if status != 0
          rej.call(UV.strerror(status))
        else
          res.call(tcp)
        end
      end
    }
  end
  
  def send_recv(tcp, msg, &cb)
    write = UV::Write.new
    UV.write(write, tcp, msg)

    UV.read_start(tcp) do |handle, size, str|
      if size > 0
        cb.call(nil, str)
      else
        cb.call(UV::ERRNO_TO_SYM[size])
      end
    end
  end
end

http = HttpClient.new

http.get('www.google.com', '80', '/') { |err, content|
  if err && err != :EOF
    $stderr.puts('ERROR:' + err.to_s)
    $stderr.flush
  else
    print content
  end
}

UV.run
