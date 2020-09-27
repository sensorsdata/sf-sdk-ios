Pod::Spec.new do |s|
  s.name         = 'SensorsFocus'
  s.version      = "0.1.8"
  s.summary      = 'The official iOS SDK of Sensors Focus.'
  s.homepage     = 'http://www.sensorsdata.cn'
  s.license      = { :type => 'Apache 2.0', :file => 'LICENSE' }
  s.source       = { :git => 'https://github.com/sensorsdata/sf-sdk-ios.git', :tag => 'v' + s.version.to_s}
  s.author       = 'Sensors Data'
  s.platform     = :ios
  s.ios.deployment_target = '8.0'
  s.swift_versions = '4.0'
  s.requires_arc = true
  s.static_framework = true
  s.cocoapods_version = '>= 1.5.0'
  s.libraries = 'icucore', 'sqlite3', 'z'
  s.module_map = 'SensorsFocus/SensorsFocus/module.modulemap'
  s.pod_target_xcconfig = { 'PRODUCT_BUNDLE_IDENTIFIER': 'com.sensorsdata.SensorsFocus' }
  
  s.ios.framework = 'UIKit', 'Foundation'

  base_dir = 'SensorsFocus/SensorsFocus/Source/'
  s.resource = base_dir + 'SensorsFocus.bundle'

  s.subspec 'Core' do |core|
    core.source_files = base_dir + 'Core/**/*.{h,m}'
    core.public_header_files = base_dir + 'Core/Base/SFConfigOptions.h', base_dir + 'Core/Base/SensorsFocus.h', base_dir + 'Core/Model/SensorsFocusActionModel.h', base_dir + 'Core/Base/SFInteractionProtocol.h'
  end

  s.subspec 'Popup' do |popup|
    popup.dependency 'SensorsFocus/Core'
    popup.source_files = base_dir + 'Popup/**/*.{h,m}'
    popup.public_header_files = base_dir + 'Core/Base/SFConfigOptions.h', base_dir + 'Core/Base/SensorsFocus.h', base_dir + 'Core/Model/SensorsFocusActionModel.h', base_dir + 'Core/Base/SFInteractionProtocol.h'
#    popup.private_header_files = base_dir + 'Popup/**/*.h'
  end

end
