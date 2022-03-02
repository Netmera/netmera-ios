//
//  NetmeraLogger.h
//  
//
//  Created by Yavuz Nuzumlali on 01/06/16.
//
//

#import <Foundation/Foundation.h>
#import <NetmeraCore/NetmeraLogLevel.h>

#define __NetmeraLogWithLevel(level, format, ...) \
  do { \
    if(level > [NetmeraLogger logLevel]) break; \
    NSString *log = [NSString stringWithFormat:format, ##__VA_ARGS__]; \
    NSString *sym; \
    if(level == NetmeraLogLevelError) { \
      sym = @"❗"; \
    } else if(level == NetmeraLogLevelDebug) { \
      sym = @"🦋"; \
    } \
    NSLog(@"\n\n%@ %s (%@:%d) %@\n%@\n\n", sym, __PRETTY_FUNCTION__, @(__FILE__).lastPathComponent, __LINE__, sym, log); \
} while(0)

#define NetmeraLogError(format, ...) __NetmeraLogWithLevel(NetmeraLogLevelError, format, ##__VA_ARGS__)
#define NetmeraLogDebug(format, ...) __NetmeraLogWithLevel(NetmeraLogLevelDebug, format, ##__VA_ARGS__)
//#define NetmeraLogTest(format, ...) NSLog(@"\n\n*** %@ %s (%@:%d) %@\n%@\n\n", @"👀", __PRETTY_FUNCTION__, @(__FILE__).lastPathComponent, __LINE__, @"👀", [NSString stringWithFormat:format, ##__VA_ARGS__]);
#define NetmeraLogTest(format, ...)
@interface NetmeraLogger : NSObject

+ (NetmeraLogLevel)logLevel;
+ (void)setLogLevel:(NetmeraLogLevel)level;

@end
