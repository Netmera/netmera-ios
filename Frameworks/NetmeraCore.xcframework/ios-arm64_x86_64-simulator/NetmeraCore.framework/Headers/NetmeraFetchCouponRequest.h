//
//  NetmeraFetchCouponRequest.h
//  NetmeraCore
//
//

#import <NetmeraCore/NetmeraBaseRequest.h>

@class NetmeraCouponFilter;

@interface NetmeraFetchCouponRequest : NetmeraBaseRequest

- (instancetype)initWithFilter:(NetmeraCouponFilter *)filter;

@end
