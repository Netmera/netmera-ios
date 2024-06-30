//
//  NetmeraUserNotificationCategory.h
//
//
//  Created by Yavuz Nuzumlali on 03/11/15.
//
//

#import <UIKit/UIKit.h>
#import <NetmeraCore/NetmeraUserNotificationAction.h>

@interface NetmeraUserNotificationCategory : NetmeraBaseModel

@property (nonatomic, strong) NSMutableArray<NetmeraUserNotificationAction *> *actions;
@property (nonatomic, readonly) UNNotificationCategory *category;

@property (nonatomic, strong) NSString *identifier;

@end
