//
//  NetmeraNotificationSettingsEvent.h
//  Pods
//
//  Created by inomera on 3.06.2020.
//

#import <Netmera/NetmeraNotificationSettings.h>
#import <NetmeraCore/NetmeraCore.h>

@interface NetmeraNotificationSettingsEvent : NetmeraEvent

+ (instancetype)eventWithNotificationSettings:(NetmeraNotificationSettings *)settings;


@end
