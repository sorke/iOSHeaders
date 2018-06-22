//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class ISBiometricStore, NSArray, NSNumber, NSString;

@interface ISBiometricUpdateTouchIDSettingsOperation : ISOperation
{
    _Bool _regeneratePublicKey;
    _Bool _shouldSuppressAuthPrompts;
    CDUnknownBlockType _resultBlock;
    long long _status;
    NSNumber *_accountIdentifier;
    NSString *_attestationStringPrimary;
    NSString *_attestationStringExtended;
    ISBiometricStore *_biometricStore;
    NSArray *_certChainPrimary;
    NSArray *_certChainExtended;
}

@property(copy, nonatomic) NSArray *certChainExtended; // @synthesize certChainExtended=_certChainExtended;
@property(copy, nonatomic) NSArray *certChainPrimary; // @synthesize certChainPrimary=_certChainPrimary;
@property(retain, nonatomic) ISBiometricStore *biometricStore; // @synthesize biometricStore=_biometricStore;
@property(copy, nonatomic) NSString *attestationStringExtended; // @synthesize attestationStringExtended=_attestationStringExtended;
@property(copy, nonatomic) NSString *attestationStringPrimary; // @synthesize attestationStringPrimary=_attestationStringPrimary;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly) long long status; // @synthesize status=_status;
@property _Bool shouldSuppressAuthPrompts; // @synthesize shouldSuppressAuthPrompts=_shouldSuppressAuthPrompts;
@property(copy) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property _Bool regeneratePublicKey; // @synthesize regeneratePublicKey=_regeneratePublicKey;
- (void).cxx_destruct;
- (id)_newUpdateTouchIDSettingsOperationWithTwoKeys;
- (void)run;
- (id)initWithAccountIdentifier:(id)arg1;

@end

