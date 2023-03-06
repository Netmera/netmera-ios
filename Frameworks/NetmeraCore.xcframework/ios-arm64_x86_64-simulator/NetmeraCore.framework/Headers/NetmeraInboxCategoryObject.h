//
//  NetmeraInboxCategoryObject.h
//  Pods
//
//  Created by inomera on 19.02.2020.
//

#import <NetmeraCore/NetmeraBaseModel.h>
#import "NetmeraInboxCategoryStatusObject.h"

@class NetmeraPushObject;
@interface NetmeraInboxCategoryObject : NetmeraBaseModel

@property (nonatomic, copy, readonly) NSString *categoryName;
@property (nonatomic, copy) NetmeraInboxCategoryStatusObject *status;
@property (nonatomic, copy, readonly) NetmeraPushObject *lastMessage;
@property (nonatomic, copy, readonly) NSDate *creationDate;

@end
