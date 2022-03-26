//
//  NetmeraInitSessionRequest.h
//
//
//  Created by Yavuz Nuzumlali on 08/09/15.
//
//

#import <NetmeraCore/NetmeraBaseRequest.h>
#import <NetmeraCore/NetmeraAppDeviceInfo.h>
@interface NetmeraInitSessionRequest : NetmeraBaseRequest

@property (nonatomic, strong) NSNumber *appConfigVersion;
@property (nonatomic, strong) NetmeraAppDeviceInfo *appDeviceInfo;
@property (nonatomic, assign) NSInteger timeZoneOffset;
@property (nonatomic, strong) NSDate *creationDate;

@end
