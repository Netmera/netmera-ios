//
//  NetmeraKeyValueStore.h
//
//
//  Created by Yavuz Nuzumlali on 11/09/15.
//
//

#import <Foundation/Foundation.h>
#import <Netmera/NetmeraKeyValueStoreProtocol.h>

typedef NS_ENUM(NSUInteger, NetmeraKeyValueStoreLocation) {
  NetmeraKeyValueStoreLocationUserDefaults,
  NetmeraKeyValueStoreLocationKeychain,
};

@interface NetmeraKeyValueStore : NSObject <NetmeraKeyValueStoreProtocol>

@property (nonatomic, assign) NSTimeInterval expirationTimeInterval;

- (void)saveObject:(id)object forKey:(NSString *)key location:(NetmeraKeyValueStoreLocation)location;
- (id)objectForKey:(NSString *)key location:(NetmeraKeyValueStoreLocation)location;

@end
