//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BFFPasscodeCreationManager, NSError;

@protocol BFFPasscodeCreationDelegate <NSObject>

@optional
- (void)passcodeManager:(BFFPasscodeCreationManager *)arg1 didSetPasscodeWithSuccess:(_Bool)arg2 error:(NSError *)arg3;
- (void)passcodeManagerWillSetPasscode:(BFFPasscodeCreationManager *)arg1;
- (void)passcodeManager:(BFFPasscodeCreationManager *)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
@end

