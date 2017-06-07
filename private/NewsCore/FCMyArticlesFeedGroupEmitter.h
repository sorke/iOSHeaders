//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedGroupEmitting-Protocol.h>

@class NSString;
@protocol FCHeadlineClusterOrdering, FCHeadlineClustering;

@interface FCMyArticlesFeedGroupEmitter : NSObject <FCFeedGroupEmitting>
{
    id <FCHeadlineClustering> _headlineClusterer;
    id <FCHeadlineClusterOrdering> _headlineClusterOrderer;
}

@property(retain, nonatomic) id <FCHeadlineClusterOrdering> headlineClusterOrderer; // @synthesize headlineClusterOrderer=_headlineClusterOrderer;
@property(retain, nonatomic) id <FCHeadlineClustering> headlineClusterer; // @synthesize headlineClusterer=_headlineClusterer;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool requiresForYouCatchUpOperation;
- (_Bool)canMergeHeadlinesFromGroup:(id)arg1 intoGroup:(id)arg2;
- (_Bool)supportsPagination;
@property(readonly, copy, nonatomic) NSString *groupEmitterIdentifier;
- (_Bool)canEmitGroupsWithType:(long long)arg1;
- (_Bool)wantsToInsertGroup:(id)arg1 withContext:(id)arg2;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (_Bool)wantsToEmitGroupInContext:(id)arg1 withCursor:(id)arg2 toCursor:(id)arg3;
- (id)initWithHeadlineClusterer:(id)arg1 headlineClusterOrderer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool emitsSingletonGroups;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isRequiredByFollowingEmitters;
@property(readonly) Class superclass;

@end
