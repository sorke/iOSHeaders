//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPVolumeSlider, NSArray, NSMapTable, NSMutableSet;

@interface MPVolumeGroupSliderCoordinator : NSObject
{
    NSArray *_allSliders;
    NSMutableSet *_individualVolumeSliders;
    MPVolumeSlider *_trackingSlider;
    NSMapTable *_optimisticValues;
    NSMapTable *_optimisticScales;
    int _inFlightDisableOptimisticStateRequests;
    _Bool _shouldOverrideTracking;
    MPVolumeSlider *_masterVolumeSlider;
}

@property(readonly, nonatomic) MPVolumeSlider *masterVolumeSlider; // @synthesize masterVolumeSlider=_masterVolumeSlider;
- (void).cxx_destruct;
- (void)_setControlEventsForVolumeSlider:(id)arg1 add:(_Bool)arg2;
- (void)_removeControlEventsForVolumeSliders:(id)arg1;
- (void)_removeControlEventsForVolumeSlider:(id)arg1;
- (void)_addControlEventsForVolumeSliders:(id)arg1;
- (void)_addControlEventsForVolumeSlider:(id)arg1;
- (void)_updateOptimisticValueCache;
- (void)_resetOptimisticScales;
- (float)_maxOptimisticValue;
- (void)volumeSliderDidEndTracking:(id)arg1;
- (void)volumeSliderValueChanged:(id)arg1;
- (void)removeAllIndividualVolumeSliders;
- (void)removeIndividualVolumeSlider:(id)arg1;
- (void)addIndividualVolumeSlider:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *individualVolumeSliders;
- (id)initWithMasterVolumeSlider:(id)arg1 individualVolumeSliders:(id)arg2;

@end

