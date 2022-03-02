//
//  NetmeraInboxCategory_Private.h
//  Pods
//
//  Created by inomera on 19.02.2020.
//

#import "NetmeraInboxCategory.h"
#import "NetmeraInboxDelegate.h"

@class NetmeraInboxFilter;
@class NetmeraRequestSender;
@protocol NetmeraNetworkRequestor;
@interface NetmeraInboxCategory ()

//@property (nonatomic, weak) NSObject<NetmeraInboxDelegate> *delegate;

- (instancetype)initWithRequestSender:(NetmeraRequestSender *)sender filter:(NetmeraInboxCategoryFilter *)filter;

- (void)fetchInitialPageWithCompletionBlock:(void (^)(NSError *error))completionBlock;

@end
