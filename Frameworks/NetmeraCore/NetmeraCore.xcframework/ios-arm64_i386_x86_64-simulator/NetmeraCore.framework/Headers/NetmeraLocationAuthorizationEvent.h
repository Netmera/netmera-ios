//
//  NetmeraLocationAuthorizationEvent.h
//  Pods
//
//  Created by inomera on 3.06.2020.
//

#import <NetmeraCore/NetmeraEvent.h>

@interface NetmeraLocationAuthorizationEvent : NetmeraEvent

+ (instancetype)eventWithAuthorizationStatus:(int)authorizationStatus;

@end
