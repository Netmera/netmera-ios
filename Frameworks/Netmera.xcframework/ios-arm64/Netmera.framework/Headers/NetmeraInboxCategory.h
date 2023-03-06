//
//  NetmeraInboxCategory.h
//  Pods
//
//  Created by inomera on 19.02.2020.
//

#import <Foundation/Foundation.h>
#import <NetmeraCore/NetmeraCore.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetmeraInboxCategory : NSObject

- (instancetype)init NS_UNAVAILABLE;

/**
 @brief List of fetched push object categories.
 
 This list contains all object categories fetched in an aggregated manner.
 
 That is, if you have fetched 3 pages and your page size 20, this list will contain all 60 objects,
 rather than holding the data of only last page.
 */
@property (nonatomic, strong, readonly) NSMutableArray<NetmeraInboxCategoryObject *> *objects;

/// Use this boolean to check if inbox still has next pages to fetch
@property (nonatomic, assign, readonly) BOOL hasNextPage;

/// Number of push object categories to be returned for each page.
@property (nonatomic, assign, readonly) int pageSize;

/**
 @brief Fetch the contents of the next page from Netmera servers.
 
 NetmeraInboxCategory object fetches and stores the list of push object categories incrementally respecting to the @c pageSize value
 of the @c NetmeraInboxCategoryFilter object. Use this method to fetch the list of push object categories belonging to the next page.
 
 Given completion block will be called after fetch operation has finished. If @c error parameter is @c nil, it means
 that the fetch operation has been succeeded.
 
 @note If @c hasNextPage value is NO, this method immediately calls completion block with an appropriate error.
 
 @param completionBlock Block to be called on fetch completion.
 */
- (void)fetchNextPageWithCompletionBlock:(void (^)(NSError *error))completionBlock;


@end

NS_ASSUME_NONNULL_END
