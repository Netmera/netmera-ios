//
//  NetmeraAppDeviceInfo.h
//
//
//  Created by Yavuz Nuzumlali on 08/09/15.
//
//

#import <NetmeraCore/NetmeraBaseModel.h>

@interface NetmeraAppDeviceInfo : NetmeraBaseModel

@property (nonatomic, copy) NSString *OSVersion;
@property (nonatomic, copy) NSString *appVersion;
@property (nonatomic, copy) NSString *carrierName;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic, copy) NSString *manufacturer;
@property (nonatomic, copy) NSString *deviceModel;
@property (nonatomic, copy) NSString *region;


@end
