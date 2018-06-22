//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class C2MPCloudKitInfo, C2MPDeviceInfo, C2MPGenericEvent, C2MPNetworkEvent, C2MPServerInfo;

__attribute__((visibility("hidden")))
@interface C2MPMetric : PBCodable <NSCopying>
{
    unsigned long long _reportFrequency;
    unsigned long long _reportFrequencyBase;
    unsigned long long _triggers;
    C2MPCloudKitInfo *_cloudkitInfo;
    C2MPDeviceInfo *_deviceInfo;
    C2MPGenericEvent *_genericEvent;
    int _metricType;
    C2MPNetworkEvent *_networkEvent;
    C2MPServerInfo *_serverInfo;
    struct {
        unsigned int reportFrequency:1;
        unsigned int reportFrequencyBase:1;
        unsigned int triggers:1;
        unsigned int metricType:1;
    } _has;
}

@property(retain, nonatomic) C2MPGenericEvent *genericEvent; // @synthesize genericEvent=_genericEvent;
@property(retain, nonatomic) C2MPNetworkEvent *networkEvent; // @synthesize networkEvent=_networkEvent;
@property(nonatomic) unsigned long long reportFrequencyBase; // @synthesize reportFrequencyBase=_reportFrequencyBase;
@property(nonatomic) unsigned long long reportFrequency; // @synthesize reportFrequency=_reportFrequency;
@property(nonatomic) unsigned long long triggers; // @synthesize triggers=_triggers;
@property(retain, nonatomic) C2MPServerInfo *serverInfo; // @synthesize serverInfo=_serverInfo;
@property(retain, nonatomic) C2MPCloudKitInfo *cloudkitInfo; // @synthesize cloudkitInfo=_cloudkitInfo;
@property(retain, nonatomic) C2MPDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
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
@property(readonly, nonatomic) _Bool hasGenericEvent;
@property(readonly, nonatomic) _Bool hasNetworkEvent;
@property(nonatomic) _Bool hasReportFrequencyBase;
@property(nonatomic) _Bool hasReportFrequency;
@property(nonatomic) _Bool hasTriggers;
@property(readonly, nonatomic) _Bool hasServerInfo;
@property(readonly, nonatomic) _Bool hasCloudkitInfo;
@property(readonly, nonatomic) _Bool hasDeviceInfo;
- (int)StringAsMetricType:(id)arg1;
- (id)metricTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMetricType;
@property(nonatomic) int metricType; // @synthesize metricType=_metricType;

@end

