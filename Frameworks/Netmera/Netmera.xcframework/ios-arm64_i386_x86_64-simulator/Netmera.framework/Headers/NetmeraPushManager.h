//
//  NetmeraPushManager.h
//
//
//  Created by Yavuz Nuzumlali on 22/09/15.
//
//

#import <Foundation/Foundation.h>
#import <Netmera/NetmeraUIApplicationDelegate.h>
#import <Netmera/NetmeraInboxDelegate.h>
#import <Netmera/NetmeraPushDelegate.h>
#import <Netmera/NetmeraPushReceivingStatus.h>
#import <Netmera/NetmeraPushAuthorizationSource.h>

@class NetmeraStateManager;
@class NetmeraRequestSender;
@class NetmeraPushObject;
@class NetmeraUIPresenter;
@class NetmeraUserNotificationCategory;
@class NetmeraApplication;
@class NetmeraUserNotificationAction;
@protocol NetmeraActionPerformer;
@protocol NetmeraEventSender;
@interface NetmeraPushManager : NSObject <NetmeraUIApplicationDelegate, NetmeraInboxDelegate>

@property (nonatomic, assign) BOOL allowedToPresentPopup;
@property (nonatomic, assign) BOOL allowedToPresentInAppMessage;
@property (nonatomic, assign) NSString *appGroupName;
@property (nonatomic, strong, readonly) NetmeraPushObject *recentPushObject;
@property (nonatomic, weak) NSObject<NetmeraPushDelegate> *pushDelegate;

- (instancetype)initWithApplication:(NetmeraApplication *)application
                      requestSender:(NetmeraRequestSender *)sender
                       stateManager:(NetmeraStateManager *)stateManager
                    actionPerformer:(NSObject<NetmeraActionPerformer> *)actionPerformer
                        UIPresenter:(NetmeraUIPresenter *)UIPresenter;

#pragma mark - push registration

- (void)requestAuthorizationForTypes:(UIUserNotificationType)types
                          categories:(NSArray<NetmeraUserNotificationCategory *> *)categories;
- (void)registerCategoriesIfAuthorizedBefore:(NSArray<NetmeraUserNotificationCategory *> *)categories;

- (void)setPushReceivingStatus:(NetmeraPushReceivingStatus)status forSource:(NetmeraPushAuthorizationSource)source;

- (NetmeraPushReceivingStatus)pushReceivingStatusForSource:(NetmeraPushAuthorizationSource)source;

#pragma mark - push handling

- (void)handleUserTriggeredPushObject:(NetmeraPushObject *)pushObject;
- (void)handleUserTriggeredInteractiveAction:(NetmeraUserNotificationAction *)action forPushObject:(NetmeraPushObject *)object;

#pragma mark - set app group name

-(void)setAppGroupName:(NSString *)appGroupName;

@end
