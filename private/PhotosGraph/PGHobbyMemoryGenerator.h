//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@interface PGHobbyMemoryGenerator : PGFeaturedMemoryGenerator
{
    _Bool _onlyOverTheYears;
    _Bool _keepsOnlyIsInteresting;
    long long _hobbyType;
}

@property(nonatomic) _Bool keepsOnlyIsInteresting; // @synthesize keepsOnlyIsInteresting=_keepsOnlyIsInteresting;
@property(nonatomic) _Bool onlyOverTheYears; // @synthesize onlyOverTheYears=_onlyOverTheYears;
@property(nonatomic) long long hobbyType; // @synthesize hobbyType=_hobbyType;
- (id)_potentialMemoriesForDryTesting;
- (void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateBestPotentialMemoriesInLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_randomEnumerateOverLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 rejectedNumbers:(CDStruct_e4f06a70 *)arg3 enumerationBlock:(CDUnknownBlockType)arg4;
- (void)_potentialHobbyMemoryForHobby:(id)arg1 results:(CDUnknownBlockType)arg2;
- (id)confidenceThresholdByBlacklistedSceneIdentifier;
- (id)confidenceThresholdByWhitelistedSceneIdentifier;
- (id)_confidenceThresholdBySceneIdentifierForSceneNames:(id)arg1 blacklisted:(_Bool)arg2;

@end

