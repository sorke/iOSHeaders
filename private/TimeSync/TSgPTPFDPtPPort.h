//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TimeSync/TSgPTPNetworkPort.h>

@class TSgPTPPortStatistics;

@interface TSgPTPFDPtPPort : TSgPTPNetworkPort
{
    BOOL _localPDelayLogMeanInterval;
    BOOL _remotePDelayLogMeanInterval;
    _Bool _multipleRemotes;
    TSgPTPPortStatistics *_statistics;
}

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
@property(nonatomic) _Bool multipleRemotes; // @synthesize multipleRemotes=_multipleRemotes;
@property(nonatomic) BOOL remotePDelayLogMeanInterval; // @synthesize remotePDelayLogMeanInterval=_remotePDelayLogMeanInterval;
@property(nonatomic) BOOL localPDelayLogMeanInterval; // @synthesize localPDelayLogMeanInterval=_localPDelayLogMeanInterval;
@property(retain, nonatomic) TSgPTPPortStatistics *statistics; // @synthesize statistics=_statistics;
- (void)dealloc;
- (_Bool)_multipleRemotes;
- (BOOL)_remotePDelayLogMeanInterval;
- (BOOL)_localPDelayLogMeanInterval;
- (id)_statistics;
- (void)updateProperties;
- (_Bool)_commonInitWithService:(unsigned int)arg1;
- (id)initWithMatchingDictionary:(id)arg1;
- (id)initWithService:(unsigned int)arg1;

@end

