//
//  NetmeraDeviceInfoRequest.h
//  Pods
//
//  Created by inomera on 20.10.2020.
//

#import <NetmeraCore/NetmeraBaseRequest.h>

@class NetmeraAppAllDeviceInfo;

@interface NetmeraDeviceInfoRequest : NetmeraBaseRequest

- (instancetype)initWithDeviceInfo:(NetmeraAppAllDeviceInfo *)info;

@end
