//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PLContentSizeCategoryAdjusting.h"
#import "PLExpandedPlatter.h"
#import "PLTitled.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class MTMaterialView, NSArray, NSDate, NSString, NSTimeZone, PLInterfaceActionGroupView, PLKeyLineView, PLPlatterHeaderContentView, UIButton, UIControl, UIScrollView;

@interface PLExpandedPlatterView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate, PLExpandedPlatter, PLTitled, PLContentSizeCategoryAdjusting>
{
    PLPlatterHeaderContentView *_headerContentView;
    UIView *_headerDivider;
    UIView *_contentView;
    UIView *_topRubberbandingView;
    UIView *_customContentView;
    PLKeyLineView *_actionsKeyLineView;
    MTMaterialView *_actionsBackgroundView;
    PLInterfaceActionGroupView *_actionsView;
    _Bool _actionsHidden;
    UIScrollView *_scrollView;
    UIControl *_dismissControl;
    UIView *_mainContentView;
    struct CGSize _customContentSize;
}

@property(retain, nonatomic, getter=_mainContentView) UIView *mainContentView; // @synthesize mainContentView=_mainContentView;
@property(nonatomic) struct CGSize customContentSize; // @synthesize customContentSize=_customContentSize;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)adjustForContentSizeCategoryChange;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_layoutActionsView;
- (void)_layoutCustomContentView;
- (void)_layoutContentView;
- (void)_layoutTopRubberbandingView;
- (void)_layoutScrollView;
- (void)_layoutHeader;
- (void)_layoutDismissControl;
- (void)_configureActionViewIfNecessaryWithActions:(id)arg1;
- (void)_configureActionsBackgroundViewIfNecessaryWithActions:(id)arg1;
- (void)_configureActionsKeyLineViewIfNecessaryWithActions:(id)arg1;
- (void)_configureCustomContentViewIfNecessary;
- (void)_configureContentViewIfNecessary;
- (void)_configureScrollViewIfNecessary;
- (void)_configureHeaderContentViewIfNecessary;
- (void)_configureDismissControlIfNecessary;
@property(readonly, nonatomic) UIView *customContentView; // @synthesize customContentView=_customContentView;
- (struct CGSize)_actionsSizeThatFits:(struct CGSize)arg1 includingPadding:(_Bool)arg2;
- (struct CGSize)_sizeThatFitsContentExcludingActionsWithSize:(struct CGSize)arg1;
@property(retain, nonatomic) NSArray *interfaceActions;
- (struct CGRect)scrollViewFrame;
- (struct CGSize)actionsSizeThatFits:(struct CGSize)arg1;
- (struct CGSize)contentSizeExcludingActions;
- (struct CGSize)sizeExcludingActions;
@property(nonatomic, getter=isActionsHidden) _Bool actionsHidden;
@property(readonly, nonatomic) UIControl *dismissControl; // @synthesize dismissControl=_dismissControl;
@property(readonly, nonatomic) UIButton *utilityButton;
@property(readonly, nonatomic) NSArray *iconButtons;
@property(nonatomic) long long dateFormatStyle;
@property(copy, nonatomic) NSTimeZone *timeZone;
@property(nonatomic, getter=isDateAllDay) _Bool dateAllDay;
@property(copy, nonatomic) NSDate *date;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSArray *icons;
- (struct CGSize)contentSizeForSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFitsContentWithSize:(struct CGSize)arg1;
@property(nonatomic, getter=isBackgroundBlurred) _Bool backgroundBlurred;
@property(nonatomic) _Bool hasShadow;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_layoutActionsKeyLineView;
- (void)_layoutMainContentView;
- (void)_configureCustomContentView;
- (void)_configureMainContentViewIfNecessary;
- (struct CGSize)_contentSizeThatFitsContentWithSizeExcludingActions:(struct CGSize)arg1;
@property(readonly, nonatomic, getter=_actionsKeyLineView) UIView *actionsKeyLineView;
@property(readonly, nonatomic, getter=_headerContentView) UIView *headerContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *preferredContentSizeCategory;
@property(readonly) Class superclass;

@end

