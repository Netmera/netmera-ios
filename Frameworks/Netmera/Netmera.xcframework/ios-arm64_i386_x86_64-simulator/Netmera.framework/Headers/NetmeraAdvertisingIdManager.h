//
//  NetmeraAdvertisingIdManager.h
//  Netmera.default-Core
//
//  Created by Netmera on 24.04.2021.
//

#import <Foundation/Foundation.h>
#import <Netmera/NetmeraAdvertisingAuthorizationSource.h>
#import <Netmera/NetmeraAuthorizationAdIdStatus.h>

@class NetmeraStateManager;
@class NetmeraAppConfig;
@class NetmeraRequestSender;
@interface NetmeraAdvertisingIdManager : NSObject

- (instancetype)initWithRequestSender:(NetmeraRequestSender *)sender
                         stateManager:(NetmeraStateManager *)stateManager;

- (void)requestAdvertisingAuthorizationIfNeeded;
- (void)performOperationsForConfigUpdate:(BOOL)isConfigNew;
- (void)applicationWillEnterForeground;

- (void)setAuthorizationAdIdStatus:(NetmeraAuthorizationAdIdStatus)status forSource:(NetmeraAdvertisingAuthorizationSource)source;

- (NetmeraAuthorizationAdIdStatus)authorizationAdIdStatusForSource:(NetmeraAdvertisingAuthorizationSource)source;

@end
