//
//  NSString+NetmeraUtils.h
//  
//
//  Created by Yavuz Nuzumlali on 06/02/16.
//
//

#import <Foundation/Foundation.h>

@interface NSString (NetmeraUtils)

#pragma mark - convenience methods

+ (instancetype)netmera_notificationString;
+ (instancetype)netmera_dismissString;
+ (instancetype)netmera_OKString;
+ (instancetype)netmera_infoString;
+ (instancetype)netmera_testDeviceString:(BOOL)success;

@end
