//
//  NetmeraBaseVC.h
//  
//
//  Created by Yavuz Nuzumlali on 19/04/16.
//
//

#import <UIKit/UIKit.h>

@class NetmeraPushObject;
@class NetmeraBaseVC;
@protocol NetmeraBaseVCDelegate <NSObject>

- (void)didRequestDismiss:(NetmeraBaseVC *)vc;
- (void)didAutoDismiss:(NetmeraBaseVC *)vc;

@end

@interface NetmeraBaseVC : UIViewController

@property (nonatomic, weak) NSObject<NetmeraBaseVCDelegate> *delegate;
@property (strong, nonatomic) void (^dismissAnimations)(void);
@property (strong, nonatomic) void (^presentationAnimations)(void);

@end
