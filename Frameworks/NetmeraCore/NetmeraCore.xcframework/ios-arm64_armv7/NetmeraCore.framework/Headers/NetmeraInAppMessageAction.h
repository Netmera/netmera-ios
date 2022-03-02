//
//  NetmeraInAppMessageAction.h
//  Pods
//
//  Created by Adilcan on 1.06.2017.
//
//

#import <NetmeraCore/NetmeraAction.h>

@interface NetmeraInAppMessageAction : NetmeraAction

@property (nonatomic, strong) NSString *text;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *image;
@property (nonatomic, copy) NSString *templateId;
@property (nonatomic, copy) NSString *direction;
@property (nonatomic, copy) NSString *backgroundColor;
@property (nonatomic) double borderRadius;
@property (nonatomic) double paddingTop;
@property (nonatomic) double paddingBottom;
@property (nonatomic) double paddingLeft;
@property (nonatomic) double paddingRight;
@property (nonatomic) BOOL overrideMobilConfig;
@property (nonatomic, copy) NSString *fontFamily;
@property (nonatomic, copy) NSString *fontColor;
@property (nonatomic) double fontSize;

@property (nonatomic) double timeToLive;

@end
