//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<STContentPrivacyViewModelCoordinator>, NSObject<STTimeAllowancesViewModelCoordinator>, NSObject<STUsageDetailsViewModelCoordinator>, NSString, STRootViewModel, STUser;

@protocol STRootViewModelCoordinator <NSObject>
@property(readonly, nonatomic, getter=isPasscodeEnabled) _Bool passcodeEnabled;
@property(nonatomic) _Bool hasShownMiniBuddy;
@property(readonly) NSObject<STTimeAllowancesViewModelCoordinator> *timeAllowancesCoordinator;
@property(readonly) NSObject<STUsageDetailsViewModelCoordinator> *usageDetailsCoordinator;
@property(readonly) NSObject<STContentPrivacyViewModelCoordinator> *contentPrivacyCoordinator;
@property(readonly, nonatomic) STRootViewModel *viewModel;
- (void)clearUsageDataWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)setScreenTimeEnabled:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setPIN:(NSString *)arg1 screenTimeEnabled:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)setPIN:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (_Bool)validatePIN:(NSString *)arg1;
- (id)coordinatorForChild:(STUser *)arg1;
@end

