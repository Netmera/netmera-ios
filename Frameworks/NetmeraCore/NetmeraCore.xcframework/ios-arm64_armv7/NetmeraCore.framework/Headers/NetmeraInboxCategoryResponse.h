//
//  NetmeraInboxCategoryResponse.h
//  Pods
//
//  Created by inomera on 19.02.2020.
//

#import <NetmeraCore/NetmeraBaseResponseModel.h>
#import <NetmeraCore/NetmeraInboxCategoryObject.h>

@interface NetmeraInboxCategoryResponse : NetmeraBaseResponseModel

@property (nonatomic, strong) NSArray<NetmeraInboxCategoryObject *> *objects;
@property (nonatomic, strong) NSDictionary *pagingParams;

@end
