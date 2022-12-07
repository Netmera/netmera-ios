//
//  NetmeraRemoteConfigRequest.h
//  NetmeraCore
//
//  Created by Muhammed Kılınç on 16.11.2022.
//

#import <NetmeraCore/NetmeraBaseRequest.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetmeraRemoteConfigRequest : NetmeraBaseRequest

- (instancetype)initWithRemoteConfigVersion:(NSString *)remoteConfigVersion;

@end

NS_ASSUME_NONNULL_END
