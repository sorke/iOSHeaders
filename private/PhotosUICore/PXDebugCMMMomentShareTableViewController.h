//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class PHFetchResult;

@interface PXDebugCMMMomentShareTableViewController : UITableViewController
{
    PHFetchResult *_momentShares;
    id <PXDebugCMMMomentShareSelectionHandler> _selectionHandler;
}

@property(nonatomic) __weak id <PXDebugCMMMomentShareSelectionHandler> selectionHandler; // @synthesize selectionHandler=_selectionHandler;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end

