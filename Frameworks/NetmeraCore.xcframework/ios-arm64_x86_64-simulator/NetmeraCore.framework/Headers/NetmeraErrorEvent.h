//
//  NetmeraErrorEvent.h
//  
//
//  Created by Adilcan on 14.12.2017.
//

#import <NetmeraCore/NetmeraEvent.h>

@interface NetmeraErrorEvent : NetmeraEvent

+ (instancetype)eventWithErrorMessage:(NSString *)message events:(NSArray *)events;

@end

