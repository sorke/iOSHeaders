//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDStyledRep.h>

#import "TSDMagicMoveMatching.h"

@class NSMutableDictionary, TSDShapeInfo, TSDShapeLayout;

__attribute__((visibility("hidden")))
@interface TSDShapeRep : TSDStyledRep <TSDMagicMoveMatching>
{
    struct CGRect mFrameInUnscaledCanvasRelativeToSuper;
    _Bool mFrameInUnscaledCanvasIsValid;
    _Bool mDirectlyManagesLayerContentCacheValid;
    _Bool mDirectlyManagesLayerContent;
    struct CGRect mOriginalAliasedAlignmentFrameInLayerFrame;
    _Bool mShadowOnChildrenDisabled;
    struct CGContext *mCommittedPathContext;
    struct CGImage *mCommittedPathImage;
    struct _NSRange mCommittedPointRange;
    struct _NSRange mAvailableToCommitPointRange;
    struct CGRect mLastDynamicInvalidRect;
    _Bool mFillChanged;
    _Bool mShouldForceLayerGeometryUpdate;
    _Bool mIsInvisibleCacheValid;
    _Bool mIsInvisibleCache;
    _Bool mNeedsDisplay;
    NSMutableDictionary *mHitTestCache;
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
- (void).cxx_destruct;
- (_Bool)canDrawShadowInOneStepWithChildren:(_Bool)arg1;
- (_Bool)p_drawsSelfInOneStep;
- (_Bool)p_isNormalShapeInsideFreehandDrawing;
- (void)p_drawLineEndForHead:(_Bool)arg1 withDelta:(struct CGPoint)arg2 andStroke:(id)arg3 inContext:(struct CGContext *)arg4 useFastDrawing:(_Bool)arg5;
- (void)setTextureAttributes:(id)arg1 textureBounds:(struct CGRect)arg2;
- (_Bool)canDrawWithOtherShapeRep:(id)arg1;
- (_Bool)isInvisible;
- (id)imageOfStroke:(struct CGRect *)arg1;
- (struct CGRect)strokeBoundsWithOptions:(unsigned long long)arg1 fallbackBounds:(struct CGRect)arg2;
- (void)p_drawInContext:(struct CGContext *)arg1 withContent:(_Bool)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(_Bool)arg4 usingPathOverride:(id)arg5 patternOffsetsBySubpathOverride:(id)arg6;
- (void)p_drawInContext:(struct CGContext *)arg1 withContent:(_Bool)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(_Bool)arg4;
- (void)drawInContext:(struct CGContext *)arg1 usingPathOverride:(id)arg2 patternOffsetsBySubpathOverride:(id)arg3;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(_Bool)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(_Bool)arg4 forAlphaOnly:(_Bool)arg5 drawChildren:(_Bool)arg6;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (void)p_drawChildrenWithoutOpacityInContext:(struct CGContext *)arg1;
- (void)recursivelyDrawChildrenInContext:(struct CGContext *)arg1;
- (id)colorBehindLayer:(id)arg1;
- (void)p_endApplyOpacity:(struct CGContext *)arg1 apply:(_Bool)arg2;
- (_Bool)p_beginApplyOpacity:(struct CGContext *)arg1 forDrawingInOneStep:(_Bool)arg2;
- (struct CGRect)clipRect;
- (struct CGRect)frameInUnscaledCanvas;
@property(readonly, nonatomic) TSDShapeLayout *shapeLayout;
@property(readonly, nonatomic) TSDShapeInfo *shapeInfo;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end

