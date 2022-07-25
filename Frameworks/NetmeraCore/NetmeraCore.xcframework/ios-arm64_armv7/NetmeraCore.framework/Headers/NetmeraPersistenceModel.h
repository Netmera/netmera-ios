//
//  NetmeraPersistanceModel.h
//  Pods
//
//  Created by Yavuz Nuzumlali on 17/08/15.
//
//

#import <Foundation/Foundation.h>
#import <NetmeraCore/NetmeraSerializableModel.h>

@protocol NetmeraPersistenceModel <NetmeraSerializableModel>

// Store Database Id
@property (nonatomic, strong) NSNumber *storageId;

/**
 *  This property contains storageId values of the objects that this model includes. This value is used by bulk request
 * objects to inform persistence adapter that all actions taken on this object should execute corresponding actions on
 * the contained objects also.
 * For instance, when a bulk request is saved in the persistence store, objects contained by it should be removed from
 * store in order to prevent duplicate scenarios.
 */
@property (nonatomic, strong) NSMutableArray<NSNumber *> *idsContained;

@end
