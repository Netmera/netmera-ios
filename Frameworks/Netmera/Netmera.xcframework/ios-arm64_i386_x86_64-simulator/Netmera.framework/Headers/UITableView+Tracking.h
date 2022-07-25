//
//  UITableView+Tracking.h
//
//  Created by inomera on 19.03.2020.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITableView (Tracking)

+ (void)swizzle;

+ (void)unSwizzle;

@end

NS_ASSUME_NONNULL_END
