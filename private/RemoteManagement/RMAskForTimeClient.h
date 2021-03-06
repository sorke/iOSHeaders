//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RMAskForTimeInterface.h"

@class NSString, NSXPCConnection;

@interface RMAskForTimeClient : NSObject <RMAskForTimeInterface>
{
    NSXPCConnection *_xpcConnection;
}

@property(readonly, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (void)_asynchronousProxyWithHandler:(CDUnknownBlockType)arg1;
- (void)_synchronousProxyWithHandler:(CDUnknownBlockType)arg1;
- (void)handleAnswer:(long long)arg1 requestIdentifier:(id)arg2 timeApproved:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)fetchLastResponseForRequestedResourceIdentifier:(id)arg1 usageType:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)approveExceptionForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendAskForTimeRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

