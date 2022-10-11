//
//  NetmeraScreenViewEvent.h
//  AFNetworking
//
//  Created by inomera on 16.04.2019.
//

#import <NetmeraCore/NetmeraEvent.h>

@interface NetmeraScreenViewEvent : NetmeraEvent

@property (nonatomic, copy) NSString *pageId;
@property (nonatomic, copy) NSString *referrerPageId;
@property (nonatomic, copy) NSString *referrerPageName;
@property (nonatomic, assign) double timeInPage;
@property (nonatomic, copy) NSString *pageName;
@property (nonatomic, strong) NSArray<NSString *> *keywords;
@property (nonatomic, strong) NSMutableDictionary<NSString *, NSString *> *formInfo;

+ (instancetype)eventWithId:(NSString *)pageId referrerPageId:(NSString *)referrerPageId referrerPageName:(NSString *)referrerPageName timeInPage:(double)timeInPage pageName:(NSString *)pageName;

@end

