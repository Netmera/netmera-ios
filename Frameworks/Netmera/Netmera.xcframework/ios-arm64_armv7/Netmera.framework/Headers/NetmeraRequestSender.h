//
//  NetmeraRequestSender.h
//  Pods
//
//  Created by Yavuz Nuzumlali on 31/08/15.
//
//

#import <Foundation/Foundation.h>
#import <Netmera/NetmeraNetworkRequestor.h>
#import <Netmera/NetmeraEventSender.h>
#import <Netmera/NetmeraPushAuthorizationSource.h>
#import <Netmera/NetmeraAdvertisingAuthorizationSource.h>
#import <NetmeraCore/NetmeraCore.h>

NS_ASSUME_NONNULL_BEGIN

@class NetmeraEvent;
@class NetmeraUser;
@class NetmeraBaseRequest;
@class NetmeraStateManager;
@class NetmeraInboxFilter;
@class NetmeraPushObject;
@class NetmeraInboxCategoryFilter;
@class NetmeraInboxCategoryObject;
@class NetmeraAppAllDeviceInfo;
@class NetmeraUserCategoryPreference;
@class NetmeraInboxCountFilter;

@interface NetmeraRequestSender : NSObject <NetmeraEventSender>

- (instancetype)initWithNetworkRequestor:(NSObject<NetmeraNetworkRequestor> *)requestor
                            stateManager:(NetmeraStateManager *)manager;

- (void)sendInitSessionRequest;
- (void)sendAppConfigRequest;
- (void)sendUpdateUserRequestWithUser:(NetmeraUser *)user;
- (void)sendUpdateDeviceRequestWithAdvertisingId:(NSString *)advertisingId;

#pragma mark - push registration
- (void)sendRegisterPushRequestWithDeviceToken:(NSString *)deviceToken;
- (void)sendEnablePushRequestWithSource:(NetmeraPushAuthorizationSource)source;
- (void)sendDisablePushRequestWithSource:(NetmeraPushAuthorizationSource)source;

#pragma mark - user inbox
- (void)sendFetchInboxRequestWithFilter:(NetmeraInboxFilter *)filter
                             completion:(NetmeraNetworkManagerResponseBlock)block;

- (void)sendFetchInboxCountRequestWithFilter:(NetmeraInboxCountFilter *)filter
                                  completion:(NetmeraNetworkManagerResponseBlock)block;

- (void)sendSetInboxStatusRequestWithPushObjects:(NSArray<NetmeraPushObject *> *)objects
                                          status:(NSUInteger)status
                                      completion:(NetmeraNetworkManagerResponseBlock)block;

- (void)sendSetInboxStatusRequestWithCategories:(NSArray<NSString *> *)categories
                                         status:(NSUInteger)status
                                     completion:(NetmeraNetworkManagerResponseBlock)block;

- (void)sendSetInboxStatusRequestForAllObjectWithStatus:(NSUInteger)status
                                             completion:(NetmeraNetworkManagerResponseBlock)block;
    
- (void)sendFetchInboxCategoryRequestWithFilter:(NetmeraInboxCategoryFilter *)filter
                                     completion:(NetmeraNetworkManagerResponseBlock)block;

#pragma mark - add test device
- (void)sendAddTestDeviceRequestWithParams:(NSString *)params
                                completion:(NetmeraNetworkManagerResponseBlock)block;


- (void)sendDeviceInfoRequestWithDeviceInfo:(NetmeraAppAllDeviceInfo *)deviceInfo
                                 completion:(NetmeraNetworkManagerResponseBlock)block;

- (void)sendEnableAdIdRequest:(NetmeraAdvertisingAuthorizationSource)source;
- (void)sendDisableAdIdRequest:(NetmeraAdvertisingAuthorizationSource)source;


#pragma mark - user category
- (void)sendSetUserCategoryPreferenceWithCategoryId:(int)categoryId categoryEnabled:(BOOL)categoryEnabled
                               completion:(NetmeraNetworkManagerResponseBlock)block;

- (void)sendGetUserCategoryWithCompletion:(NetmeraNetworkManagerResponseBlock)block;
@end

NS_ASSUME_NONNULL_END
