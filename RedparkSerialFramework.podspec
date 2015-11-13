Pod::Spec.new do |s|
  s.name         = 'RedparkSerialFramework'
  s.name             = "RedparkSerial"
  s.version          = "1.1.0"
  s.summary          = "Pod including Redpark Serial sdk"
  s.license = 'MIT'
  s.platform = :ios
  s.description      = <<-DESC
    This pod was intended only to include the Redpark Serial SDK to facilitate the inclusion of the library amongst different projects.
  DESC
  s.homepage     = 'https://github.com/Njko/RedparkSerial'
  s.author = { 'Nicolas LINARD' => 'nicolas.linard@valtech.fr' }
  s.source           = { :git => "https://github.com/Njko/RedparkSerial.git", :tag => s.version.to_s }
  s.requires_arc = true
  s.vendored_frameworks = 'RedparkSerialFramework.framework'
end
