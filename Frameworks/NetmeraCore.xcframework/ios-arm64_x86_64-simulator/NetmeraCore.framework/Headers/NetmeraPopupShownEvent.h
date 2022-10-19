//
//  NetmeraPopupShownEvent.h
//  
//
//  Created by Adilcan on 8.06.2017.
//
//

#import <NetmeraCore/NetmeraEvent.h>

@class NetmeraPushObject;
@interface NetmeraPopupShownEvent : NetmeraEvent

+ (instancetype)eventWithPushObject:(NetmeraPushObject *)object;

@end
