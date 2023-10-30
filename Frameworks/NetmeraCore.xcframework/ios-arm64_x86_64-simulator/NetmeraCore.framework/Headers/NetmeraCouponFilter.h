//
//  NetmeraCouponFilter.h
//  NetmeraCore
//
//

#import <NetmeraCore/NetmeraBaseModel.h>
#import <NetmeraCore/NetmeraCouponObject.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetmeraCouponFilter : NetmeraBaseModel

@property (nonatomic, assign) int page;
@property (nonatomic, assign) int max;

@end

NS_ASSUME_NONNULL_END
