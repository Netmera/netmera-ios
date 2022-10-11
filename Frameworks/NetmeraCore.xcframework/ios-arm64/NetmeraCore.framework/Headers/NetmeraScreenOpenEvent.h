//
//  NetmeraScreenOpenEvent.h
//  AFNetworking
//
//  Created by inomera on 26.12.2019.
//

#import <NetmeraCore/NetmeraEvent.h>

@interface NetmeraScreenOpenEvent : NetmeraEvent

@property (nonatomic, copy) NSString *pageId;
@property (nonatomic, copy) NSString *prevPageId;
@property (nonatomic, strong) NSArray<NSString *> *viewList;
@property (nonatomic, strong) NSArray<NSString *> *prevViewList;

+ (instancetype)eventWithId:(NSString *)pageId prevPageId:(NSString *)prevPageId;

@end

