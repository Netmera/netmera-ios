//
//  NetmeraAppConfig.h
//
//
//  Created by Yavuz Nuzumlali on 08/09/15.
//
//

#import <NetmeraCore/NetmeraBaseModel.h>
#import <NetmeraCore/NetmeraUIAction.h>
#import <NetmeraCore/NetmeraEventPermission.h>

@class NetmeraUserNotificationCategory;
@interface NetmeraAppConfig : NetmeraBaseModel

@property (nonatomic, strong) NSNumber *version;
@property (nonatomic, assign) BOOL shouldManageBadge;
@property (nonatomic, assign) BOOL shouldSendLocationData;
@property (nonatomic, assign) BOOL shouldSendAdvertisingId;
@property (nonatomic, assign) NSTimeInterval sessionExpirationInterval;
@property (nonatomic, assign) NSTimeInterval cacheExpirationInterval;
@property (nonatomic, copy) NSString *baseURL;
@property (nonatomic, strong) NSArray<NSDictionary*> *geofences;
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> *richPushTemplates;
@property (nonatomic, strong) NSArray<NetmeraUserNotificationCategory *> *interactiveCategories;

@property (nonatomic, assign) BOOL shouldSendBatteryLevel;
@property (nonatomic, assign) int batteryLevelLimit;
@property (nonatomic, assign) BOOL shouldSendScreenEvent;
@property (nonatomic, assign) BOOL shouldSendInputFlow;
@property (nonatomic, assign) BOOL shouldSendInAppPurchaseEvent;
@property (nonatomic, strong) NSDictionary<NSString *, NSArray<NSDictionary *>*> *includeUIActions;
@property (nonatomic, assign) BOOL shouldTrackException;
@property (nonatomic, assign) BOOL isTestUser;
@property (nonatomic, assign) NSTimeInterval eventPostTimeInterval;
@property (nonatomic, strong) NSString *appKey;
@property (nonatomic, assign) NetmeraEventPermission eventPermission;
@property (nonatomic, assign) BOOL offlineEventPermission;

@end

