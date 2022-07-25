//
//  NetmeraCartRemoveProductEvent.h
//  Pods
//
//  Created by Yavuz Nuzumlali on 04/09/15.
//
//

#import <NetmeraCore/NetmeraBaseProductEvent.h>

@interface NetmeraCartRemoveProductEvent : NetmeraBaseProductEvent

@property (nonatomic, assign, readonly) NSUInteger count;

+ (instancetype)eventWithProduct:(NetmeraProduct *)product count:(NSUInteger)productCount;

@end
