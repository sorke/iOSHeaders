//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMExpandableMenuButton.h>

@class UIImageView;
@protocol CAMTimerButtonDelegate;

@interface CAMTimerButton : CAMExpandableMenuButton
{
    _Bool _hideOffWhenCollapsed;
    id <CAMTimerButtonDelegate> _delegate;
    UIImageView *__glyphView;
}

@property(readonly, nonatomic) UIImageView *_glyphView; // @synthesize _glyphView=__glyphView;
@property(nonatomic) _Bool hideOffWhenCollapsed; // @synthesize hideOffWhenCollapsed=_hideOffWhenCollapsed;
@property(nonatomic) __weak id <CAMTimerButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)shownIndexesWhileCollapsed;
- (double)padHeaderViewContentInsetLeft;
- (id)headerView;
- (void)reloadData;
- (id)titleForMenuItemAtIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (void)_updateCurrentGlyphImage;
- (id)_currentGlyphImage;
- (void)setDuration:(long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) long long duration;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)_commonCAMTimerButtonInitialization;

@end
