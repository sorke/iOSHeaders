//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIVisualEffectView.h>

@class UIImage;

@interface UIKBBackdropView : UIVisualEffectView
{
    UIImage *_imageForCorners;
}

@property(retain, nonatomic) UIImage *imageForCorners; // @synthesize imageForCorners=_imageForCorners;
- (void)_setRenderConfig:(id)arg1;
- (int)textEffectsVisibilityLevel;
- (void)updateFrame:(struct CGRect)arg1 withCorners:(unsigned long long)arg2;
- (void)layoutSubviews;
- (id)_generateCornerContentsImage:(int)arg1;
- (void)transitionToStyle:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end

