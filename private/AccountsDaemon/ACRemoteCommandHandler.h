//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccountStore;

@interface ACRemoteCommandHandler : NSObject
{
    ACAccountStore *_accountStore;
}

- (void).cxx_destruct;
- (id)_localAccountMatchingRemoteAccount:(id)arg1;
- (void)_invalidateFetchedAccountsCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_deleteAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_promptUserForAccountCredential:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_authenticateAccount:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_saveAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_addAccount:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_removeAllAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleCommand:(id)arg1 forAccount:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end

