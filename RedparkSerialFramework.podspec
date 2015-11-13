Pod::Spec.new do |s|
  s.name                = 'RedparkSerialFramework'
  s.version             = "1.2.0"
  s.summary             = "Pod including Redpark Serial sdk"
  s.description         = <<-DESC
    This pod was intended only to include the Redpark Serial SDK to facilitate the inclusion of the library amongst different projects.
  DESC
  s.homepage            = 'https://github.com/Njko/RedparkSerialFramework'
  s.author              = { 'Nicolas LINARD' => 'nicolas.linard@valtech.fr' }
  s.source              = { :git => "https://github.com/Njko/RedparkSerialFramework.git", :tag => s.version.to_s }
  s.requires_arc        = true
  s.vendored_frameworks = 'RedparkSerialFramework.framework'
  s.platform            = :ios, '8.0'
  s.requires_arc        = true
  s.license      = { :type => 'Apache License, Version 2.0', :text => <<-LICENSE
    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
    LICENSE
  }
end
