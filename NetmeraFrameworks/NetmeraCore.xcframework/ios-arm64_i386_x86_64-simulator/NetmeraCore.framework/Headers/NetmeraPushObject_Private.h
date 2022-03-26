//
//  NetmeraPushObject_Private.h
//
//
//  Created by Yavuz Nuzumlali on 26/10/15.
//
//

#import <NetmeraCore/NetmeraPushObject.h>
#import <NetmeraCore/NetmeraAction.h>
#import <NetmeraCore/NetmeraUserNotificationAction.h>
#import <NetmeraCore/NetmeraInAppMessageAction.h>
#import <UserNotifications/UserNotifications.h>
#import <NetmeraCore/NetmeraPushObjectAction.h>

@interface NetmeraPushObject ()

@property (nonatomic, assign) BOOL shouldSendDeliveryReport;
@property (nonatomic, strong) NSDictionary *defaultActionDictionary;

// Interactive
@property (nonatomic, strong) NSArray<NetmeraUserNotificationAction *> *interactiveActions;
@property (nonatomic, strong) NSString *interactiveActionIdentifier;
@property (nonatomic, strong) NSString *inputText;
// Config
@property (nonatomic, strong) NSNumber *appConfigVersion;

// Activated properties

/**
 *  This property holds the action that has been activated by user.
 *	Returns default action if user tapped the push itself. If user taps one of the interactive buttons,
 *	returns the action of corresponding NetmeraUserNotificationAction object.
 */
@property (nonatomic, strong) NSDictionary *actionDictionary;

// Readwrite
@property (nonatomic, assign, readwrite) NetmeraPushType pushType;

@property (nonatomic, copy, readwrite) NSString *pushInstanceId;
@property (nonatomic, copy, readwrite) NSString *pushId;
@property (nonatomic, copy, readwrite) NSString *externalId;

@property (nonatomic, strong, readwrite) NetmeraPushObjectAlert *alert;
@property (nonatomic, copy, readwrite) NSString *sound;
@property (nonatomic, assign, readwrite) NSUInteger badge;
@property (nonatomic, copy, readwrite) NSArray *category;
@property (nonatomic, copy, readwrite) NSArray *carousel;
@property (nonatomic, copy, readwrite) NSString *interactiveCategoryIdentifier;
@property (nonatomic, strong, readwrite) NSURL *mediaAttachmentURL;

@property (nonatomic, strong, readwrite) NSDictionary *customDictionary;
@property (nonatomic, strong, readwrite) NetmeraInAppMessageAction *inAppMessage;
@property (nonatomic, assign, readwrite) NetmeraInboxStatus inboxStatus;
@property (nonatomic, assign, readwrite) BOOL includedInInbox;
@property (nonatomic, strong, readwrite) NSDate *expirationDate;

@property (nonatomic, strong, readwrite) NetmeraPushObjectAction *action;

@property (nonatomic, copy) void (^willPresentNotificationHandler)(UNNotificationPresentationOptions options) API_AVAILABLE(ios(10.0));;

@end
