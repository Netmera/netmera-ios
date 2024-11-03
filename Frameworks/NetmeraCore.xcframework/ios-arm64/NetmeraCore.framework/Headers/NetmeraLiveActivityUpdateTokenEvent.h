//
//  NetmeraLiveActivityUpdateTokenEvent.h
//  NetmeraCore
//
//

#import <NetmeraCore/NetmeraEvent.h>

@interface NetmeraLiveActivityUpdateTokenEvent : NetmeraEvent

@property (nonatomic, copy) NSString *token;
@property (nonatomic, copy) NSString *groupId;

+ (instancetype)eventWithToken:(NSString *)token groupId:(NSString *)groupId;

@end
