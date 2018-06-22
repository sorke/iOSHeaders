//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OnBoardingKit/OBPrivacyCombinedController.h>

#import "UIScrollViewDelegate.h"

@class NSArray, NSString, OBBuddyPaneHeaderView, OBPrivacyCombinedTableViewController, OBPrivacySplashController;

__attribute__((visibility("hidden")))
@interface OBPrivacyCombinedController_iOS : OBPrivacyCombinedController <UIScrollViewDelegate>
{
    OBPrivacySplashController *_initialSplashController;
    OBPrivacyCombinedTableViewController *_tableViewController;
    OBBuddyPaneHeaderView *_headerView;
    _Bool _didFirstLayout;
    NSArray *_identifiers;
}

- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDarkMode:(_Bool)arg1;
- (void)updateNavigationBarAnimated:(_Bool)arg1;
- (void)updateBackgroundColor;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithIdentifiers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

