//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDAssertion.h>

@interface _HDHeartRateRecoveryAssertion : HDAssertion
{
    id <HDWorkoutSessionStateController> _sessionStateController;
}

@property(readonly, nonatomic) __weak id <HDWorkoutSessionStateController> sessionStateController; // @synthesize sessionStateController=_sessionStateController;
- (void).cxx_destruct;
- (id)initWithOwnerIdentifier:(id)arg1 sessionStateController:(id)arg2;

@end

