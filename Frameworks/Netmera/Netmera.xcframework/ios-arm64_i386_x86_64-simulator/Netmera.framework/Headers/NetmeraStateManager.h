//
//  NetmeraStateManager.h
//
//
//  Created by Yavuz Nuzumlali on 09/09/15.
//
//

#import <Foundation/Foundation.h>
#import <Netmera/NetmeraPushReceivingStatus.h>
#import <Netmera/NetmeraAuthorizationAdIdStatus.h>
#import <Netmera/NetmeraKeyValueStore.h>

@class NetmeraAppDeviceInfo;
@class NetmeraAppConfig;
@class NetmeraIdentifiers;
@class NetmeraPushObject;
@class NetmeraApplication;
@class NetmeraNotificationSettings;

@interface NetmeraStateManager : NSObject

@property (nonatomic, readonly, copy) NetmeraIdentifiers *identifiers;
@property (nonatomic, readonly, copy) NSString *changedAdvertisingId;
@property (nonatomic, copy) NetmeraAppConfig *appConfig;
@property (nonatomic, strong) NetmeraPushObject *storedPopup;
@property (nonatomic, strong) NetmeraPushObject *storedInAppMessage;

@property (nonatomic, strong, readonly) NSNumber *appConfigVersion;
@property (nonatomic, strong, readonly) NetmeraAppDeviceInfo *changedAppDeviceInfoValues;
@property (nonatomic, copy) NSString *deviceToken;
@property (nonatomic, assign) BOOL failedToMonitorRegions;
@property (nonatomic, copy) NSString *lastLocationString;
@property (nonatomic, assign) BOOL failedToAuthorizeLocation;
@property (nonatomic, assign) NetmeraPushReceivingStatus pushReceivingStatusForSystem;
@property (nonatomic, assign) NetmeraPushReceivingStatus pushReceivingStatusForApp;
@property (nonatomic, strong) NetmeraNotificationSettings *pushSettings;
@property (nonatomic, assign) int locationAuthorizationStatus;
@property (nonatomic, strong) NSString *storedUserAgent;
@property (nonatomic, copy) NSString *externalId;
@property (nonatomic, assign) BOOL hasAlreadyLaunched;

@property (nonatomic, assign) NetmeraAuthorizationAdIdStatus authorizationAdIdStatusForSystem;
@property (nonatomic, assign) NetmeraAuthorizationAdIdStatus authorizationAdIdStatusForApp;

- (void)setUserId:(NSString *)userId;
- (void)setPushId:(NSString *)pushId setInstanceId:(NSString *)pushInstanceId;

- (void)setFlowId:(NSString *)flowId;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithStore:(NetmeraKeyValueStore *)store
                  application:(NetmeraApplication *)application;

- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;

@property (nonatomic, strong, readonly) NSString *appKey;

@end
