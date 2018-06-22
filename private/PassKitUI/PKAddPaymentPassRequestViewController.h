//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class CLInUseAssertion, NSArray, NSObject<OS_dispatch_source>, NSString, OBPrivacyLinkController, PKAddPaymentPassRequest, PKAddPaymentPassRequestConfiguration, PKPaymentProvisioningController, PKPaymentWebService, PKTableHeaderView, RemoteUIController;

@interface PKAddPaymentPassRequestViewController : UITableViewController
{
    NSString *_title;
    NSString *_subtitle;
    NSArray *_details;
    long long _headerState;
    id <NSObject> _notificationToken;
    PKPaymentProvisioningController *_provisioningController;
    PKAddPaymentPassRequestConfiguration *_configuration;
    CLInUseAssertion *_passbookForegroundAssertion;
    NSObject<OS_dispatch_source> *_datasourceTimeout;
    PKAddPaymentPassRequest *_addRequest;
    struct CGSize _lastBoundsSize;
    _Bool _offsetForTextfieldWasCalculated;
    double _offsetForTextfield;
    _Bool _viewAppearing;
    _Bool _preconditionsValidated;
    PKTableHeaderView *_headerView;
    OBPrivacyLinkController *_privacyController;
    RemoteUIController *_termsController;
    _Bool _hidePrivacy;
    _Bool _singleTarget;
    id <PKAddPaymentPassRequestViewControllerDelegate> _delegate;
    PKPaymentWebService *_webService;
}

@property(readonly, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;
@property(nonatomic) __weak id <PKAddPaymentPassRequestViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool singleTarget; // @synthesize singleTarget=_singleTarget;
@property(nonatomic) _Bool hidePrivacy; // @synthesize hidePrivacy=_hidePrivacy;
- (void).cxx_destruct;
- (void)_provisioningLocalizedProgressDescriptionDidChange:(id)arg1;
- (void)_presentDisplayableError:(id)arg1 allowEarlyExit:(_Bool)arg2;
- (void)_presentDisplayableError:(id)arg1;
- (void)_setupTermsControllerHandlerWithNavigationController:(id)arg1 forCompletion:(CDUnknownBlockType)arg2;
- (void)_cancelDatasourceTimeout;
- (void)_showEligibilityIssueForStatus:(long long)arg1 learnMoreURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_displayTermsForEligibilityResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_performMoreInfoItemPush;
- (void)_performProvisioning:(id)arg1;
- (void)_performTerms:(id)arg1;
- (void)_performEligibility;
- (void)_fetchAddRequestWithCertificatesResponse:(id)arg1;
- (void)_fetchCertificates;
- (void)_performPreconditionValidation;
- (void)_performNextProvisioningStep;
- (void)_handleAdd:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_applyHeaderState;
- (void)_updateHeaderSize;
- (void)_updateHeaderWithSubtitle:(id)arg1;
- (id)_titleForCurrentHeaderState;
- (void)_setHeaderState:(long long)arg1;
- (void)_setNavigationBarEnabled:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithPaymentWebService:(id)arg1 configuration:(id)arg2;

@end

