//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VCUIManageVoiceShortcutViewController, VCVoiceShortcut;

@protocol VCUIManageVoiceShortcutViewControllerDelegate <NSObject>
- (void)manageVoiceShortcutViewControllerDidCancel:(VCUIManageVoiceShortcutViewController *)arg1;

@optional
- (void)manageVoiceShortcutViewControllerDidEnterStateSiriUnavailable:(VCUIManageVoiceShortcutViewController *)arg1;
- (void)manageVoiceShortcutViewController:(VCUIManageVoiceShortcutViewController *)arg1 didDeleteVoiceShortcut:(VCVoiceShortcut *)arg2;
- (void)manageVoiceShortcutViewController:(VCUIManageVoiceShortcutViewController *)arg1 didSaveVoiceShortcut:(VCVoiceShortcut *)arg2;
- (void)manageVoiceShortcutViewController:(VCUIManageVoiceShortcutViewController *)arg1 didCreateVoiceShortcut:(VCVoiceShortcut *)arg2;
@end

