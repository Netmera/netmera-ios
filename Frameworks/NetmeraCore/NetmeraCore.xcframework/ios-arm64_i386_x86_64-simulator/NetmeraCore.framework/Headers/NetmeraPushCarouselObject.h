//
//  NetmeraPushCarouselObject.h
//  Pods
//
//  Created by inomera on 17.09.2020.
//

#import <Foundation/Foundation.h>
#import <NetmeraCore/NetmeraBaseModel.h>

@interface NetmeraPushCarouselObject : NetmeraBaseModel

@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *itemId;
@property (nonatomic, copy) NSString *mediaUrl;
@property (nonatomic, copy) NSDictionary *actionDictionary;

@end
