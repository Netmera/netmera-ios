//
//  NetmeraSQLiteAdapter.h
//  Pods
//
//  Created by Yavuz Nuzumlali on 10/08/15.
//
//

#import <Foundation/Foundation.h>
#import "NetmeraPersistenceAdapter.h"

extern NSString *const kNetmeraDefaultDBPath;
@interface NetmeraSQLiteAdapter : NSObject <NetmeraPersistenceAdapter>

- (instancetype)initWithPath:(NSString *)path NS_DESIGNATED_INITIALIZER;

- (void)purgeDatabase;

@end
