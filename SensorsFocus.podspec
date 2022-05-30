Pod::Spec.new do |s|
  s.name         = 'SensorsFocus'
  s.version      = '0.5.1'
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
  s.dependency 'SensorsAnalyticsSDK', '>=4.2.0'
  s.pod_target_xcconfig = { 'PRODUCT_BUNDLE_IDENTIFIER': 'com.sensorsdata.SensorsFocus'}

  base_dir = 'SensorsFocus/'
  s.vendored_frameworks = base_dir + 'SensorsFocus.xcframework'

end
