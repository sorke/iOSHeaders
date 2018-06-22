//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLatLng, NSData, NSMutableArray, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOSuggestionEntry : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    struct GEOHighlight *_textHighlights;
    unsigned long long _textHighlightsCount;
    unsigned long long _textHighlightsSpace;
    NSString *_calloutTitle;
    NSMutableArray *_displayLines;
    NSString *_iconID;
    GEOLatLng *_latlng;
    NSMutableArray *_namedFeatures;
    NSString *_searchQueryDisplayString;
    NSData *_suggestionEntryMetadata;
}

+ (Class)namedFeatureType;
+ (Class)displayLineType;
@property(retain, nonatomic) NSMutableArray *namedFeatures; // @synthesize namedFeatures=_namedFeatures;
@property(retain, nonatomic) NSString *calloutTitle; // @synthesize calloutTitle=_calloutTitle;
@property(retain, nonatomic) NSString *searchQueryDisplayString; // @synthesize searchQueryDisplayString=_searchQueryDisplayString;
@property(retain, nonatomic) NSData *suggestionEntryMetadata; // @synthesize suggestionEntryMetadata=_suggestionEntryMetadata;
@property(retain, nonatomic) GEOLatLng *latlng; // @synthesize latlng=_latlng;
@property(retain, nonatomic) NSString *iconID; // @synthesize iconID=_iconID;
@property(retain, nonatomic) NSMutableArray *displayLines; // @synthesize displayLines=_displayLines;
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
- (id)namedFeatureAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedFeaturesCount;
- (void)addNamedFeature:(id)arg1;
- (void)clearNamedFeatures;
@property(readonly, nonatomic) _Bool hasCalloutTitle;
@property(readonly, nonatomic) _Bool hasSearchQueryDisplayString;
@property(readonly, nonatomic) _Bool hasSuggestionEntryMetadata;
@property(readonly, nonatomic) _Bool hasLatlng;
@property(readonly, nonatomic) _Bool hasIconID;
- (void)setTextHighlights:(struct GEOHighlight *)arg1 count:(unsigned long long)arg2;
- (struct GEOHighlight)textHighlightsAtIndex:(unsigned long long)arg1;
- (void)addTextHighlights:(struct GEOHighlight)arg1;
- (void)clearTextHighlights;
@property(readonly, nonatomic) struct GEOHighlight *textHighlights;
@property(readonly, nonatomic) unsigned long long textHighlightsCount;
- (id)displayLineAtIndex:(unsigned long long)arg1;
- (unsigned long long)displayLinesCount;
- (void)addDisplayLine:(id)arg1;
- (void)clearDisplayLines;
- (void)dealloc;

@end

