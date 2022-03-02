//
//  NetmeraProductRateEvent.h
//  Pods
//
//  Created by Yavuz Nuzumlali on 03/09/15.
//
//

#import <NetmeraCore/NetmeraBaseProductEvent.h>

@interface NetmeraProductRateEvent : NetmeraBaseProductEvent

@property (nonatomic, assign, readonly) NSUInteger rating;

+ (instancetype)eventWithProduct:(NetmeraProduct *)product rating:(NSUInteger)rating;

@end
