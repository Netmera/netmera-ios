//
//  NetmeraUIAction.h
//  Pods
//
//  Created by inomera on 13.03.2020.
//

#import <NetmeraCore/NetmeraBaseModel.h>

@interface NetmeraUIAction : NetmeraBaseModel

@property (nonatomic, strong) NSString *item;
@property (nonatomic, assign) BOOL valueEnabled;
@property (nonatomic, assign) BOOL privateEnabled;

@end
