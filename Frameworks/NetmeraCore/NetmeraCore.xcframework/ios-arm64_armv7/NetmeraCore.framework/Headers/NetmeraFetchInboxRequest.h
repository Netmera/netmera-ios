//
//  NetmeraInboxRequest.h
//
//
//  Created by Yavuz Nuzumlali on 30/11/15.
//
//

#import <NetmeraCore/NetmeraBaseRequest.h>

@class NetmeraInboxFilter;

@interface NetmeraFetchInboxRequest : NetmeraBaseRequest

- (instancetype)initWithFilter:(NetmeraInboxFilter *)filter;

@end
