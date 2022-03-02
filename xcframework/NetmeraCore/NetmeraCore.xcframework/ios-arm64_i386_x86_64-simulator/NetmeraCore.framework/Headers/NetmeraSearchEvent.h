//
//  NetmeraSearchEvent.h
//  Pods
//
//  Created by Yavuz Nuzumlali on 03/09/15.
//
//

#import <NetmeraCore/NetmeraEvent.h>

@interface NetmeraSearchEvent : NetmeraEvent

@property (nonatomic, copy, readonly) NSString *query;
@property (nonatomic, assign, readonly) NSUInteger resultCount;

+ (instancetype)eventWithQuery:(NSString *)query resultCount:(NSUInteger)resultCount;

@end
