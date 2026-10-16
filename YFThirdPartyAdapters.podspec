Pod::Spec.new do |s|
  s.name             = 'YFThirdPartyAdapters'
  s.version          = '6.1.6.0'
  s.summary          = 'YF third-party advertising network adapters'
  s.description      = <<-DESC
    A collection of YF third-party advertising network adapters. Install the
    root pod for all adapters, or select an individual adapter subspec.
  DESC
  s.homepage         = 'https://github.com/com-yifan/ios-yf-otheradns-adapter'
  s.license          = { :type => 'Proprietary', :text => 'Proprietary' }
  s.author           = { 'Yifan' => 'dev@com-yifan.com' }
  s.source           = {
    :git => 'https://github.com/com-yifan/ios-yf-otheradns-adapter.git',
    :tag => s.version.to_s
  }

  s.platform         = :ios, '11.0'
  s.static_framework = true

  s.default_subspecs = 'GE', 'IE', 'IN', 'JC', 'KF', 'KY', 'NAL', 'NC', 'UW', 'XU', 'ZD'

  {
    'GE' => 'YFAdsGEAdapter',
    'IE' => 'YFAdsIEAdapter',
    'IN' => 'YFAdsINAdapter',
    'JC' => 'YFAdsJCAdapter',
    'KF' => 'YFAdsKFAdapter',
    'KY' => 'YFAdsKYAdapter',
    'NAL' => 'YFAdsNALAdapter',
    'NC' => 'YFAdsNCAdapter',
    'UW' => 'YFAdsUWAdapter',
    'XU' => 'YFAdsXUAdapter',
    'ZD' => 'YFAdsZDAdapter'
  }.each do |subspec_name, framework_name|
    s.subspec subspec_name do |ss|
      ss.vendored_frameworks = "#{subspec_name}/#{framework_name}.xcframework"
    end
  end
end
