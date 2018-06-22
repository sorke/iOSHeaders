//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPAVRoutingControllerDelegate.h"
#import "MPRequestResponseControllerDelegate.h"

@class MPAVEndpointRoute, MPAVRoutingController, MPCPlayerPath, MPCPlayerResponse, MPMediaControlsConfiguration, MPRequestResponseController, NSArray, NSString;

@interface MediaControlsEndpointController : NSObject <MPRequestResponseControllerDelegate, MPAVRoutingControllerDelegate>
{
    _Bool _allowsAutomaticResponseLoading;
    _Bool _hasEverReceivedResponse;
    _Bool _attemptingConnection;
    _Bool _automaticResponseLoading;
    MPMediaControlsConfiguration *_configuration;
    NSArray *_routeNames;
    long long _state;
    id <MediaControlsEndpointControllerDelegate> _delegate;
    MPRequestResponseController *_requestController;
    MPAVRoutingController *_routingController;
}

@property(nonatomic, getter=isAutomaticResponseLoading) _Bool automaticResponseLoading; // @synthesize automaticResponseLoading=_automaticResponseLoading;
@property(retain, nonatomic) MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
@property(nonatomic, getter=isAttemptingConnection) _Bool attemptingConnection; // @synthesize attemptingConnection=_attemptingConnection;
@property(nonatomic) _Bool hasEverReceivedResponse; // @synthesize hasEverReceivedResponse=_hasEverReceivedResponse;
@property(readonly, nonatomic) MPRequestResponseController *requestController; // @synthesize requestController=_requestController;
@property(nonatomic) __weak id <MediaControlsEndpointControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool allowsAutomaticResponseLoading; // @synthesize allowsAutomaticResponseLoading=_allowsAutomaticResponseLoading;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSArray *routeNames; // @synthesize routeNames=_routeNames;
@property(retain, nonatomic) MPMediaControlsConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)_connectionDidConnect:(id)arg1;
- (void)_connectionDidInvalidate:(id)arg1;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2;
- (void)_reloadPlayerPathWithRoute:(id)arg1;
- (void)_connectIfNeeded;
- (void)_updateState;
- (void)_getConnected:(_Bool *)arg1 invalid:(_Bool *)arg2;
- (void)_initRoutingController;
- (void)_createRequestController;
- (void)_connectionHasBecomeInvalid;
- (void)controller:(id)arg1 defersResponseReplacement:(CDUnknownBlockType)arg2;
- (void)updateRoutePropertiesIfNeeded;
- (void)launchNowPlayingApp;
@property(copy, nonatomic) NSString *label;
- (void)connectAllowingAuthenticationWithCompletion:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) MPAVEndpointRoute *route;
@property(readonly, nonatomic) MPCPlayerResponse *response;
@property(readonly, nonatomic, getter=isRoutingToWireless) _Bool routingToWireless;
@property(readonly, nonatomic) _Bool isDeviceSystemRoute;
@property(readonly, nonatomic, getter=isAirPlaying) _Bool airplaying;
@property(readonly, nonatomic) _Bool hasAvailableRoutes;
@property(readonly, nonatomic) MPCPlayerPath *playerPath;
@property(readonly, copy, nonatomic) NSString *representedBundleID;
@property(readonly, copy, nonatomic) NSString *bundleID;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

