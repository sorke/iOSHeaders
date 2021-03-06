//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface BRAccount : NSObject
{
    NSString *_accountID;
    NSData *_perAppAccountIdentifier;
}

+ (_Bool)refreshCurrentLoggedInAccount;
+ (id)currentLoggedInAccountWithError:(id *)arg1;
+ (id)currentCachedLoggedInAccountWithError:(id *)arg1;
+ (_Bool)_refreshCurrentLoggedInAccountForcingRefresh:(_Bool)arg1 error:(id *)arg2;
+ (void)startAccountTokenChangeObserverIfNeeded;
@property(copy, nonatomic) NSData *perAppAccountIdentifier; // @synthesize perAppAccountIdentifier=_perAppAccountIdentifier;
- (void).cxx_destruct;
- (_Bool)iCloudDesktopSettingsChangedWithAttributes:(id)arg1 error:(id *)arg2;
- (id)containerWithPendingChanges;
- (_Bool)logoutWithError:(id *)arg1;
- (_Bool)loginWithError:(id *)arg1;
- (id)initWithAccountID:(id)arg1;
- (void)evictOldDocumentsWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)getEvictableSpace:(id *)arg1 error:(id *)arg2;
- (_Bool)setOptimizeStorageEnabled:(_Bool)arg1 error:(id *)arg2;
- (_Bool)hasOptimizeStorageWithError:(id *)arg1;

@end

