//
//  NetmeraCouponObject.h
//  NetmeraCore
//
//

#import <Foundation/Foundation.h>
#import <NetmeraCore/NetmeraBaseModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetmeraCouponObject : NetmeraBaseModel

@property (nonatomic, copy, readonly) NSString *couponId;
@property (nonatomic, copy, readonly) NSString *name;
@property (nonatomic, copy, readonly) NSString *code;
@property (nonatomic, copy, readonly) NSDate *expireDate;
@property (nonatomic, copy, readonly) NSDate *assignDate;

@end

NS_ASSUME_NONNULL_END
