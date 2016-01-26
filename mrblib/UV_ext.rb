class UV::Loop
  # A UV root can "ref" an object, (sort of the opposite of calling `ref` on
  # a handle). This provided a GC root for handles passed off to C but that
  # we expect to come back through a callback.
  # (Intended for internal use only)
  def ref(obj)
    @refs ||= {}
    @refs[obj] = true
  end
  
  def unref(obj)
    @refs.delete(obj) if @refs
  end
end

class UV::FS
  attr_reader :buf
end
