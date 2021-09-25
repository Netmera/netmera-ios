<p align="center">
  <img src="https://www.netmera.com/wp-content/uploads/2019/10/netmera_logo-1.png"/>
</p>

## Netmera iOS SDK
[![CocoaPods](https://img.shields.io/cocoapods/v/Netmera.svg)](https://cocoapods.org/pods/netmera)[![Platform][PlatformBadge]][PlatformLink]

---

[Netmera](https://www.netmera.com) iOS SDK for Netmera mobile app engagement platform

Know & understand your app users, send them targeted push notification & popup campaigns, and analyze results with Netmera!\n\n  Netmera iOS SDK provides you set of tools to work seamlessly with Netmera User Engagement platform.\n\n  For details, please see https://netmera.readme.io/docs/ios-quickstart


## Installation

Netmera will be compatible with the lastest public release of Swift.

### Requirements

* iOS 9.0+
* Xcode 11.0+
 
Analytics is available through [CocoaPods](http://cocoapods.org) and [Carthage](https://github.com/Carthage/Carthage).

### CocoaPods

```ruby
pod "Netmera"
```
For NotificationServiceExtension

```ruby
pod "NetmeraNotificationServiceExtension"
```

For NotificationContentExtension

```ruby
pod "NetmeraNotificationContentExtension"
```


### Carthage
// TODO: Feature

### API
See Netmera's [iOS SDK API](https://developer.netmera.com/en/IOS/Quick-Start)

#### Usage
in Swift

```swift
import Netmera
```

```didFinishLaunchingWithOptions``` in AppDelegate

```swift
      Netmera.start()
      Netmera.setBaseURL("{BASE_URL}") // Optional
      Netmera.setAPIKey("{apiKey}")
      Netmera.setAppGroupName("{app.group.name}") // Optional if you want use notification content extension

      // Request notifcation authorization.
      Netmera.requestPushNotificationAuthorization(forTypes: [.alert, .sound, .badge])
      Netmera.setLogLevel(NetmeraLogLevel.debug)
```

in Objective-c

```objc
#import <Netmera/Netmera.h>
```

```didFinishLaunchingWithOptions``` in AppDelegate

```objc
    [Netmera setLogLevel:NetmeraLogLevelDebug];
    [Netmera start];
    [Netmera setAPIKey:@"{API_KEY}"];
    [Netmera setBaseURL:@"{BASE_URL}"]; // Optional
    [Netmera setAppGroupName:@"app.group.name"]; // Optional if you want use notification content extension
```


### Change Log
See Netmera's [iOS SDK Change Log](https://developer.netmera.com/en/IOS/sdk-versions).

#### Support
support@netmera.com

## License

Netmera is distributed under the Apache license. [See LICENSE](./LICENSE.md) for details.

[PlatformBadge]: https://cocoapod-badges.herokuapp.com/p/Netmera/badge.png
[PlatformLink]: https://cocoapods.org/pods/Netmera
