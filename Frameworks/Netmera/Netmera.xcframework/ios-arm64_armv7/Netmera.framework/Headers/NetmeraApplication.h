//
//  NetmeraApplication.h
//  
//
//  Created by Yavuz Nuzumlali on 19/02/16.
//
//

#import <Foundation/Foundation.h>
#import <UserNotifications/UserNotifications.h>
#import <UIKit/UIKit.h>
#import <Netmera/NetmeraNotificationSettings.h>

@protocol NetmeraApplicationDelegate <NSObject>

- (void)userDidUpdateNotificationAuthorizationStatus;

@end

@class NetmeraUserNotificationCategory;
@interface NetmeraApplication : NSObject

- (instancetype)initWithApplication:(UIApplication *)application notificationCenter:(UNUserNotificationCenter *)center;

- (BOOL)openURL:(NSURL*)url;
- (void)requestDeviceToken;
- (void)requestNotificationAuthorizationForTypes:(UIUserNotificationType)types
                                      categories:(NSSet<UIUserNotificationCategory *> *)categories;
- (void)requestNotificationAuthorizationForCategories:(NSSet<UIUserNotificationCategory *> *)categories;

@property (nonatomic, readonly, assign) UIUserNotificationType authorizedNotificationTypes;
@property (nonatomic, readonly, assign) BOOL isUserAuthorizedNotifications;
@property (nonatomic, assign) NSInteger badgeCount;
@property (nonatomic, readonly, strong) NetmeraNotificationSettings *pushSettings;

@property (nonatomic, readonly, assign) BOOL isActive;
@property (nonatomic, readonly, assign) BOOL isInactive;
@property (nonatomic, readonly, assign) BOOL isBackground;

- (void)beginBackgroundTask;
- (void)endBackgroundTask;

@property (nonatomic, assign) NSObject<NetmeraApplicationDelegate> *delegate;

@end
