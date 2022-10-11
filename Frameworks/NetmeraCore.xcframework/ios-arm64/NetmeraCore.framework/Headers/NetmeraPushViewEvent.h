//
//  NetmeraPushViewEvent.h
//  
//
//  Created by Adilcan on 10.01.2018.
//

#import <NetmeraCore/NetmeraEvent.h>

@class NetmeraPushObject;
@interface NetmeraPushViewEvent : NetmeraEvent

+ (instancetype)eventWithPushObject:(NetmeraPushObject *)object;

@end

