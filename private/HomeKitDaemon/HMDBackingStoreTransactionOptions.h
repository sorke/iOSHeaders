//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"
#import "NSSecureCoding.h"

@class NSDate, NSString;

@interface HMDBackingStoreTransactionOptions : HMFObject <HMFLogging, NSSecureCoding>
{
    _Bool _mustReplay;
    _Bool _mustPush;
    unsigned long long _source;
    unsigned long long _destination;
    NSDate *_committed;
    NSString *_label;
}

+ (id)stringForHMDBackingStoreDestination:(unsigned long long)arg1;
+ (id)stringForHMDBackingStoreTransactionSource:(unsigned long long)arg1;
+ (id)logCategory;
+ (id)defaultPreferencesOptions;
+ (id)defaultResidenceOptions;
+ (id)defaultMetadataCloudOptions;
+ (id)defaultLegacyCloudOptions;
+ (id)defaultIDSOptions;
+ (id)localPushBackOptions;
+ (id)cloudRequiresPushOptions;
+ (id)defaultCloudOptions;
+ (id)defaultXPCOptions;
+ (id)defaultLocalOptions;
+ (id)optionsWithSource:(unsigned long long)arg1 destination:(unsigned long long)arg2 mustReplay:(_Bool)arg3 mustPush:(_Bool)arg4;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool mustPush; // @synthesize mustPush=_mustPush;
@property(readonly, nonatomic) _Bool mustReplay; // @synthesize mustReplay=_mustReplay;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) NSDate *committed; // @synthesize committed=_committed;
@property(readonly, nonatomic) unsigned long long destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) unsigned long long source; // @synthesize source=_source;
- (void).cxx_destruct;
- (id)debugString:(_Bool)arg1;
- (id)logIdentifier;
@property(readonly, copy) NSString *description;
- (id)_description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)initWithSource:(unsigned long long)arg1 destination:(unsigned long long)arg2;
- (id)initWithSource:(unsigned long long)arg1 destination:(unsigned long long)arg2 label:(id)arg3 mustReplay:(_Bool)arg4 mustPush:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

