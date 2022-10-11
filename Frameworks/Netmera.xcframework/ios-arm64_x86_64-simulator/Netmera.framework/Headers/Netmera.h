// Netmera.h
//
// Created by Yavuz Nuzumlali
// Copyright (c) 2015 Netmera
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

#import <NetmeraCore/NetmeraCore.h>

#import <Netmera/NetmeraPushDelegate.h>
#import <Netmera/NetmeraInbox.h>
#import <Netmera/NetmeraInboxCategory.h>

#import <Netmera/NetmeraEncryptionProtocol.h>
#import <Netmera/NetmeraScreenTrackable.h>

#if !defined(__has_include)
#error "Netmera.h won't import anything if your compiler doesn't support __has_include. Import the NetmeraAdId.h individually."
#else
#if __has_include(<NetmeraAdId/NetmeraAdId.h>)
#import <NetmeraAdId/NetmeraAdId.h>
#endif
#endif

//! Project version number for Netmera.
FOUNDATION_EXPORT double NetmeraVersionNumber;

//! Project version string for Netmera.
FOUNDATION_EXPORT const unsigned char NetmeraVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <Netmera/PublicHeader.h>


NS_ASSUME_NONNULL_BEGIN

/**
 Netmera is the main class to be used for configuring the SDK and interacting with Netmera servers.
 */
@interface Netmera : NSObject

/**
 @brief Initialize the Netmera instance.

 Netmera does not start operating, it even does not exist in memory, unless this method is called.
 Any Netmera method called before this method is simply ignored.

 @warning In order for Netmera to operate correctly, this method has to be called before
 -application:didFinishLaunchingWithOptions: method returns.
 */
+ (void)start;

/**
 @brief Set given Netmera SDK API key.

 Calling this method with a valid API key will effectively start communication with Netmera servers.
 Netmera will store any operation until it has an API key.

 Setting API key to nil or empty string will stop all network operations, and all pending operations will be stored
 until a valid API key is set again.

 @param APIKey Application specific API key gathered from Netmera panel.
 */
+ (void)setAPIKey:(nullable NSString *)APIKey;

+(NSString *)getAPIKey;

/**
 @brief Changes base API URL to given URL string.

 The only use case for this method is when a custom Netmera domain is defined to your application.

 @param URLString Custom domain string.
 */
+ (void)setBaseURL:(NSString *)URLString; // TODO: Should URL include scheme??

/**
 @brief Set log level for SDK.

 Default log level is @c NetmeraLogLevelError.

 @param level One of @c NetmeraLogLevel enum values.
 */
+ (void)setLogLevel:(NetmeraLogLevel)level;

+ (void)setFramework:(NSString *)framework;

+ (void)setFrameworkVersion:(NSString*)frameworkVersion;

@end

#pragma mark - Push Notification

@interface Netmera (PushNotification)

/**
 @brief Set delegate object to be notified about events related to push notification handling.

 @param delegate Object which will be notified about events related to push notification handling. This object must
 conform to @c NetmeraPushDelegate protocol.
 */
+ (void)setPushDelegate:(NSObject<NetmeraPushDelegate> *)delegate;

/**
 @brief Load contents of the web view action of recent push notification in given web view.

 When this method is called, Netmera will immediately load the contents of the web view action inside given
 @c WKWebView object.

 @warning If you need to be notified about WKWebViewDelegate methods, you @b must set your delegate object onto given
 web view object @b before calling @c -loadWebViewContentInWebView: method.

 @warning This method @b must be called inside -handleWebViewPresentation delegate method.

 @param webView A WKWebView instance upon which related HTML content will be loaded.
 */
+ (void)loadWebViewContentInWebView:(WKWebView *)webView;

/**
 @brief Get the most recent push object

 You can access to details of the received push notification inside UIApplicationDelegate methods related to
 push notifications using this method.

 @return NetmeraPushObject Object containing information about the most recent push notification
 */
+ (nullable NetmeraPushObject *)recentPushObject;

+ (void)handlePushObject:(NetmeraPushObject *)pushObject;

