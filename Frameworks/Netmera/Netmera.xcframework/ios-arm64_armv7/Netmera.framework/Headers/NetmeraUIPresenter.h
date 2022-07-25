//
//  NetmeraUIPresenter.h
//
//
//  Created by Yavuz Nuzumlali on 07/11/15.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, NetmeraPushPresentationStyle) {
  NetmeraPushPresentationStyleBanner,
  NetmeraPushPresentationStyleAlert,
};

@class NetmeraWebViewAction;
@class NetmeraInAppMessageAction;
@class NetmeraPushObject;
@class NetmeraWebViewDelegate;
@protocol NetmeraUIPresenterDelegate <NSObject>

- (void)didTapViewForPushObject:(NetmeraPushObject *)pushObject;
- (void)didTapInteractiveButtonAtIndex:(NSUInteger)index forPushObject:(NetmeraPushObject *)pushObject;
- (void)sendPushDismissEventForPushObject:(NetmeraPushObject *)object;

@end

@interface NetmeraUIPresenter : NSObject

@property (nonatomic, weak) NSObject<NetmeraUIPresenterDelegate> *delegate;

- (instancetype)initWithApplication:(UIApplication *)application;

- (void)presentViewForPushObject:(NetmeraPushObject *)object;
- (void)presentViewForPushObject:(NetmeraPushObject *)object style:(NetmeraPushPresentationStyle)style;
- (void)presentViewForWebViewAction:(NetmeraWebViewAction *)action webViewDelegate:(NetmeraWebViewDelegate *)delegate pushObject:(NetmeraPushObject *)object;
- (void)presentViewForInAppMessageObject:(NetmeraPushObject *)object;
- (void)presentAlertWithTitle:(NSString *)title message:(NSString *)message;

@end
