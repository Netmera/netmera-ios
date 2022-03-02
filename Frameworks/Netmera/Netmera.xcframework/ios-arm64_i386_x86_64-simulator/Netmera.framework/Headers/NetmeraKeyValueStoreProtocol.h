//
//  NetmeraKeyValueStoreProtocol.h
//  
//
//  Created by Yavuz Nuzumlali on 03/03/16.
//
//

#import <Foundation/Foundation.h>

@protocol NetmeraKeyValueStoreProtocol <NSObject>

- (void)saveObject:(id)object forKey:(NSString *)key;
- (id)objectForKey:(NSString *)key;

@end
