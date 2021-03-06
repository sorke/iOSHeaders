//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenTimeUI/STAllowanceSetupListController.h>

@class NSDictionary, PSSpecifier;

@interface STCategoryAllowanceSetupListController : STAllowanceSetupListController
{
    NSDictionary *_bundleIDsByCategoryIdentifier;
    PSSpecifier *_categoriesGroupSpecifier;
    PSSpecifier *_allAppsAndCategoriesSpecifier;
}

@property(retain, nonatomic) PSSpecifier *allAppsAndCategoriesSpecifier; // @synthesize allAppsAndCategoriesSpecifier=_allAppsAndCategoriesSpecifier;
@property(retain, nonatomic) PSSpecifier *categoriesGroupSpecifier; // @synthesize categoriesGroupSpecifier=_categoriesGroupSpecifier;
@property(copy, nonatomic) NSDictionary *bundleIDsByCategoryIdentifier; // @synthesize bundleIDsByCategoryIdentifier=_bundleIDsByCategoryIdentifier;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)addButtonTapped:(id)arg1;
- (id)categorySpecifiers;
- (id)specifiers;
- (void)viewWillAppear:(_Bool)arg1;

@end

