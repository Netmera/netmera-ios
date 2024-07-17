//
//  NotificationHelper.h
//  NetmeraCore
//
//  Created by Netmera on 4.06.2024.
//

#import <UserNotifications/UserNotifications.h>
#import <NetmeraCore/NetmeraUserNotificationCategory.h>

@interface NotificationHelper : NSObject

+ (NSSet<UNNotificationCategory *> *)setForCategories:(NSArray<NetmeraUserNotificationCategory *> *)categories;
+ (void)requestNotificationAuthorizationForCategories:(NSSet<UNNotificationCategory *> *)categories withNotificationCenter:(UNUserNotificationCenter *)notificationCenter completion:(void (^)(BOOL success))completion;

@end
