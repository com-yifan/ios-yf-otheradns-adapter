Pod::Spec.new do |s|
  s.name             = "YFAdsNALAdapter"
  s.version      = "6.1.2.0"
  s.summary          = "YF NAL adapter"
  s.description      = <<-DESC
    YF NAL adapter xcframework.
  DESC
  s.homepage         = "https://github.com/com-yifan/ios-yf-otheradns-adapter"
  s.license          = { :type => "Proprietary", :text => "Proprietary" }
  s.author           = { "Yifan" => "dev@com-yifan.com" }
  s.source       = { :git => "https://github.com/com-yifan/ios-yf-otheradns-adapter.git", :tag => s.version.to_s }
  s.vendored_frameworks = "NAL/YFAdsNALAdapter.xcframework"
  s.platform         = :ios, "11.0"
  s.static_framework = true
end
