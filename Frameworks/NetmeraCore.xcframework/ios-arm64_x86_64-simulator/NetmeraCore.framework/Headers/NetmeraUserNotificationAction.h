//
//  NetmeraUserNotificationAction.h
//
//
//  Created by Yavuz Nuzumlali on 22/10/15.
//
//

#import <UIKit/UIKit.h>
#import <NetmeraCore/NetmeraBaseModel.h>
#import <UserNotifications/UserNotifications.h>

@interface NetmeraUserNotificationAction : NetmeraBaseModel

@property (nonatomic, strong) NSDictionary *actionDictionary;
@property (nonatomic, strong) NSDictionary *customDictionary;

@property (nonatomic, copy, readonly) NSString *identifier;
@property (nonatomic, copy, readonly) NSString *title;
@property (nonatomic, readonly) NSUInteger activationMode;
@property (nonatomic, readonly) BOOL destructive;
@property (nonatomic, readonly) BOOL authenticationRequired;
@property (nonatomic, readonly) NSUInteger behaviour;

@property (nonatomic, readonly) UNNotificationAction *interactiveAction;

@end
