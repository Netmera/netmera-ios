//
//  NetmeraLineItem.h
//  Pods
//
//  Created by Yavuz Nuzumlali on 02/09/15.
//
//

#import <NetmeraCore/NetmeraProduct.h>

@interface NetmeraLineItem : NetmeraProduct

@property (nonatomic, assign, readonly) NSUInteger count;
@property (nonatomic, copy) NSString *campaignId;

+ (instancetype)itemWithId:(NSString *)productId
                      name:(NSString *)productName
                     price:(double)price
                     count:(NSUInteger)count;

@end
