//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIRemoteViewController.h"

#import "INUIVoiceShortcutRemoteHostingInterface.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface INUIVoiceShortcutHostViewController : _UIRemoteViewController <INUIVoiceShortcutRemoteHostingInterface>
{
    id <INUIVoiceShortcutRemoteViewControllerAddDelegate> _addDelegate;
    id <INUIVoiceShortcutRemoteViewControllerEditDelegate> _editDelegate;
    long long _mode;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
+ (void)getViewControllerCompletion:(CDUnknownBlockType)arg1;
+ (void)getViewControllerForEditingVoiceShortcut:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)getViewControllerForAddingShortcut:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)_voiceShortcutUIExtension;
+ (void)initialize;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <INUIVoiceShortcutRemoteViewControllerEditDelegate> editDelegate; // @synthesize editDelegate=_editDelegate;
@property(nonatomic) __weak id <INUIVoiceShortcutRemoteViewControllerAddDelegate> addDelegate; // @synthesize addDelegate=_addDelegate;
- (void).cxx_destruct;
- (void)remoteViewControllerEditDidCacnel;
- (void)remoteViewControllerDidDeleteVoiceShortcutWithIdentifier:(id)arg1;
- (void)remoteViewControllerDidEditVoiceShortcut:(id)arg1 error:(id)arg2;
- (void)remoteViewControllerAddDidCacnel;
- (void)remoteViewControllerDidAddVoiceShortcut:(id)arg1 error:(id)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

