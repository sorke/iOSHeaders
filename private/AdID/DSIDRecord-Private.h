//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AdCore/DSIDRecord.h>

@class NSString;

@interface DSIDRecord (Private)
- (_Bool)isEqual:(id)arg1;
- (_Bool)LATStatusChangeInProgress;
- (void)handleIDFAReset:(CDUnknownBlockType)arg1;
- (void)setLimitAdTrackingStatus:(_Bool)arg1 timestamp:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendLATStatusToAdPlatforms:(CDUnknownBlockType)arg1;
- (void)sendSegmentDataToAdPlatforms:(CDUnknownBlockType)arg1;
- (void)retrieveSegmentDataFromiTunes:(CDUnknownBlockType)arg1;
- (_Bool)isActiveRecord;
- (void)resetiAdIDs:(CDUnknownBlockType)arg1;
- (void)ensureiAdIDs;
- (_Bool)hasIDForClientType:(long long)arg1;
- (void)postInitSetup;

// Remaining properties
@property(retain, nonatomic) NSString *IDFA; // @dynamic IDFA;
@property(nonatomic) _Bool accountIsT13; // @dynamic accountIsT13;
@property(nonatomic) _Bool accountIsU13; // @dynamic accountIsU13;
@property(nonatomic) _Bool accountIsU18; // @dynamic accountIsU18;
@property(nonatomic) double lastSegmentServedTimestamp; // @dynamic lastSegmentServedTimestamp;
@property(nonatomic) double lastSentSegmentDataTimestamp; // @dynamic lastSentSegmentDataTimestamp;
@property(nonatomic) double limitAdTrackingTimestamp; // @dynamic limitAdTrackingTimestamp;
@property(retain, nonatomic) NSString *segmentData; // @dynamic segmentData;
@property(nonatomic) double segmentDataTimestamp; // @dynamic segmentDataTimestamp;
@end
