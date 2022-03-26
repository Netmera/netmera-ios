//
//  NetmeraNetworkResponseDeserializing.h
//  Pods
//
//  Created by Yavuz Nuzumlali on 06/08/15.
//
//

#import <Foundation/Foundation.h>

@protocol NetmeraSerializableModel <NSObject>

- (instancetype)initWithDictionary:(NSDictionary *)dict;

- (BOOL)updateWithDictionary:(NSDictionary *)dict;

- (NSDictionary *)dictionaryValue;
- (NSDictionary *)dictionaryValueWithClassInfo;
- (NSDictionary *)dictionaryValueWithPolicy:(BOOL)shouldPutClassInfo;

@end
