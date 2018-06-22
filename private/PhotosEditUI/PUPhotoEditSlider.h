//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, PUPhotoEditPrecisionLevelSlider, UIColor, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface PUPhotoEditSlider : UIControl <UIScrollViewDelegate>
{
    NSMutableArray *_constraints;
    double _value;
    double _defaultValue;
    double _minimumValue;
    double _maximumValue;
    PUPhotoEditPrecisionLevelSlider *_slider;
    UIView *_levelIndicatorView;
    UIScrollView *_contentScrollView;
    long long _layoutOrientation;
}

@property(nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) UIView *levelIndicatorView; // @synthesize levelIndicatorView=_levelIndicatorView;
@property(retain, nonatomic) PUPhotoEditPrecisionLevelSlider *slider; // @synthesize slider=_slider;
@property(nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) double defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) double value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_setNormalizedProgressValue:(double)arg1;
- (void)_setValue:(double)arg1 shouldSendActions:(_Bool)arg2 shouldUpdateScrollPosition:(_Bool)arg3;
- (void)_updateScrollViewPosition;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(nonatomic) unsigned long long mainTickMarkInterval;
@property(retain, nonatomic) UIColor *indicatorColor;
@property(readonly, nonatomic) struct CGSize contentSize;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1 layoutOrientation:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

