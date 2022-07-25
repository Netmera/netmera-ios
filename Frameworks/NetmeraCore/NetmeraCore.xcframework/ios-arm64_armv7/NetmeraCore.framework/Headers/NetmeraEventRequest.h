//
//  NetmeraBulkRequestModel.h
//  Pods
//
//  Created by Yavuz Nuzumlali on 12/08/15.
//
//

#import <NetmeraCore/NetmeraBaseRequest.h>
#import <NetmeraCore/NetmeraEventInternal.h>

NS_ASSUME_NONNULL_BEGIN

extern NSInteger const NetmeraMaxEventLimit;

@interface NetmeraEventRequest : NetmeraBaseRequest

@property (nonatomic, strong, readonly) NSMutableArray *events;

- (instancetype)initWithEventArray:(NSArray<NetmeraEvent *> *)array;

- (void)mergeEventsFromEventRequest:(NetmeraEventRequest *)request limitReached:(BOOL *)limitReached;

@end

NS_ASSUME_NONNULL_END
