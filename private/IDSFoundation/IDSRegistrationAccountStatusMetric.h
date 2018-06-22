//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CUTRTCMetric.h"

@class NSDictionary, NSString;

@interface IDSRegistrationAccountStatusMetric : NSObject <CUTRTCMetric>
{
    int _accountType;
    NSString *_serviceIdentifier;
    _Bool _doesExist;
    _Bool _isEnabled;
    _Bool _isUserDisabled;
    _Bool _isiCloudSignedIn;
    _Bool _isiTunesSignedIn;
    long long _registrationStatus;
    long long _registrationError;
    int _registrationErrorReason;
}

@property(readonly, nonatomic) int registrationErrorReason; // @synthesize registrationErrorReason=_registrationErrorReason;
@property(readonly, nonatomic) long long registrationError; // @synthesize registrationError=_registrationError;
@property(readonly, nonatomic) long long registrationStatus; // @synthesize registrationStatus=_registrationStatus;
@property(readonly, nonatomic) _Bool isiTunesSignedIn; // @synthesize isiTunesSignedIn=_isiTunesSignedIn;
@property(readonly, nonatomic) _Bool isiCloudSignedIn; // @synthesize isiCloudSignedIn=_isiCloudSignedIn;
@property(readonly, nonatomic) _Bool isUserDisabled; // @synthesize isUserDisabled=_isUserDisabled;
@property(readonly, nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(readonly, nonatomic) _Bool doesExist; // @synthesize doesExist=_doesExist;
@property(readonly, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(readonly, nonatomic) int accountType; // @synthesize accountType=_accountType;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned short rtcType;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSString *name;
- (id)initWithAccountType:(int)arg1 serviceIdentifier:(id)arg2 doesExist:(_Bool)arg3 isEnabled:(_Bool)arg4 isUserDisabled:(_Bool)arg5 isiCloudSignedIn:(_Bool)arg6 isiTunesSignedIn:(_Bool)arg7 registrationStatus:(long long)arg8 registrationError:(long long)arg9 registrationErrorReason:(int)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

