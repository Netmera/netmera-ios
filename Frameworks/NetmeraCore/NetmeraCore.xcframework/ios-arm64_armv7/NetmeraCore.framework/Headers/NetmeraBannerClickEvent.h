//
//  NetmeraBannerClickEvent.h
//  Pods
//
//  Created by Yavuz Nuzumlali on 04/09/15.
//
//

#import <NetmeraCore/NetmeraEvent.h>

@interface NetmeraBannerClickEvent : NetmeraEvent

@property (nonatomic, copy, readonly) NSString *bannerId;
@property (nonatomic, strong) NSArray<NSString *> *keywords;

+ (instancetype)eventWithBannerId:(NSString *)bannerId;

@end
