//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/CATTaskRequest.h>

@class NSArray;

@interface DMFFetchApplicationsRequest : CATTaskRequest
{
    _Bool _excludeIcon;
    _Bool _excludeUnmanagedApps;
    _Bool _deleteFeedback;
    unsigned long long _typeFilter;
    unsigned long long _stateFilter;
    NSArray *_bundleIdentifiers;
}

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
@property(copy, nonatomic) NSArray *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
@property(nonatomic) unsigned long long stateFilter; // @synthesize stateFilter=_stateFilter;
@property(nonatomic) unsigned long long typeFilter; // @synthesize typeFilter=_typeFilter;
@property(nonatomic) _Bool deleteFeedback; // @synthesize deleteFeedback=_deleteFeedback;
@property(nonatomic) _Bool excludeUnmanagedApps; // @synthesize excludeUnmanagedApps=_excludeUnmanagedApps;
@property(nonatomic) _Bool excludeIcon; // @synthesize excludeIcon=_excludeIcon;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
