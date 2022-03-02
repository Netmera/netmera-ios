//
//  NetmeraShareEvent.h
//  Pods
//
//  Created by Yavuz Nuzumlali on 02/09/15.
//
//

#import <NetmeraCore/NetmeraEvent.h>

@interface NetmeraShareEvent : NetmeraEvent

@property (nonatomic, copy, readonly) NSString *channel;
@property (nonatomic, copy, readonly) NSString *content;

+ (instancetype)eventWithChannel:(NSString *)channel content:(NSString *)content;

@end
