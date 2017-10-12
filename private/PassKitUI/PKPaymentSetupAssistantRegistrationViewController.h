//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupHeroViewController.h>

#import "PKPaymentSetupViewControllerDelegate.h"

@class NSArray, NSObject<OS_dispatch_group>, NSString, UIButton;

@interface PKPaymentSetupAssistantRegistrationViewController : PKPaymentSetupHeroViewController <PKPaymentSetupViewControllerDelegate>
{
    UIButton *_skipButton;
    id <PKPaymentSetupViewControllerDelegate> _externalDelegate;
    NSObject<OS_dispatch_group> *_preflightGroup;
    _Bool _preflightResult;
}

+ (_Bool)bridgeSetupAssistantNeedsToRunReturningRequirements:(unsigned long long *)arg1;
+ (_Bool)setupAssistantNeedsToRunReturningRequirements:(unsigned long long *)arg1;
+ (_Bool)setupAssistantNeedsToRun;
+ (id)defaultWebServiceForContext:(long long)arg1;
- (void).cxx_destruct;
- (void)viewControllerDidShowEligibilityIssue:(id)arg1;
- (void)viewController:(id)arg1 didShowProvisioningError:(id)arg2;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)_setExternalDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
@property(readonly, nonatomic) NSArray *requiredPaymentSetupFileURLs;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPaymentWebService:(id)arg1 context:(long long)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

