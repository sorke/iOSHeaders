//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CPSLinearFocusProviding.h"
#import "CPSPanViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CPSPanView, NSArray, NSString;

@interface CPSPanViewController : UIViewController <CPSPanViewDelegate, UIGestureRecognizerDelegate, CPSLinearFocusProviding>
{
    _Bool _rightHandDrive;
    id <CPSPanEventDelegate> _panDelegate;
    CPSPanView *_panView;
    NSArray *_nudgeGestureRecognizers;
}

@property(retain, nonatomic) NSArray *nudgeGestureRecognizers; // @synthesize nudgeGestureRecognizers=_nudgeGestureRecognizers;
@property(retain, nonatomic) CPSPanView *panView; // @synthesize panView=_panView;
@property(nonatomic) __weak id <CPSPanEventDelegate> panDelegate; // @synthesize panDelegate=_panDelegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) double sideButtonTopInset;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (id)_linearFocusItems;
- (id)_linearFocusItemsWithPresentedMapButtons:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)panView:(id)arg1 panWithDirection:(long long)arg2;
- (void)panView:(id)arg1 panEndedWithDirection:(long long)arg2;
- (void)panView:(id)arg1 panBeganWithDirection:(long long)arg2;
- (void)_handleNudgeLongPress:(id)arg1;
- (void)_handleNudgeTapped:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

