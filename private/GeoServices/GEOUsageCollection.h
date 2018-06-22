//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOUsageCollection : PBCodable <NSCopying>
{
    struct GEOSessionID _sessionID;
    long long _requestErrorCode;
    struct GEOTileUsage *_tileUsages;
    unsigned long long _tileUsagesCount;
    unsigned long long _tileUsagesSpace;
    double _timestamp;
    int _cellWifi;
    NSString *_countryCode;
    int _geoService;
    NSString *_hwMachine;
    int _placeRequestType;
    int _requestDataSize;
    NSString *_requestErrorDescription;
    NSString *_requestErrorDomain;
    int _responseDataSize;
    int _responseTime;
    _Bool _sessionIDIsPersistent;
    struct {
        unsigned int sessionID:1;
        unsigned int requestErrorCode:1;
        unsigned int timestamp:1;
        unsigned int cellWifi:1;
        unsigned int geoService:1;
        unsigned int placeRequestType:1;
        unsigned int requestDataSize:1;
        unsigned int responseDataSize:1;
        unsigned int responseTime:1;
        unsigned int sessionIDIsPersistent:1;
    } _has;
}

@property(retain, nonatomic) NSString *requestErrorDescription; // @synthesize requestErrorDescription=_requestErrorDescription;
@property(nonatomic) long long requestErrorCode; // @synthesize requestErrorCode=_requestErrorCode;
@property(retain, nonatomic) NSString *requestErrorDomain; // @synthesize requestErrorDomain=_requestErrorDomain;
@property(retain, nonatomic) NSString *hwMachine; // @synthesize hwMachine=_hwMachine;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) struct GEOSessionID sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) int responseTime; // @synthesize responseTime=_responseTime;
@property(nonatomic) int responseDataSize; // @synthesize responseDataSize=_responseDataSize;
@property(nonatomic) int requestDataSize; // @synthesize requestDataSize=_requestDataSize;
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
@property(readonly, nonatomic) _Bool hasRequestErrorDescription;
@property(nonatomic) _Bool hasRequestErrorCode;
@property(readonly, nonatomic) _Bool hasRequestErrorDomain;
- (int)StringAsPlaceRequestType:(id)arg1;
- (id)placeRequestTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPlaceRequestType;
@property(nonatomic) int placeRequestType; // @synthesize placeRequestType=_placeRequestType;
@property(nonatomic) _Bool hasSessionIDIsPersistent;
@property(nonatomic) _Bool sessionIDIsPersistent; // @synthesize sessionIDIsPersistent=_sessionIDIsPersistent;
@property(readonly, nonatomic) _Bool hasHwMachine;
- (void)setTileUsages:(struct GEOTileUsage *)arg1 count:(unsigned long long)arg2;
- (struct GEOTileUsage)tileUsageAtIndex:(unsigned long long)arg1;
- (void)addTileUsage:(struct GEOTileUsage)arg1;
- (void)clearTileUsages;
@property(readonly, nonatomic) struct GEOTileUsage *tileUsages;
@property(readonly, nonatomic) unsigned long long tileUsagesCount;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasSessionID;
@property(readonly, nonatomic) _Bool hasCountryCode;
- (int)StringAsCellWifi:(id)arg1;
- (id)cellWifiAsString:(int)arg1;
@property(nonatomic) _Bool hasCellWifi;
@property(nonatomic) int cellWifi; // @synthesize cellWifi=_cellWifi;
@property(nonatomic) _Bool hasResponseTime;
@property(nonatomic) _Bool hasResponseDataSize;
@property(nonatomic) _Bool hasRequestDataSize;
- (int)StringAsGeoService:(id)arg1;
- (id)geoServiceAsString:(int)arg1;
@property(nonatomic) _Bool hasGeoService;
@property(nonatomic) int geoService; // @synthesize geoService=_geoService;
- (void)dealloc;

@end

