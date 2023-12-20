//
//  NetmeraWidgetAction.h
//  NetmeraCore
//
//

#import <NetmeraCore/NetmeraAction.h>

@interface NetmeraWidgetAction : NetmeraAction

@property (nonatomic, strong) NSURL *openURL;
@property (nonatomic, assign) BOOL appManage;
@property (nonatomic, strong) NSURL *deeplinkURL;
@property (nonatomic, strong) NSString *eventType;

@end
