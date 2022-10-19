//
//  NetmeraCrashEvent.h
//  Pods
//
//  Created by inomera on 8.04.2020.
//

#import <NetmeraCore/NetmeraEvent.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetmeraCrashEvent : NetmeraEvent

@property(nonatomic, assign) int batteryLevel;

@property(nonatomic, assign) BOOL isRooted;

@property(nonatomic, assign) BOOL isOnline;

@property(nonatomic, strong) NSDate *time;

@property(nonatomic, copy) NSString *binaryImages;

@property(nonatomic, copy) NSString *appBuild;

@property(nonatomic, copy) NSString *buildUuid;

@property(nonatomic, assign) int nonFatal;

@property(nonatomic, copy) NSString *logs;

@property(nonatomic, copy) NSString *resolution;

@property(nonatomic, copy) NSString *architecture;

@property(nonatomic, copy) NSString *openGlVersion;

@property(nonatomic, copy) NSString *name;

@property(nonatomic, copy) NSString *executableName;

@property(nonatomic, copy) NSString *appVersion;

@property(nonatomic, copy) NSString *model;

@property(nonatomic, assign) int currentRam;

@property(nonatomic, assign) int totalRam;

@property(nonatomic, copy) NSString *osVersion;

@property(nonatomic, copy) NSString *orientation;

@property(nonatomic, copy) NSString *manufacturer;

@property(nonatomic, assign) int currentDisk;

@property(nonatomic, copy) NSString *stackTrace;

@property(nonatomic, copy) NSString *operatingSystem;

@property(nonatomic, copy) NSString *type;

@property(nonatomic, copy) NSString *custom;

@property(nonatomic, assign) int totalDisk;


@end

NS_ASSUME_NONNULL_END
