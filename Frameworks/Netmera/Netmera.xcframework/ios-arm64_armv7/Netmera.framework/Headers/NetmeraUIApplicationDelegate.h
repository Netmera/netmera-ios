//
//  NetmeraUIApplicationDelegate.h
//
//
//  Created by Yavuz Nuzumlali on 26/11/15.
//
//

#import <UIKit/UIKit.h>

@protocol NetmeraUIApplicationDelegate <UIApplicationDelegate>

- (BOOL)isNotificationBelongToSDK:(NSDictionary *)userInfo;

@end
