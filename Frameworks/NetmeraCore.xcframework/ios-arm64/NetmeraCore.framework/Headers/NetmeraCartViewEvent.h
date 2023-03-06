//
//  NetmeraCartViewEvent.h
//  Pods
//
//  Created by Yavuz Nuzumlali on 04/09/15.
//
//

#import <NetmeraCore/NetmeraEvent.h>

@interface NetmeraCartViewEvent : NetmeraEvent

@property (nonatomic, assign, readonly) double subTotal;
@property (nonatomic, assign, readonly) NSUInteger itemCount;

+ (instancetype)eventWithSubTotal:(double)subTotal itemCount:(NSUInteger)itemCount;

@end
