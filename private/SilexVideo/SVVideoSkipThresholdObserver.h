//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVVideoSkipThresholdObserving.h"

@class NSString;

@interface SVVideoSkipThresholdObserver : NSObject <SVVideoSkipThresholdObserving>
{
    _Bool _loading;
    CDUnknownBlockType block;
    id <SVVideoSkipThreshold> _thresholdProvider;
    id <SVVideoLoadingStateObserving> _loadingStateObserver;
}

@property(readonly, nonatomic) id <SVVideoLoadingStateObserving> loadingStateObserver; // @synthesize loadingStateObserver=_loadingStateObserver;
@property(readonly, nonatomic) id <SVVideoSkipThreshold> thresholdProvider; // @synthesize thresholdProvider=_thresholdProvider;
@property(copy, nonatomic, setter=onChange:) CDUnknownBlockType block; // @synthesize block;
- (void).cxx_destruct;
- (void)loadingCompletedWithThreshold:(double)arg1;
@property(readonly, nonatomic) _Bool loading; // @synthesize loading=_loading;
- (id)initWithLoadingStateObserver:(id)arg1 thresholdProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

