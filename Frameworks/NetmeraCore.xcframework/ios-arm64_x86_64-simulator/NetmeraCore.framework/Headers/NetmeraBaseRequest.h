//
//  BaseRequestModel.h
//  Pods
//
//  Created by Yavuz Nuzumlali on 04/08/15.
//
//

#import <Foundation/Foundation.h>
#import <NetmeraCore/NetmeraRequestSpec.h>
#import <NetmeraCore/NetmeraBaseModel.h>
#import <NetmeraCore/NetmeraIdentifiers.h>
#import <NetmeraCore/NetmeraPersistenceModel.h>

typedef NS_ENUM(NSUInteger, NetmeraRequestPath) {
  NetmeraRequestPathNotDefined = 0,
  NetmeraRequestPathInitSession,
  NetmeraRequestPathAppConfig,
  NetmeraRequestPathFireEvents,
  NetmeraRequestPathRegisterPush,
  NetmeraRequestPathEnablePush,
  NetmeraRequestPathDisablePush,
  NetmeraRequestPathIdentifyUser,
  NetmeraRequestPathUpdateUser,
  NetmeraRequestPathUpdateDevice,
  NetmeraRequestPathFetchInbox,
  NetmeraRequestPathFetchInboxCategory,
  NetmeraRequestPathFetchInboxCount,
  NetmeraRequestPathSetInboxStatus,
  NetmeraRequestPathAddTestDevice,
  NetmeraRequestPathDeviceInfo,
  NetmeraRequestPathEnableAdId,
  NetmeraRequestPathDisableAdId,
  NetmeraRequestPathFetchCategoryOptIn,
  NetmeraRequestPathSetCategoryPreference,
};

NSString *NetmeraRequestPathStringForType(NetmeraRequestPath type);

typedef NS_ENUM(NSUInteger, NetmeraHTTPMethod) {
  NetmeraHTTPMethodPOST,
  NetmeraHTTPMethodGET,
  NetmeraHTTPMethodPUT,
  NetmeraHTTPMethodDELETE
};

NSString *NetmeraHTTPMethodStringForType(NetmeraHTTPMethod type);

@interface NetmeraBaseRequest : NetmeraBaseModel <NetmeraPersistenceModel>

/// This method is triggered after basic initialization done.
/// This is where subclasses should set their request specific properties
- (void)setUp __attribute((objc_requires_super));

@property (nonatomic, assign) NetmeraHTTPMethod HTTPMethod;
@property (nonatomic, assign) NetmeraRequestPath path;
@property (nonatomic, assign) NSOperationQueuePriority queuePriority;
@property (nonatomic, strong) Class responseClass;

@property (nonatomic, strong) NetmeraIdentifiers *identifiers;

@property (nonatomic, strong, readonly) NetmeraRequestSpec *requestSpec;

-(NetmeraRequestPriority) priority;

@end
