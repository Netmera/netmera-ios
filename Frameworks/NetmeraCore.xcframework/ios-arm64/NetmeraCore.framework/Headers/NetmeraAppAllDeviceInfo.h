//
//  NetmeraAppAllDeviceInfo.h
//  Pods
//
//  Created by Netmera on 30.12.2020.
//

#import <NetmeraCore/NetmeraAppDeviceInfo.h>


@interface NetmeraAppAllDeviceInfo : NetmeraAppDeviceInfo

@property (nonatomic, copy) NSString *OSName;
@property (nonatomic, copy) NSString *device;
@property (nonatomic, copy) NSString *architecture;
@property (nonatomic, copy) NSString *resolution;
@property (nonatomic, copy) NSString *density;
@property (nonatomic, assign) int connectionType;
@property (nonatomic, copy) NSString *userAgent;
@property (nonatomic, assign) float totalDisk;
@property (nonatomic, assign) float totalRAM;
@property (nonatomic, assign) int batteryLevel;
@property (nonatomic, copy) NSString *OpenGLESversion;

@end

