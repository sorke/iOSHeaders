//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CPSNavigationDisplaying.h"

@class NSArray, NSMutableArray, NSString;

@interface CPSUpcomingManeuversCardView : UIView <CPSNavigationDisplaying>
{
    _Bool _minimalMode;
    NSArray *_maneuvers;
    NSMutableArray *_maneuverViewStack;
    NSMutableArray *_verticalConstraints;
}

@property(readonly, nonatomic) NSMutableArray *verticalConstraints; // @synthesize verticalConstraints=_verticalConstraints;
@property(readonly, nonatomic) NSMutableArray *maneuverViewStack; // @synthesize maneuverViewStack=_maneuverViewStack;
@property(readonly, nonatomic) NSArray *maneuvers; // @synthesize maneuvers=_maneuvers;
@property(nonatomic, getter=isMinimalMode) _Bool minimalMode; // @synthesize minimalMode=_minimalMode;
- (void).cxx_destruct;
- (void)_updateVerticalConstraints;
- (void)updateEstimates:(id)arg1 forManeuver:(id)arg2;
- (void)showManeuvers:(id)arg1;
- (void)_clearManeuvers;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

