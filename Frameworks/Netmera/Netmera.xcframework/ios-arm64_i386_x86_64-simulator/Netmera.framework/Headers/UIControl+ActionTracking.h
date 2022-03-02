//
//  UIControl+ActionTracking.h
//  Netmera.default-Core
//
//  Created by Netmera on 23.01.2021.
//

#import <UIKit/UIKit.h>
#import <Netmera/NetmeraUIControlAction.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIControl (ActionTracking)

-(NetmeraUIControlAction *)getActionWithSelector:(NSString *)selectorName;

@end

NS_ASSUME_NONNULL_END
