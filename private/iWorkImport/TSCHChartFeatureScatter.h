//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCHChartFeature.h>

__attribute__((visibility("hidden")))
@interface TSCHChartFeatureScatter : TSCHChartFeature
{
}

- (int)representativeGridValueAxisType;
- (unsigned long long)gridOffsetToSeriesForScatterFormat:(int)arg1;
- (_Bool)supportsCategoryLabelsInChartRangeEditor;
- (_Bool)supportsConnectingLines;
- (id)supportedSeriesTypes;
- (_Bool)supportsSymbolOverhang;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (id)supportedAxisScales;
- (id)userInterfaceName;
- (id)genericToSpecificPropertyMap;
- (id)defaultDataFileName;
- (Class)presetImagerClass;
- (unsigned long long)styleIndexForAxisID:(id)arg1;
- (Class)valueAxisClassForID:(id)arg1 scale:(int)arg2;
- (void)p_initializeAxisIDs;
- (_Bool)supportsSharedAndSeparateX;

@end
