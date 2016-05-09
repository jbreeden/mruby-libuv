class Promise
  # May be overriden to fit promises into any event loop.
  # By default, assumes it's to work on the default UV event loop.
  # (Note that the system may `UV.instance_variable_set(:@default_loop, SOME_LOOP)`
  #  to override the default loop for the current MRuby VM)
  def self.next_tick(&block)
    handle = UV::Idle.new
    UV.idle_init(UV.default_loop, handle)
    UV.idle_start(handle) do
      UV.close(handle)
      block[]
    end
  end
  
  attr_reader :state
  
  def pending?
    state == :pending
  end
  
  def resolved?
    state == :resolved
  end
  alias fulfilled? resolved?
  
  def rejected?
    state == :rejected
  end
  
  def settled?
    state != :pending
  end
  
  def initialize()
    @callbacks = []
    @state = :pending # :pending, :resolved, :rejected
    @value = nil
    @reason = nil
    if block_given?
      resolve = proc { |value|
        self.resolve(value)
      }
      
      reject = proc { |reason|
        self.reject(reason)
      }
      
      yield(resolve, reject)
    end
  end
  
  def then(on_resolve=nil, on_reject=nil, &block)
    on_resolve ||= block
    callback = nil
    promise = Promise.new { |res, rej|
      callback = proc { |val, err|
        begin
          result = nil
          if err
            result = on_reject ? on_reject.call(err) : err
          else
            result = on_resolve ? on_resolve.call(val) : val
          end
          
          if result.kind_of?(Promise)
            result.then { |val| res.call(val) }
            result.catch { |err| rej.call(err) }
          else
            res.call(val)
          end
        rescue Exception => ex
          rej.call(ex)
        end
      }
    }
    
    case @state
    when :pending
      @callbacks.push(callback)
    when :resolved
      Promise.next_tick { callback.call(@value, nil) }
    when :rejected
      Promise.next_tick { callback.call(nil, @reason) }
    end
    promise
  end
  
  def rescue(&block)
    self.then(nil, block)
  end
  alias catch rescue
  
  def resolve(value)
    unless @state == :pending
      raise "Attempted to resolve a promise that is already settled"
    end
    @value = value
    @state = :resolved
    notify
  end
  alias fulfill resolve
  
  def reject(reason)
    unless @state == :pending
      raise "Attempted to reject a promise that is already settled"
    end
    if reason.nil?
      raise ArgumentError, "Attempted to reject a promise with nil"
    end
    @reason = reason
    @state = :rejected
    notify
  end
  
  def notify
    Promise.next_tick {
      @callbacks.each { |c|
        c.call(@value, @reason)
      }
      @callbacks = []
    }
  end
  
  def self.resolve(value)
    self.new { |resolve, reject|
      resolve.call(value)
    }
  end
  class << self
    alias fulfill resolve
  end
  
  def self.reject(reason)
    self.new { |resolve, reject|
      reject.call(reason)
    }
  end
end
