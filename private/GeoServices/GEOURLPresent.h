//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOURLOptions, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOURLPresent : PBCodable <NSCopying>
{
    NSMutableArray *_items;
    GEOURLOptions *_options;
}

+ (Class)itemType;
@property(retain, nonatomic) GEOURLOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasOptions;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemsCount;
- (void)addItem:(id)arg1;
- (void)clearItems;
- (id)initWithDirectionsOptions:(id)arg1;
- (id)initWithOptions:(id)arg1;

@end

