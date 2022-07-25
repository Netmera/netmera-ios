//
//  NetmeraScreenTrackingManager.h
//
//  Created by inomera on 17.01.2020.
//

#import <Foundation/Foundation.h>

extern NSString * const NetmeraUIActionKey;
extern NSString * const NetmeraSendActionNotification;
extern NSString * const NetmeraSendScreenOpenNotification;
extern NSString * const NetmeraSendScreenCloseNotification;


@class NetmeraStateManager;
@class NetmeraAppConfig;
@protocol NetmeraEventSender;
@protocol NetmeraEncryptionProtocol;
@interface NetmeraScreenTrackingManager : NSObject

@property (nonatomic, strong) NSObject<NetmeraEncryptionProtocol> *encryptor;

- (instancetype)initWithEventSender:(NSObject<NetmeraEventSender> *)eventSender
                       stateManager:(NetmeraStateManager *)stateManager;
- (void)performOperationsForConfigUpdate:(BOOL)isConfigNew;

@end

//NS_ASSUME_NONNULL_END
