//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CKNavigationButtonView, UIImageView;

@interface CKNavigationBarCanvasView : UIView
{
    _Bool _enforceLeftItemViewsAlignmentToCenter;
    _Bool _keepTitleViewCentered;
    _Bool _isBusinessChat;
    _Bool _isShowingContactPhotos;
    _Bool _isShowingControls;
    _Bool _multiwayAudioButtonHidden;
    _Bool _isTearingDownButtonViews;
    UIView *_titleView;
    UIView *_leftItemView;
    UIView *_rightItemView;
    double _preferredHeight;
    long long _statusIndicatorType;
    long long _joinButtonStyle;
    CKNavigationButtonView *_buttonViewFaceTimeAudio;
    CKNavigationButtonView *_buttonViewFaceTimeVideo;
    CKNavigationButtonView *_buttonViewInfo;
    UIImageView *_statusIndicatorImageView;
}

+ (double)preferredLandscapeHeightForRegularWidth;
+ (double)preferredLandscapeHeightForCompactWidth;
+ (double)minHeight;
+ (double)heightWithoutButtonViewsContactless;
+ (double)heightWithButtonViewsContactless;
+ (double)heightWithButtonViews;
+ (double)heightWithoutButtonViews;
+ (double)maxHeight;
@property(nonatomic) _Bool isTearingDownButtonViews; // @synthesize isTearingDownButtonViews=_isTearingDownButtonViews;
@property(retain, nonatomic) UIImageView *statusIndicatorImageView; // @synthesize statusIndicatorImageView=_statusIndicatorImageView;
@property(retain, nonatomic) CKNavigationButtonView *buttonViewInfo; // @synthesize buttonViewInfo=_buttonViewInfo;
@property(retain, nonatomic) CKNavigationButtonView *buttonViewFaceTimeVideo; // @synthesize buttonViewFaceTimeVideo=_buttonViewFaceTimeVideo;
@property(retain, nonatomic) CKNavigationButtonView *buttonViewFaceTimeAudio; // @synthesize buttonViewFaceTimeAudio=_buttonViewFaceTimeAudio;
@property(nonatomic) long long joinButtonStyle; // @synthesize joinButtonStyle=_joinButtonStyle;
@property(nonatomic) long long statusIndicatorType; // @synthesize statusIndicatorType=_statusIndicatorType;
@property(nonatomic) _Bool multiwayAudioButtonHidden; // @synthesize multiwayAudioButtonHidden=_multiwayAudioButtonHidden;
@property(nonatomic) _Bool isShowingControls; // @synthesize isShowingControls=_isShowingControls;
@property(nonatomic) _Bool isShowingContactPhotos; // @synthesize isShowingContactPhotos=_isShowingContactPhotos;
@property(nonatomic) _Bool isBusinessChat; // @synthesize isBusinessChat=_isBusinessChat;
@property(nonatomic) _Bool keepTitleViewCentered; // @synthesize keepTitleViewCentered=_keepTitleViewCentered;
@property(nonatomic) _Bool enforceLeftItemViewsAlignmentToCenter; // @synthesize enforceLeftItemViewsAlignmentToCenter=_enforceLeftItemViewsAlignmentToCenter;
@property(nonatomic) double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property(retain, nonatomic) UIView *rightItemView; // @synthesize rightItemView=_rightItemView;
@property(retain, nonatomic) UIView *leftItemView; // @synthesize leftItemView=_leftItemView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (struct CGRect)_calculateFrameForButtonPositionType:(long long)arg1 shouldOffset:(_Bool)arg2;
- (void)layoutSubviews;
- (struct UIEdgeInsets)safeAreaInsets;
- (_Bool)_canShowAvatarView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_shouldUseTallHeight;
- (void)clearAllItemViews;
- (void)_tearDownButtonContainer;
- (void)_updateJoinButtonStyle;
- (void)_setupButtonContainer;
- (id)initWithFrame:(struct CGRect)arg1 preferredHeight:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

