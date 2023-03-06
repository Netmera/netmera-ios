//
//  NetmeraJSONSerializer.h
//  
//
//  Created by Yavuz Nuzumlali on 07/02/2017.
//
//

#import <Foundation/Foundation.h>

@interface NetmeraJSONSerializer : NSObject

+ (NSData *)dataFromDictionary:(NSDictionary *)dict;

+ (NSDictionary *)dictionaryFromData:(NSData *)data;

+(NSString*)jsonStringFromDict:(NSDictionary *)dict withPrettyPrint:(BOOL) prettyPrint;

@end
