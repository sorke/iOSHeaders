//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface NTPBFeedItemBatch : PBCodable <NSCopying>
{
    NSMutableArray *_feedItems;
}

+ (Class)feedItemsType;
@property(retain, nonatomic) NSMutableArray *feedItems; // @synthesize feedItems=_feedItems;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)feedItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)feedItemsCount;
- (void)addFeedItems:(id)arg1;
- (void)clearFeedItems;
- (void)dealloc;

@end

