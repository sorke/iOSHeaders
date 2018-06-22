//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLocation, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEODirectionsFeedbackCollection : PBCodable <NSCopying>
{
    struct GEONavigationAudioFeedback _navigationAudioFeedback;
    double _durationOfTrip;
    NSMutableArray *_directionsFeedbacks;
    GEOLocation *_finalLocation;
    _Bool _arrivedAtDestination;
    CDStruct_47a5651d _has;
}

+ (Class)directionsFeedbackType;
@property(nonatomic) double durationOfTrip; // @synthesize durationOfTrip=_durationOfTrip;
@property(nonatomic) struct GEONavigationAudioFeedback navigationAudioFeedback; // @synthesize navigationAudioFeedback=_navigationAudioFeedback;
@property(nonatomic) _Bool arrivedAtDestination; // @synthesize arrivedAtDestination=_arrivedAtDestination;
@property(retain, nonatomic) GEOLocation *finalLocation; // @synthesize finalLocation=_finalLocation;
@property(retain, nonatomic) NSMutableArray *directionsFeedbacks; // @synthesize directionsFeedbacks=_directionsFeedbacks;
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
@property(nonatomic) _Bool hasDurationOfTrip;
@property(nonatomic) _Bool hasNavigationAudioFeedback;
@property(nonatomic) _Bool hasArrivedAtDestination;
@property(readonly, nonatomic) _Bool hasFinalLocation;
- (id)directionsFeedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsFeedbacksCount;
- (void)addDirectionsFeedback:(id)arg1;
- (void)clearDirectionsFeedbacks;

@end

