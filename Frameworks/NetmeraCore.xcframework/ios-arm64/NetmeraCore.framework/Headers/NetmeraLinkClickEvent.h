//
//  NetmeraLinkClickEvent.h
//  Pods
//
//  Created by inomera on 2.11.2020.
//

#import <NetmeraCore/NetmeraEvent.h>

@interface NetmeraLinkClickEvent : NetmeraEvent

@property(nonatomic, copy) NSString *source;

@property(nonatomic, copy) NSString *campaignId;

@property(nonatomic, copy) NSString *campaignName;

@property(nonatomic, copy) NSString *medium;

@end
