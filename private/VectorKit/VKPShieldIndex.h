//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VectorKit/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VKPShieldIndex : PBCodable <NSCopying>
{
    NSMutableArray *_entries;
    NSMutableArray *_textEntries;
    NSMutableArray *_variantEntries;
}

@property(retain, nonatomic) NSMutableArray *variantEntries; // @synthesize variantEntries=_variantEntries;
@property(retain, nonatomic) NSMutableArray *textEntries; // @synthesize textEntries=_textEntries;
@property(retain, nonatomic) NSMutableArray *entries; // @synthesize entries=_entries;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)variantEntriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)variantEntriesCount;
- (void)addVariantEntries:(id)arg1;
- (void)clearVariantEntries;
- (id)textEntriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)textEntriesCount;
- (void)addTextEntries:(id)arg1;
- (void)clearTextEntries;
- (id)entriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entriesCount;
- (void)addEntries:(id)arg1;
- (void)clearEntries;
- (void)dealloc;
- (id)defaultArtworkIdentifierForFeatureType:(int)arg1 variant:(unsigned long long)arg2;
- (id)artworkIdentifierForShieldType:(long long)arg1 textSpecificIdentifiers:(id *)arg2 variant:(unsigned long long)arg3;

@end
