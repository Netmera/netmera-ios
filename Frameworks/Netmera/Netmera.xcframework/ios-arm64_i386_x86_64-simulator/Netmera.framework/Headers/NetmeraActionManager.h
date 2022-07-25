//
//  NetmeraActionManager.h
//
//
//  Created by Yavuz Nuzumlali on 23/11/15.
//
//

#import <Foundation/Foundation.h>
#import <Netmera/NetmeraActionPerformer.h>
#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@class NetmeraStateManager;
@class NetmeraUIPresenter;
@class NetmeraAction;
@class NetmeraApplication;
@protocol NetmeraPushDelegate;
@protocol NetmeraEventSender;
@interface NetmeraActionManager : NSObject <NetmeraActionPerformer>

@property (nonatomic, weak) NSObject<NetmeraPushDelegate> *pushDelegate;

- (instancetype)initWithApplication:(NetmeraApplication *)application
                       stateManager:(NetmeraStateManager *)stateManager
                        UIPresenter:(NetmeraUIPresenter *)UIPresenter
                        eventSender:(NSObject<NetmeraEventSender> *)eventSender;

- (void)performLoadActionInWebView:(WKWebView *)webView;

@end
