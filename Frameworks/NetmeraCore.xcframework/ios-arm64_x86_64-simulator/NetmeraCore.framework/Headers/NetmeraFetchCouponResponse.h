//
//  NetmeraFetchCouponResponse.h
//  NetmeraCore
//
//

#import <NetmeraCore/NetmeraBaseResponseModel.h>

@class NetmeraCouponObject;
@interface NetmeraFetchCouponResponse : NetmeraBaseResponseModel

@property (nonatomic, strong, readonly) NSArray<NetmeraCouponObject *> *coupons;
@end

