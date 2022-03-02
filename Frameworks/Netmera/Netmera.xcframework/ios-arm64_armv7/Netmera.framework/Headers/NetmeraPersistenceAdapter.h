//
//  NetmeraDatabaseAdapter.h
//  Pods
//
//  Created by Yavuz Nuzumlali on 10/08/15.
//
//

#import <Foundation/Foundation.h>
#import <NetmeraCore/NetmeraPersistenceModel.h>

@protocol NetmeraPersistenceAdapter <NSObject>

- (void)fetchObjectsWithCompletionBlock:
  (void (^)(NSArray<NSObject<NetmeraPersistenceModel> *> *objects))completionBlock;

- (void)saveObject:(NSObject<NetmeraPersistenceModel> *)object;
- (void)removeObject:(NSObject<NetmeraPersistenceModel> *)object;

- (BOOL)syncSaveObject:(NSObject<NetmeraPersistenceModel> *)object;
@end
