//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DChartAreaSceneObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartStackedAreaSceneObject : TSCH3DChartAreaSceneObject
{
}

+ (float)depthLimitFactorForSeriesCount:(long long)arg1 maxLimitingSeries:(long long)arg2;
+ (_Bool)supportsChartSeriesDepthOffset;
+ (float)chartSeriesDepth;
+ (float)chartSeriesPolygonOffset;
+ (id)chartSeriesType;
- (void)sortElements:(vector_cd7372eb *)arg1 pipeline:(id)arg2;
- (float)depthForScene:(id)arg1;
- (_Bool)transparencyDepthMask;

@end
