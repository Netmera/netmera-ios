//
//  NetmeraFetchInboxCategoryRequest.h
//  Pods
//
//  Created by inomera on 19.02.2020.
//

#import <NetmeraCore/NetmeraBaseRequest.h>
#import <NetmeraCore/NetmeraInboxCategoryFilter.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetmeraFetchInboxCategoryRequest : NetmeraBaseRequest

- (instancetype)initWithFilter:(NetmeraInboxCategoryFilter *)filter;

@end

NS_ASSUME_NONNULL_END
