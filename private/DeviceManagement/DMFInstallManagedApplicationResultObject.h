//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMFInstallManagedApplicationResultObject : CATTaskResultObject
{
    NSString *_bundleIdentifier;
    unsigned long long _appState;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long appState; // @synthesize appState=_appState;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 appState:(unsigned long long)arg2;

@end
