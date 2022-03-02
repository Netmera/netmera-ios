//
//  NetmeraWebViewDelegate.h
//
//
//  Created by Yavuz Nuzumlali on 25/11/15.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Netmera/NetmeraActionPerformer.h>
#import <Netmera/NetmeraBaseVC.h>
#import <Netmera/NetmeraWebVC.h>
#import <WebKit/WebKit.h>

@class NetmeraWebViewAction;
@interface NetmeraWebViewDelegate : NetmeraBaseVC <WKNavigationDelegate>

@property (nonatomic, weak) NSObject<NetmeraActionPerformer> *actionHandler;

- (void)loadWebViewContentForAction:(NetmeraWebViewAction *)action inWebView:(WKWebView *)webView withVC:(NetmeraWebVC *)webVC;

@end
