//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface CPLSuggestionAssetFlag : PBCodable <NSCopying>
{
    _Bool _isKeyAsset;
    _Bool _isRepresentative;
    struct {
        unsigned int isKeyAsset:1;
        unsigned int isRepresentative:1;
    } _has;
}

@property(nonatomic) _Bool isKeyAsset; // @synthesize isKeyAsset=_isKeyAsset;
@property(nonatomic) _Bool isRepresentative; // @synthesize isRepresentative=_isRepresentative;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsKeyAsset;
@property(nonatomic) _Bool hasIsRepresentative;

@end

