//
//  NetmeraUserCategoryPreference.h
//  NetmeraCore
//
//

#import <Foundation/Foundation.h>
#import <NetmeraCore/NetmeraBaseModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetmeraUserCategoryPreference : NetmeraBaseModel

@property (nonatomic, assign) int categoryId;
@property (nonatomic, assign) BOOL categoryEnabled;
@property (nonatomic, copy, readonly) NSString *categoryName;

@end

NS_ASSUME_NONNULL_END
