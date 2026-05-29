Pod::Spec.new do |s|
  s.name             = "YFAdsZDAdapter"
  s.version      = "6.1.2.1"
  s.summary          = "YF ZD adapter"
  s.description      = <<-DESC
    YF ZD adapter xcframework.
  DESC
  s.homepage         = "https://github.com/com-yifan/ios-yf-otheradns-adapter"
  s.license          = { :type => "Proprietary", :text => "Proprietary" }
  s.author           = { "Yifan" => "dev@com-yifan.com" }
  s.source       = { :git => "https://github.com/com-yifan/ios-yf-otheradns-adapter.git", :tag => s.version.to_s }
  s.vendored_frameworks = "ZD/YFAdsZDAdapter.xcframework"
  s.platform         = :ios, "11.0"
  s.static_framework = true
end
