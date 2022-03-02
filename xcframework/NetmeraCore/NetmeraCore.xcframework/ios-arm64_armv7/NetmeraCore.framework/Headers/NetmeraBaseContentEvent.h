//
//  NetmeraBaseContentEvent.h
//  
//
//  Created by Yavuz Nuzumlali on 14/05/16.
//
//

#import <NetmeraCore/NetmeraEvent.h>

@class NetmeraContent;
@interface NetmeraBaseContentEvent : NetmeraEvent

@property (nonatomic, strong, readonly) NetmeraContent *content;

+ (instancetype)eventWithContent:(NetmeraContent *)content;

@end
