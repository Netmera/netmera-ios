//
//  NetmeraSetCategoryPreference.h
//  NetmeraCore
//
//

#import <NetmeraCore/NetmeraCore.h>
#import <NetmeraCore/NetmeraUserCategoryPreference.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetmeraSetUserCategoryRequest : NetmeraBaseRequest

- (instancetype)initWithUserCategoryId:(int)categoryId categoryEnabled:(BOOL)categoryEnabled;

@end

NS_ASSUME_NONNULL_END
