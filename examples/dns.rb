err, addr = UV.ip4_addr('192.168.1.1', 80)
puts "err, addr = UV.ip4_addr('192.168.1.1', 80) \n# => #{[err, addr]}\n\n"
# => [0, #<UV::SockaddrIn:0x7f87198547f0>]

err, host = UV.ip4_name(addr)
puts "UV.ip4_name(addr) \n# => #{[err, host]}\n\n"
# => [0, "192.168.1.1"]

err, addr = UV.ip6_addr('::1', 80)
puts "err, addr = UV.ip4_addr('::1', 80) \n# => #{[err, addr]}\n\n"
# => [0, #<UV::SockaddrIn6:0x7f8719853950>]

err, host = UV.ip6_name(addr)
puts "UV.ip4_name(addr) \n# => #{[err, host]}\n\n"
# => [0, "::1"]

req = UV::Getaddrinfo.new
# Note: `hints` param is optional, and is not given here
UV.getaddrinfo(UV.default_loop, req, 'google.com', 'http') do |req, status, addrinfo|
  puts "Got addrinfo for www.google.com (DNS lookup)"
  
  if status != 0
    puts "DNS Lookup failed: #{UV.strerror(status)}"
    # => "DNS Lookup failed: unknown node or service"
  else
    loop {
      puts " - Addrinfo: #{addrinfo.inspect}"
      if addrinfo.ai_addr.kind_of?(UV::SockaddrIn)
        puts " - IP: #{UV.ip4_name(addrinfo.ai_addr)[1]}"
      elsif addrinfo.ai_addr.kind_of?(UV::SockaddrIn6)
        puts " - IP: #{UV.ip6_name(addrinfo.ai_addr)[1]}"
      end
      ai_next = addrinfo.ai_next
      break if ai_next.nil?
      addrinfo = ai_next
    }
    
    puts
    
    req = UV::Getnameinfo.new
    # Note: `flags` param is optional, defaults to 0, and is not given here
    UV.getnameinfo(UV.default_loop, req, addrinfo.ai_addr) do |req, status, host, service|
      if status != 0
        puts "Reverse DNS lookup failed: #{UV.strerror(status)}"
      else
        puts "Got name info for Google's addr info (reverse DNS lookup)"
        puts " - HOST: #{host}"
        puts " - SERVICE: #{service}"
      end
    end
  end
end

UV.run
