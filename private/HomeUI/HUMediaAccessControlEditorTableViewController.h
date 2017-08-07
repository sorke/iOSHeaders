//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUMediaAccessControlEditorModuleControllerDelegate-Protocol.h>

@class HMHome, HUMediaAccessControlEditorModuleController, NSString;

@interface HUMediaAccessControlEditorTableViewController : HUItemTableViewController <HUMediaAccessControlEditorModuleControllerDelegate>
{
    HMHome *_home;
    HUMediaAccessControlEditorModuleController *_accessControlEditorModuleController;
}

@property(readonly, nonatomic) HUMediaAccessControlEditorModuleController *accessControlEditorModuleController; // @synthesize accessControlEditorModuleController=_accessControlEditorModuleController;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (id)_passwordSectionFooterTitle;
- (void)_updateHeaderFooterView:(id)arg1 forSection:(long long)arg2;
- (void)accessControlEditorModuleController:(id)arg1 didUpdateAccessControl:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)itemModuleControllers;
- (void)viewDidLoad;
- (id)initWithHome:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
