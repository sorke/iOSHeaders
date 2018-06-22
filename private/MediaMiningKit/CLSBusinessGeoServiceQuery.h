//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLSQueryProtocol.h"

@class NSArray, NSString;

@interface CLSBusinessGeoServiceQuery : NSObject <CLSQueryProtocol>
{
    _Bool _isCancelled;
    NSArray *_muids;
    id <GEOMapServiceTicket> _ticket;
    NSArray *_resolvedBusinessItems;
}

@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, nonatomic) NSArray *resolvedBusinessItems; // @synthesize resolvedBusinessItems=_resolvedBusinessItems;
@property(readonly, nonatomic) id <GEOMapServiceTicket> ticket; // @synthesize ticket=_ticket;
@property(readonly, copy, nonatomic) NSArray *muids; // @synthesize muids=_muids;
- (void).cxx_destruct;
- (void)prepareForRetry;
- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithMUIDs:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

