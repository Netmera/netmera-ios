//
//  NetmeraUpdateDeviceRequest.h
//  
//
//  Created by Yavuz Nuzumlali on 03/03/16.
//
//

#import <NetmeraCore/NetmeraBaseRequest.h>

@interface NetmeraUpdateDeviceRequest : NetmeraBaseRequest

- (instancetype)initWithAdvertisingId:(NSString *)advertisingId;

@end
