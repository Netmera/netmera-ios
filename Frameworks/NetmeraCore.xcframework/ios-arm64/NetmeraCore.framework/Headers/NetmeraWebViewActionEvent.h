//
//  NetmeraWebViewActionEvent.h
//
//
//  Created by Yavuz Nuzumlali on 24/11/15.
//
//

#import <NetmeraCore/NetmeraEvent.h>

@interface NetmeraWebViewActionEvent : NetmeraEvent

+ (instancetype)eventWithEventData:(NSDictionary *)eventData;

@end
