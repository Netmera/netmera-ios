//
//  NetmeraScreenCloseEvent.h
//
//
//

#import <NetmeraCore/NetmeraEvent.h>

@interface NetmeraShowViewTestEvent : NetmeraEvent

@property (nonatomic, copy, readonly) NSString *path;

+ (instancetype)eventWithPath:(NSString *)path;

@end


