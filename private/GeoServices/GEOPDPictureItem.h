//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDPhoto, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPictureItem : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDPhoto *_photo;
    int _photoItemType;
    NSString *_primaryText;
    NSString *_secondaryText;
    struct {
        unsigned int photoItemType:1;
    } _has;
}

@property(retain, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(retain, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
@property(retain, nonatomic) GEOPDPhoto *photo; // @synthesize photo=_photo;
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
- (int)StringAsPhotoItemType:(id)arg1;
- (id)photoItemTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPhotoItemType;
@property(nonatomic) int photoItemType; // @synthesize photoItemType=_photoItemType;
@property(readonly, nonatomic) _Bool hasSecondaryText;
@property(readonly, nonatomic) _Bool hasPrimaryText;
@property(readonly, nonatomic) _Bool hasPhoto;

@end

