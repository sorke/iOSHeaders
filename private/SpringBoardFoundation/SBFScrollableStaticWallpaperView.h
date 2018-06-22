//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFStaticWallpaperView.h>

#import "UIScrollViewDelegate.h"

@class NSString, SBFLockScreenWallpaperParallaxSettings, SBFSubject, UIImageView, UIScrollView;

@interface SBFScrollableStaticWallpaperView : SBFStaticWallpaperView <UIScrollViewDelegate>
{
    UIImageView *_imageView;
    UIScrollView *_scrollView;
    SBFLockScreenWallpaperParallaxSettings *_parallaxSettings;
    SBFSubject *_scrollViewObserver;
    id <SBFCancelable> _colorBoxCancelToken;
    id <SBFCancelable> _parallaxCancelToken;
    double _minimumZoomScaleForParallax;
    double _minimumZoomScale;
    _Bool _automaticallyEnablesParallax;
}

+ (_Bool)_canDownscaleSampleImage;
+ (_Bool)_canCacheImages;
+ (_Bool)_shouldScaleForParallax;
@property(nonatomic) _Bool automaticallyEnablesParallax; // @synthesize automaticallyEnablesParallax=_automaticallyEnablesParallax;
- (void).cxx_destruct;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)layoutSubviews;
- (void)setCropRect:(struct CGRect)arg1 zoomScale:(double)arg2;
- (double)cropZoomScale;
- (_Bool)supportsCropping;
- (struct CGRect)cropRect;
- (struct CGRect)_cropRect;
- (struct CGPoint)_maximumContentOffsetForOverhang;
- (struct CGPoint)_minimumContentOffsetForOverhang;
- (struct CGPoint)_boundedContentOffsetForOverhang;
- (void)_setupScrollView;
- (void)_updateScrollViewZoomScales;
- (double)_throttleDuration;
- (void)_updateParallaxForScroll;
- (void)_setupParallaxObserver;
- (void)_setupColorBoxObserver;
- (void)_setupScrollViewObserver;
- (id)_wallpaperImageForAnalysis;
- (struct CGSize)_imageSize;
- (void)didMoveToWindow;
- (id)_scrollView;
- (id)_newImageView;
- (void)_setupContentView;
- (double)_parallaxFactorWithZoomScale:(double)arg1 contentOffset:(struct CGPoint)arg2;
- (double)_scrollViewParallaxFactor;
- (double)parallaxFactor;
- (void)setParallaxEnabled:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 wallpaperImage:(id)arg2 variant:(long long)arg3 wallpaperSettingsProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

