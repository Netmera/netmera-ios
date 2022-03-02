//
//  NetmeraEncryptionProtocol.h
//  Pods
//
//  Created by inomera on 27.03.2020.
//

#import <Foundation/Foundation.h>

@protocol NetmeraEncryptionProtocol <NSObject>

- (NSString *)encryptValue:(NSString *)value;

@end
