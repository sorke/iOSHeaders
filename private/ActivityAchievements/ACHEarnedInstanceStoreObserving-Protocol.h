//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACHEarnedInstanceStore, NSArray;

@protocol ACHEarnedInstanceStoreObserving <NSObject>
- (void)earnedInstanceStore:(ACHEarnedInstanceStore *)arg1 didRemoveEarnedInstances:(NSArray *)arg2;
- (void)earnedInstanceStore:(ACHEarnedInstanceStore *)arg1 didAddNewEarnedInstances:(NSArray *)arg2;

@optional
- (void)earnedInstanceStoreDidFinishInitialFetch:(ACHEarnedInstanceStore *)arg1;
@end

