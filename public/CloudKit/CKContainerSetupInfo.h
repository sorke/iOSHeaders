//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKAccountOverrideInfo, CKContainerID, NSDictionary, NSString;

@interface CKContainerSetupInfo : NSObject <NSSecureCoding>
{
    _Bool _captureResponseHTTPHeaders;
    _Bool _wantsSiloedContext;
    _Bool _useZoneWidePCS;
    _Bool _holdAllOperations;
    _Bool _returnPCSMetadata;
    _Bool _useMMCSEncryptionV2;
    _Bool _bypassPCSEncryption;
    _Bool _masqueradeAsThirdPartyApp;
    unsigned int _clientSDKVersion;
    CKContainerID *_containerID;
    NSString *_sourceApplicationBundleIdentifier;
    CKAccountOverrideInfo *_accountInfoOverride;
    NSDictionary *_fakeEntitlements;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool masqueradeAsThirdPartyApp; // @synthesize masqueradeAsThirdPartyApp=_masqueradeAsThirdPartyApp;
@property(nonatomic) unsigned int clientSDKVersion; // @synthesize clientSDKVersion=_clientSDKVersion;
@property(nonatomic) _Bool bypassPCSEncryption; // @synthesize bypassPCSEncryption=_bypassPCSEncryption;
@property(nonatomic) _Bool useMMCSEncryptionV2; // @synthesize useMMCSEncryptionV2=_useMMCSEncryptionV2;
@property(nonatomic) _Bool returnPCSMetadata; // @synthesize returnPCSMetadata=_returnPCSMetadata;
@property(nonatomic) _Bool holdAllOperations; // @synthesize holdAllOperations=_holdAllOperations;
@property(retain, nonatomic) NSDictionary *fakeEntitlements; // @synthesize fakeEntitlements=_fakeEntitlements;
@property(nonatomic) _Bool useZoneWidePCS; // @synthesize useZoneWidePCS=_useZoneWidePCS;
@property(nonatomic) _Bool wantsSiloedContext; // @synthesize wantsSiloedContext=_wantsSiloedContext;
@property(nonatomic) _Bool captureResponseHTTPHeaders; // @synthesize captureResponseHTTPHeaders=_captureResponseHTTPHeaders;
@property(retain, nonatomic) CKAccountOverrideInfo *accountInfoOverride; // @synthesize accountInfoOverride=_accountInfoOverride;
@property(retain, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(retain, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
