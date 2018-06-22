//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVTUIEnvironment, NSArray, NSMutableDictionary;

@interface AVTAvatarAttributeEditorDataSource : NSObject
{
    unsigned long long _currentCategoryIndex;
    NSArray *_categories;
    NSMutableDictionary *_sectionControllers;
    AVTUIEnvironment *_environment;
    id <AVTScheduler> _renderingScheduler;
}

+ (unsigned long long)indexForCurrentCategoryGivenPreferredIdentifier:(id)arg1 categories:(id)arg2;
+ (id)sectionControllerForSection:(id)arg1 renderingScheduler:(id)arg2 environment:(id)arg3;
@property(readonly, nonatomic) id <AVTScheduler> renderingScheduler; // @synthesize renderingScheduler=_renderingScheduler;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSMutableDictionary *sectionControllers; // @synthesize sectionControllers=_sectionControllers;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(nonatomic) unsigned long long currentCategoryIndex; // @synthesize currentCategoryIndex=_currentCategoryIndex;
- (void).cxx_destruct;
- (id)currentCategoryIdentifier;
- (id)indexesForSectionsExcludingSectionsWithIdentifiers:(id)arg1 inCategoryAtIndex:(long long)arg2;
- (long long)indexForSection:(id)arg1 inCategoryAtIndex:(long long)arg2;
- (id)sectionForIndex:(long long)arg1 inCategoryAtIndex:(long long)arg2;
- (id)sectionControllerForSectionIndex:(long long)arg1 inCategoryAtIndex:(long long)arg2;
- (long long)numberOfSectionsForCategoryAtIndex:(long long)arg1;
- (id)categoryAtIndex:(long long)arg1;
- (id)namesForCategories;
- (long long)numberOfCategories;
- (void)discardControllersForNonCurrentCategory;
- (void)reloadWithCategories:(id)arg1 currentCategoryIndex:(unsigned long long)arg2;
- (id)initWithCategories:(id)arg1 currentCategoryIdentifier:(id)arg2 renderingScheduler:(id)arg3 environment:(id)arg4;

@end

