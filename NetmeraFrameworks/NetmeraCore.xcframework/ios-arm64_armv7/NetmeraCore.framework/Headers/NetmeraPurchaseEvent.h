//
//  NetmeraPurchaseEvent.h
//  Pods
//
//  Created by Yavuz Nuzumlali on 04/09/15.
//
//

#import <NetmeraCore/NetmeraEvent.h>

@class NetmeraLineItem;
@interface NetmeraPurchaseEvent : NetmeraEvent

@property (nonatomic, assign, readonly) double subTotal;
@property (nonatomic, assign, readonly) double grandTotal;
@property (nonatomic, strong, readonly) NSArray<NetmeraLineItem *> *lineItems;
@property (nonatomic, copy) NSString *paymentMethod;
@property (nonatomic, assign) double shippingCost;
@property (nonatomic, assign) double discount;
@property (nonatomic, copy) NSString *coupon;

+ (instancetype)eventWithSubTotal:(double)subTotal
                       grandTotal:(double)grandTotal
                        lineItems:(NSArray<NetmeraLineItem *> *)lineItems;

@end
