//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SVVideoSkipLockObserving <NSObject>
@property(copy, nonatomic, setter=onCountDown:) CDUnknownBlockType countdownBlock;
@property(readonly, nonatomic) double countdown;
@property(copy, nonatomic, setter=onUnlock:) CDUnknownBlockType unlockBlock;
@property(readonly, nonatomic) _Bool locked;
@end

