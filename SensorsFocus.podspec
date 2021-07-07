Pod::Spec.new do |s|
  s.name         = 'SensorsFocus'
  s.version      = "0.4.3"
  s.summary      = 'The official iOS SDK of Sensors Focus.'
  s.homepage     = 'http://www.sensorsdata.cn'
  s.license      = { :type => 'Apache 2.0', :file => 'LICENSE' }
  s.source       = { :git => 'https://github.com/sensorsdata/sf-sdk-ios.git', :tag => 'v' + s.version.to_s}
  s.author       = 'Sensors Data'
  s.platform     = :ios
  s.ios.deployment_target = '8.0'
  s.requires_arc = true
  s.cocoapods_version = '>= 1.5.0'
  s.ios.framework = 'UIKit', 'Foundation'
  s.dependency 'SensorsAnalyticsSDK', '>=2.1.6'
  s.pod_target_xcconfig = { 'PRODUCT_BUNDLE_IDENTIFIER': 'com.sensorsdata.SensorsFocus', 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'}
  s.xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.static_framework = true

  base_dir = 'SensorsFocus/'
  s.resource = base_dir + 'SensorsFocus.bundle'
  s.vendored_frameworks = base_dir + 'SensorsFocus.framework'

end
