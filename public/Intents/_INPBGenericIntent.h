//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields, _INPBIntentMetadata;

@interface _INPBGenericIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_domain;
    _INPBIntentMetadata *_metadata;
    NSMutableArray *_parameters;
    NSString *_verb;
}

+ (Class)parametersType;
+ (id)options;
@property(retain, nonatomic) NSMutableArray *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSString *verb; // @synthesize verb=_verb;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) _INPBIntentMetadata *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)parametersAtIndex:(unsigned long long)arg1;
- (unsigned long long)parametersCount;
- (void)addParameters:(id)arg1;
- (void)clearParameters;
@property(readonly, nonatomic) _Bool hasVerb;
@property(readonly, nonatomic) _Bool hasDomain;
@property(readonly, nonatomic) _Bool hasMetadata;

@end
