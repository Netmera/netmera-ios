//
//  NetmeraLocationUpdateEvent.h
//  
//
//  Created by Yavuz Nuzumlali on 30/12/15.
//
//

#import <NetmeraCore/NetmeraEvent.h>

@class CLLocation;
@interface NetmeraLocationUpdateEvent : NetmeraEvent

+ (instancetype)eventWithLocation:(CLLocation *)location;

@end
