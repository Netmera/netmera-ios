//
//  NetmeraFetchCategoryOptInResponse.h
//  NetmeraCore
//
//

#import <NetmeraCore/NetmeraBaseResponseModel.h>

@class NetmeraUserCategoryPreference;
@interface NetmeraFetchUserCategoryResponse : NetmeraBaseResponseModel

@property (nonatomic, strong) NSArray<NetmeraUserCategoryPreference *> *categories;

@end

