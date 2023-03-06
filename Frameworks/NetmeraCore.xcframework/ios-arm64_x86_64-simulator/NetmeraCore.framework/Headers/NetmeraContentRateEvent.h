//
//  NetmeraContentRateEvent.h
//  Pods
//
//  Created by Yavuz Nuzumlali on 03/09/15.
//
//

#import <NetmeraCore/NetmeraBaseContentEvent.h>

@interface NetmeraContentRateEvent : NetmeraBaseContentEvent

@property (nonatomic, assign, readonly) NSUInteger rating;

+ (instancetype)eventWithContent:(NetmeraContent *)content rating:(NSUInteger)rating;

@end
