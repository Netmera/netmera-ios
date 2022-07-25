//
//  NetmeraEventProduct.h
//  Pods
//
//  Created by Yavuz Nuzumlali on 02/09/15.
//
//

#import <NetmeraCore/NetmeraBaseModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetmeraProduct : NetmeraBaseModel

@property (nonatomic, copy, readonly) NSString *productId;
@property (nonatomic, copy, readonly) NSString *productName;
@property (nonatomic, assign, readonly) double price;
@property (nonatomic, strong) NSArray<NSString *> *categoryIds;
@property (nonatomic, strong) NSArray<NSString *> *categoryNames;
@property (nonatomic, copy) NSString *brandId;
@property (nonatomic, copy) NSString *brandName;
@property (nonatomic, copy) NSString *variant;
@property (nonatomic, strong) NSArray<NSString *> *keywords;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)productWithId:(NSString *)productId name:(NSString *)productName price:(double)price;

@end

NS_ASSUME_NONNULL_END
