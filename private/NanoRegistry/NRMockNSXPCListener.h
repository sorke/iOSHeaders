//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NRNSXPCListenerProtocol.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface NRMockNSXPCListener : NSObject <NRNSXPCListenerProtocol>
{
    _Bool _suspended;
    _Bool _invalidated;
    id <NRNSXPCListenerDelegate> _delegate;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) id <NRNSXPCListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)serverConnectionWithClientConnection:(id)arg1;
- (void)dealloc;
- (void)invalidate;
- (void)suspend;
- (void)resume;
- (id)initWithMachServiceName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

