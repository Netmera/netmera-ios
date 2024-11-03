//
//  NetmeraLiveActivityCloseEvent.h
//  NetmeraCore
//
//

#import <NetmeraCore/NetmeraEvent.h>

@interface NetmeraLiveActivityCloseEvent : NetmeraEvent

@property (nonatomic, copy) NSString *groupId;

+ (instancetype)eventWithGroupId:(NSString *)groupId;

@end
