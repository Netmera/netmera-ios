//
//  NetmeraUpdateUserRequest.h
//
//
//  Created by Yavuz Nuzumlali on 13/09/15.
//
//

#import <NetmeraCore/NetmeraBaseRequest.h>

@class NetmeraUser;
@interface NetmeraUpdateUserRequest : NetmeraBaseRequest

- (instancetype)initWithUser:(NetmeraUser *)user;

@end
