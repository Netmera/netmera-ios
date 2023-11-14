//
//  NetmeraTrackableActionInfo.h
//  NetmeraCore
//
//

#import <NetmeraCore/NetmeraBaseModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetmeraTrackableActionInfo : NetmeraBaseModel

@property (nonatomic, strong) NSString *path;
@property (nonatomic, strong) NSString *code;
@property (nonatomic, assign) int actionType;

@end

NS_ASSUME_NONNULL_END
