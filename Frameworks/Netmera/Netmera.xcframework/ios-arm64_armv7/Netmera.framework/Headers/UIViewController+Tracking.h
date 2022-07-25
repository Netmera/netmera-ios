//
//  UIViewController+Tracking.h
//
//  Created by inomera on 22.11.2019.
//


#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (Tracking)

+ (void)swizzle;

+ (void)unSwizzle;

@end

NS_ASSUME_NONNULL_END
