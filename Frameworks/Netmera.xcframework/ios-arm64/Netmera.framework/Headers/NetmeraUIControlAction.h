//
//  NetmeraUIControlAction.h
//  Netmera.default-Core
//
//  Created by Netmera on 23.01.2021.
//

#import <Foundation/Foundation.h>
#import <NetmeraCore/NetmeraUIActionType.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetmeraUIControlAction : NSObject

@property(nonatomic, strong) NSString *itemId;
@property(nonatomic, strong) NSString *value;
@property(nonatomic, assign) NetmeraUIActionType actionType;

@end

NS_ASSUME_NONNULL_END
