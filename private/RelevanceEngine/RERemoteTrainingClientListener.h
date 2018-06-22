//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSXPCListener;

@interface RERemoteTrainingClientListener : NSObject <NSXPCListenerDelegate>
{
    NSMutableSet *_clients;
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_queue;
    id <RERemoteTrainingClientListenerDelegate> _delegate;
}

@property(nonatomic) __weak id <RERemoteTrainingClientListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

