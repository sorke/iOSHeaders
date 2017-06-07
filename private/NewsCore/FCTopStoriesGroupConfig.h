//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCGroupConfig.h>

@class NSArray, NSDictionary;

@interface FCTopStoriesGroupConfig : FCGroupConfig
{
    NSArray *_mandatoryArticleIDs;
    NSArray *_optionalArticleIDs;
    NSDictionary *_topStoriesMetadataByArticleID;
}

@property(retain, nonatomic) NSDictionary *topStoriesMetadataByArticleID; // @synthesize topStoriesMetadataByArticleID=_topStoriesMetadataByArticleID;
@property(readonly, nonatomic) NSArray *optionalArticleIDs; // @synthesize optionalArticleIDs=_optionalArticleIDs;
@property(readonly, nonatomic) NSArray *mandatoryArticleIDs; // @synthesize mandatoryArticleIDs=_mandatoryArticleIDs;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
