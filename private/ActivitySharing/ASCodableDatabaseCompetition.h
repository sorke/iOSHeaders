//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class ASCodableCloudKitCompetition, NSData;

@interface ASCodableDatabaseCompetition : PBCodable <NSCopying>
{
    long long _type;
    ASCodableCloudKitCompetition *_competition;
    NSData *_friendUUID;
    CDStruct_f953fb60 _has;
}

@property(retain, nonatomic) ASCodableCloudKitCompetition *competition; // @synthesize competition=_competition;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSData *friendUUID; // @synthesize friendUUID=_friendUUID;
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
@property(readonly, nonatomic) _Bool hasCompetition;
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasFriendUUID;

@end

