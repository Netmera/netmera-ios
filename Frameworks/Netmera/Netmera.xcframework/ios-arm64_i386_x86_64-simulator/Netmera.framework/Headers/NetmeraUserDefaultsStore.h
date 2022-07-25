//
//  NetmeraUserDefaultsStorage.h
//
//
//  Created by Yavuz Nuzumlali on 11/09/15.
//
//

#import <Foundation/Foundation.h>
#import <Netmera/NetmeraKeyValueStoreProtocol.h>

@interface NetmeraUserDefaultsStore: NSObject <NetmeraKeyValueStoreProtocol>

@property (nonatomic, assign) NSTimeInterval expirationTimeInterval;

@end
