//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSMutableDictionary, PGGraphMomentNode;

@interface PGGraphMatchingResult : NSObject <NSCopying>
{
    PGGraphMomentNode *_event;
    NSDictionary *_keywords;
    double _score;
    NSMutableDictionary *_context;
}

@property(readonly, nonatomic) NSMutableDictionary *context; // @synthesize context=_context;
@property(nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) PGGraphMomentNode *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToResult:(id)arg1;
- (void)enumerateContextItems:(CDUnknownBlockType)arg1;
- (id)sortedCriteria;
@property(readonly, nonatomic) NSDictionary *keywords; // @synthesize keywords=_keywords;
- (id)_highestScoredContextItemWithPreferredRelatedType:(unsigned long long)arg1;
- (id)_contextItemsSortedByScoreAscending:(_Bool)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)localEndDate;
- (id)localStartDate;
- (void)setContextItem:(id)arg1 forRelatedType:(unsigned long long)arg2;
- (id)contextItemForRelatedType:(unsigned long long)arg1;
- (void)clearKeywordsForRelatedType:(unsigned long long)arg1;
- (void)addKeywords:(id)arg1 forRelatedType:(unsigned long long)arg2;
- (id)keywordsForRelatedType:(unsigned long long)arg1;
- (id)initWithEvent:(id)arg1;

@end

