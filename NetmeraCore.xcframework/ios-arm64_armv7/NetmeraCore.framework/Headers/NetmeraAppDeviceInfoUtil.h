//
//  NetmeraAppDeviceInfoUtil.h
//
//
//  Created by Yavuz Nuzumlali on 10/09/15.
//
//

#import <Foundation/Foundation.h>

@class NetmeraAppDeviceInfo;
@class NetmeraAppAllDeviceInfo;
@interface NetmeraAppDeviceInfoUtil : NSObject

+ (NSString *)operatingSystemVersion;
+ (NSString *)operatingSystemName;
+ (NSString *)applicationVersion;
+ (NSString *)carrierName;
+ (NSString *)operatorCode;
+ (NSString *)locale;
+ (NSString *)manufacturer;
+ (NSString *)deviceModel;
+ (NSString *)device;
+ (NSString *)architecture;
+ (NSString *)resolution;
+ (NSString *)density;
+ (NSString *)appBuild;
+ (NSUInteger)connectionType;
+ (unsigned long long)freeRAM;
+ (unsigned long long)totalRAM;
+ (unsigned long long)freeDisk;
+ (unsigned long long)totalDisk;
+ (NSInteger)batteryLevel;
+ (NSString *)orientation;
+ (NSString *)OpenGLESversion;
+ (BOOL)isJailbroken;

+ (NetmeraAppDeviceInfo *)currentAppDeviceInfo;
+ (NetmeraAppAllDeviceInfo *)allDeviceInfo;
@end
