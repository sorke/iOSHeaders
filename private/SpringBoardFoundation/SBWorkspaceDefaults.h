//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSData;

@interface SBWorkspaceDefaults : SBAbstractSpringBoardDefaultDomain
{
}

- (void)_bindAndRegisterDefaults;

// Remaining properties
@property(readonly, nonatomic, getter=isBreadcrumbDisabled) _Bool breadcrumbDisabled; // @dynamic breadcrumbDisabled;
@property(readonly, nonatomic) long long medusaDeviceSimulation; // @dynamic medusaDeviceSimulation;
@property(readonly, nonatomic, getter=isMedusaEnabled) _Bool medusaEnabled; // @dynamic medusaEnabled;
@property(retain, nonatomic) NSData *mostRecentFloatingApplicationState; // @dynamic mostRecentFloatingApplicationState;

@end

