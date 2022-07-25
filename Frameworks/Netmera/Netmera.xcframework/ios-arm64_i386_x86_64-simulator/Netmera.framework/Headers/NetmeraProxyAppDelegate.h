//
//  NetmeraProxyAppDelegate.h
//
//
//  Created by Yavuz Nuzumlali on 28/09/15.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol NetmeraUIApplicationDelegate;
@class NetmeraRequestSender;
@class NetmeraLocationManager;
@class NetmeraUIPresenter;
@class NetmeraStateManager;
@class NetmeraAdvertisingIdManager;

@interface NetmeraProxyAppDelegate : NSObject <UIApplicationDelegate>

- (instancetype)initWithOriginalAppDelegate:(NSObject<UIApplicationDelegate> *)originalAppDelegate
                               pushDelegate:(NSObject<NetmeraUIApplicationDelegate> *)pushDelegate
                              requestSender:(NetmeraRequestSender *)requestSender
                                UIPresenter:(NetmeraUIPresenter *)UIPresenter
                               stateManager:(NetmeraStateManager *)stateManager
                                advertisingManager:(NetmeraAdvertisingIdManager *)advertisingManager;

@end
