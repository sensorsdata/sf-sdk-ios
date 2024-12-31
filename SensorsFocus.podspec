Pod::Spec.new do |s|
  s.name         = 'SensorsFocus'
  s.version      = '0.7.3'
  s.summary      = 'The official iOS SDK of Sensors Focus.'
  s.homepage     = 'http://www.sensorsdata.cn'
  s.license      = { :type => 'Apache 2.0', :file => 'LICENSE' }
  s.source       = { :git => 'https://github.com/sensorsdata/sf-sdk-ios.git', :tag => 'v' + s.version.to_s}
  s.author       = 'Sensors Data'
  s.platform     = :ios
  s.ios.deployment_target = '9.0'
  s.requires_arc = true
  s.cocoapods_version = '>= 1.5.0'
  s.ios.framework = 'UIKit', 'Foundation'
  s.dependency 'SensorsAnalyticsSDK', '>=4.5.23'
  s.pod_target_xcconfig = { 'PRODUCT_BUNDLE_IDENTIFIER': 'com.sensorsdata.SensorsFocus'}
  s.default_subspec = 'Dynamic'

  base_dir = 'SensorsFocus/'
  s.subspec 'Dynamic' do |a|
    a.vendored_frameworks = base_dir + 'Dynamic/SensorsFocus.xcframework'
  end
  
  s.subspec 'Static' do |b|
    b.vendored_frameworks = base_dir + 'Static/SensorsFocus.xcframework'
    b.resource_bundles = { 'SensorsFocus' => ['SensorsFocus/Resources/**/*']}
  end

  s.subspec 'DynamicDiagnosis' do |c|
    c.dependency 'SensorsDiagnosis','>=0.0.3'
    c.vendored_frameworks = base_dir + 'DynamicDiagnosis/SensorsFocus.xcframework'
  end

  s.subspec 'StaticDiagnosis' do |d|
    d.dependency 'SensorsDiagnosis','>=0.0.3'
    d.vendored_frameworks = base_dir + 'StaticDiagnosis/SensorsFocus.xcframework'
    d.resource_bundles = { 'SensorsFocus' => ['SensorsFocus/Resources/**/*']}
  end
  
  s.subspec 'Dynamic+IDM' do |e|
    e.vendored_frameworks = base_dir + 'Dynamic+IDM/SensorsFocus.xcframework'
  end
  
  s.subspec 'Static+IDM' do |f|
    f.vendored_frameworks = base_dir + 'Static+IDM/SensorsFocus.xcframework'
    f.resource_bundles = { 'SensorsFocus' => ['SensorsFocus/Resources/**/*']}
  end

  s.subspec 'Dynamic+IDM+Diagnosis' do |g|
    g.dependency 'SensorsDiagnosis','>=0.0.3'
    g.vendored_frameworks = base_dir + 'Dynamic+IDM+Diagnosis/SensorsFocus.xcframework'
  end

  s.subspec 'Static+IDM+Diagnosis' do |h|
    h.dependency 'SensorsDiagnosis','>=0.0.3'
    h.vendored_frameworks = base_dir + 'Static+IDM+Diagnosis/SensorsFocus.xcframework'
    h.resource_bundles = { 'SensorsFocus' => ['SensorsFocus/Resources/**/*']}
  end

end