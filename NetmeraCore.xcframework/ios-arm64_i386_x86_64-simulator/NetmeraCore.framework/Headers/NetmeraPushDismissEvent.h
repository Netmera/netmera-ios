//
//  NetmeraPushDismissEvent.h
//  
//
//  Created by Adilcan on 8.06.2017.
//
//

#import <NetmeraCore/NetmeraEvent.h>

@class NetmeraPushObject;
@interface NetmeraPushDismissEvent : NetmeraEvent

+ (instancetype)eventWithPushObject:(NetmeraPushObject *)object;

@end
