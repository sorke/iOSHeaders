//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "VCUIManageVoiceShortcutViewControllerDelegate.h"

@class NSString, VCUIManageVoiceShortcutViewController, VCVoiceShortcut, VCVoiceShortcutClient;

@interface VCUIEditVoiceShortcutViewController : UIViewController <VCUIManageVoiceShortcutViewControllerDelegate>
{
    id <VCUIEditVoiceShortcutViewControllerDelegate> _delegate;
    VCVoiceShortcut *_voiceShortcut;
    VCVoiceShortcutClient *_voiceShortcutClient;
    VCUIManageVoiceShortcutViewController *_manageVoiceShortcutViewController;
}

+ (void)initialize;
@property(retain, nonatomic) VCUIManageVoiceShortcutViewController *manageVoiceShortcutViewController; // @synthesize manageVoiceShortcutViewController=_manageVoiceShortcutViewController;
@property(readonly, nonatomic) VCVoiceShortcutClient *voiceShortcutClient; // @synthesize voiceShortcutClient=_voiceShortcutClient;
@property(readonly, nonatomic) VCVoiceShortcut *voiceShortcut; // @synthesize voiceShortcut=_voiceShortcut;
@property(nonatomic) __weak id <VCUIEditVoiceShortcutViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)manageVoiceShortcutViewControllerDidEnterStateSiriUnavailable:(id)arg1;
- (void)manageVoiceShortcutViewController:(id)arg1 didDeleteVoiceShortcut:(id)arg2;
- (void)manageVoiceShortcutViewController:(id)arg1 didSaveVoiceShortcut:(id)arg2;
- (void)manageVoiceShortcutViewControllerDidCancel:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)initWithVoiceShortcut:(id)arg1 voiceShortcutClient:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

