//
//  UIPickerView+ActionTracking.h
//  Netmera.default-Core
//
//  Created by Netmera on 23.01.2021.
//

#import <UIKit/UIKit.h>
#import <Netmera/NetmeraUIControlAction.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIPickerView (ActionTracking)

-(NetmeraUIControlAction *)getActionWithSelector:(NSString *)selectorName row:(NSInteger)row component:(NSInteger)component;

@end

NS_ASSUME_NONNULL_END
