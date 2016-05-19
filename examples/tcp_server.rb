class TcpServer
  attr_accessor :tcp
  def run(port)
    tcp = UV::TCP.new
    UV.tcp_init(UV.default_loop, tcp)
    
    err, addr = UV.ip4_addr('127.0.0.1', 8000)
      
    UV.tcp_bind(tcp, addr, 0)

    UV.listen(tcp, 100) { |server, status| 
      client = UV::TCP.new
      UV.tcp_init(UV.default_loop, client)
      accept_status = UV.accept(server, client)
      if accept_status == 0
        UV.read_start(client) { |stream, nread, buf|
          if nread > 0
            puts buf.upcase
          elsif nread == UV::EOF
            puts '<<CONNECTION CLOSED>>'
          else
            raise Exception.new(UV::ERRNO_TO_SYM[nread])
          end
        }
      else
        raise Exception.new(UV::ERRNO_TO_SYM[accept_status])
      end
    }
  end
end

server = TcpServer.new
server.run(8000)

UV.run(UV.default_loop)
