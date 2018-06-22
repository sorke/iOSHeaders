//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLocalizedString, GEOPDVenueIdentifier, GEOStyleAttributes, NSData, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteEntryCategory : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOLocalizedString *_displayName;
    GEOStyleAttributes *_styleAttributes;
    NSData *_suggestionEntryMetadata;
    GEOPDVenueIdentifier *_venueIdentifier;
}

@property(retain, nonatomic) GEOPDVenueIdentifier *venueIdentifier; // @synthesize venueIdentifier=_venueIdentifier;
@property(retain, nonatomic) NSData *suggestionEntryMetadata; // @synthesize suggestionEntryMetadata=_suggestionEntryMetadata;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(retain, nonatomic) GEOLocalizedString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasVenueIdentifier;
@property(readonly, nonatomic) _Bool hasSuggestionEntryMetadata;
@property(readonly, nonatomic) _Bool hasStyleAttributes;
@property(readonly, nonatomic) _Bool hasDisplayName;

@end

