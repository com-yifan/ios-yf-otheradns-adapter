Pod::Spec.new do |s|
  s.name             = "YFAdsXUAdapter"
  s.version      = "6.1.2.0"
  s.summary          = "YF XU adapter"
  s.description      = <<-DESC
    YF XU adapter xcframework.
  DESC
  s.homepage         = "https://github.com/com-yifan/ios-yf-otheradns-adapter"
  s.license          = { :type => "Proprietary", :text => "Proprietary" }
  s.author           = { "Yifan" => "dev@com-yifan.com" }
  s.source       = { :git => "https://github.com/com-yifan/ios-yf-otheradns-adapter.git", :tag => s.version.to_s }
  s.vendored_frameworks = "XU/YFAdsXUAdapter.xcframework"
  s.platform         = :ios, "11.0"
  s.static_framework = true
end
