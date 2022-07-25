//
//  NetmeraUIActionEvent.h
//  Pods
//
//  Created by inomera on 11.03.2020.
//

#import <NetmeraCore/NetmeraEvent.h>
#import <NetmeraCore/NetmeraUIActionType.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetmeraUIActionEvent : NetmeraEvent

@property(nonatomic, copy, readonly) NSString *itemId;
@property(nonatomic, copy, readonly) NSString *value;
@property(nonatomic, assign, readonly) NetmeraUIActionType actionType;
@property(nonatomic, copy, readonly) NSString *page;

+ (instancetype)eventWithItemId:(NSString *)itemId value:(NSString *)value actionType:(NetmeraUIActionType)type page:(NSString *)page;

@end

NS_ASSUME_NONNULL_END
