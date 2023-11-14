//
//  NetmeraScreenOpenEvent.h
//
//
//

#import <NetmeraCore/NetmeraEvent.h>

@interface NetmeraShowViewEvent : NetmeraEvent

@property (nonatomic, copy, readonly) NSString *code;

+ (instancetype)eventWithCode:(NSString *)code;

@end

