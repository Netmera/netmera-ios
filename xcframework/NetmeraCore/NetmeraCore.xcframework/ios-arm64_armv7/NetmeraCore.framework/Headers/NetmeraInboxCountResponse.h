//
//  NetmeraInboxCountResponse.h
//  NetmeraCore
//
//

#import <NetmeraCore/NetmeraCore.h>
#import <NetmeraCore/NetmeraBaseResponseModel.h>
#import <NetmeraCore/NetmeraPushObject.h>

@interface NetmeraInboxCountResponse : NetmeraBaseResponseModel

- (NSUInteger)countForStatus:(NetmeraInboxStatus)status;


@end
