module UV
  class STDIOContainter
    def initialize
      @flags = UV::IGNORE
    end
    
    attr_reader :flags
    def flags=(val)
      unless val.kind_of?(Fixnum)
        raise TypeError.new("Expected a Fixnum")
      end
      @flags = val
    end
    
    attr_reader :data
    def data=(val)
      unless (val.kind_of?(Fixnum) || val.kind_of?(Stream))
        raise TypeError.new("Expected a Fixnum or Stream")
      end
      @data = val
    end
  end
  
  class ProcessOptions
    def initialize
      @exit_cb = proc {}
    end
    
    def validate
      if @args.nil? || @args.length < 1
        raise ArgumentError.new("ProcessOptions#args must be specified & have at least one element")
      end
      
      unless @stdio.kind_of?(Array) || @stdio.nil?
        raise ArgumentError.new("ProcessOptions#stdio must be an array of STDIOContainter objects")
      end
      
      unless @stdio.nil?
        @stdio.each do |io|
          unless io.kind_of?(STDIOContainter)
            raise ArgumentError.new("ProcessOptions#stdio must be an array of STDIOContainter objects")
          end
        end
      end
    end
    
    attr_reader :exit_cb
    def exit_cb=(val)
      raise TypeError.new("Proc expected") unless val.kind_of?(Proc)
      @exit_cb = val
    end
    
    attr_reader :file
    def file=(val)
      raise TypeError.new("String expected") unless val.kind_of?(String)
      @file = val
    end
    
    attr_reader :args
    def args=(val)
      raise TypeError.new("Array expected") unless val.kind_of?(Array)
      @args = val
    end
    
    attr_reader :env
    def env=(val)
      raise TypeError.new("Array expected") unless val.kind_of?(Array) || val.nil?
      @env = val
    end
    
    attr_reader :cwd
    def cwd=(val)
      raise TypeError.new("String expected") unless val.kind_of?(String)
      @cwd = val
    end
    
    attr_reader :flags
    def flags=(val)
      raise TypeError.new("Fixnum expected") unless val.kind_of?(Fixnum)
      @flags = val
    end
    
    attr_reader :stdio
    def stdio=(val)
      raise TypeError.new("Array expected") unless val.kind_of?(Array)
      val.each do |el|
        unless el.kind_of?(STDIOContainter)
          raise TypeError.new("Array of STDIOContainter's expected")
        end
      end
      @stdio = val
    end
    
    attr_reader :uid
    def uid=(val)
      raise TypeError.new("UID expected") unless val.kind_of?(UID)
      @uid = val
    end
    
    attr_reader :gid
    def gid=(val)
      raise TypeError.new("GID expected") unless val.kind_of?(GID)
      @gid = val
    end
    
  end
end
