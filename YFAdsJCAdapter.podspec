Pod::Spec.new do |s|
  s.name             = "YFAdsJCAdapter"
  s.version      = "6.1.2.0"
  s.summary          = "YF JC adapter"
  s.description      = <<-DESC
    YF JC adapter xcframework.
  DESC
  s.homepage         = "https://github.com/com-yifan/ios-yf-otheradns-adapter"
  s.license          = { :type => "Proprietary", :text => "Proprietary" }
  s.author           = { "Yifan" => "dev@com-yifan.com" }
  s.source       = { :git => "https://github.com/com-yifan/ios-yf-otheradns-adapter.git", :tag => s.version.to_s }
  s.vendored_frameworks = "JC/YFAdsJCAdapter.xcframework"
  s.platform         = :ios, "11.0"
  s.static_framework = true
end
