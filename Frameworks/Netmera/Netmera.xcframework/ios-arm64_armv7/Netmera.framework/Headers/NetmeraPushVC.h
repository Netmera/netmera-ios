//
//  NetmeraPushVC.h
//
//
//  Created by Yavuz Nuzumlali on 06/11/15.
//
//

#import <Netmera/NetmeraBaseVC.h>

@class NetmeraPushObject;
@class NetmeraPushVC;
@protocol NetmeraPushVCDelegate <NetmeraBaseVCDelegate>

- (void)didRequestFullPresentation:(NetmeraPushVC *)vc;
- (void)didTap:(NetmeraPushVC *)vc pushObject:(NetmeraPushObject *)pushObject;
- (void)didTap:(NetmeraPushVC *)vc pushObject:(NetmeraPushObject *)pushObject buttonAtIndex:(NSUInteger)index;

@end

@interface NetmeraPushVC : NetmeraBaseVC

- (instancetype)initWithPushObject:(NetmeraPushObject *)pushObject;

@property (weak, nonatomic) NSLayoutConstraint *heightConstraint;

@property (nonatomic, weak) NSObject<NetmeraPushVCDelegate> *delegate;

@end
