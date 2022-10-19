//
//  NetmeraSetInboxStatusRequest.h
//
//
//  Created by Yavuz Nuzumlali on 01/12/15.
//
//

#import <NetmeraCore/NetmeraBaseRequest.h>

@interface NetmeraSetInboxStatusRequest : NetmeraBaseRequest

- (instancetype)initWithPushInstanceIds:(NSArray<NSString *> *)pushIds status:(NSUInteger)status;

- (instancetype)initWithForAllObjectStatus:(NSUInteger)status;

- (instancetype)initWithPushCategories:(NSArray<NSString *> *)categories status:(NSUInteger)status;

@end
