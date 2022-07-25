//
//  NetmeraWishListEvent.h
//  AFNetworking
//
//  Created by inomera on 17.04.2019.
//

#import <NetmeraCore/NetmeraBaseProductEvent.h>

@interface NetmeraWishListEvent : NetmeraBaseProductEvent

@property (nonatomic, copy) NSString *campaignId;

+ (instancetype)eventWithProduct:(NetmeraProduct *)product campaignId:(NSString *)campaignId;

@end

