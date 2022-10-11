//
//  NetmeraPushReceivedEvent.h
//
//
//  Created by Yavuz Nuzumlali on 26/10/15.
//
//

#import <NetmeraCore/NetmeraEvent.h>

@class NetmeraPushObject;
@interface NetmeraPushReceivedEvent : NetmeraEvent

+ (instancetype)eventWithPushObject:(NetmeraPushObject *)object;

@end
