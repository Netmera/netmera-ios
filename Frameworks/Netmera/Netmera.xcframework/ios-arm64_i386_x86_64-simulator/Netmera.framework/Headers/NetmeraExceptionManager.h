//
//  NetmeraExceptionHandler.h
//  Pods
//
//  Created by inomera on 1.04.2020.
//

#import <Foundation/Foundation.h>

@interface NetmeraExceptionManager : NSObject

+ (instancetype)sharedInstance;
- (void)startCrashReporting;
- (void)stopCrashReporting;
- (void)recordException:(NSException *)exception;

@end
