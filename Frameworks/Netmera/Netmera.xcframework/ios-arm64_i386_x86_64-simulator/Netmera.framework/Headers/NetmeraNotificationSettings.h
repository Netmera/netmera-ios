//
//  NetmeraNotificationSettings.h
//  Pods
//
//  Created by inomera on 9.06.2020.
//

#import <UserNotifications/UserNotifications.h>
#import <Netmera/Netmera.h>

@interface NetmeraNotificationSettings : NetmeraBaseModel

@property (nonatomic, assign) int authorizationStatus;
@property (nonatomic, assign) int lockScreenSetting;
@property (nonatomic, assign) int badgeSetting;
@property (nonatomic, assign) int soundSetting;
@property (nonatomic, assign) int alertSetting;
@property (nonatomic, assign) int notificationCenterSetting;
@property (nonatomic, assign) int alertStyle;
@property (nonatomic, assign) int carPlaySetting;

- (instancetype)initWithUserNotificationSettings:(UIUserNotificationSettings *)settings;
- (instancetype)initWithNotificationSettings:(UNNotificationSettings *)settings API_AVAILABLE(ios(10.0));
@end

