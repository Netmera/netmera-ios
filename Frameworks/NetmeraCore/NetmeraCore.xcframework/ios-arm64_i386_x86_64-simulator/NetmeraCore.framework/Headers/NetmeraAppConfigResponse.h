//
//  NetmeraAppConfigResponse.h
//
//
//  Created by Yavuz Nuzumlali on 08/09/15.
//
//

#import <NetmeraCore/NetmeraBaseResponseModel.h>
#import <NetmeraCore/NetmeraAppConfig.h>

@interface NetmeraAppConfigResponse : NetmeraBaseResponseModel

@property (nonatomic, strong) NetmeraAppConfig *appConfig;

@end
