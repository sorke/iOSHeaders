//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface FBApplicationProvisioningProfile : NSObject
{
    NSString *_allowedApplicationIdentifierEntitlement;
    _Bool _appleInternalProfile;
    _Bool _beta;
    _Bool _freeDeveloperProfile;
    _Bool _provisionsAllDevices;
    _Bool _provisionsThisDevice;
    NSString *_signerIdentity;
    NSDate *_expirationDate;
    NSString *_UUID;
}

@property(readonly, copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(readonly, nonatomic) _Bool provisionsThisDevice; // @synthesize provisionsThisDevice=_provisionsThisDevice;
@property(readonly, nonatomic) _Bool provisionsAllDevices; // @synthesize provisionsAllDevices=_provisionsAllDevices;
@property(readonly, nonatomic, getter=isFreeDeveloperProfile) _Bool freeDeveloperProfile; // @synthesize freeDeveloperProfile=_freeDeveloperProfile;
@property(readonly, nonatomic, getter=isBeta) _Bool beta; // @synthesize beta=_beta;
@property(readonly, nonatomic, getter=isAppleInternalProfile) _Bool appleInternalProfile; // @synthesize appleInternalProfile=_appleInternalProfile;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSString *signerIdentity; // @synthesize signerIdentity=_signerIdentity;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (_Bool)allowsApplicationIdentifierEntitlement:(id)arg1;
- (id)initWithSignerIdentity:(id)arg1 profile:(id)arg2;

@end

