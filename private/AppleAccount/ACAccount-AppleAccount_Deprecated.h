//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ACAccount.h"

@class NSDictionary, NSString;

@interface ACAccount (AppleAccount_Deprecated)
+ (id)aa_dataclassesBoundToSingleAppleAccount;
+ (id)aa_dataclassesBoundToPrimaryAppleAccount;
@property(readonly, nonatomic) int aa_repairerPID;
@property(nonatomic, setter=aa_setUndergoingRepair:) _Bool aa_isUndergoingRepair;
@property(readonly, nonatomic) NSDictionary *aa_accountFirstDisplayAlert;
@property(readonly, nonatomic) NSDictionary *aa_accountFooterButton;
@property(readonly, nonatomic) NSString *aa_accountFooterText;
@property(readonly, nonatomic) NSString *aa_accountTypeString;
@property(readonly, nonatomic) NSString *aa_syncStoreIdentifier;
@property(readonly, nonatomic) NSString *aa_displayName;
@property(readonly, nonatomic) NSString *aa_protocolVersion;
@property(readonly, nonatomic) NSDictionary *aa_serviceUnavailableInfo;
@property(readonly, nonatomic) _Bool aa_serviceUnavailable;
@property(readonly, nonatomic) _Bool aa_needsEmailConfiguration;
@property(readonly, nonatomic) _Bool aa_needsRegistration;
@property(nonatomic, setter=aa_setSyncedAccount:) _Bool aa_isSyncedAccount;
@end

