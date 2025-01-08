#
# Be sure to run `pod lib lint ${POD_NAME}.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'Netmera'
  s.version          = '3.24.8'
  s.summary          = 'iOS SDK for Netmera mobile app engagement platform'

  s.description      = <<-DESC

  Know & understand your app users, send them targeted push notification & popup campaigns, and analyze results with Netmera!

  Netmera iOS SDK provides you set of tools to work seamlessly with Netmera User Engagement platform.

  For details, please see https://netmera.readme.io/docs/ios-quickstart
  DESC

  s.homepage         = "https://www.netmera.com"
  s.license      = { :type => 'Apache License, Version 2.0', :text => <<-LICENSE
    Copyright 2012 Inomera Research

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
    LICENSE
  }
  s.author           = { 'netmera' => 'sdk@netmera.com' }
  s.source           = { :git => "https://github.com/Netmera/netmera-ios.git", :tag => s.version.to_s }
  s.social_media_url = 'https://twitter.com/netmera'

  s.ios.deployment_target = '10.0'

  s.frameworks = 'Foundation', 'UIKit', 'CoreGraphics', 'SystemConfiguration', 'CoreServices', 'CoreTelephony', 'CoreLocation', 'WebKit', 'QuartzCore', 'OpenGLES'

  s.weak_frameworks = 'UserNotifications', 'StoreKit', 'WatchConnectivity'
  s.libraries   = 'sqlite3'
  s.requires_arc = true

  s.default_subspec = 'NetmeraWithAdId'

  s.subspec 'NetmeraWithAdId' do |ss|
    ss.dependency 'Netmera/Application'
    ss.dependency 'Netmera/AdIdSupport'
  end

  s.subspec 'NetmeraWithoutAdId' do |ss|
    ss.dependency 'Netmera/Application'
  end

  s.subspec 'Application' do |ss|
    ss.vendored_frameworks = 'Frameworks/Netmera.xcframework'
    ss.dependency 'AFNetworking/NSURLSession', '>= 3.1.0'
    ss.dependency 'NetmeraCore', s.version.to_s
    ss.dependency 'MMWormhole', '~> 2.0.0'
    ss.dependency 'FMDB'
    ss.dependency 'UICKeyChainStore', '~>2.0'
  end

  s.subspec 'AdIdSupport' do |ss|
    ss.vendored_frameworks = 'Frameworks/NetmeraAdId.xcframework'
    ss.weak_frameworks = 'AppTrackingTransparency'
  end

  s.subspec 'NotificationContentExtension' do |ss|
    ss.dependency 'NetmeraCore', s.version.to_s
    ss.dependency 'MMWormhole', '~> 2.0.0'
    ss.vendored_frameworks = 'Frameworks/NetmeraNotificationContentExtension.xcframework'
  end

  s.subspec 'NotificationServiceExtension' do |ss|
    ss.dependency 'NetmeraCore', s.version.to_s
    ss.vendored_frameworks = 'Frameworks/NetmeraNotificationServiceExtension.xcframework'
  end

end


