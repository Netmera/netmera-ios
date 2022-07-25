//
//  NetmeraNetworkAdapter.h
//  Pods
//
//  Created by Yavuz Nuzumlali on 04/08/15.
//
//

#import <Foundation/Foundation.h>
#import <NetmeraCore/NetmeraRequestSpec.h>

//#import "NetmeraRequestSpec.h"

static NSString * const kNetmeraNetworkAdapterResponseObjectErrorKey = @"com.netmera.response.object";
static NSString * const kNetmeraNetworkAdapterStatusCodeErrorKey = @"com.netmera.response.statusCode";

typedef void (^NetmeraNetworkAdapterResponseBlock)(NSDictionary *response, NSError *error);

/**
 *  - Transforms NetmeraNetworkRequest objects to HTTP-level request objects, and starts sending corresponding url
 *	request.
 *	- Listens HTTP-level response callbacks, calls NetmeraResponseCallback with appropriate parameters.
 */
@protocol NetmeraNetworkAdapter <NSObject>

- (BOOL)isProcessingRequests;
- (void)startProcessingRequests;
- (void)stopProcessingRequests;
- (void)cancelAllRequests;

- (void)sendRequestWithSpec:(NetmeraRequestSpec *)spec onResponse:(NetmeraNetworkAdapterResponseBlock)handler;

@end
