//
//  NetmeraAction.h
//
//
//  Created by Yavuz Nuzumlali on 22/10/15.
//
//

#import <NetmeraCore/NetmeraBaseModel.h>

typedef NS_ENUM(NSUInteger, NetmeraActionType) {
  NetmeraActionTypeOpenApp = 0, // default
  NetmeraActionTypeOpenDeepLink = 1,
  NetmeraActionTypeShowWebView = 2,
  NetmeraActionTypeDoNothing = 3,
  NetmeraActionTypeSendEvent = 4,
  NetmeraActionTypeShare = 5,
  NetmeraActionTypeReview = 6
};

/**
 *  This class is an abstract class cluster which manages initialization of subclasses
 *	corresponding to different action types.
 */
@interface NetmeraAction : NetmeraBaseModel

@end
