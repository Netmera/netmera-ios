//
//  NetmeraFetchCategoryOptInResponse.h
//  NetmeraCore
//
//

#import <NetmeraCore/NetmeraCore.h>

@class NetmeraUserCategoryPreference;
@interface NetmeraFetchUserCategoryResponse : NetmeraBaseResponseModel

@property (nonatomic, strong) NSArray<NetmeraUserCategoryPreference *> *categories;

@end

