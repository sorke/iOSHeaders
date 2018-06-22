//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKAnnotationView.h>

@class NSString, UIColor, UIImage, UIImageView, UILabel, UIView, _MKBezierPathView;

@interface MKMarkerAnnotationView : MKAnnotationView
{
    UIImageView *_shadowView;
    _MKBezierPathView *_markerView;
    UIImageView *_glyphImageView;
    UILabel *_glyphLabel;
    _MKBezierPathView *_selectedMarkerView;
    UIImageView *_selectedGlyphImageView;
    UILabel *_selectedGlyphLabel;
    _MKBezierPathView *_selectedDotView;
    UIView *_contentMaskView;
    _Bool _animatesWhenAdded;
    long long _titleVisibility;
    long long _subtitleVisibility;
    UIColor *_markerTintColor;
    UIColor *_glyphTintColor;
    NSString *_glyphText;
    UIImage *_glyphImage;
    UIImage *_selectedGlyphImage;
    UIColor *_markerStrokeTintColor;
    double _markerStrokeWidth;
}

+ (float)_defaultDisplayPriority;
@property(nonatomic) double markerStrokeWidth; // @synthesize markerStrokeWidth=_markerStrokeWidth;
@property(copy, nonatomic) UIColor *markerStrokeTintColor; // @synthesize markerStrokeTintColor=_markerStrokeTintColor;
@property(nonatomic) _Bool animatesWhenAdded; // @synthesize animatesWhenAdded=_animatesWhenAdded;
@property(copy, nonatomic) UIImage *selectedGlyphImage; // @synthesize selectedGlyphImage=_selectedGlyphImage;
@property(copy, nonatomic) UIImage *glyphImage; // @synthesize glyphImage=_glyphImage;
@property(copy, nonatomic) NSString *glyphText; // @synthesize glyphText=_glyphText;
@property(copy, nonatomic) UIColor *glyphTintColor; // @synthesize glyphTintColor=_glyphTintColor;
@property(copy, nonatomic) UIColor *markerTintColor; // @synthesize markerTintColor=_markerTintColor;
@property(nonatomic) long long subtitleVisibility; // @synthesize subtitleVisibility=_subtitleVisibility;
@property(nonatomic) long long titleVisibility; // @synthesize titleVisibility=_titleVisibility;
- (void).cxx_destruct;
- (void)configureCustomFeature:(id)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)_effectiveSubtitlesIsCollidable:(_Bool *)arg1;
- (id)_effectiveTitleIsCollidable:(_Bool *)arg1;
- (_Bool)isProvidingCustomFeature;
- (_Bool)_shouldDeselectWhenDragged;
- (void)_setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setDragState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_configureAnimated:(_Bool)arg1 fromState:(long long)arg2 toState:(long long)arg3;
- (void)_setupSelectedViewsIfNeededUsesCallout:(_Bool)arg1;
- (void)_setupNormalViewsIfNeeded;
- (void)_didDragWithVelocity:(struct CGPoint)arg1;
- (long long)_stateForIsSelected:(_Bool)arg1;
- (void)_configureViewsForState:(long long)arg1 usesCallout:(_Bool)arg2;
- (void)prepareForSnapshotting;
- (void)_unhideForDisplay;
- (void)prepareForDisplay;
- (long long)_currentMarkerState;
- (void)_updateContentForState:(long long)arg1 forceUpdate:(_Bool)arg2;
- (void)_updateContentForState:(long long)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setAnnotation:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)_effectiveGlyphText;
- (id)_effectiveGlyphImageForState:(long long)arg1 isSystemProvided:(_Bool *)arg2;
- (id)_effectiveGlyphTintColorForState:(long long)arg1;
- (id)_effectiveMarkerStrokeTintColorForState:(long long)arg1;
- (double)_effectiveMarkerStrokeWidthForState:(long long)arg1;
@property(retain, nonatomic) UIView *selectedContentView;
- (double)_effectiveShadowAlphaForState:(long long)arg1;
- (id)_effectiveMarkerTintColorForState:(long long)arg1;
- (_Bool)canShowCallout;
- (_Bool)_hasDataRequiringCallout;

@end

