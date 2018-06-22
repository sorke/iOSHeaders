//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ADSingleton.h"

#import "NSXPCListenerDelegate.h"

@class NSMutableDictionary, NSNumber, NSString, NSXPCListener;

@interface ADAttributionService : ADSingleton <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
    NSMutableDictionary *_clients;
    NSNumber *_transactionID;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSNumber *transactionID; // @synthesize transactionID=_transactionID;
@property(retain, nonatomic) NSMutableDictionary *clients; // @synthesize clients=_clients;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
- (void).cxx_destruct;
- (void)removeClientForToken:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

