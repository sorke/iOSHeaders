//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKLocationManager.h>

@interface NTKSimulatedLocationManager : NTKLocationManager
{
}

- (id)companionLocation;
- (id)previousLocation;
- (id)currentLocation;
- (void)stopLocationUpdatesForToken:(struct NSString *)arg1;
- (struct NSString *)startLocationUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (struct NSString *)startLocationUpdatesWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)init;

@end
