//
//  NetmeraUIActionEvent.h
// 
//
//

#import <NetmeraCore/NetmeraEvent.h>
#import <NetmeraCore/NetmeraUIActionType.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetmeraViewActionEvent : NetmeraEvent

@property(nonatomic, copy, readonly) NSString *code;
@property(nonatomic, assign, readonly) NetmeraUIActionType actionType;

+ (instancetype)eventWithCode:(NSString *)code actionType:(NetmeraUIActionType)type;

@end

NS_ASSUME_NONNULL_END
