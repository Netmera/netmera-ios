//
//  NetmeraUpdateUserRequest.h
//
//
//  Created by Yavuz Nuzumlali on 13/09/15.
//
//

#import <NetmeraCore/NetmeraBaseRequest.h>
#import <NetmeraCore/NetmeraUser.h>

@interface NetmeraUpdateUserRequest : NetmeraBaseRequest

- (instancetype)initWithUser:(NetmeraUser *)user;

@end
