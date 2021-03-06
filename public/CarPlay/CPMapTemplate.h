//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CarPlay/CPTemplate.h>

#import "CPBannerDelegate.h"
#import "CPBarButtonProviding.h"
#import "CPMapButtonDelegate.h"
#import "CPMapClientTemplateDelegate.h"
#import "CPNavigationAlertUpdating.h"

@class CPNavigationAlert, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIColor;

@interface CPMapTemplate : CPTemplate <CPMapButtonDelegate, CPMapClientTemplateDelegate, CPBannerDelegate, CPNavigationAlertUpdating, CPBarButtonProviding>
{
    _Bool _automaticallyHidesNavigationBar;
    _Bool _hidesButtonsWithNavigationBar;
    UIColor *_guidanceBackgroundColor;
    unsigned long long _tripEstimateStyle;
    id <CPMapTemplateDelegate> _mapDelegate;
    CPNavigationAlert *_currentNavigationAlert;
    NSMutableDictionary *_postedBannerObjects;
    id <CPBannerProviding> _bannerProvider;
    NSMutableArray *_internalMapButtons;
    NSArray *_tripPreviews;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *tripPreviews; // @synthesize tripPreviews=_tripPreviews;
@property(retain, nonatomic) NSMutableArray *internalMapButtons; // @synthesize internalMapButtons=_internalMapButtons;
@property(retain, nonatomic) id <CPBannerProviding> bannerProvider; // @synthesize bannerProvider=_bannerProvider;
@property(retain, nonatomic) NSMutableDictionary *postedBannerObjects; // @synthesize postedBannerObjects=_postedBannerObjects;
@property(readonly, nonatomic) CPNavigationAlert *currentNavigationAlert; // @synthesize currentNavigationAlert=_currentNavigationAlert;
@property(nonatomic) __weak id <CPMapTemplateDelegate> mapDelegate; // @synthesize mapDelegate=_mapDelegate;
@property(nonatomic) _Bool hidesButtonsWithNavigationBar; // @synthesize hidesButtonsWithNavigationBar=_hidesButtonsWithNavigationBar;
@property(nonatomic) _Bool automaticallyHidesNavigationBar; // @synthesize automaticallyHidesNavigationBar=_automaticallyHidesNavigationBar;
@property(nonatomic) unsigned long long tripEstimateStyle; // @synthesize tripEstimateStyle=_tripEstimateStyle;
@property(retain, nonatomic) UIColor *guidanceBackgroundColor; // @synthesize guidanceBackgroundColor=_guidanceBackgroundColor;
- (void).cxx_destruct;
- (void)_updateBannerIfNecessaryForManeuver:(id)arg1 travelEstimates:(id)arg2;
- (void)_postBannerIfNecessaryForNavigationAlert:(id)arg1;
- (void)_postBannerIfNecessaryForManeuver:(id)arg1;
- (void)bannerTappedWithIdentifier:(id)arg1;
- (void)bannerDidDisappearWithIdentifier:(id)arg1;
- (void)bannerDidAppearWithIdentifier:(id)arg1;
- (long long)_displayStyleForManeuver:(id)arg1;
- (void)clientTripCanceledByExternalNavigation;
- (void)clientNavigationAlertDidDisappear:(id)arg1 context:(unsigned long long)arg2;
- (void)clientNavigationAlertWillDisappear:(id)arg1 context:(unsigned long long)arg2;
- (void)clientNavigationAlertDidAppear:(id)arg1;
- (void)clientNavigationAlertWillAppear:(id)arg1;
- (void)clientPanWithDirection:(long long)arg1;
- (void)clientPanGestureEndedWithVelocity:(struct CGPoint)arg1;
- (void)clientPanGestureWithDeltaPoint:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)clientPanGestureBegan;
- (void)clientPanEndedWithDirection:(long long)arg1;
- (void)clientPanBeganWithDirection:(long long)arg1;
- (void)clientPanViewDidDisappear;
- (void)clientPanViewWillDisappear;
- (void)clientPanViewDidAppear;
- (void)clientTripAlreadyStartedException;
@property(readonly, nonatomic, getter=isPanningInterfaceVisible) _Bool panningInterfaceVisible;
- (void)dismissPanningInterfaceAnimated:(_Bool)arg1;
- (void)showPanningInterfaceAnimated:(_Bool)arg1;
- (void)startTripIdentifier:(id)arg1 usingRouteIdentifier:(id)arg2;
- (void)previewTripIdentifier:(id)arg1 usingRouteIdentifier:(id)arg2;
- (void)_resolveTrip:(id)arg1 routeChoice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleActionForControlIdentifier:(id)arg1;
@property(retain, nonatomic) NSArray *mapButtons;
- (void)_updateNavigationAlert:(id)arg1;
- (void)dismissNavigationAlertAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentNavigationAlert:(id)arg1 animated:(_Bool)arg2;
- (_Bool)mapButton:(id)arg1 setFocusedImage:(id)arg2;
- (_Bool)mapButton:(id)arg1 setImage:(id)arg2;
- (_Bool)mapButton:(id)arg1 setHidden:(_Bool)arg2;
- (id)startNavigationSessionForTrip:(id)arg1;
- (void)updateTravelEstimates:(id)arg1 forTrip:(id)arg2 withTimeRemainingColor:(unsigned long long)arg3;
- (void)updateTravelEstimates:(id)arg1 forTrip:(id)arg2;
- (void)hideTripPreviews;
- (void)showRouteChoicesPreviewForTrip:(id)arg1 textConfiguration:(id)arg2;
- (void)showTripPreviews:(id)arg1 textConfiguration:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSArray *leadingNavigationBarButtons;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPMapTemplateProviding> templateProvider; // @dynamic templateProvider;
@property(retain, nonatomic) NSArray *trailingNavigationBarButtons;

@end

