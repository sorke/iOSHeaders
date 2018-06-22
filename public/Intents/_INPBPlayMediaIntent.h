//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBPlayMediaIntent.h"

@class INCodableAttribute, NSArray, NSString, _INPBIntentMetadata, _INPBMediaItemValue, _INPBTimestamp;

@interface _INPBPlayMediaIntent : PBCodable <_INPBPlayMediaIntent, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct {
        unsigned int playShuffled:1;
        unsigned int playbackRepeatMode:1;
        unsigned int resumePlayback:1;
    } _has;
    _Bool _playShuffled;
    _Bool _resumePlayback;
    int _playbackRepeatMode;
    NSArray *_buckets;
    _INPBTimestamp *_expirationDate;
    _INPBIntentMetadata *_intentMetadata;
    _INPBMediaItemValue *_mediaContainer;
    NSArray *_mediaItems;
    NSString *_recoID;
    INCodableAttribute *_associatedCodableAttribute;
}

+ (Class)mediaItemsType;
+ (Class)bucketType;
@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(nonatomic) _Bool resumePlayback; // @synthesize resumePlayback=_resumePlayback;
@property(copy, nonatomic) NSString *recoID; // @synthesize recoID=_recoID;
@property(nonatomic) int playbackRepeatMode; // @synthesize playbackRepeatMode=_playbackRepeatMode;
@property(nonatomic) _Bool playShuffled; // @synthesize playShuffled=_playShuffled;
@property(copy, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(retain, nonatomic) _INPBMediaItemValue *mediaContainer; // @synthesize mediaContainer=_mediaContainer;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBTimestamp *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSArray *buckets; // @synthesize buckets=_buckets;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasResumePlayback;
@property(readonly, nonatomic) _Bool hasRecoID;
- (int)StringAsPlaybackRepeatMode:(id)arg1;
- (id)playbackRepeatModeAsString:(int)arg1;
@property(nonatomic) _Bool hasPlaybackRepeatMode;
@property(nonatomic) _Bool hasPlayShuffled;
- (id)mediaItemsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long mediaItemsCount;
- (void)addMediaItems:(id)arg1;
- (void)clearMediaItems;
@property(readonly, nonatomic) _Bool hasMediaContainer;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(readonly, nonatomic) _Bool hasExpirationDate;
- (id)bucketAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long bucketsCount;
- (void)addBucket:(id)arg1;
- (void)clearBuckets;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

