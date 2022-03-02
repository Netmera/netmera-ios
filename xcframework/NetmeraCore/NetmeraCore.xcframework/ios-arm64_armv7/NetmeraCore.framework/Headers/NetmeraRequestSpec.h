//
//  ServiceObject.h
//  NMCommons
//
//  Created by Yavuz Nuzumlali on 3/7/13.
//  Copyright (c) 2013 Yavuz Nuzumlali. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^NMServiceResponseFailedErrorBlock)(NSError *error);
typedef void (^NMServiceResponseCompletedBlock)(id response);

/**
 *  NetmeraNetworkRequest protocol contains all needed information to send a network request such as url, request
 * body/headers, timeout, cache policy etc. Any object corresponding to a network request should conform to this
 * protocol and provide related information.
 */
@interface NetmeraRequestSpec : NSObject

@property (nonatomic, copy) NSString *baseURL;
@property (nonatomic, copy) NSString *path;
@property (nonatomic, copy) NSString *HTTPMethod;
@property (nonatomic, strong) NSMutableDictionary *HTTPHeaders;
@property (nonatomic, strong) NSDictionary *HTTPBody;
@property (nonatomic, assign) NSTimeInterval timeoutInterval; // default is 20.0 secs
@property (nonatomic, assign) NSOperationQueuePriority queuePriority;

@end
