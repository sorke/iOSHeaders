//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TSReading/TSDStyledRep.h>

@class CALayer, CAShapeLayer, TSDFrameRep, TSDMediaInfo, TSDMediaLayout;

@interface TSDMediaRep : TSDStyledRep
{
    _Bool mIsZooming;
    CALayer *mTapToReplaceLayer;
    CAShapeLayer *mMaskLayer;
    CAShapeLayer *mStrokeLayer;
    CALayer *mFrameMaskLayer;
    TSDFrameRep *mFrameRep;
    struct CGRect mLastPictureFrameLayerRect;
}

- (void)p_updateTapToReplaceLayerPosition;
- (struct CGPoint)p_scaledPositionOfImageReplaceKnob;
- (struct CGSize)p_replaceButtonSize;
- (void)p_addLayerForReplaceButtonToArray:(id)arg1;
- (id)p_tapToReplaceLayer;
- (_Bool)replaceButtonContainsPoint:(struct CGPoint)arg1;
- (id)currentReplaceButtonHighlightedImage;
- (id)currentReplaceButtonImage;
- (id)visibleMediaReplaceButtonLayer;
@property(readonly, nonatomic) _Bool shouldShowMediaReplaceUI;
- (_Bool)shouldAllowReplacementFromPaste;
- (_Bool)shouldAllowReplacementFromDrop;
- (_Bool)isPlaceholder;
- (struct CGPoint)positionOfHyperlinkKnob;
- (void)updatePositionsOfKnobs:(id)arg1;
- (void)addKnobsToArray:(id)arg1;
- (_Bool)shouldCreateKnobs;
- (_Bool)canResetMediaSize;
- (id)additionalLayersOverLayer;
- (id)overlayLayers;
- (void)didEndZooming;
- (void)willBeginZooming;
- (void)processChangedProperty:(int)arg1;
@property(readonly, nonatomic) TSDMediaLayout *mediaLayout;
@property(readonly, nonatomic) TSDMediaInfo *mediaInfo;
- (void)dealloc;
- (_Bool)i_shouldRenderStroke:(id)arg1;
- (void)i_updateFrameRep;

@end

