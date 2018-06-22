//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface CLSimulationManager : NSObject
{
    double _locationDistance;
    double _locationInterval;
    double _locationSpeed;
    unsigned char _locationRepeatBehavior;
    unsigned char _locationDeliveryBehavior;
    NSXPCConnection *_connection;
}

@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) unsigned char locationRepeatBehavior; // @synthesize locationRepeatBehavior=_locationRepeatBehavior;
@property(nonatomic) double locationSpeed; // @synthesize locationSpeed=_locationSpeed;
@property(nonatomic) double locationInterval; // @synthesize locationInterval=_locationInterval;
@property(nonatomic) double locationDistance; // @synthesize locationDistance=_locationDistance;
@property(nonatomic) unsigned char locationDeliveryBehavior; // @synthesize locationDeliveryBehavior=_locationDeliveryBehavior;
@property(readonly) id <CLSimulationXPCServerInterface> daemonProxy;
- (void)flush;
- (void)setSimulatedWifiPower:(_Bool)arg1;
- (void)stopWifiSimulation;
- (void)startWifiSimulation;
- (void)setWifiScanResults:(id)arg1;
- (void)setSimulatedCellRegistrationStatus:(_Bool)arg1;
- (void)stopCellSimulation;
- (void)startCellSimulation;
- (void)setSimulatedCell:(id)arg1;
- (void)clearSimulatedCells;
- (void)simulateFenceWithBundleID:(id)arg1 andFenceID:(id)arg2 eventType:(unsigned char)arg3 atLocation:(id)arg4;
- (void)getFencesForBundleID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)simulateSignificantLocationChange:(id)arg1;
- (void)simulateVisit:(id)arg1;
- (void)stopLocationSimulation;
- (void)startLocationSimulation;
- (void)appendSimulatedLocation:(id)arg1;
- (void)clearSimulatedLocations;
- (void)loadScenarioFromURL:(id)arg1;
- (void)selectScenario:(id)arg1;
- (id)localizedNameForScenario:(id)arg1;
- (id)availableScenarios;
- (id)scenariosPath;
- (id)init;

@end

