//
//  NetmeraErrorManager.h
//  Pods
//
//  Created by Yavuz Nuzumlali on 21/08/15.
//
//

#import <Foundation/Foundation.h>

extern NSString *const NetmeraErrorDomain;

typedef NS_ENUM(NSUInteger, NetmeraError) {
  NetmeraErrorInvalidResponseClass = 2000,
  NetmeraErrorSerializationFailed = 9998,
  NetmeraErrorAPIKeyDoesNotExist = 9997,
  NetmeraErrorInboxDoesNotHaveNextPage = 9996,
  NetmeraErrorInvalidParameters = 9995,
};

@interface NetmeraErrorManager : NSObject

+ (NSError *)errorForNetmeraError:(NetmeraError)errorType info:(NSDictionary *)info;
+ (NSError *)errorForNetmeraError:(NetmeraError)errorType description:(NSString *)description info:(NSDictionary *)info;

@end
