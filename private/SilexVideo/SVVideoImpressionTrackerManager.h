//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVVideoTransitionObserver.h"

@class NSString;

@interface SVVideoImpressionTrackerManager : NSObject <SVVideoTransitionObserver>
{
    id <SVVideoImpressionTrackerFactory> _impressionTrackerFactory;
    id <SVVideoEventTrackerProviding> _eventTrackerProvider;
    id <SVVideoImpressionTracking> _impressionTracker;
}

@property(retain, nonatomic) id <SVVideoImpressionTracking> impressionTracker; // @synthesize impressionTracker=_impressionTracker;
@property(readonly, nonatomic) id <SVVideoEventTrackerProviding> eventTrackerProvider; // @synthesize eventTrackerProvider=_eventTrackerProvider;
@property(readonly, nonatomic) id <SVVideoImpressionTrackerFactory> impressionTrackerFactory; // @synthesize impressionTrackerFactory=_impressionTrackerFactory;
- (void).cxx_destruct;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithImpressionTrackerFactory:(id)arg1 eventTrackerProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

