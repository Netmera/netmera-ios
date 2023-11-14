//
//  UIView+Tracking.h
//  Netmera
//
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (FindUIViewController)
- (UIViewController *) firstAvailableUIViewController;
- (NSString *) netmeraPathWithSelector:(NSString *)selector;
@end

NS_ASSUME_NONNULL_END
