//
//  NetmeraNetworkRequestor.h
//
//
//  Created by Yavuz Nuzumlali on 01/12/15.
//
//

#import <Foundation/Foundation.h>

typedef void (^NetmeraNetworkManagerResponseBlock)(id responseObject, NSError *error);

@class NetmeraBaseRequest;
@protocol NetmeraNetworkRequestor <NSObject>

/**
 *	Handler block is called in main thread.
 */
- (void)sendRequest:(NetmeraBaseRequest *)request completion:(NetmeraNetworkManagerResponseBlock)handler;

/**
 *	Handler block is called in main thread.
 */
- (void)sendRequest:(NetmeraBaseRequest *)request;

- (void)sendCrashRequest:(NetmeraBaseRequest *)request;
@end
