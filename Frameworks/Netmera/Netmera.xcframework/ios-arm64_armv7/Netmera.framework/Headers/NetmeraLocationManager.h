//
//  NetmeraLocationManager.h
//
//
//  Created by Yavuz Nuzumlali on 30/12/15.
//
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@class NetmeraStateManager;
@class NetmeraAppConfig;
@protocol NetmeraEventSender;
@interface NetmeraLocationManager : NSObject<CLLocationManagerDelegate>
    
- (instancetype)initWithEventSender:(NSObject<NetmeraEventSender> *)eventSender
                       stateManager:(NetmeraStateManager *)stateManager;
    
- (void)requestLocationAuthorizationIfNeeded;
- (void)setNetmeraMaxActiveRegions:(NSInteger)netmeraMaxActiveRegions;
- (void)performOperationsForConfigUpdate:(BOOL)isConfigNew;

@end
