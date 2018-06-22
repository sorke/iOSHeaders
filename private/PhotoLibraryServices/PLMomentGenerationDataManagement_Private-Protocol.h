//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLMomentGenerationDataManagement.h"

@class NSArray, NSDictionary;

@protocol PLMomentGenerationDataManagement_Private <PLMomentGenerationDataManagement>

@optional
- (NSDictionary *)generationOptions;
- (void)setupPhotoLibrary;
- (void)refreshAllObjects;
- (void)refreshObject:(id)arg1 mergeChanges:(_Bool)arg2;
- (void)invalidateLocationDataForAssetsWithOIDs:(NSArray *)arg1;
- (void)invalidateLocationDataForAssetsInMoment:(id <PLMomentData>)arg1;
@end

