//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSWPPageRep.h>

#import "TSDMasterDrawableDelegate.h"
#import "TSKChangeSourceObserver.h"

@class CALayer, NSString, TPiOSMarginAdjustRep, TSDFill;

__attribute__((visibility("hidden")))
@interface TPPageRep : TSWPPageRep <TSKChangeSourceObserver, TSDMasterDrawableDelegate>
{
    CALayer *_horizontalSeparatorLayer;
    CALayer *_verticalSeparatorLayer;
    _Bool _layerNeedsUpdate;
    _Bool _fillCanApplyToCALayer;
    TPiOSMarginAdjustRep *_marginAdjustRep;
    TSDFill *_cachedBackgroundFill;
}

@property(retain, nonatomic) TSDFill *cachedBackgroundFill; // @synthesize cachedBackgroundFill=_cachedBackgroundFill;
@property(readonly, nonatomic) TPiOSMarginAdjustRep *marginAdjustRep; // @synthesize marginAdjustRep=_marginAdjustRep;
- (void).cxx_destruct;
- (id)bodyReps;
- (_Bool)masksToBounds;
- (void)drawInContext:(struct CGContext *)arg1;
- (_Bool)directlyManagesLayerContent;
- (_Bool)p_pageRequiresHorizontalSeparator;
- (_Bool)childRepIsMasterDrawable:(id)arg1;
- (_Bool)childRepIsOnDocSetupCanvas:(id)arg1;
- (void)willBeRemoved;
- (id)colorBehindBodyTextLayer:(id)arg1;
- (_Bool)isOpaque;
- (id)backgroundFill;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

