//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "VCUICreateVoiceShortcutViewControllerDelegate.h"

@class NSArray, NSString, VCUIActionDonationCell;

@interface VCUIAppGalleryViewController : UITableViewController <VCUICreateVoiceShortcutViewControllerDelegate>
{
    id <VCUIAppGalleryViewControllerDelegate> _delegate;
    NSString *_applicationBundleIdentifier;
    NSString *_query;
    NSArray *_actionDonations;
    VCUIActionDonationCell *_prototypeCell;
}

@property(retain, nonatomic) VCUIActionDonationCell *prototypeCell; // @synthesize prototypeCell=_prototypeCell;
@property(copy, nonatomic) NSArray *actionDonations; // @synthesize actionDonations=_actionDonations;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(nonatomic) __weak id <VCUIAppGalleryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_setSeparatorInsets;
- (void)createVoiceShortcutViewControllerDidEnterStateSiriUnavailable:(id)arg1;
- (void)createVoiceShortcutViewController:(id)arg1 didCreateVoiceShortcut:(id)arg2;
- (void)createVoiceShortcutViewControllerDidCancel:(id)arg1;
- (void)updateRecommendedShortcuts;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithApplicationBundleIdentifier:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

