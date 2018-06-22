//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NLActivityPickerCellLayoutCache, NSArray, UIButton, UIImageView, UILabel, UIView;

@interface FIUIActivityPickerCollectionViewCell : UICollectionViewCell
{
    _Bool _useRoundedCornerMask;
    UIImageView *_iconImageView;
    UILabel *_activityTypeLabel;
    UILabel *_paceLabel;
    UILabel *_lastGoalLabel;
    UIButton *_configButton;
    CDUnknownBlockType _configurationButtonTappedHandler;
    UIImageView *_backgroundImageView;
    UIImageView *_topLeftCornerView;
    UIImageView *_topRightCornerView;
    UIImageView *_bottomRightCornerView;
    UIImageView *_bottomLeftCornerView;
    NSArray *_cornerViews;
    UIView *_darkeningView;
    NLActivityPickerCellLayoutCache *_layoutCache;
    double _screenScale;
}

+ (double)heightForCellWithWidth:(double)arg1 activityType:(id)arg2;
+ (id)_workoutTypeLabelAttributes:(id)arg1;
@property(nonatomic) double screenScale; // @synthesize screenScale=_screenScale;
@property(retain, nonatomic) NLActivityPickerCellLayoutCache *layoutCache; // @synthesize layoutCache=_layoutCache;
@property(retain, nonatomic) UIView *darkeningView; // @synthesize darkeningView=_darkeningView;
@property(nonatomic) _Bool useRoundedCornerMask; // @synthesize useRoundedCornerMask=_useRoundedCornerMask;
@property(retain, nonatomic) NSArray *cornerViews; // @synthesize cornerViews=_cornerViews;
@property(retain, nonatomic) UIImageView *bottomLeftCornerView; // @synthesize bottomLeftCornerView=_bottomLeftCornerView;
@property(retain, nonatomic) UIImageView *bottomRightCornerView; // @synthesize bottomRightCornerView=_bottomRightCornerView;
@property(retain, nonatomic) UIImageView *topRightCornerView; // @synthesize topRightCornerView=_topRightCornerView;
@property(retain, nonatomic) UIImageView *topLeftCornerView; // @synthesize topLeftCornerView=_topLeftCornerView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(copy, nonatomic) CDUnknownBlockType configurationButtonTappedHandler; // @synthesize configurationButtonTappedHandler=_configurationButtonTappedHandler;
@property(retain, nonatomic) UIButton *configButton; // @synthesize configButton=_configButton;
@property(retain, nonatomic) UILabel *lastGoalLabel; // @synthesize lastGoalLabel=_lastGoalLabel;
@property(retain, nonatomic) UILabel *paceLabel; // @synthesize paceLabel=_paceLabel;
@property(retain, nonatomic) UILabel *activityTypeLabel; // @synthesize activityTypeLabel=_activityTypeLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)animateForQuickStartWithDuration:(double)arg1 finalFrame:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)layoutSubviews;
- (id)iconImageViewCopy;
- (void)configButtonTapped:(id)arg1;
- (_Bool)_allowResizeDuringScrolling;
- (void)prepareForReuse;
- (id)deepCopy;
- (void)_updateAlphaForState;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_cellBackgroundColor;
- (_Bool)_useOpaqueCornerImages;

@end

