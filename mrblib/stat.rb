class UV::Stat
  def inspect
    "#<#{self.class.name}: #{self.class.instance_methods(false).reject { |m| m == :inspect }.map { |iv| "#{iv}='#{self.send(iv)}'" }.join(" ")}>"
  end
end
