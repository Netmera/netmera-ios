//
//  NetmeraGeofenceEvent.h
//  
//
//  Created by Yavuz Nuzumlali on 30/12/15.
//
//

#import <NetmeraCore/NetmeraEvent.h>

typedef NS_ENUM(NSUInteger, NetmeraGeofenceEventType) {
  NetmeraGeofenceEventTypeEntered,
  NetmeraGeofenceEventTypeExited,
};

@interface NetmeraGeofenceEvent : NetmeraEvent

+ (instancetype)eventWithIdentifier:(NSString *)identifier type:(NetmeraGeofenceEventType)type;

@end
