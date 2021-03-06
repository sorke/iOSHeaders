//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EKEventEditViewDelegate.h"
#import "SXCalendarPresenter.h"

@class EKEventStore, NSString;

@interface SXCalendarPresenter : NSObject <EKEventEditViewDelegate, SXCalendarPresenter>
{
    id <SXViewControllerPresenting> _viewControllerPresenting;
    EKEventStore *_eventStore;
}

@property(readonly, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property(readonly, nonatomic) id <SXViewControllerPresenting> viewControllerPresenting; // @synthesize viewControllerPresenting=_viewControllerPresenting;
- (void).cxx_destruct;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)presentCalendarEvent:(id)arg1;
- (id)initWithViewControllerPresenting:(id)arg1 eventStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

