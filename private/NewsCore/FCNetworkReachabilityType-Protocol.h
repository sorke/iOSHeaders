//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol FCNetworkReachabilityType <NSObject>
@property(nonatomic) long long offlineReason;
@property(readonly, nonatomic) _Bool isCloudKitReachable;
- (void)removeObserver:(id <FCNetworkReachabilityObserving>)arg1;
- (void)addObserver:(id <FCNetworkReachabilityObserving>)arg1;
@end

