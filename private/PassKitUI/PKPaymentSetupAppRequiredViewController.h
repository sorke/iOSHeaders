//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupTableViewController.h>

@class PKPaymentSetupProduct, PKTableHeaderView;

@interface PKPaymentSetupAppRequiredViewController : PKPaymentSetupTableViewController
{
    PKPaymentSetupProduct *_product;
    PKTableHeaderView *_headerView;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
}

- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_doneButtonTapped:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSetupContext:(long long)arg1 setupDelegate:(id)arg2 product:(id)arg3;

@end

