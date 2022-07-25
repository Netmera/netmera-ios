//
//  NetmeraInbox_Private.h
//
//
//  Created by Yavuz Nuzumlali on 01/12/15.
//
//

#import "NetmeraInbox.h"
#import "NetmeraInboxDelegate.h"

@class NetmeraInboxFilter;
@class NetmeraRequestSender;
@protocol NetmeraNetworkRequestor;
@interface NetmeraInbox ()

@property (nonatomic, weak) NSObject<NetmeraInboxDelegate> *delegate;

- (instancetype)initWithRequestSender:(NetmeraRequestSender *)sender filter:(NetmeraInboxFilter *)filter;

- (void)fetchInitialPageWithCompletionBlock:(void (^)(NSError *error))completionBlock;

@end