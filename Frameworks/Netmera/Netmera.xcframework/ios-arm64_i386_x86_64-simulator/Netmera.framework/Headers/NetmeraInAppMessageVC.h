//
//  NetmeraInAppMessageVC.h
//  Pods
//
//  Created by Adilcan on 1.06.2017.
//
//

#import <Netmera/NetmeraBaseVC.h>
#import <Netmera/NetmeraActionPerformer.h>

@class NetmeraPushObject;
@class NetmeraInAppMessageVC;
@protocol NetmeraInAppMessageVCDelegate <NetmeraBaseVCDelegate>

- (void)didTap:(NetmeraInAppMessageVC *)vc pushObject:(NetmeraPushObject *)pushObject;

@end
@interface NetmeraInAppMessageVC : NetmeraBaseVC

- (instancetype)initWithObject:(NetmeraPushObject *)object;
@property (nonatomic, weak) NSObject<NetmeraInAppMessageVCDelegate> *delegate;

@end
