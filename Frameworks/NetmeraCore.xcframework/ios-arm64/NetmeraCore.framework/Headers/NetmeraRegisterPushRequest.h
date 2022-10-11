//
//  NetmeraRegisterPushRequest.h
//
//
//  Created by Yavuz Nuzumlali on 09/10/15.
//
//

#import <NetmeraCore/NetmeraBaseRequest.h>

@interface NetmeraRegisterPushRequest : NetmeraBaseRequest

- (instancetype)initWithDeviceToken:(NSString *)deviceToken;

@end
