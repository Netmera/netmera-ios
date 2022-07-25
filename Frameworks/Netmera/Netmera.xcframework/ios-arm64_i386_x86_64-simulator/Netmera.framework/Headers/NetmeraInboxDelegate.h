//
//  NetmeraInboxDelegate.h
//
//
//  Created by Yavuz Nuzumlali on 04/12/15.
//
//

#import <Foundation/Foundation.h>

@protocol NetmeraInboxDelegate <NSObject>

- (void)unreadPushCountDidChange:(NSUInteger)unreadCount;

@end
