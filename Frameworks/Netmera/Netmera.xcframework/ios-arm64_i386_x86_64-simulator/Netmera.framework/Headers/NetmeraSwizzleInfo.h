//
//  NetmeraSwizzleInfo.h
//  Pods
//
//  Created by inomera on 11.02.2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetmeraSwizzleInfo : NSObject

@property (nonatomic, assign) SEL selector;
@property (nonatomic, assign) IMP implementation;
@property (nonatomic, strong) NSString *typeEncoding;

+ (instancetype)infoWithSelector:(SEL)selector implementation:(IMP)implementation typeEncoding:(NSString *)encoding;

@end

NS_ASSUME_NONNULL_END





