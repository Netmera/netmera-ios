//
//  NetmeraPushDelegate.h
//
//
//  Created by Yavuz Nuzumlali on 15/12/15.
//
//

@class NetmeraPushObject;
@protocol NetmeraPushDelegate <NSObject>

@optional

/**
 @brief Implement in order to decide if you will handle web view presentation for a particular push
 
 You can decide if you will handle presentation of web view content for a particular push object using this method.
 
 @note If you do not implement this method and implement -handleWebViewPresentationForPushObject: method, 
 SDK will assume that you want to handle web view presentation for all received push notifications.
 */
- (BOOL)shouldHandleWebViewPresentationForPushObject:(NetmeraPushObject *)object;

/**
 @brief Implement in order to provide custom web view presentation

 This delegate method gives developers ability to provide their custom web view presentation for push notifications
 having web view actions. You must call [Netmera loadWebViewContentInWebView:] method inside this method's
 implementation with a @c WKWebView object.

 Netmera will load the contents of the web view action inside given @c WKWebView object.

 @warning If you need to be notified about WKWebViewDelegate methods, you @b must set your delegate object onto given
 web view object @b before calling @c -loadWebViewContentInWebView: method.
 */
- (void)handleWebViewPresentationForPushObject:(NetmeraPushObject *)object;

/**
 @brief Implement in order to decide if you will handle presentation for a particular push

 You can decide if you will handle presentation of a particular push object using this method.

 @note If you do not implement this method and implement -handlePresentationForPushObject: method,
 SDK will assume that you want to handle presentation for all received push notifications.
 */
- (BOOL)shouldHandlePresentationForPushObject:(NetmeraPushObject *)object;

/**
 @brief Implement in order to provide custom presentation for received push notifications

 This delegate method gives developers ability to provide their custom UI for presenting push notifications 
 received in foreground. You must trigger your custom presentation logic inside this method.
 */
- (void)handlePresentationForPushObject:(NetmeraPushObject *)object;

/**
@brief Implement in order to decide if you will handle application:openUrl  for a particular push

You can decide if you will handle deeplink or universal link  of a particular push object using this method.

@note If you do not implement this method and implement -shouldHandleOpenUrl:forPushObject: method,
SDK will assume that you want to handle deeplink or universal link for all received push notifications.
*/
- (BOOL)shouldHandleOpenURL:(NSURL *)url forPushObject:(NetmeraPushObject *)object;

/**
 @brief Implement in order to detect openUrl for received push notifications

 This delegate method gives developers ability to get url for handling push notifications
 received in foreground. You must trigger your custom openURL logic inside this method.
 */
- (void)handleOpenURL:(NSURL *)url forPushObject:(NetmeraPushObject *)object;

@end
