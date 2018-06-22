//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPhoto : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_photoId;
    NSMutableArray *_photoVersions;
}

+ (Class)photoVersionType;
+ (id)photosForPlaceData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *photoVersions; // @synthesize photoVersions=_photoVersions;
@property(retain, nonatomic) NSString *photoId; // @synthesize photoId=_photoId;
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
- (id)photoVersionAtIndex:(unsigned long long)arg1;
- (unsigned long long)photoVersionsCount;
- (void)addPhotoVersion:(id)arg1;
- (void)clearPhotoVersions;
@property(readonly, nonatomic) _Bool hasPhotoId;
- (id)bestURL;

@end

