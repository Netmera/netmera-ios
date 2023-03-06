//
//  NetmeraBaseProductEvent.h
//  
//
//  Created by Yavuz Nuzumlali on 14/05/16.
//
//

#import <NetmeraCore/NetmeraEvent.h>

@class NetmeraProduct;
@interface NetmeraBaseProductEvent : NetmeraEvent

@property (nonatomic, strong, readonly) NetmeraProduct *product;

+ (instancetype)eventWithProduct:(NetmeraProduct *)product;

@end
