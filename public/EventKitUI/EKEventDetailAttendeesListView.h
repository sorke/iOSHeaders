//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, UIActivityIndicatorView, UIColor, UIViewController;

__attribute__((visibility("hidden")))
@interface EKEventDetailAttendeesListView : UIView
{
    long long _statusCounts[4];
    long long _columnAItems;
    long long _columnBItems;
    int _firstColumnBType;
    double _maxHeight;
    double _actualHeight;
    NSMutableArray *_inviteeNames;
    _Bool _shouldEvenOutBlocks;
    NSArray *_finalizedNames;
    UIActivityIndicatorView *_spinnerView;
    _Bool _showingSpinner;
    _Bool _highlighted;
    _Bool _groupsNames;
    NSArray *_ungrouped;
    UIColor *_textColor;
    UIColor *_highlightedTextColor;
    UIViewController *_viewController;
    double _bottomSpacingForSpinner;
}

+ (id)statusGlyphs;
@property(nonatomic) double bottomSpacingForSpinner; // @synthesize bottomSpacingForSpinner=_bottomSpacingForSpinner;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) _Bool groupsNames; // @synthesize groupsNames=_groupsNames;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSArray *ungrouped; // @synthesize ungrouped=_ungrouped;
- (void).cxx_destruct;
- (void)_setShowingSpinner:(_Bool)arg1;
- (void)_layoutSpinner;
- (void)_createSpinnerViewIfNeeded;
- (void)showSpinner;
- (void)drawNames:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setup;
- (id)generateAttributedStringsFromNames:(id)arg1 glyph:(id)arg2 displayCount:(long long)arg3;
- (void)finalizeInviteNames;
- (double)_calculateHeightForSpinnerDisplayMode;
- (double)calculatedHeight;
- (double)_calculateHeightForItemCounts:(long long [4])arg1;
- (double)maxColumnHeight;
- (double)maxHeight;
- (_Bool)_shouldAlwaysDrawSingleColumn;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)_haveContentToDraw;
- (_Bool)_haveInviteesToDraw;
- (void)setInvitees:(id)arg1 forStatus:(int)arg2;
- (void)contentSizeCategoryChanged;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

