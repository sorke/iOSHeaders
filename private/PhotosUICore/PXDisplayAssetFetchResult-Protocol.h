//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PXSectionedFetchResult.h"

@class NSArray, NSIndexSet;

@protocol PXDisplayAssetFetchResult <PXSectionedFetchResult>
@property(readonly, nonatomic) id <PXDisplayAsset> firstObject;
- (_Bool)containsObject:(id <PXDisplayAsset>)arg1;
- (NSArray *)objectsAtIndexes:(NSIndexSet *)arg1;
- (id <PXDisplayAsset>)objectAtIndex:(unsigned long long)arg1;
@end

