//
//  NetmeraInboxCategoryFilter.h
//  Pods
//
//  Created by inomera on 19.02.2020.
//

#import <Foundation/Foundation.h>
#import <NetmeraCore/NetmeraBaseModel.h>
#import <NetmeraCore/NetmeraPushObject.h>

NS_ASSUME_NONNULL_BEGIN

/**
This class contains all available filtering options to be used while interacting with user's inbox categories.
*/
@interface NetmeraInboxCategoryFilter : NetmeraBaseModel
/**
 @brief Set of status options to be included. Multiple statuses can be combined with @c OR operator.
 
 Returned inbox will only contain push object categories whose inbox status matches with one of given statuses.
 */
@property (nonatomic, assign) NetmeraInboxStatus status;

/**
 @brief Number of object categories to be included in a page of the fetch operation.

 Default value is @c NSUIntegerMax.
 */
@property (nonatomic, assign) int pageSize;

/**
 @brief BOOL value determining whether expired push notification categories should be included or not.
 
 Default value is @c NO.
 */
@property (nonatomic, assign) BOOL shouldIncludeExpiredObjects;

@end

NS_ASSUME_NONNULL_END
