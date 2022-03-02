//
//  NetmeraPushObjectAction.h
//
//
//  Created by Adilcan on 29.06.2017.
//
//

#import <NetmeraCore/NetmeraBaseModel.h>

@interface NetmeraPushObjectAction : NetmeraBaseModel

@property (nonatomic, strong) NSString *deeplinkURLString;
@property (nonatomic, strong) NSURL *deeplinkURL;

- (instancetype)initWithValue:(id)value;
- (void)setDeeplinkURLAsURL;

@end
