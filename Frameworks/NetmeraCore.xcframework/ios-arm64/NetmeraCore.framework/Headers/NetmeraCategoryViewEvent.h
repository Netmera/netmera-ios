//
//  NetmeraCategoryViewEvent.h
//  
//
//  Created by Yavuz Nuzumlali on 06/05/16.
//
//

#import <NetmeraCore/NetmeraEvent.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetmeraCategoryViewEvent : NetmeraEvent

@property (nonatomic, copy, readonly) NSString *categoryId;
@property (nonatomic, copy, readonly) NSString *categoryName;

+ (instancetype)eventWithCategoryId:(NSString *)categoryId categoryName:(NSString *)categoryName;

@end

NS_ASSUME_NONNULL_END
