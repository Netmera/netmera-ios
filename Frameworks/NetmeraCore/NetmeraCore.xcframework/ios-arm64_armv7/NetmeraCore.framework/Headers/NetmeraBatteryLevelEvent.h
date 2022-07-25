//
//  NetmeraBatteryLevelEvent.h
//  AFNetworking
//
//  Created by inomera on 16.04.2019.
//

#import <NetmeraCore/NetmeraEvent.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetmeraBatteryLevelEvent : NetmeraEvent

+ (instancetype)eventWithBatteryLevel:(int)batteryLevel;

@end

NS_ASSUME_NONNULL_END