+ (void)handleInteractiveAction:(NetmeraUserNotificationAction *)action forPushObject:(NetmeraPushObject *)pushObject;

/**
 @brief Request push notification authorization from user for given notification types.

 Calling this method will trigger OS to present push notification permission dialog to user.

 @note Instead of presenting the permission dialog immediately while app is opening, you should call this method
 after you explained why your app needs push notifications and what's the user's gain after giving permission.
 This policy can increase your applications's opt-in rate significantly.

 @param types Notification types which can be used while notifying user via push notifications
 */
+ (void)requestPushNotificationAuthorizationForTypes:(UIUserNotificationType)types;

+ (void)setAppGroupName:(NSString*)appGroupName;

+ (void)setEnabledReceivingPushNotifications:(BOOL)enabled;

+ (BOOL)isEnabledReceivingPushNotifications;

+ (void)setEnabledPopupPresentation:(BOOL)enabled;

+ (void)setEnabledInAppMessagePresentation:(BOOL)enabled;

@end

#pragma mark - Location Tracking

@interface Netmera (Location)

/**
 @brief Request appropriate location authorization from user.

 Calling this method will trigger OS to present location permission dialog to user. Authorization
 type to be requested will be determined automatically by the SDK using the following procedure:

 - If location is globally disabled/restricted in Settings, or user has explicitly denied authorization for
 the application:

 - SDK will try to redirect user to Settings by triggering OS prompt. This will happen only once.

 - If location authorization is not determined by user before:

 - If @c NSLocationAlwaysUsageDescription key is set in Info.plist, always authorization will be requested.

 - Else if @c NSLocationWhenInUseUsageDescription key is set in Info.plist, when in user authorization will be
 requested.

 - If location authorization type is when in use authorization:

 - If @c NSLocationAlwaysUsageDescription key is set in Info.plist, always authorization will be requested.
 */
+ (void)requestLocationAuthorization;


/**
 @brief Request max active geofence region from user.

 - If user sets max active regions' number greater than 20 or smaller than 0, it will be set as the default which is 20.

 */

+ (void)setNetmeraMaxActiveRegions:(NSInteger)maxActiveRegions;

@end

#pragma mark - User Inbox
@interface Netmera (Inbox)

/**
 @brief Fetch list of push notifications matching with given filter from Netmera.

 This method will start the fetch process and return immediately. When fetch process is finished, given completion
 block will be called with a @c NetmeraInbox object or with an @c NSError object if fetch operation has failed.

 Use returned NetmeraInbox object for future operations on the inbox such as accessing the objects,
 fetching next pages of the inbox list, and modifying the status of objects.

 @see @c NetmeraInboxFilter class for the possible filtering options.

 @param filter A @c NetmeraInboxFilter object defining the filter options for the list of push objects to be returned
 from server.

 @param completionBlock Block to be triggered after fetch process is completed.
 */
+ (void)fetchInboxUsingFilter:(NetmeraInboxFilter *)filter
                   completion:(void (^)(NetmeraInbox *inbox, NSError *error))completionBlock;


+ (void)fetchInboxCountWithFilter:(NetmeraInboxCountFilter *)filter
                   completion:(void (^)(NetmeraInboxCountResponse * _Nullable response, NSError * _Nullable error))completionBlock;


/**
 Update status of all push objects.

 Calling this method will update the inbox status of all inbox objects, and result will be informed via given
 completion block. A @c nil @c error value means operation succeeded.

 Setting multiple status options to status parameter will result in an immediate error.

 @param status Status option to be set upon all push objects.
 @param completionBlock Block to be called on update completion.
 */
+ (void)updateStatus:(NetmeraInboxStatus)status forAllWithCompletion:(void (^)(NSError *error))completionBlock;


@end

