//
//  NetmeraEventContent.h
//  Pods
//
//  Created by Yavuz Nuzumlali on 02/09/15.
//
//

#import <NetmeraCore/NetmeraBaseModel.h>

typedef NS_ENUM(NSUInteger, NetmeraEventContentType) {
  NetmeraEventContentTypeOther = 0,
  NetmeraEventContentTypeImage = 1,
  NetmeraEventContentTypeAudio = 2,
  NetmeraEventContentTypeVideo = 3,
  NetmeraEventContentTypeText = 4
};

@interface NetmeraContent : NetmeraBaseModel

@property (nonatomic, copy, readonly) NSString *contentId;
@property (nonatomic, copy, readonly) NSString *contentName;
@property (nonatomic, assign, readonly) NetmeraEventContentType contentType;
@property (nonatomic, strong) NSArray<NSString *> *categoryIds;
@property (nonatomic, strong) NSArray<NSString *> *categoryNames;
@property (nonatomic, copy) NSString *provider;
@property (nonatomic, strong) NSArray<NSString *> *keywords;

+ (instancetype)contentWithId:(NSString *)contentId name:(NSString *)contentName  type:(NetmeraEventContentType)contentType;

@end
