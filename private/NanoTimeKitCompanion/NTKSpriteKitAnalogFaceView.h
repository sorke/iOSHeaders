//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>

@class NTKAnalogScene, SKView, UIView;

@interface NTKSpriteKitAnalogFaceView : NTKAnalogFaceView
{
    SKView *_sceneHostView;
    NTKAnalogScene *_analogScene;
    UIView *_circleView;
    UIView *_handsView;
    double _maxZoomingIconDiameter;
}

+ (void)_prewarmForDevice:(id)arg1;
@property(nonatomic) double maxZoomingIconDiameter; // @synthesize maxZoomingIconDiameter=_maxZoomingIconDiameter;
@property(nonatomic) __weak UIView *handsView; // @synthesize handsView=_handsView;
@property(nonatomic) __weak UIView *circleView; // @synthesize circleView=_circleView;
@property(retain, nonatomic) NTKAnalogScene *analogScene; // @synthesize analogScene=_analogScene;
- (void).cxx_destruct;
- (void)_setContentViewsOpaque:(_Bool)arg1;
@property(nonatomic) _Bool shouldRasterizeBackground;
- (void)_prepareForSnapshotting;
- (void)_unloadSnapshotContentViews;
@property(readonly, nonatomic) UIView *sceneView;
- (void)_cleanupAfterZoom;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_loadContentToReplaceUnadornedSnapshot;
- (void)_loadLiveBackground;
- (void)_applyShowContentForUnadornedSnapshot;
- (_Bool)_wantsOpportunisticLiveFaceLoading;
- (void)_applyDataMode;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureForEditMode:(long long)arg1;
- (void)_applyFrozen;
- (struct CGSize)_sceneSize;
- (_Bool)_needsForegroundContainerView;
- (void)_renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1;
- (void)setEditView:(id)arg1;
- (void)_handleLocaleDidChange;
- (_Bool)_shouldFreezeSceneForEditMode:(long long)arg1;
- (void)_endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_loadScene;

@end

