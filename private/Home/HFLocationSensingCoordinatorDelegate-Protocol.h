//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HFLocationSensingCoordinator;

@protocol HFLocationSensingCoordinatorDelegate <NSObject>

@optional
- (void)coordinator:(HFLocationSensingCoordinator *)arg1 homeSensingStatusDidChange:(_Bool)arg2;
- (void)coordinator:(HFLocationSensingCoordinator *)arg1 locationSensingAvailabilityDidChange:(_Bool)arg2;
@end

