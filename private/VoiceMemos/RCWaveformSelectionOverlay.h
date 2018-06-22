//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, NSMutableDictionary, RCOverlayBarLayer, RCUIConfiguration;

@interface RCWaveformSelectionOverlay : UIView
{
    struct UIEdgeInsets _selectionAreaInsets;
    struct CGRect _selectionRect;
    RCOverlayBarLayer *_beginTimeSelection;
    RCOverlayBarLayer *_endTimeSelection;
    CALayer *_middleSelectionOverlay;
    RCOverlayBarLayer *_currentTimeBar;
    _Bool _beginTimeLayerOffsetForThumb;
    _Bool _endTimeLayerOffsetForThumb;
    _Bool _isRecording;
    NSMutableDictionary *_trackedTouches;
    double _requestedAnimatedLayoutDuration;
    _Bool _requestedNonAnimatedLayout;
    _Bool _sublayersCreated;
    _Bool _editingEnabled;
    _Bool _insertMode;
    _Bool _enablePlayBarTracking;
    _Bool _enableTimeTrackingInView;
    _Bool _barMatchesKnobRadius;
    _Bool _overviewTrimHandleStyle;
    _Bool _playBarOnly;
    id <RCWaveformSelectionOverlayDelegate> _delegate;
    double _selectedTimeRangeMinimumDuration;
    double _selectedTimeRangeMaximumDuration;
    double _assetCurrentTime;
    double _assetDuration;
    RCUIConfiguration *_UIConfiguration;
    double _axSegment;
    double _knobWidthMultiplier;
    double _playWidthMultiplier;
    double _trackedAssetCurrentTime;
    CDStruct_73a5d3ca _selectedTimeRange;
}

@property(nonatomic) double trackedAssetCurrentTime; // @synthesize trackedAssetCurrentTime=_trackedAssetCurrentTime;
@property(nonatomic) _Bool playBarOnly; // @synthesize playBarOnly=_playBarOnly;
@property(nonatomic) double playWidthMultiplier; // @synthesize playWidthMultiplier=_playWidthMultiplier;
@property(nonatomic) double knobWidthMultiplier; // @synthesize knobWidthMultiplier=_knobWidthMultiplier;
@property(nonatomic) _Bool overviewTrimHandleStyle; // @synthesize overviewTrimHandleStyle=_overviewTrimHandleStyle;
@property(nonatomic) _Bool barMatchesKnobRadius; // @synthesize barMatchesKnobRadius=_barMatchesKnobRadius;
@property(nonatomic) _Bool enableTimeTrackingInView; // @synthesize enableTimeTrackingInView=_enableTimeTrackingInView;
@property(nonatomic) _Bool enablePlayBarTracking; // @synthesize enablePlayBarTracking=_enablePlayBarTracking;
@property(nonatomic) _Bool insertMode; // @synthesize insertMode=_insertMode;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(nonatomic, getter=isEditingEnabled) _Bool editingEnabled; // @synthesize editingEnabled=_editingEnabled;
@property(nonatomic) double axSegment; // @synthesize axSegment=_axSegment;
@property(readonly, nonatomic) struct CGRect selectionRect; // @synthesize selectionRect=_selectionRect;
@property(copy, nonatomic) RCUIConfiguration *UIConfiguration; // @synthesize UIConfiguration=_UIConfiguration;
@property(nonatomic) double assetDuration; // @synthesize assetDuration=_assetDuration;
@property(nonatomic) double assetCurrentTime; // @synthesize assetCurrentTime=_assetCurrentTime;
@property(nonatomic) double selectedTimeRangeMaximumDuration; // @synthesize selectedTimeRangeMaximumDuration=_selectedTimeRangeMaximumDuration;
@property(nonatomic) double selectedTimeRangeMinimumDuration; // @synthesize selectedTimeRangeMinimumDuration=_selectedTimeRangeMinimumDuration;
@property(readonly, nonatomic) CDStruct_73a5d3ca selectedTimeRange; // @synthesize selectedTimeRange=_selectedTimeRange;
@property(nonatomic) __weak id <RCWaveformSelectionOverlayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)_accessibilityIncreaseValue:(_Bool)arg1;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityElements;
- (_Bool)isAccessibilityElement;
- (_Bool)_axIsShowingSelectionBars;
- (struct CGRect)_alternateEndTimeRectWithSizedTextLayer:(id)arg1;
- (struct CGRect)_endTimeRectWithSizedTextLayer:(id)arg1 isOffsetForThumb:(_Bool *)arg2;
- (_Bool)_shouldDisplayEndTimeText;
- (struct CGRect)_alternateBeginTimeRectWithSizedTextLayer:(id)arg1;
- (struct CGRect)_beginTimeRectWithSizedTextLayer:(id)arg1 isOffsetForThumb:(_Bool *)arg2;
- (_Bool)_shouldOffsetSelectionBarTypeForThumb:(long long)arg1;
- (_Bool)_shouldDisplayBeginTimeText;
- (_Bool)__shouldDisplayEndTimeText;
- (_Bool)__shouldDisplayBeginTimeText;
- (id)_touchTrackingInfoForSelectionBarTye:(long long)arg1;
- (struct CGRect)_middleTimeRectWithFont:(id)arg1;
- (double)_minimumOverlayWidth;
- (double)_minimumOverlaySelectionWidth;
- (_Bool)_drawsSelectionForWidth:(double)arg1;
- (struct CGRect)_selectionRectForSelectedTimeRange:(CDStruct_73a5d3ca)arg1;
- (struct CGRect)_selectionHighlightBounds;
- (struct CGRect)_selectionBoundsIncludingKnobs;
- (struct CGRect)_selectionBoundsIncludingKnobsUsingMultiplier:(double)arg1;
- (double)_xAdjustmentAmount;
- (double)_effectiveSelectionWidth;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_clearStaleTouches;
- (void)_updateSelectedTimeRangeForTrackedTouchesAnimated:(_Bool)arg1;
- (_Bool)_beginTrackingSelectionBar:(id)arg1 selectionBarType:(long long)arg2 withTouch:(id)arg3;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_hitSelectionForPoint:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (void)_setWantsAnimatedLayoutDuration:(double)arg1;
- (void)_createSublayersIfNeeded;
- (void)_clearSublayers;
@property(readonly, nonatomic) long long endTimeIndicatorSelectionAffinity;
@property(readonly, nonatomic) long long beginTimeIndicatorSelectionAffinity;
@property(readonly, nonatomic) double currentTimeIndicatorCoordinate;
- (void)setFrame:(struct CGRect)arg1;
- (void)reloadSelectionOffsets;
- (void)setSelectedTimeRange:(CDStruct_73a5d3ca)arg1;
- (void)setSelectedTimeRange:(CDStruct_73a5d3ca)arg1 withAnimationDuration:(double)arg2;
- (void)setSelectionRect:(struct CGRect)arg1;
- (id)initWithDelegate:(id)arg1 height:(double)arg2 selectionAreaInsets:(struct UIEdgeInsets)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

