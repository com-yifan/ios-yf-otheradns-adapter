Pod::Spec.new do |s|
  s.name         = "YFMPAdSDK"
  s.version      = "6.1.2.0"
  s.summary      = "MPAdSDK third-party advertising SDK"
  s.description  = <<-DESC
    MPAdSDK including vendored framework and resource bundle.
  DESC
  s.homepage     = "https://github.com/com-yifan/ios-yf-otheradns-adapter"
  s.license      = { :type => "Proprietary", :text => "Proprietary" }
  s.author       = { "Yifan" => "dev@com-yifan.com" }
  s.platform     = :ios, "11.0"
  s.source       = { :git => "https://github.com/com-yifan/ios-yf-otheradns-adapter.git", :tag => s.version.to_s }

  s.frameworks = 'UIKit', 'MapKit', 'WebKit', 'MediaPlayer', 'AdSupport', 'CoreMedia', 'AVFoundation', 'CoreTelephony', 'StoreKit', 'SystemConfiguration', 'MobileCoreServices', 'CoreMotion', 'Accelerate', 'CoreGraphics', 'Security'
  s.libraries = 'c++', 'resolv', 'z', 'sqlite3'

  s.vendored_frameworks = 'GE/MPAdSDK.framework'
  s.resources = 'GE/MPAdSDK.bundle'

  valid_archs = ['armv7', 'armv7s', 'x86_64', 'arm64']
  s.xcconfig = {
    'VALID_ARCHS' => valid_archs.join(' ')
  }
end
