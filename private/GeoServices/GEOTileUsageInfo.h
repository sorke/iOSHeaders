//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURLSessionTaskMetrics;

@interface GEOTileUsageInfo : NSObject
{
    double _startTime;
    double _endTime;
    int _tileStyle;
    _Bool _hasTileStyle;
    unsigned long long _tileSize;
    unsigned long long _requestSize;
    double _queuedTime;
    double _decodingTime;
    NSString *_remoteAddressAndPort;
    int _httpResponseStatusCode;
    NSURLSessionTaskMetrics *_metrics;
}

@property(readonly, nonatomic) NSURLSessionTaskMetrics *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) int httpResponseStatusCode; // @synthesize httpResponseStatusCode=_httpResponseStatusCode;
@property(copy, nonatomic) NSString *remoteAddressAndPort; // @synthesize remoteAddressAndPort=_remoteAddressAndPort;
@property(nonatomic) double decodingTime; // @synthesize decodingTime=_decodingTime;
@property(nonatomic) double queuedTime; // @synthesize queuedTime=_queuedTime;
@property(nonatomic) unsigned long long requestSize; // @synthesize requestSize=_requestSize;
@property(nonatomic) unsigned long long tileSize; // @synthesize tileSize=_tileSize;
@property(readonly, nonatomic) _Bool hasTileStyle; // @synthesize hasTileStyle=_hasTileStyle;
@property(readonly, nonatomic) int tileStyle; // @synthesize tileStyle=_tileStyle;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (id)description;
- (void)dealloc;
- (int)resourceFetchType;
- (int)protocolType;
- (id)initWithTileKey:(const struct _GEOTileKey *)arg1 withTileUsageData:(id)arg2 andURLMetrics:(id)arg3;

@end
