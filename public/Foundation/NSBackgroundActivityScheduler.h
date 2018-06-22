//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NSBackgroundActivityScheduler : NSObject
{
    id _private1;
    id _private2;
    id _private3;
    long long _flags;
}

@property(readonly) _Bool shouldDefer;
- (void)invalidate;
- (void)scheduleWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateCriteriaForCompletedActivity:(id)arg1;
- (void)_updateCriteria:(id)arg1;
- (void)_setAdditionalXPCActivityProperties:(id)arg1;
@property CDUnknownBlockType checkInHandler;
@property double delay;
@property(getter=isPreregistered) _Bool preregistered;
@property double tolerance;
@property double interval;
@property(getter=_isAppRefresh) _Bool _appRefresh;
@property _Bool repeats;
@property long long qualityOfService;
@property(readonly, copy) NSString *identifier;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end

