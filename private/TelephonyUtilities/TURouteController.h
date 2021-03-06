//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TURouteControllerClient.h"

@class NSArray, NSDictionary, NSHashTable, NSObject<OS_dispatch_queue>, NSString, TURoute;

@interface TURouteController : NSObject <TURouteControllerClient>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <TURouteControllerActions> _actionsDelegate;
    NSHashTable *_delegates;
    NSDictionary *_routesByUniqueIdentifier;
}

@property(copy, nonatomic) NSDictionary *routesByUniqueIdentifier; // @synthesize routesByUniqueIdentifier=_routesByUniqueIdentifier;
@property(readonly, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(readonly, nonatomic) __weak id <TURouteControllerActions> actionsDelegate; // @synthesize actionsDelegate=_actionsDelegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)handleServerDisconnect;
- (void)handleServerReconnect;
- (oneway void)handleRoutesByUniqueIdentifierUpdated:(id)arg1;
- (void)pickRouteWithUniqueIdentifier:(id)arg1;
- (void)pickRoute:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
@property(readonly, copy, nonatomic) TURoute *speakerRoute;
@property(readonly, copy, nonatomic) TURoute *receiverRoute;
@property(readonly, copy, nonatomic) TURoute *pickedRoute;
@property(readonly, copy, nonatomic) NSArray *routes;
- (id)initWithActionsDelegate:(id)arg1 serialQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

