//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPReplicaMergeOptions-Protocol.h>

@class NSDate, NSString;

@interface MSPHistoryReplicaMergeOptions : NSObject <MSPReplicaMergeOptions>
{
    NSDate *_earliestKnownSyncDate;
    long long _modificationDatePolicy;
}

@property(readonly) long long modificationDatePolicy; // @synthesize modificationDatePolicy=_modificationDatePolicy;
@property(readonly) NSDate *earliestKnownSyncDate; // @synthesize earliestKnownSyncDate=_earliestKnownSyncDate;
- (void).cxx_destruct;
- (id)initWithEarliestKnownSyncDate:(id)arg1 modificationDatePolicy:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
