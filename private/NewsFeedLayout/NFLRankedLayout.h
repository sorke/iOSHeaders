//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NFLFeedCollectionViewLayoutAttributes, NSMutableDictionary;

@interface NFLRankedLayout : NSObject <NSCopying>
{
    _Bool _vetoed;
    NFLFeedCollectionViewLayoutAttributes *_layoutAttributes;
    double _rank;
    NSMutableDictionary *_ranks;
}

@property(copy, nonatomic) NSMutableDictionary *ranks; // @synthesize ranks=_ranks;
@property(nonatomic) _Bool vetoed; // @synthesize vetoed=_vetoed;
@property(nonatomic) double rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NFLFeedCollectionViewLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

