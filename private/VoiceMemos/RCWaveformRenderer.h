//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CAAnimationDelegate.h"
#import "RCWaveformDataSourceObserver.h"

@class CADisplayLink, NSMutableArray, NSMutableSet, NSString, NSTimer, RCWaveformDataSource;

__attribute__((visibility("hidden")))
@interface RCWaveformRenderer : UIViewController <RCWaveformDataSourceObserver, CAAnimationDelegate>
{
    CADisplayLink *_displayLink;
    CDStruct_73a5d3ca _renderedTimeRange;
    _Bool _renderedTimeRangeIsApproximatedWaveform;
    double _cachedContentWidth;
    _Bool _contentWidthDirty;
    NSTimer *_displayLinkTerminationTimer;
    _Bool _needsVisibleRangeRendering;
    _Bool _isCompactView;
    NSMutableArray *_cachedSegmentArray;
    NSMutableSet *_waveformSegmentLayers;
    _Bool _frequentUpdatesSegmentUpdatesExpectedHint;
    _Bool _isRecordWaveform;
    _Bool _isEditMode;
    _Bool _isPlayback;
    _Bool _isOverview;
    _Bool _paused;
    _Bool _activeDisplayLinkRequired;
    RCWaveformDataSource *_dataSource;
    id <RCWaveformRendererDelegate> _rendererDelegate;
    double _spacingWidth;
    double _dataPointWidth;
    CDStruct_73a5d3ca _visibleTimeRange;
    CDStruct_73a5d3ca _highlightTimeRange;
}

@property(nonatomic) CDStruct_73a5d3ca highlightTimeRange; // @synthesize highlightTimeRange=_highlightTimeRange;
@property(nonatomic) CDStruct_73a5d3ca visibleTimeRange; // @synthesize visibleTimeRange=_visibleTimeRange;
@property(nonatomic) double dataPointWidth; // @synthesize dataPointWidth=_dataPointWidth;
@property(nonatomic) double spacingWidth; // @synthesize spacingWidth=_spacingWidth;
@property(nonatomic, getter=isActiveDisplayLinkRequired) _Bool activeDisplayLinkRequired; // @synthesize activeDisplayLinkRequired=_activeDisplayLinkRequired;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) _Bool isOverview; // @synthesize isOverview=_isOverview;
@property(nonatomic) _Bool isCompactView; // @synthesize isCompactView=_isCompactView;
@property(nonatomic) _Bool isPlayback; // @synthesize isPlayback=_isPlayback;
@property(nonatomic) _Bool isEditMode; // @synthesize isEditMode=_isEditMode;
@property(nonatomic) _Bool isRecordWaveform; // @synthesize isRecordWaveform=_isRecordWaveform;
@property(nonatomic) _Bool frequentUpdatesSegmentUpdatesExpectedHint; // @synthesize frequentUpdatesSegmentUpdatesExpectedHint=_frequentUpdatesSegmentUpdatesExpectedHint;
@property(nonatomic) __weak id <RCWaveformRendererDelegate> rendererDelegate; // @synthesize rendererDelegate=_rendererDelegate;
@property(retain, nonatomic) RCWaveformDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_performOrDispatchToMainThread:(CDUnknownBlockType)arg1;
- (double)_timeForPixelOffset:(double)arg1;
- (double)_timeForPixelOffset:(double)arg1 withVisibleTimeRange:(CDStruct_73a5d3ca)arg2;
- (double)_pixelOffsetForTime:(double)arg1;
- (double)_pixelsPerSecond;
- (double)_pixelsPerSecondWithVisibleTimeRange:(CDStruct_73a5d3ca)arg1;
- (_Bool)_currentViewportRequiresRenderingNewSegments;
- (CDStruct_73a5d3ca)_timeRangeToRenderForVisibleTimeRange:(CDStruct_73a5d3ca)arg1;
- (id)_updateCachedSegmentArray:(id)arg1 withTimeRange:(CDStruct_73a5d3ca)arg2;
- (CDStruct_73a5d3ca)_updateRenderTimeRange:(CDStruct_73a5d3ca)arg1;
- (void)_renderVisibleTimeRangeImmediately;
- (void)_renderSegments:(id)arg1 timeRangeOfSegments:(CDStruct_73a5d3ca)arg2 isApproximatedWaveform:(_Bool)arg3;
- (void)_clearRenderingState;
- (void)_draw:(id)arg1;
- (void)_displayLinkDidUpdate:(id)arg1;
- (void)_cancelScheduledTerminateDisplayLink;
- (void)_scheduleTerminateDisplayLink;
- (void)_performScheduledTerminateDisplayLink;
- (void)_stopRendering;
- (void)_startRendering;
- (void)_setNeedsVisibleTimeRangeRendering;
- (void)_setNeedsRendering;
- (void)_stopUpdating;
- (void)_startUpdating;
- (double)_nonCachedContentWidth;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)waveformDataSourceDidFinishLoading:(id)arg1;
- (void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (id)rasterizeTimeRange:(CDStruct_73a5d3ca)arg1 imageSize:(struct CGSize)arg2;
@property(readonly, nonatomic) struct CGRect visibleRect;
- (double)timeAtHorizontalOffset:(double)arg1 withVisibleTimeRange:(CDStruct_73a5d3ca)arg2;
- (double)timeAtHorizontalOffset:(double)arg1;
- (double)pointsPerSecondWithVisibleTimeRange:(CDStruct_73a5d3ca)arg1;
- (double)horizontalOffsetAtTime:(double)arg1 withVisibleTimeRange:(CDStruct_73a5d3ca)arg2;
- (double)horizontalOffsetAtTime:(double)arg1;
@property(readonly, nonatomic) double contentWidth;
- (void)viewDidLayoutSubviews;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

