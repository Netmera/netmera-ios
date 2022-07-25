//
//  NetmeraActionPerformer.h
//
//
//  Created by Yavuz Nuzumlali on 26/11/15.
//
//

#import <Foundation/Foundation.h>

@class NetmeraPushObject;
@protocol NetmeraActionPerformer <NSObject>

- (void)performActionWithDictionary:(NSDictionary *)actionDictionary;
- (BOOL)performActionWithDictionary:(NSDictionary *)actionDictionary forPushObject:(NetmeraPushObject *)object;

@end
