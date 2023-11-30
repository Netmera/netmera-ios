//
//  NetmeraTrackableActionInfo.h
//  NetmeraCore
//
//

#import <NetmeraCore/NetmeraBaseModel.h>

@interface NetmeraTrackableActionInfo : NetmeraBaseModel

@property (nonatomic, copy) NSString *path;
@property (nonatomic, copy) NSString *code;
@property (nonatomic, assign) int actionType;

@end
