//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVPlayerViewControllerContentView, UIScreen;

@interface AVPlayerView : UIView
{
    _Bool _needsInitialLayout;
    AVPlayerViewControllerContentView *_contentView;
    UIScreen *_primaryScreen;
}

@property(nonatomic) _Bool needsInitialLayout; // @synthesize needsInitialLayout=_needsInitialLayout;
@property(nonatomic) __weak UIScreen *primaryScreen; // @synthesize primaryScreen=_primaryScreen;
@property(readonly, nonatomic) AVPlayerViewControllerContentView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setClipsToBounds:(_Bool)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)beginManagingContentView;
- (id)initWithFrame:(struct CGRect)arg1 contentView:(id)arg2;

@end

