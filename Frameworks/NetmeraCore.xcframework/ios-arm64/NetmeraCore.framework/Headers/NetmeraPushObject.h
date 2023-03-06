//
//  NetmeraPushObject.h
//
//
//  Created by Yavuz Nuzumlali on 09/10/15.
//
//

#import <NetmeraCore/NetmeraBaseModel.h>
#import <NetmeraCore/NetmeraPushObjectAlert.h>
#import <NetmeraCore/NetmeraPushObjectAction.h>
#import <NetmeraCore/NetmeraUserNotificationAction.h>

typedef NS_ENUM(NSUInteger, NetmeraPushType) {
  NetmeraPushTypeStandard = 1,
  NetmeraPushTypeInteractive = 2,
  NetmeraPushTypePopup = 3,
  NetmeraPushTypeSilent = 6,
  NetmeraPushTypePing = 7,
  NetmeraPushTypeConfigUpdate = 8,
  NetmeraPushTypeInAppMessage = 10,
  NetmeraPushTypeRecall = 11,
  NetmeraPushTypeReview = 12,
  NetmeraPushTypeForceUpdate = 13,
  NetmeraPushTypeWebWidget = 14
};

typedef NS_ENUM(NSUInteger, NetmeraPushStyleType) {
    NetmeraPushStyleTypeGeneral = 1,
    NetmeraPushStyleTypeCarousel = 2,
    NetmeraPushStyleTypeSlider = 3,
};

typedef NS_OPTIONS(NSUInteger, NetmeraInboxStatus) {
  NetmeraInboxStatusRead = 1 << 0,
  NetmeraInboxStatusUnread = 1 << 1,
  NetmeraInboxStatusDeleted = 1 << 2,
  NetmeraInboxStatusAll = NetmeraInboxStatusRead | NetmeraInboxStatusUnread | NetmeraInboxStatusDeleted,
};

@interface NetmeraPushObject : NetmeraBaseModel

@property (nonatomic, assign, readonly) NetmeraPushType pushType;

@property (nonatomic, copy, readonly) NSString *pushInstanceId;
@property (nonatomic, copy, readonly) NSString *pushId;
@property (nonatomic, copy, readonly) NSString *externalId;

@property (nonatomic, strong, readonly) NetmeraPushObjectAlert *alert;
@property (nonatomic, copy, readonly) NSString *sound;
@property (nonatomic, assign, readonly) NSUInteger badge;
@property (nonatomic, copy, readonly) NSArray *category;
@property (nonatomic, copy, readonly) NSArray *carousel;
@property (nonatomic, copy, readonly) NSString *interactiveCategoryIdentifier;
@property (nonatomic, strong, readonly) NSURL *mediaAttachmentURL;

@property (nonatomic, strong, readonly) NSDictionary *customDictionary;
@property (nonatomic, assign, readonly) NetmeraInboxStatus inboxStatus;
@property (nonatomic, assign, readonly) BOOL includedInInbox;
@property (nonatomic, strong, readonly) NSDate *expirationDate;
@property (nonatomic, strong, readonly) NSDate *sendDate;
@property (nonatomic, assign, readonly) NetmeraPushStyleType style;

@property (nonatomic, strong, readonly) NetmeraPushObjectAction *action;
@property (nonatomic, strong, readonly) NSArray<NetmeraUserNotificationAction *> *interactiveActions;

@end
