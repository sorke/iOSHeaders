//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@class PSSpecifier;

@interface STAllowanceSetupListController : PSListController
{
    id <STAllowanceSetupListControllerDelegate> _delegate;
    PSSpecifier *_categoriesGroupSpecifier;
    PSSpecifier *_allAppsAndCategoriesSpecifier;
}

@property(retain, nonatomic) PSSpecifier *allAppsAndCategoriesSpecifier; // @synthesize allAppsAndCategoriesSpecifier=_allAppsAndCategoriesSpecifier;
@property(retain, nonatomic) PSSpecifier *categoriesGroupSpecifier; // @synthesize categoriesGroupSpecifier=_categoriesGroupSpecifier;
@property __weak id <STAllowanceSetupListControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)addButtonTapped:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (id)categorySpecifiers;
- (id)specifiers;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

@end

