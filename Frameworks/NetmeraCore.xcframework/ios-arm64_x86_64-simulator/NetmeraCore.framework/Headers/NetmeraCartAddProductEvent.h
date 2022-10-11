//
//  NetmeraCartAddProductEvent.h
//  Pods
//
//  Created by Yavuz Nuzumlali on 04/09/15.
//
//

#import <NetmeraCore/NetmeraBaseProductEvent.h>

@interface NetmeraCartAddProductEvent : NetmeraBaseProductEvent

@property (nonatomic, assign, readonly) NSUInteger count;
@property (nonatomic, assign, readonly) double basketTotal;

+ (instancetype)eventWithProduct:(NetmeraProduct *)product count:(NSUInteger)productCount basketTotal:(double)basketTotal;

@end
