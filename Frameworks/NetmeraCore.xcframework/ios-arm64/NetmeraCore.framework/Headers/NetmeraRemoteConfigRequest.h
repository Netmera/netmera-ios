//
//  NetmeraRemoteConfigRequest.h
//  NetmeraCore
//
//

#import <NetmeraCore/NetmeraBaseRequest.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetmeraRemoteConfigRequest : NetmeraBaseRequest

- (instancetype)initWithRemoteConfigVersion:(NSString *)remoteConfigVersion;

@end

NS_ASSUME_NONNULL_END
