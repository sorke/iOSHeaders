//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AVAsset.h"

@interface AVAsset (TSUAdditions)
+ (id)keyPathsForValuesAffectingTsu_isPlayable;
+ (id)tsu_playableKeysWithKeys:(id)arg1;
+ (id)keyPathsForValuesAffectingNaturalSizeWithPreferredTransforms;
- (_Bool)p_doesTrack:(id)arg1 matchCodecTypes:(id)arg2;
@property(readonly, nonatomic) _Bool tsu_isPlayable;
@property(readonly, nonatomic) struct CGSize naturalSizeWithPreferredTransforms;
@end

