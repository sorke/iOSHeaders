//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPDisposable.h"

__attribute__((visibility("hidden")))
@interface CPCluster : NSObject <CPDisposable>
{
    const CDStruct_1ec70fb1 *profile;
    unsigned int xCount;
    double *x;
    double *dx;
    unsigned int *dxOrderIndex;
    unsigned int interClusterMinIndex;
    double *ddx;
    unsigned int *ddxOrderIndex;
    unsigned int interLevelMinIndex;
    unsigned int minClusterSize;
    double maxClusterSpread;
    double minInterClusterDiff;
    double minInterLevel2ndDiff;
    unsigned int clusterCount;
    CDStruct_2a61e2ef *xStats;
    unsigned int levels;
    CDStruct_2a61e2ef *dxStats;
    _Bool ownData;
    _Bool ownDifferences;
}

+ (unsigned int *)createOrderIndexFor:(double *)arg1 ofSize:(unsigned int)arg2;
+ (void)reclusterTextLine:(id)arg1 fromWordIndex:(unsigned int)arg2 count:(unsigned int *)arg3;
+ (void)clusterTextLine:(id)arg1;
+ (void)clusterTextLine:(id)arg1 withCluster:(id)arg2 atLevel:(unsigned int)arg3 withMaximumWordGap:(double *)arg4 andMaximumLetterGap:(double *)arg5;
- (CDStruct_2a61e2ef)largestClusterStatistics;
- (CDStruct_2a61e2ef)differenceClusterStatisticsAtIndex:(unsigned int)arg1;
- (CDStruct_2a61e2ef)clusterStatisticsAtIndex:(unsigned int)arg1;
- (unsigned int)levels;
- (unsigned int)clusterCount;
- (_Bool)applyDifferenceHints:(CDStruct_2a61e2ef *)arg1 count:(unsigned int)arg2;
- (void)findDensityClusters:(double *)arg1 count:(unsigned int)arg2;
- (void)findClustersFromDifferences:(double *)arg1 count:(unsigned int)arg2;
- (void)findClusters:(double *)arg1 count:(unsigned int)arg2;
- (void)analyzeDensities;
- (void)assembleDensityDifferenceStats;
- (void)setMinimumRecognizedInterLevel2ndDifference:(double)arg1;
- (void)setMinimumRecognizedInterClusterDifference:(double)arg1;
- (void)setMaximumClusterSpread:(double)arg1;
- (void)setMinimumClusterSize:(unsigned int)arg1;
- (void)assembleDataStats;
- (void)analyzeDifferences;
- (void)resetAnalysis;
- (_Bool)coalesceFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (_Bool)splitLevelAtIndex:(unsigned int)arg1 betweenValue:(double)arg2 andValue:(double)arg3;
- (_Bool)joinClosestLevelPairFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (_Bool)joinLevelsFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)assembleDifferenceStats;
- (void)splitSecondDifferences;
- (void)computeDataFromDifferences;
- (void)computeDifferencesFromData;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)initWithProfile:(const CDStruct_1ec70fb1 *)arg1;
- (id)init;
- (void)makeWords:(CDStruct_2e2afed4 *)arg1 count:(unsigned int)arg2 fromCharacterSequence:(id)arg3 charOffset:(unsigned int)arg4;
- (void)findClustersFromCharacterSequence:(id)arg1 withSpaceHint:(_Bool)arg2;
- (void)tryLevel0SplitBetween:(double)arg1 and:(double)arg2 usingHints:(CDStruct_2a61e2ef *)arg3;

@end

