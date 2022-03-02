//
//  NetmeraInboxResponse.h
//
//
//  Created by Yavuz Nuzumlali on 01/12/15.
//
//

#import <NetmeraCore/NetmeraBaseResponseModel.h>

@class NetmeraPushObject;
@interface NetmeraInboxResponse : NetmeraBaseResponseModel

@property (nonatomic, strong) NSArray<NetmeraPushObject *> *objects;
@property (nonatomic, strong) NSDictionary *counts;
@property (nonatomic, strong) NSDictionary *pagingParams;

@end
