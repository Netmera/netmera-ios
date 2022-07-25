//
//  NetmeraWebVC.h
//
//
//  Created by Yavuz Nuzumlali on 12/11/15.
//
//

#import <Netmera/NetmeraBaseVC.h>

@class NetmeraPushObject;
@class NetmeraWebViewDelegate;
@class NetmeraWebViewAction;

@class NetmeraWebVC;
@protocol NetmeraWebVCDelegate <NetmeraBaseVCDelegate>

- (void)didRequestDeeplink:(NetmeraWebVC *)vc url:(NSURL *)url;
- (void)didRequestOpenURL:(NetmeraWebVC *)vc url:(NSURL *)url;

@end

@interface NetmeraWebVC : NetmeraBaseVC

- (instancetype)initWithAction:(NetmeraWebViewAction *)action
               webViewDelegate:(NetmeraWebViewDelegate *)webViewDelegate pushObject:(NetmeraPushObject *)pushObject;

@property (nonatomic, weak) NSObject<NetmeraWebVCDelegate> *delegate;


@end
