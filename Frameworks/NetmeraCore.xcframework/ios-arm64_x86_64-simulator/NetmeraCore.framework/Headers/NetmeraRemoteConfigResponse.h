//
//  NetmeraRemoteConfigResponse.h
//  NetmeraCore
//
//

#import <Foundation/Foundation.h>
#import <NetmeraCore/NetmeraBaseResponseModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetmeraRemoteConfigResponse : NetmeraBaseResponseModel

@property (nonatomic, assign) int abTestId;
@property (nonatomic, assign) int abTestOptionId;
@property (nonatomic, assign) int remoteConfigVersion;
@property (nonatomic, strong) NSDictionary<NSString*, NSDictionary<NSString*, id>*> *data;

@end

NS_ASSUME_NONNULL_END
