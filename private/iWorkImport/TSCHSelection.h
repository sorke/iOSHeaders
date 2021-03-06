//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSKSelection.h>

@class NSArray, NSSet, TSCHChartDrawableInfo, TSCHSelectionPath, TSCHSelectionPathType;

__attribute__((visibility("hidden")))
@interface TSCHSelection : TSKSelection
{
    TSCHChartDrawableInfo *mInfo;
    NSArray *mPaths;
}

+ (Class)archivedSelectionClass;
+ (id)selectionWithChartInfo:(id)arg1 paths:(id)arg2;
+ (id)emptySelectionWithChartInfo:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *paths; // @synthesize paths=mPaths;
@property(readonly, retain, nonatomic) TSCHChartDrawableInfo *chartInfo; // @synthesize chartInfo=mInfo;
@property(readonly, copy, nonatomic) NSSet *pathTypes;
@property(readonly, copy, nonatomic) TSCHSelectionPathType *pathType;
@property(readonly, copy, nonatomic) TSCHSelectionPath *firstPath;
@property(readonly, nonatomic) _Bool returnChartFrameForAutoscroll;
- (id)selectionByRemovingPathsFromArray:(id)arg1;
- (id)selectionByAddingPathsFromArray:(id)arg1;
@property(readonly, nonatomic) unsigned long long pathCount;
- (void)saveToArchive:(struct ChartSelectionArchive *)arg1 archiver:(id)arg2;
- (id)initFromArchive:(const struct ChartSelectionArchive *)arg1 unarchiver:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPaths:(id)arg1;
- (id)initWithChartInfo:(id)arg1 path:(id)arg2;
- (id)initWithChartInfo:(id)arg1 paths:(id)arg2;

@end

