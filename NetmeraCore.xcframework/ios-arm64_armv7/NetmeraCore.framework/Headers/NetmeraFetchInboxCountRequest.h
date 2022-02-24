//
//  NetmeraFetchInboxCountRequest.h
//  NetmeraCore
//
//

#import <NetmeraCore/NetmeraBaseRequest.h>
#import <NetmeraCore/NetmeraInboxCountFilter.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetmeraFetchInboxCountRequest : NetmeraBaseRequest

- (instancetype)initWithFilter:(NetmeraInboxCountFilter *)filter;

@end

NS_ASSUME_NONNULL_END
