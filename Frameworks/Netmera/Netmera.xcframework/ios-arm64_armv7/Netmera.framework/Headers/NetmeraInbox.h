//
//  NetmeraInbox.h
//
//
//  Created by Yavuz Nuzumlali on 01/12/15.
//
//

#import <Foundation/Foundation.h>
#import <NetmeraCore/NetmeraPushObject.h>

NS_ASSUME_NONNULL_BEGIN

/**
 This class provides methods and properties needed after initial fetch of the list of push notifications with
 given filter. Filter properties of an inbox instance could not be changed. If you need modified filter properties,
 you have to start a new fetch operation using [Netmera fetchInboxUsingFilter:completion:] method.
 */
@interface NetmeraInbox : NSObject

- (instancetype)init NS_UNAVAILABLE;

/**
 @brief List of fetched push objects.
 
 This list contains all objects fetched in an aggregated manner. 
 
 That is, if you have fetched 3 pages and your page size 20, this list will contain all 60 objects, 
 rather than holding the data of only last page.
 */
@property (nonatomic, strong, readonly) NSMutableArray<NetmeraPushObject *> *objects;

/// Use this boolean to check if inbox still has next pages to fetch
@property (nonatomic, assign, readonly) BOOL hasNextPage;

/// Number of push objects to be returned for each page.
@property (nonatomic, assign, readonly) int pageSize;

/**
 @brief Returns count of objects matching with given status options.
 
 You can combine different status types using @c OR @c (`|`) operator.
 
 @param status Status types to include while calculating count.
 @return NSUInteger Number of objects matching with any of the given status types.
 */
- (NSUInteger)countForStatus:(NetmeraInboxStatus)status;

/**
 @brief Fetch the contents of the next page from Netmera servers.
 
 NetmeraInbox object fetches and stores the list of push objects incrementally respecting to the @c pageSize value
 of the @c NetmeraInboxFilter object. Use this method to fetch the list of push objects belonging to the next page.
 
 Given completion block will be called after fetch operation has finished. If @c error parameter is @c nil, it means
 that the fetch operation has been succeeded.
 
 @note If @c hasNextPage value is NO, this method immediately calls completion block with an appropriate error.
 
 @param completionBlock Block to be called on fetch completion.
 */
- (void)fetchNextPageWithCompletionBlock:(void (^)(NSError *error))completionBlock;

/**
 Update status of given push objects.
 
 Calling this method will update the inbox status of given push objects, and result will be informed via given
 completion block. A @c nil @c error value means operation succeeded.
 
 Setting multiple status options to status parameter will result in an immediate error.
 
 @param status Status option to be set upon given push objects.
 @param objects The list of push objects whose status will be updated.
 @param completionBlock Block to be called on update completion.
 */
- (void)updateStatus:(NetmeraInboxStatus)status
      forPushObjects:(NSArray<NetmeraPushObject *> *)objects
          completion:(void (^)(NSError *error))completionBlock;

@end

NS_ASSUME_NONNULL_END
