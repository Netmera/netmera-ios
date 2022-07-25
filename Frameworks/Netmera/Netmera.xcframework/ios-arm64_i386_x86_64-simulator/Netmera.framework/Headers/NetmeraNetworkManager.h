//
//  NetmeraNetworkManager.h
//  Pods
//
//  Created by Yavuz Nuzumlali on 04/08/15.
//
//

#import <Foundation/Foundation.h>
#import "NetmeraNetworkAdapter.h"
#import "NetmeraPersistenceAdapter.h"
#import <Netmera/NetmeraNetworkRequestor.h>
#import <NetmeraCore/NetmeraBaseResponseModel.h>

extern NSString *const NetmeraAPIKeyHTTPHeaderKey;
extern NSString *const kNetmeraSDKVersionStringKey;

@protocol NetmeraNetworkManagerDelegate <NSObject>

- (void)request:(NetmeraBaseRequest *)request
  didReceiveResponse:(NetmeraBaseResponseModel *)model
           withError:(NSError *)error;

@end

@class NetmeraStateManager;
@class NetmeraApplication;
/**
 *  This class encapsulates all network related operations. It gets a model object, creates corresponding request object
 *	using RequestGenerator, then sends the request using NetworkHandler, and returns a callback object that includes an
 *	error parameter and a response parameter.
 */
@interface NetmeraNetworkManager : NSObject <NetmeraNetworkRequestor>

@property (nonatomic, assign) NSObject<NetmeraNetworkManagerDelegate> *delegate;
@property (nonatomic, copy) NSString *APIKey;
@property (nonatomic, copy) NSString *baseURL;
@property (nonatomic, copy) NSString *framework;
@property (nonatomic, copy) NSString *frameworkVersion;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithPersistenceAdapter:(NSObject<NetmeraPersistenceAdapter> *)persistenceAdapter
                            networkAdapter:(NSObject<NetmeraNetworkAdapter> *)networkAdapter
                              stateManager:(NetmeraStateManager *)stateManager
                               application:(NetmeraApplication *)application NS_DESIGNATED_INITIALIZER;

/**
 *  Calling this method starts a timer which is awaken for every given interval time. Timer will trigger bulk processing
 *of the stale requests.
 *
 *  @param interval Timer's wake period. Default is 30 secs.
 */
- (void)startHulkRequestProcessingWithInterval:(NSTimeInterval)interval;
- (void)stopHulkRequestProcessing;
- (void)performOperationsForConfigUpdate:(BOOL)isConfigNew;
@end
