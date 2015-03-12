/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class <PKPaymentAuthorizationServiceProtocol>, NSString, PKPaymentAuthorizationRemoteAlertViewController;

@interface PKPaymentAuthorizationRemoteAlertViewControllerExportedObject : NSObject <PKPaymentAuthorizationServiceProtocol> {
    PKPaymentAuthorizationRemoteAlertViewController *_controller;
    <PKPaymentAuthorizationServiceProtocol> *_delegate;
}

@property PKPaymentAuthorizationRemoteAlertViewController * controller;
@property(copy,readonly) NSString * debugDescription;
@property <PKPaymentAuthorizationServiceProtocol> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)authorizationDidAuthorizePaymentCompleteWithStatus:(int)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithStatus:(int)arg1 shippingMethods:(id)arg2 paymentSummaryItems:(id)arg3;
- (void)authorizationDidSelectShippingMethodCompleteWithStatus:(int)arg1 paymentSummaryItems:(id)arg2;
- (id)controller;
- (id)delegate;
- (void)handleDismissWithCompletion:(id)arg1;
- (void)handleHostApplicationDidBecomeActive;
- (void)handleHostApplicationDidCancel;
- (void)handleHostApplicationWillResignActive:(BOOL)arg1;
- (id)initWithController:(id)arg1;
- (void)setController:(id)arg1;
- (void)setDelegate:(id)arg1;

@end