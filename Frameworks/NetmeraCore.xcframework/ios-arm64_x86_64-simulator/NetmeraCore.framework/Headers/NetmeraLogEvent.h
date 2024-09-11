//
//  NetmeraLogEvent.h
//
//  Created by inomera on 28.05.2020.
//

#import <NetmeraCore/NetmeraEvent.h>

extern NSString * const kNetmeraLogEventKeychain;
extern NSString * const kNetmeraLogEventPushAction;
extern NSString * const kNetmeraLogEventDatabase;
extern NSString * const kNetmeraLogEventCore;
extern NSString * const kNetmeraLogEventLocation;
extern NSString * const kNetmeraLogEventGeofence;
extern NSString * const kNetmeraLogEventDeeplink;
extern NSString * const kNetmeraLogEventNotification;
extern NSString * const kNetmeraLogEventTemplate;
extern NSString * const kNetmeraLogEventToken;
extern NSString * const kNetmeraLogEventPopup;

@interface NetmeraLogEvent : NetmeraEvent

+ (instancetype)eventWithLog:(NSString *)log tag:(NSString *)tag;

@end
