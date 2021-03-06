//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "HUResizableCellDelegate.h"

@class NSHashTable, NSMapTable, NSString;

@interface HUTableViewController : UITableViewController <HUResizableCellDelegate>
{
    _Bool _viewLayingOut;
    NSHashTable *_childViewControllersAtViewWillAppearTime;
    NSHashTable *_childViewControllersAtViewWillDisappearTime;
    NSMapTable *_installedChildViewControllersKeyedByCell;
}

@property(nonatomic, getter=isViewLayingOut) _Bool viewLayingOut; // @synthesize viewLayingOut=_viewLayingOut;
@property(retain, nonatomic) NSMapTable *installedChildViewControllersKeyedByCell; // @synthesize installedChildViewControllersKeyedByCell=_installedChildViewControllersKeyedByCell;
@property(retain, nonatomic) NSHashTable *childViewControllersAtViewWillDisappearTime; // @synthesize childViewControllersAtViewWillDisappearTime=_childViewControllersAtViewWillDisappearTime;
@property(retain, nonatomic) NSHashTable *childViewControllersAtViewWillAppearTime; // @synthesize childViewControllersAtViewWillAppearTime=_childViewControllersAtViewWillAppearTime;
- (void).cxx_destruct;
- (void)didUpdateRequiredHeightForCell:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)contentSizeCategoryDidChange;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

