//
//  NetmeraOrderCancelEvent.h
//  Pods
//
//  Created by Yavuz Nuzumlali on 04/09/15.
//
//

#import <NetmeraCore/NetmeraEvent.h>

@interface NetmeraOrderCancelEvent : NetmeraEvent

@property (nonatomic, assign, readonly) double subTotal;
@property (nonatomic, assign, readonly) double grandTotal;
@property (nonatomic, assign, readonly) NSUInteger itemCount;
@property (nonatomic, copy) NSString *paymentMethod;

+ (instancetype)eventWithSubTotal:(double)subTotal grandTotal:(double)grandTotal itemCount:(NSUInteger)itemCount;

@end
