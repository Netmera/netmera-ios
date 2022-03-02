//
//  NetmeraBatteryStateManager.h
//  AFNetworking
//
//  Created by inomera on 13.01.2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class NetmeraStateManager;
@class NetmeraAppConfig;
@protocol NetmeraEventSender;
@interface NetmeraBatteryStateManager : NSObject

- (instancetype)initWithEventSender:(NSObject<NetmeraEventSender> *)eventSender
                       stateManager:(NetmeraStateManager *)stateManager;
- (void)performOperationsForConfigUpdate:(BOOL)isConfigNew;


@end

NS_ASSUME_NONNULL_END
