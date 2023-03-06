//
//  NetmeraAppTrackingTransparancy.h
//  Netmera
//
//  Created by Netmera on 4.10.2021.
//

#import <Foundation/Foundation.h>

@interface NetmeraAppTrackingTransparancy : NSObject

typedef void(^handler)(void);
+ (BOOL)isUserAuthorizedAdId;
+ (void)requestAdvertisingAuthorizationIfNeeded:(handler)handler;

@end
