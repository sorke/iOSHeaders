//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISBasePlayerUIViewChangeObserver.h"
#import "PXMutableImageLayerModulator_Private.h"

@class CAFilter, CALayer, ISLivePhotoUIView, NSString;

@interface PXImageLayerModulator : NSObject <PXMutableImageLayerModulator_Private, ISBasePlayerUIViewChangeObserver>
{
    _Bool _isPerformingChanges;
    _Bool _isPerformingUpdates;
    struct {
        _Bool filteredLayer;
        _Bool displayingVideoComplement;
        _Bool filterIntensity;
    } _needsUpdateFlags;
    _Bool _enabled;
    _Bool _displayingVideoComplement;
    float _hdrGain;
    CALayer *_layer;
    ISLivePhotoUIView *_livePhotoView;
    CAFilter *_filter;
    NSString *_layerFilterIntensityKeyPath;
    CALayer *_filteredLayer;
    double _intensityAnimationDuration;
    long long _contentType;
    long long _filterType;
    double _intensity;
}

@property(readonly, nonatomic, getter=isDisplayingVideoComplement) _Bool displayingVideoComplement; // @synthesize displayingVideoComplement=_displayingVideoComplement;
@property(readonly, nonatomic) double intensity; // @synthesize intensity=_intensity;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) float hdrGain; // @synthesize hdrGain=_hdrGain;
@property(readonly, nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property(readonly, nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) double intensityAnimationDuration; // @synthesize intensityAnimationDuration=_intensityAnimationDuration;
@property(retain, nonatomic) CALayer *filteredLayer; // @synthesize filteredLayer=_filteredLayer;
@property(readonly, nonatomic) NSString *layerFilterIntensityKeyPath; // @synthesize layerFilterIntensityKeyPath=_layerFilterIntensityKeyPath;
@property(readonly, nonatomic) CAFilter *filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) ISLivePhotoUIView *livePhotoView; // @synthesize livePhotoView=_livePhotoView;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
- (void)basePlayerUIView:(id)arg1 didChange:(unsigned long long)arg2 withAnimationDuration:(double)arg3;
- (void)_updateFilterIntensityIfNeeded;
- (void)_invalidateFilterIntensity;
- (void)_updateDisplayingVideoComplementIfNeeded;
- (void)_invalidateDisplayingVideoComplement;
- (void)_updateFilteredLayerIfNeeded;
- (void)_invalidateFilteredLayer;
- (void)_updateIfNeeded;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)performChanges_Private:(CDUnknownBlockType)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)prepareForReuse;
- (void)setDisplayingVideoComplement:(_Bool)arg1;
- (void)setIntensity:(double)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setLivePhotoView:(id)arg1;
- (void)_removeFilterFromLayer:(id)arg1;
- (void)_addFilterToLayer:(id)arg1;
- (void)setLayer:(id)arg1;
- (id)initWithContentType:(long long)arg1 filterType:(long long)arg2 hdrGain:(float)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

