//
//  NetmeraEventSender.h
//  
//
//  Created by Yavuz Nuzumlali on 08/01/16.
//
//

#import <Foundation/Foundation.h>

@class NetmeraEvent;
@protocol NetmeraEventSender <NSObject>

- (void)sendEvent:(NetmeraEvent *)event;

- (void)sendCrashReportEvent:(NetmeraEvent *)event;

@end
