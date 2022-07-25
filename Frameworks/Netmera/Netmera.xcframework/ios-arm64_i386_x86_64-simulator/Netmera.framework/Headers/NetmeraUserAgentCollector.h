//
//  NetmeraUserAgentCollector.h
//  Pods
//
//  Created by inomera on 14.10.2020.
//

#import <Foundation/Foundation.h>

@class NetmeraStateManager;

@interface NetmeraUserAgentCollector : NSObject

@property (nonatomic, copy, readwrite) NSString *userAgent;

- (instancetype)initWithStateManager:(NetmeraStateManager *)manager;

- (void)loadUserAgentWithCompletion:(void (^)(NSString *userAgent))completion;

@end

