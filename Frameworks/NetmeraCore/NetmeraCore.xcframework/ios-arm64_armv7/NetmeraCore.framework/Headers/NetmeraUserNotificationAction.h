//
//  NetmeraUserNotificationAction.h
//
//
//  Created by Yavuz Nuzumlali on 22/10/15.
//
//

#import <UIKit/UIKit.h>
#import <NetmeraCore/NetmeraBaseModel.h>

@interface NetmeraUserNotificationAction : NetmeraBaseModel

@property (nonatomic, strong) NSDictionary *actionDictionary;
@property (nonatomic, strong) NSDictionary *customDictionary;

@property (nonatomic, copy, readonly) NSString *identifier;

@property (nonatomic, strong) UIMutableUserNotificationAction *interactiveAction;

@end
