//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PSUICellularBarcodeScannerCaptureDelegate.h"
#import "PSUICellularConfirmationCodeViewControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class CAShapeLayer, NSDate, NSString, PSUICellularBarcodeScannerView, UIButton, UILabel, UIView;

@interface PSUICellularFauxCardViewController : UIViewController <PSUICellularBarcodeScannerCaptureDelegate, PSUICellularConfirmationCodeViewControllerDelegate, UINavigationControllerDelegate>
{
    NSString *_fauxCardData;
    NSDate *_nextTimeToAcceptScan;
    CAShapeLayer *_fillWithHoleLayer;
    CAShapeLayer *_holeOutlineLayer;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _codelessActivationBlock;
    long long _userConsentResponse;
    UIView *_fauxScanView;
    UIView *_cutoutView;
    UIButton *_bypassFauxCardButton;
    UIButton *_enterFauxCardDataManuallyButton;
    UILabel *_fauxDataLabel;
    UILabel *_activationCodeLabel;
    PSUICellularBarcodeScannerView *_scannerView;
}

@property(retain, nonatomic) PSUICellularBarcodeScannerView *scannerView; // @synthesize scannerView=_scannerView;
@property(nonatomic) __weak UILabel *activationCodeLabel; // @synthesize activationCodeLabel=_activationCodeLabel;
@property(nonatomic) __weak UILabel *fauxDataLabel; // @synthesize fauxDataLabel=_fauxDataLabel;
@property(nonatomic) __weak UIButton *enterFauxCardDataManuallyButton; // @synthesize enterFauxCardDataManuallyButton=_enterFauxCardDataManuallyButton;
@property(nonatomic) __weak UIButton *bypassFauxCardButton; // @synthesize bypassFauxCardButton=_bypassFauxCardButton;
@property(nonatomic) __weak UIView *cutoutView; // @synthesize cutoutView=_cutoutView;
@property(nonatomic) __weak UIView *fauxScanView; // @synthesize fauxScanView=_fauxScanView;
@property(nonatomic) long long userConsentResponse; // @synthesize userConsentResponse=_userConsentResponse;
@property(copy, nonatomic) CDUnknownBlockType codelessActivationBlock; // @synthesize codelessActivationBlock=_codelessActivationBlock;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)_setFauxCardData:(id)arg1;
- (id)_getFauxCardData;
- (void)cellularConfirmationCodeViewController:(id)arg1 confirmedWithCode:(id)arg2;
- (void)presentConfirmationCodeRequest;
- (void)addNewPlanWithCardData:(id)arg1 confirmationCode:(id)arg2;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureSession:(id)arg1 isRunning:(_Bool)arg2;
- (void)enterFauxCardDataManually:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)bypassFauxCard:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

