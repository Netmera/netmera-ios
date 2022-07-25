//
//  NetmeraWebViewAction.h
//
//
//  Created by Yavuz Nuzumlali on 23/11/15.
//
//

#import <NetmeraCore/NetmeraAction.h>
#import <UIKit/UIKit.h>

@interface NetmeraWebViewAction : NetmeraAction

@property (nonatomic, strong) NSURL *URL;
@property (nonatomic, copy) NSString *templateId;
@property (nonatomic, copy) NSString *templateHTML;
@property (nonatomic, strong) NSDictionary *templateParams;
@property (nonatomic, assign) BOOL shouldShowPopupFullscreen;

@property (nonatomic) CGFloat widthHeightRatio;
@property (nonatomic) CGFloat heightConstant;
@property (nonatomic) double timeToLive;
@property (nonatomic) double borderRadius;

@end
