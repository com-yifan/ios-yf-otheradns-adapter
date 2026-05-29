Pod::Spec.new do |s|
  s.name         = "YFAdProfSDK"
  s.version      = "6.1.2.1"
  s.summary      = "AdProfSDK Framework"
  s.description  = "AdProfSDK for iOS advertising profiling"
  s.homepage     = "https://github.com/com-yifan/ios-yf-otheradns-adapter"
  s.license      = { :type => "Proprietary", :text => "Proprietary" }
  s.author       = { "Yifan" => "dev@com-yifan.com" }
  s.platform     = :ios, "11.0"
  s.source       = { :git => "https://github.com/com-yifan/ios-yf-otheradns-adapter.git", :tag => s.version.to_s }

  s.frameworks = [
    "AdSupport",
    "AVFoundation",
    "AVKit",
    "Accelerate",
    "SystemConfiguration",
    "Security",
    "StoreKit",
    "SafariServices",
    "WebKit",
    "AppTrackingTransparency"
  ]

  s.libraries = "objc"

  s.user_target_xcconfig = {
    "OTHER_LDFLAGS" => "-ObjC"
  }

  s.vendored_frameworks = "NAL/AdProfSDK.xcframework"

  s.pod_target_xcconfig = {
    "DEFINES_MODULE" => "YES",
    "BUILD_LIBRARY_FOR_DISTRIBUTION" => "YES"
  }
end
