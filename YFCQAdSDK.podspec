Pod::Spec.new do |spec|
  spec.name = 'YFCQAdSDK'
  spec.version = '7.0.2.17'
  spec.summary = 'CQAdSDK iOS advertising mediation SDK.'
  spec.description = <<-DESC
    CQAdSDK provides iOS advertising mediation capabilities and wraps supported
    third-party ad networks.
  DESC

  spec.homepage = 'https://example.com'
  spec.license = { :type => 'Proprietary', :text => 'Copyright. All rights reserved.' }
  spec.author = { 'Author' => 'example@example.com' }
  spec.source = { :git => "https://github.com/com-yifan/ios-yf-otheradns-adapter.git", :tag => spec.version.to_s }

  spec.platform = :ios, '12.0'
  spec.ios.deployment_target = '12.0'
  spec.requires_arc = true
  spec.static_framework = true

  spec.vendored_frameworks = [
    'IE/CQAdSDK.xcframework'
  ]
  spec.resources = [
    'IE/cqadsdk.bundle'
  ]

  spec.frameworks = [
    'AdSupport',
    'AppTrackingTransparency',
    'AudioToolbox',
    'AVFoundation',
    'CoreGraphics',
    'CoreLocation',
    'CoreMedia',
    'CoreMotion',
    'CoreTelephony',
    'Foundation',
    'ImageIO',
    'JavaScriptCore',
    'MobileCoreServices',
    'QuartzCore',
    'SafariServices',
    'Security',
    'StoreKit',
    'SystemConfiguration',
    'UIKit',
    'WebKit'
  ]
  spec.weak_frameworks = ['AdServices']
  spec.libraries = ['c++', 'resolv', 'sqlite3', 'xml2', 'z']

  spec.pod_target_xcconfig = {
    'OTHER_LDFLAGS' => '$(inherited) -ObjC',
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  spec.user_target_xcconfig = {
    'OTHER_LDFLAGS' => '$(inherited) -ObjC',
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }

  # Third-party ad network SDKs used by CQAdSDK.framework.
  # spec.dependency 'KSAdSDK', '5.4.10.1'
  # spec.dependency 'GDTMobSDK', '4.15.90'
  # spec.dependency 'Ads-CN', '7.6.0.4'
  # spec.dependency 'BaiduMobAdSDK', '10.050'
  # spec.dependency 'JADYun', '2.6.8'
  # spec.dependency 'TanxSDK', '3.7.4'
end
