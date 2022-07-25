//
//  NetmeraPushOpenedEvent.h
//
//
//  Created by Yavuz Nuzumlali on 26/10/15.
//
//

#import <NetmeraCore/NetmeraEvent.h>

@class NetmeraPushObject;
@interface NetmeraPushOpenedEvent : NetmeraEvent

+ (instancetype)eventWithPushId:(NSString *)pushId pushInstanceId:(NSString *)pushInstanceId interactiveActionId:(NSString *)interactiveActionIdentifier;
+ (instancetype)eventWithPushObject:(NetmeraPushObject *)object;

@end
