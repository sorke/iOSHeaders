//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SUAssetMatcher.h"

@class NSDictionary, NSString;

@interface SUAssetStateMatcher : NSObject <SUAssetMatcher>
{
    NSString *_assetType;
    int _interestedStates;
    NSDictionary *_matcherInfo;
}

@property(readonly, nonatomic) NSDictionary *matcherInfo; // @synthesize matcherInfo=_matcherInfo;
@property(readonly, nonatomic) int interestedStates; // @synthesize interestedStates=_interestedStates;
@property(readonly, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
- (_Bool)_matchesFilterType:(id)arg1;
- (void)_modifyMADownloadOptions:(id)arg1;
- (id)_findMatchFromCandidates:(id)arg1 error:(id *)arg2;
- (void)modifyMADownloadOptions:(id)arg1;
- (id)findMatchFromCandidates:(id)arg1 error:(id *)arg2;
- (id)initWithType:(id)arg1 interestedStates:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

