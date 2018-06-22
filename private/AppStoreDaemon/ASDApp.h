//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class ASDProgress, NSProgress, NSString;

@interface ASDApp : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _betaApp;
    _Bool _familyShared;
    NSString *_bundleID;
    NSString *_bundlePath;
    NSString *_localizedName;
    long long _storeExternalVersionID;
    long long _storeItemID;
    long long _downloaderDSID;
    long long _familyID;
    long long _purchaserDSID;
    NSProgress *_progress;
    long long _extensions;
    long long _status;
    ASDProgress *_remoteProgress;
}

+ (_Bool)supportsSecureCoding;
@property(retain) ASDProgress *remoteProgress; // @synthesize remoteProgress=_remoteProgress;
@property long long status; // @synthesize status=_status;
@property long long extensions; // @synthesize extensions=_extensions;
@property(retain) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, getter=isFamilyShared) _Bool familyShared; // @synthesize familyShared=_familyShared;
@property(readonly, getter=isBetaApp) _Bool betaApp; // @synthesize betaApp=_betaApp;
@property long long purchaserDSID; // @synthesize purchaserDSID=_purchaserDSID;
@property long long familyID; // @synthesize familyID=_familyID;
@property long long downloaderDSID; // @synthesize downloaderDSID=_downloaderDSID;
@property long long storeItemID; // @synthesize storeItemID=_storeItemID;
@property long long storeExternalVersionID; // @synthesize storeExternalVersionID=_storeExternalVersionID;
@property(retain) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(retain) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToApp:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, getter=isSystemApp) _Bool systemApp;
@property(readonly, getter=isStoreApp) _Bool storeApp;
@property(readonly, getter=isPlaceholder) _Bool placeholder;
@property(readonly, getter=isOpenable) _Bool openable;
@property(readonly, getter=isLaunchProhibited) _Bool launchProhibited;
@property(readonly, getter=isInstalled) _Bool installed;
- (_Bool)isBeta;
@property(readonly, getter=hasMessagesExtension) _Bool messasgesExtension;
- (id)initWithBundleID:(id)arg1;

@end

