//
//  ViewActionTestEvent.h
//  
//
//

#import <NetmeraCore/NetmeraEvent.h>
#import <NetmeraCore/NetmeraUIActionType.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetmeraViewActionTestEvent : NetmeraEvent

@property(nonatomic, copy, readonly) NSString *path;
@property(nonatomic, assign, readonly) NetmeraUIActionType actionType;

+ (instancetype)eventWithPath:(NSString *)path actionType:(NetmeraUIActionType)type;

@end

NS_ASSUME_NONNULL_END
