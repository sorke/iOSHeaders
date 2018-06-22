//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIRemoteAlertServiceViewController.h"

#import "PKCompactNavigationContainerControllerDelegate.h"
#import "PKPaymentAuthorizationHostProtocol.h"
#import "PKPaymentAuthorizationServiceViewControllerDelegate.h"
#import "PKPaymentSetupDelegate.h"
#import "SBSHardwareButtonEventConsuming.h"

@class LAUIPhysicalButtonView, NSString, NSXPCConnection, PKAssertion, PKCompactNavigationContainerController, PKInAppPaymentService, PKPaymentAuthorizationRemoteAlertViewControllerExportedObject, PKPaymentAuthorizationServiceNavigationController, PKPaymentProvisioningController, PKPaymentRequest, PKPaymentSetupNavigationController;

@interface PKPaymentAuthorizationRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKCompactNavigationContainerControllerDelegate, PKPaymentAuthorizationServiceViewControllerDelegate, PKPaymentAuthorizationHostProtocol, PKPaymentSetupDelegate, SBSHardwareButtonEventConsuming>
{
    _Bool _didDismiss;
    _Bool _didSendAuthorizationDidPresent;
    long long _hostAppInterfaceOrientation;
    NSString *_hostApplicationIdentifier;
    int _statusBarVisibility;
    PKAssertion *_notificationSuppressionAssertion;
    NSString *_hostLocalizedAppName;
    PKPaymentRequest *_paymentRequest;
    _Bool _paymentAuthorizationPresented;
    PKCompactNavigationContainerController *_navigationContainer;
    PKPaymentAuthorizationServiceNavigationController *_navigationController;
    _Bool _pearlViewsInserted;
    LAUIPhysicalButtonView *_physicalButtonView;
    PKPaymentProvisioningController *_paymentProvisioningController;
    PKPaymentSetupNavigationController *_paymentSetupNavigationController;
    _Bool _paymentSetupWasRequired;
    _Bool _shouldAcquireLockButtonObserver;
    id <BSInvalidatable> _lockButtonObserver;
    _Bool _dismissAfterPaymentSetup;
    _Bool _isPerformingPaymentSetup;
    PKPaymentAuthorizationRemoteAlertViewControllerExportedObject *_exportedObject;
    PKInAppPaymentService *_inAppPaymentService;
    NSXPCConnection *_hostConnection;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(readonly, nonatomic) _Bool isPerformingPaymentSetup; // @synthesize isPerformingPaymentSetup=_isPerformingPaymentSetup;
@property(nonatomic) _Bool dismissAfterPaymentSetup; // @synthesize dismissAfterPaymentSetup=_dismissAfterPaymentSetup;
@property(retain, nonatomic) PKPaymentRequest *paymentRequest; // @synthesize paymentRequest=_paymentRequest;
@property(retain, nonatomic) NSXPCConnection *hostConnection; // @synthesize hostConnection=_hostConnection;
@property(retain, nonatomic) PKInAppPaymentService *inAppPaymentService; // @synthesize inAppPaymentService=_inAppPaymentService;
@property(retain, nonatomic) PKPaymentAuthorizationRemoteAlertViewControllerExportedObject *exportedObject; // @synthesize exportedObject=_exportedObject;
- (void).cxx_destruct;
- (void)_invalidateLockButtonObserver;
- (void)dismissWithRemoteOrigination:(_Bool)arg1;
- (void)_dismiss;
- (id)_remoteObjectProxy;
- (void)authorizationDidSelectPaymentMethod:(id)arg1;
- (void)authorizationDidSelectShippingAddress:(id)arg1;
- (void)authorizationDidSelectShippingMethod:(id)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1;
- (void)authorizationDidAuthorizePurchase:(id)arg1;
- (void)authorizationDidAuthorizePayment:(id)arg1;
- (void)authorizationDidFinishWithError:(id)arg1;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationWillStart;
- (void)authorizationViewController:(id)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2;
- (void)authorizationViewControllerDidChangeUserIntentRequirement:(id)arg1;
- (void)compactNavigationContainerControllerReceivedExternalTap:(id)arg1;
- (void)consumeDoublePressUpForButtonKind:(long long)arg1;
- (void)consumeSinglePressUpForButtonKind:(long long)arg1;
- (void)handleHomeButtonPressed;
- (void)sendAuthorizationDidPresentIfNecessary;
- (void)_updatePearlViews;
- (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 actionTitle:(id)arg4 actionHandler:(CDUnknownBlockType)arg5;
- (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 actionTitle:(id)arg3 actionHandler:(CDUnknownBlockType)arg4;
- (void)_presentInvalidAlert;
- (void)_presentPassNotSupportedAlertWithRelevantUniqueID:(id)arg1;
- (void)_presentAddCardAlert;
- (void)_presentLostModeAlertWithRelevantUniqueID:(id)arg1;
- (void)_presentVerifyPassAlertWithRelevantUniqueID:(id)arg1;
- (void)_presentActivatingPassAlertWithRelevantUniqueID:(id)arg1;
- (void)_presentPaymentAuthorization;
- (void)_presentPaymentSetup;
- (void)_handlePaymentRequestPresentationResultType:(long long)arg1 relevantUniqueID:(id)arg2 firstAttempt:(_Bool)arg3;
- (void)_canPresentPaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setUserInfo:(id)arg1;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)paymentSetupDidFinish:(id)arg1;
- (id)_configuredPaymentSetupNavigationController;
- (id)_provisioningController;
- (void)_setStatusBarHidden:(_Bool)arg1;
- (int)_preferredStatusBarVisibility;
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;
- (void)_willAppearInRemoteViewController;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

