//
//  SKPaymentQueue+Tracking.h
//
//
//  Created by inomera on 12.02.2020.
//


#import <StoreKit/StoreKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SKPaymentQueue (Tracking)

+ (void)swizzle;
+ (void)unSwizzle;

@end

NS_ASSUME_NONNULL_END
