//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CPSAlternateRouteSelecting.h"

@class CPRouteChoice, CPSAlternateRoutesView, CPSCardPlatterView, CPSRouteOverviewView, CPTravelEstimates, CPTrip, NSLayoutConstraint, NSString, UIButton;

@interface CPSTripCardView : UIView <CPSAlternateRouteSelecting>
{
    _Bool _showMoreRoutes;
    CPTrip *_trip;
    id <CPSTripInitiating> _tripDelegate;
    CPRouteChoice *_selectedRouteChoice;
    CPSCardPlatterView *_platterView;
    CPSRouteOverviewView *_overviewView;
    CPSAlternateRoutesView *_alternatesView;
    UIButton *_goButton;
    UIButton *_toggleMoreRoutesButton;
    NSLayoutConstraint *_platterWidthConstraint;
    NSLayoutConstraint *_overviewTopConstraint;
    NSLayoutConstraint *_overviewCollapsedHeightConstraint;
    NSLayoutConstraint *_overviewBottomConstraint;
    NSLayoutConstraint *_alternateRoutesHeightConstraint;
    NSLayoutConstraint *_moreRoutesButtonBottomAnchor;
}

@property(retain, nonatomic) NSLayoutConstraint *moreRoutesButtonBottomAnchor; // @synthesize moreRoutesButtonBottomAnchor=_moreRoutesButtonBottomAnchor;
@property(retain, nonatomic) NSLayoutConstraint *alternateRoutesHeightConstraint; // @synthesize alternateRoutesHeightConstraint=_alternateRoutesHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *overviewBottomConstraint; // @synthesize overviewBottomConstraint=_overviewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *overviewCollapsedHeightConstraint; // @synthesize overviewCollapsedHeightConstraint=_overviewCollapsedHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *overviewTopConstraint; // @synthesize overviewTopConstraint=_overviewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *platterWidthConstraint; // @synthesize platterWidthConstraint=_platterWidthConstraint;
@property(nonatomic) _Bool showMoreRoutes; // @synthesize showMoreRoutes=_showMoreRoutes;
@property(readonly, nonatomic) UIButton *toggleMoreRoutesButton; // @synthesize toggleMoreRoutesButton=_toggleMoreRoutesButton;
@property(readonly, nonatomic) UIButton *goButton; // @synthesize goButton=_goButton;
@property(readonly, nonatomic) CPSAlternateRoutesView *alternatesView; // @synthesize alternatesView=_alternatesView;
@property(readonly, nonatomic) CPSRouteOverviewView *overviewView; // @synthesize overviewView=_overviewView;
@property(readonly, nonatomic) CPSCardPlatterView *platterView; // @synthesize platterView=_platterView;
@property(nonatomic) __weak CPRouteChoice *selectedRouteChoice; // @synthesize selectedRouteChoice=_selectedRouteChoice;
@property(nonatomic) __weak id <CPSTripInitiating> tripDelegate; // @synthesize tripDelegate=_tripDelegate;
@property(readonly, nonatomic) CPTrip *trip; // @synthesize trip=_trip;
- (void).cxx_destruct;
- (void)alternateRoutesView:(id)arg1 didSelectRouteChoice:(id)arg2;
@property(retain, nonatomic) CPTravelEstimates *currentTravelEstimates; // @dynamic currentTravelEstimates;
- (void)_toggleMoreRoutesButtonPressed:(id)arg1;
- (void)_startTripButtonPressed:(id)arg1;
- (void)_setOverviewCollapsed:(_Bool)arg1;
- (id)initWithTrip:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

