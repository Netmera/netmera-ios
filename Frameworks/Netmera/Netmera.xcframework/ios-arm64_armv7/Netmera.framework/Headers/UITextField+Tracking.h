//
//  UITextField+Tracking.h
//
//  Created by inomera on 16.03.2020.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITextField (Tracking)

+ (void)swizzle;

+ (void)unSwizzle;

@end

NS_ASSUME_NONNULL_END
