//
//  UITapGestureRecognizer+Tracking.h
//  Pods
//
//  Created by inomera on 31.03.2020.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITapGestureRecognizer (Tracking)

+ (void)swizzle;

+ (void)unSwizzle;

@end

NS_ASSUME_NONNULL_END
