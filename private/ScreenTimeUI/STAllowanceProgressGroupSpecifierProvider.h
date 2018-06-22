//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenTimeUI/STUsageGroupSpecifierProvider.h>

#import "STAllowanceDetailListControllerDelegate.h"

@class NSObject<STTimeAllowancesViewModelCoordinator>, NSSet, NSString, STUsageItem;

@interface STAllowanceProgressGroupSpecifierProvider : STUsageGroupSpecifierProvider <STAllowanceDetailListControllerDelegate>
{
    _Bool _canAskForMoreTime;
    NSObject<STTimeAllowancesViewModelCoordinator> *_timeAllowancesCoordinator;
    NSSet *_budgetedIdentifiers;
    STUsageItem *_usageItem;
}

@property(readonly, nonatomic) STUsageItem *usageItem; // @synthesize usageItem=_usageItem;
@property(readonly, copy, nonatomic) NSSet *budgetedIdentifiers; // @synthesize budgetedIdentifiers=_budgetedIdentifiers;
@property(nonatomic) _Bool canAskForMoreTime; // @synthesize canAskForMoreTime=_canAskForMoreTime;
@property(retain, nonatomic) NSObject<STTimeAllowancesViewModelCoordinator> *timeAllowancesCoordinator; // @synthesize timeAllowancesCoordinator=_timeAllowancesCoordinator;
- (void).cxx_destruct;
- (void)allowanceDetailControllerDidCancel:(id)arg1;
- (void)allowanceDetailController:(id)arg1 didDeleteAllowance:(id)arg2;
- (void)allowanceDetailController:(id)arg1 didSaveAllowance:(id)arg2;
- (void)showBudgetDetailSetupController:(id)arg1;
- (void)showBudgetDetailController:(id)arg1;
- (id)budgetDetailText:(id)arg1;
- (id)allowanceSpecifiers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)invalidate;
- (id)initWithBudgetedIdentifiers:(id)arg1 usageItem:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

