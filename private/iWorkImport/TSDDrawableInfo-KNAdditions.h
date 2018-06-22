//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDDrawableInfo.h>

@class KNAbstractSlide, KNBuild, KNSlide, NSArray, NSSet;

@interface TSDDrawableInfo (KNAdditions)
+ (void)load;
@property(readonly, nonatomic) _Bool canBeDefinedAsMediaPlaceholder;
@property(readonly, nonatomic) _Bool canBeDefinedAsTextPlaceholder;
@property(readonly, nonatomic) _Bool isRightToLeft;
@property(readonly, nonatomic) _Bool mayHaveImplicitBuildEvents;
- (void)swizzled_setMatchesObjectPlaceholderGeometry:(_Bool)arg1;
- (_Bool)swizzled_matchesObjectPlaceholderGeometry;
@property(readonly, nonatomic) NSArray *ghostInfos;
- (id)buildChunksForAnimationType:(long long)arg1;
@property(readonly, nonatomic) NSArray *buildChunks;
@property(readonly, nonatomic) NSArray *activeBuildChunks;
- (id)validBuildsInBuilds:(id)arg1;
@property(readonly, nonatomic) NSSet *builds;
- (_Bool)hasBuildOfAnimationType:(long long)arg1;
@property(readonly, nonatomic) _Bool hasBuilds;
@property(readonly, nonatomic) unsigned long long buildCount;
@property(readonly, nonatomic) KNBuild *buildOut;
@property(readonly, nonatomic) KNBuild *buildIn;
@property(readonly, nonatomic) NSSet *contentBuilds;
@property(readonly, nonatomic) _Bool hasContentBuilds;
@property(readonly, nonatomic) NSSet *actionBuilds;
@property(readonly, nonatomic) _Bool hasActionBuilds;
@property(readonly, nonatomic) KNAbstractSlide *abstractSlide;
@property(readonly, nonatomic) KNSlide *slide;
@end

