//
//  NetmeraKeyValueStoreObject.h
//  
//
//  Created by Yavuz Nuzumlali on 06/02/2017.
//
//

#import <NetmeraCore/NetmeraBaseModel.h>

@interface NetmeraKeyValueStoreObject : NetmeraBaseModel

@property (nonatomic, strong, readonly) NSDate *creationDate;
@property (nonatomic, strong, readonly) id value;

+ (instancetype)objectWithValue:(id)value;

@end
