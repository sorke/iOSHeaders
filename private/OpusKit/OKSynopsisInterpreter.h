//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface OKSynopsisInterpreter : NSObject
{
    NSMutableDictionary *_objectCreators;
    NSMutableDictionary *_objectComparators;
    NSMutableArray *_guidelineItems;
    NSArray *_synopsis;
}

@property(retain, nonatomic) NSArray *synopsis; // @synthesize synopsis=_synopsis;
- (id)guidelineSynopsisItemsFromObjectViews:(id)arg1;
- (id)guidelineSynopsisItemFromObjectView:(id)arg1;
- (id)objectViewsFromGuidelineSynopsisItems:(id)arg1;
- (id)objectViewFromGuidelineSynopsisItem:(id)arg1;
- (void)registerComparatorForItemType:(unsigned long long)arg1 compareBlock:(CDUnknownBlockType)arg2;
- (void)registerCreatorForItemType:(unsigned long long)arg1 initBlock:(CDUnknownBlockType)arg2;
- (id)allObjectsFromGuidelineSynopsisItems;
- (id)allGuidelineSynopsisItems;
- (_Bool)hasSynopsis;
- (void)dealloc;
- (id)initWithSynopsis:(id)arg1;

@end

