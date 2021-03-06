//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionViewController.h>

#import "MKPlaceCardActionSectionViewDelegate.h"
#import "_MKInfoCardChildViewControllerAnalyticsDelegate.h"
#import "_MKStackViewDelegate.h"

@class MKPlaceActionManager, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MKPlaceCardActionsViewController : MKPlaceSectionViewController <MKPlaceCardActionSectionViewDelegate, _MKStackViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate>
{
    _Bool _haveTwoColumns;
    _Bool _useSmallFonts;
    _Bool _showTopSeparator;
    _Bool _allowRowSelection;
    _Bool _useMarginLayout;
    _Bool _showTopButtonSeparator;
    NSArray *_actionItemArray;
    NSArray *_viewArray;
    MKPlaceActionManager *_actionManager;
}

@property(nonatomic) __weak MKPlaceActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(nonatomic) _Bool showTopButtonSeparator; // @synthesize showTopButtonSeparator=_showTopButtonSeparator;
@property(nonatomic) _Bool useMarginLayout; // @synthesize useMarginLayout=_useMarginLayout;
@property(nonatomic) _Bool allowRowSelection; // @synthesize allowRowSelection=_allowRowSelection;
@property(retain, nonatomic) NSArray *viewArray; // @synthesize viewArray=_viewArray;
@property(copy, nonatomic) NSArray *actionItemArray; // @synthesize actionItemArray=_actionItemArray;
@property(nonatomic) _Bool showTopSeparator; // @synthesize showTopSeparator=_showTopSeparator;
@property(nonatomic) _Bool useSmallFonts; // @synthesize useSmallFonts=_useSmallFonts;
@property(nonatomic) _Bool haveTwoColumns; // @synthesize haveTwoColumns=_haveTwoColumns;
- (void).cxx_destruct;
- (id)infoCardChildPossibleActions;
- (void)placeCardActionSectionView:(id)arg1 buttonWithActionItemPressed:(id)arg2;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_setUpSectionViews;
- (id)_makePlaceActionButton;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

