//
//  NMViewControllerInfo.h
//
//  Created by inomera on 12.12.2019.
//  Copyright © 2019 inomera. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NMViewControllerInfo : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *parentName;
@property (nonatomic, strong) NSString *pageId;
@property (nonatomic, strong) NSString *parentId;
@property (nonatomic, strong) NSDate *appearDate;
@property (nonatomic, strong) NSDate *disappearDate;
@property (nonatomic, strong) NSString *identifier;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL isExist;
@property (nonatomic, strong) NSArray<NMViewControllerInfo*> *childs;
@property (nonatomic, strong) NSArray<NMViewControllerInfo*> *parentChilds;

- (instancetype)initWithName:(NSString *)name pageId:(NSString *)pageId parentName:(NSString *)parentName parentId:(NSString *)parentId appearDate:(NSDate *)appearDate;

-(NSString *)getPageName;
-(NSString *)getParentName;

@end

