//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DNDModeAssertion, DNDSModeAssertionStateProvider, NSArray, NSString;

@protocol DNDSModeAssertionStateProviderDataSource <NSObject>
- (NSString *)stateProvider:(DNDSModeAssertionStateProvider *)arg1 effectiveModeIdentifierForModeAssertion:(DNDModeAssertion *)arg2;
- (NSArray *)currentlyActiveModeAssertionsForStateProvider:(DNDSModeAssertionStateProvider *)arg1;
@end

