//
//  NetmeraInboxCountFilter.h
//  NetmeraCore
//
//  Created by Muhammed Kılınç on 13.02.2022.
//

#import <NetmeraCore/NetmeraBaseModel.h>
#import <NetmeraCore/NetmeraPushObject.h>

/**
 This class contains all available filtering options to be used while interacting with user's inbox.
 */
@interface NetmeraInboxCountFilter : NetmeraBaseModel

/**
 @brief Set of status options to be included. Multiple statuses can be combined with @c OR operator.

 Returned inbox will only contain push objects whose inbox status matches with one of given statuses.
 */
@property (nonatomic, assign) NetmeraInboxStatus status;

/**
 @brief List of categories to be included.

 Returned inbox will only contain push objects whose category matches with one of given list of categories.
 */
@property (nonatomic, strong) NSArray<NSNumber *> *categories;

/**
 @brief BOOL value determining whether expired push notifications should be included or not.

 Default value is @c NO.
 */
@property (nonatomic, assign) BOOL shouldIncludeExpiredObjects;

@end
