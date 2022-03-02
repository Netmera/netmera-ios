//
//  UIApplication+Tracking.h
//
//  Created by inomera on 2.03.2020.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIApplication (Tracking)

+ (void)swizzle;

+ (void)unSwizzle;

@end

NS_ASSUME_NONNULL_END
