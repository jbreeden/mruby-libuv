class UV::UvLoopT
  def ref(obj)
    @refs ||= {}
    @refs[obj] = true
  end
  
  def unref(obj)
    @refs.delete(obj) if @refs
  end
end

class UV::UvFsT
  attr_reader :buf
end
