<p align="center">
  <img src="https://netmera.com/wp-content/uploads/2022/12/netmera_logo-1-1-1.png"/>
</p>

## Netmera iOS SDK
[![Platform](https://img.shields.io/badge/platform-iOS-blue.svg?style=flat)](https://cocoapods.org/pods/Netmera)
[![Swift Package Manager compatible](https://img.shields.io/badge/Swift%20Package%20Manager-compatible-brightgreen.svg?style=flat)](https://github.com/apple/swift-package-manager)
[![License](https://img.shields.io/badge/license-apache%202.0-blue.svg?style=flat)](https://cocoapods.org/pods/Netmera)
---

[Netmera](https://www.netmera.com) iOS SDK for Netmera mobile app engagement platform

Know & understand your app users, send them targeted push notification & popup campaigns, and analyze results with Netmera! Netmera iOS SDK provides you set of tools to work seamlessly with Netmera User Engagement platform. For details, please see https://developer.netmera.com


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
pod "Netmera/NotificationServiceExtension"
```

For NotificationContentExtension

```ruby
pod "Netmera/NotificationContentExtension"
```

For Without AdId Support

```ruby
pod 'Netmera/NetmeraWithoutAdId'
```

### Swift Package Manager(SPM)

In Xcode, select File > Add Packages..

Enter the package URL for this repository https://github.com/Netmera/netmera-ios.git.

### Carthage
// TODO: Feature

### API
See Netmera's [iOS SDK API](https://developer.netmera.com/en/IOS/Quick-Start)

#### Usage

##### Start

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

#### Start/Stop Data tracking
It will stop/start all events and user update request.

Stop
```objc
  [Netmera stopDataTransfer];
```
Start
```objc
  [Netmera startDataTransfer];
```

#### User Category Preferences
Fetch category preferences of the user. It will return category preference list. Each category preference data includes id, name and enable status.
```swift
    Netmera.getUserCategoryPreferenceList { categories, error in
      if let categories = categories {
        print(categories)
      } else if let error = error {
        print(error)
      }
    }
```

Manage preference of category. To switch preference status of category with given id. 
```swift
    Netmera.setUserCategoryPreferenceWithCategoryId("{categoryId}", categoryEnabled: {true/false}) { error in
        ...
    }
```

### Change Log
See Netmera's [iOS SDK Change Log](https://developer.netmera.com/en/IOS/sdk-versions).

#### Support
support@netmera.com

## License

Netmera is distributed under the Apache license. [See LICENSE](./LICENSE.md) for details.
