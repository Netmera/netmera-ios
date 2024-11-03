//
//  NetmeraLiveActivityStartTokenEvent.h
//  NetmeraCore
//
//

#import <NetmeraCore/NetmeraEvent.h>

@interface NetmeraLiveActivityStartTokenEvent : NetmeraEvent

@property (nonatomic, copy) NSString *token;

+ (instancetype)eventWithToken:(NSString *)token;

@end
