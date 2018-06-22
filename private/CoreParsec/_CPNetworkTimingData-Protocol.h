//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, _CPTCPInfo, _CPTuscanyConnectionInfo;

@protocol _CPNetworkTimingData <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) unsigned int secureConnectStart;
@property(nonatomic) unsigned int responseEnd;
@property(nonatomic) unsigned int responseStart;
@property(nonatomic) unsigned int requestEnd;
@property(nonatomic) unsigned int requestStart;
@property(nonatomic) unsigned int redirectEnd;
@property(nonatomic) unsigned int redirectStart;
@property(nonatomic) unsigned int fetchStart;
@property(nonatomic) unsigned int domainLookupEnd;
@property(nonatomic) unsigned int domainLookupStart;
@property(nonatomic) unsigned int connectEnd;
@property(nonatomic) unsigned int connectStart;
@property(retain, nonatomic) _CPTuscanyConnectionInfo *tuscany;
@property(nonatomic) double timingDataInit;
@property(nonatomic) _Bool TFOSuccess;
@property(nonatomic) unsigned int responseHeaderSize;
@property(nonatomic) unsigned int responseBodyBytesReceived;
@property(nonatomic) unsigned int responseBodyBytesDecoded;
@property(nonatomic) unsigned int requestHeaderSize;
@property(nonatomic) unsigned int redirectCountW3C;
@property(nonatomic) unsigned int redirectCount;
@property(nonatomic) _Bool QUICWhitelistedDomain;
@property(copy, nonatomic) NSString *networkProtocolName;
@property(copy, nonatomic) NSString *connectionUUID;
@property(retain, nonatomic) _CPTCPInfo *stopTimeCounts;
@property(retain, nonatomic) _CPTCPInfo *startTimeCounts;
@property(nonatomic) _Bool connectionReused;
@property(nonatomic) _Bool connectionRace;
@property(copy, nonatomic) NSData *peerAddress;
@property(copy, nonatomic) NSString *interfaceIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

