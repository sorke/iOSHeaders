//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface SFCredentialProviderExtensionState : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _enabled;
    _Bool _supportsIncrementalUpdates;
    NSString *_localizedDisplayName;
    NSString *_containingAppBundleIdentifier;
}

+ (id)credentialProviderExtensionWithDisabledState;
+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *containingAppBundleIdentifier; // @synthesize containingAppBundleIdentifier=_containingAppBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *localizedDisplayName; // @synthesize localizedDisplayName=_localizedDisplayName;
@property(readonly, nonatomic) _Bool supportsIncrementalUpdates; // @synthesize supportsIncrementalUpdates=_supportsIncrementalUpdates;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabledState:(_Bool)arg1 supportsIncrementalUpdates:(_Bool)arg2 localizedDisplayName:(id)arg3 containingAppBundleIdentifier:(id)arg4;
- (id)initWithEnabledState:(_Bool)arg1 supportsIncrementalUpdates:(_Bool)arg2;

@end

