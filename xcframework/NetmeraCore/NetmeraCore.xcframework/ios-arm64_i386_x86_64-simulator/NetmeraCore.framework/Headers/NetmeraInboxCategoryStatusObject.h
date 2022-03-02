//
//  NetmeraInboxCategoryStatusObject.h
//  Pods
//
//  Created by inomera on 19.02.2020.
//

#import <NetmeraCore/NetmeraBaseModel.h>

@interface NetmeraInboxCategoryStatusObject : NetmeraBaseModel

@property (nonatomic, assign, readonly) NSInteger readCount;
@property (nonatomic, assign, readonly) NSInteger unreadCount;
@property (nonatomic, assign, readonly) NSInteger deletedCount;

@end