#pragma mark - User Inbox Category
@interface Netmera (InboxCategory)
/**
 @brief Fetch list of push notification categories matching with given filter from Netmera.

 This method will start the fetch process and return immediately. When fetch process is finished, given completion
 block will be called with a @c NetmeraInboxCategory object or with an @c NSError object if fetch operation has failed.

 Use returned NetmeraInboxCategory object for future operations on the inbox such as accessing the objects,
 fetching next pages of the inbox category list, and modifying the status of objects.

 @see @c NetmeraInboxCategoryFilter class for the possible filtering options.

 @param filter A @c NetmeraInboxCategoryFilter object defining the filter options for the list of push objects category  to be returned
 from server.

 @param completionBlock Block to be triggered after fetch process is completed.
 */
+ (void)fetchInboxCategoryUsingFilter:(NetmeraInboxCategoryFilter *)filter
                           completion:(void (^)(NetmeraInboxCategory *inbox, NSError *error))completionBlock;


/**
 Update status of given push objects.

 Calling this method will update the inbox status of given push object categories, and result will be informed via given
 completion block. A @c nil @c error value means operation succeeded.

 Setting multiple status options to status parameter will result in an immediate error.

 @param status Status option to be set upon given push objects.
 @param categories The list of category name  whose status will be updated.
 @param completionBlock Block to be called on update completion.
 */
+ (void)updateStatus:(NetmeraInboxStatus)status byCategories:(NSArray<NSString *> *)categories completion:(void (^)(NSError * _Nullable error))completionBlock;

@end

#pragma mark - User
@interface Netmera (User)

/**
 @brief Set or update the attributes of the user in Netmera.

 To send information about your user to Netmera, you should create a @c NetmeraUser object and set
 the properties of the user object with corresponding values of your user.

 After setup, call this method to send data to Netmera servers.

 In order to remove a previously set attribute from Netmera, you should set an @c [NSNull null] object to the
 corresponding attribute on user object.
 */
+ (void)updateUser:(__kindof NetmeraUser *)user;

+ (NSString *)getCurrentExternalId;

+ (void)setUserCategoryPreferenceWithCategoryId:(int)categoryId categoryEnabled:(BOOL)categoryEnabled
                                     completion:(void (^)(NSError * _Nullable error))completionBlock;

+ (void)getUserCategoryPreferenceListWithCompletion:(void (^)(NSArray<NetmeraUserCategoryPreference *> * _Nullable categories, NSError * _Nullable error))completionBlock;

@end

#pragma mark - Event
@interface Netmera (Event)

/**
 @brief Send an event to Netmera servers.

 You can send behavioral actions of your users using this method.

 Rather than accepting unstructured information inside events, SDK requires given event to be a valid subclass of
 @c NetmeraEvent class. This approach provides Netmera to verify type of the given event attributes,
 which is crucial during event analytics operations on Netmera servers.

 @see Individual @c NetmeraEvent subclasses for usage examples.
 */
+ (void)sendEvent:(__kindof NetmeraEvent *)event;


+ (void)sendCrashReportEvent:(__kindof NetmeraEvent *)event;

/**
 @brief //

 @param encryptor //
 conform to @c NetmeraEncryptionProtocol protocol.
 */
+ (void)setEncyptor:(NSObject<NetmeraEncryptionProtocol> *)encryptor;

@end


@interface Netmera(DisableInitialize)

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

#pragma mark - GDPR/KVK (MOB-5663)

@interface Netmera (KVK)
/** @brief Completely turn off sending all events and user data If this method is called,
 we will never send backend @c NetmeraUser updates and @c NetmeraEvent.
 */
+ (void)turnOffSendingEventAndUserUpdate;
@end

#pragma mark - Crash Reporting

@interface Netmera (Exception)

/**
 @brief Records a handled exception manually.
 @param exception  @c NSException Exception to be recorded
 */

+ (void)handleException:(NSException *)exception;
@end


@interface Netmera (Advertising)

/**
 @brief Request tracking atuhorization to get advertising identifier
 */
+ (void)requestTrackingAuthorization;

+ (BOOL)isAuthorizedAdvertisingIdentifier;

+ (void)setAuthorizedAdvertisingIdentifier:(BOOL)authorized;

NS_ASSUME_NONNULL_END

@end
