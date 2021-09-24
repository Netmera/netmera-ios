//
//  NetmeraTimeInAppEvent.h
//
//
//  Created by Yavuz Nuzumlali on 10/09/15.
//
//

#import <NetmeraCore/NetmeraEvent.h>

@interface NetmeraTimeInAppEvent : NetmeraEvent

+ (instancetype)eventWithTimeInAppSeconds:(NSTimeInterval)seconds;

@end
