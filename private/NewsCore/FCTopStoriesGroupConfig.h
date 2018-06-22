//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsCore/FCGroupConfig.h>

@class NSArray, NSDate, NSDictionary;

@interface FCTopStoriesGroupConfig : FCGroupConfig
{
    NSArray *_mandatoryArticleIDs;
    NSArray *_optionalArticleIDs;
    NSDictionary *_topStoriesMetadataByArticleID;
    NSDate *_publishDate;
}

@property(readonly, nonatomic) NSDate *publishDate; // @synthesize publishDate=_publishDate;
@property(retain, nonatomic) NSDictionary *topStoriesMetadataByArticleID; // @synthesize topStoriesMetadataByArticleID=_topStoriesMetadataByArticleID;
@property(readonly, nonatomic) NSArray *optionalArticleIDs; // @synthesize optionalArticleIDs=_optionalArticleIDs;
@property(readonly, nonatomic) NSArray *mandatoryArticleIDs; // @synthesize mandatoryArticleIDs=_mandatoryArticleIDs;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

