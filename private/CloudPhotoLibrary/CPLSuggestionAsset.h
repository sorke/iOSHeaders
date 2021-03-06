//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CPLSuggestionAssetFlag, NSData, NSString;

@interface CPLSuggestionAsset : PBCodable <NSCopying>
{
    NSData *_actionData;
    CPLSuggestionAssetFlag *_assetFlag;
    NSString *_assetIdentifier;
    NSString *_masterFingerprint;
}

@property(retain, nonatomic) NSString *masterFingerprint; // @synthesize masterFingerprint=_masterFingerprint;
@property(retain, nonatomic) NSData *actionData; // @synthesize actionData=_actionData;
@property(retain, nonatomic) CPLSuggestionAssetFlag *assetFlag; // @synthesize assetFlag=_assetFlag;
@property(retain, nonatomic) NSString *assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
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
@property(readonly, nonatomic) _Bool hasMasterFingerprint;
@property(readonly, nonatomic) _Bool hasActionData;
@property(readonly, nonatomic) _Bool hasAssetFlag;
@property(readonly, nonatomic) _Bool hasAssetIdentifier;

@end

