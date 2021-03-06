//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSDCanvasDelegate.h"

@class NSArray, NSSet, NSString, TSDCanvas, TSKDocumentRoot, TSUColor;

__attribute__((visibility("hidden")))
@interface TSDImager : NSObject <TSDCanvasDelegate>
{
    NSArray *mInfos;
    TSUColor *mBackgroundColor;
    struct CGRect mUnscaledClipRect;
    double mViewScale;
    struct CGSize mScaledImageSize;
    struct CGSize mMaximumScaledImageSize;
    _Bool mUseScaledImageSize;
    _Bool mDistortedToMatch;
    _Bool mImageMustHaveEvenDimensions;
    _Bool mShouldReuseBitmapContext;
    TSKDocumentRoot *mDocumentRoot;
    TSDCanvas *mCanvas;
    _Bool mMayBeReused;
    _Bool mHasBeenUsed;
    struct CGRect mActualScaledClipRect;
    _Bool mDrawingIntoPDF;
    _Bool mIsPrinting;
    _Bool mImageIsRenderingForMovie;
    struct CGContext *mReusableBitmapContext;
    struct CGRect mReusableBounds;
    struct CGRect mReusableIntegralBounds;
    struct CGRect mReusableActualScaledClipRect;
    struct CGSize mReusableScaledImageSize;
    NSSet *mPreviousRenderDatasNeedingDownload;
    CDUnknownBlockType mPostRenderAction;
}

@property(nonatomic) _Bool mayBeReused; // @synthesize mayBeReused=mMayBeReused;
@property(nonatomic) _Bool imageIsRenderingForMovie; // @synthesize imageIsRenderingForMovie=mImageIsRenderingForMovie;
@property(copy, nonatomic) NSSet *previousRenderDatasNeedingDownload; // @synthesize previousRenderDatasNeedingDownload=mPreviousRenderDatasNeedingDownload;
@property(nonatomic) _Bool isPrinting; // @synthesize isPrinting=mIsPrinting;
@property(nonatomic) _Bool shouldReuseBitmapContext; // @synthesize shouldReuseBitmapContext=mShouldReuseBitmapContext;
@property(nonatomic) _Bool imageMustHaveEvenDimensions; // @synthesize imageMustHaveEvenDimensions=mImageMustHaveEvenDimensions;
@property(nonatomic) _Bool distortedToMatch; // @synthesize distortedToMatch=mDistortedToMatch;
@property(nonatomic) struct CGRect unscaledClipRect; // @synthesize unscaledClipRect=mUnscaledClipRect;
@property(copy, nonatomic) TSUColor *backgroundColor; // @synthesize backgroundColor=mBackgroundColor;
@property(retain, nonatomic) NSArray *infos; // @synthesize infos=mInfos;
@property(readonly, nonatomic) TSDCanvas *canvas; // @synthesize canvas=mCanvas;
- (void).cxx_destruct;
- (struct CGImage *)p_newImageInReusableContext;
- (void)p_drawPageInContext:(struct CGContext *)arg1 createPage:(_Bool)arg2;
- (struct CGSize)p_evenDimensionsWithSize:(struct CGSize)arg1;
- (_Bool)p_configureCanvas;
@property(readonly, nonatomic) struct CGRect actualScaledClipRect; // @synthesize actualScaledClipRect=mActualScaledClipRect;
- (void)p_assertHasReadLock;
- (_Bool)isPrintingCanvas;
- (_Bool)isCanvasDrawingIntoPDF:(id)arg1;
- (struct CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1;
- (id)documentRoot;
- (_Bool)drawPageInContext:(struct CGContext *)arg1 createPage:(_Bool)arg2;
- (id)pdfData;
- (id)pngData;
- (struct CGImage *)newImage;
@property(nonatomic) struct CGSize maximumScaledImageSize;
@property(nonatomic) struct CGSize scaledImageSize;
@property(nonatomic) double viewScale;
- (void)setInfos:(id)arg1 allowLayoutIfNeeded:(_Bool)arg2;
- (void)setPostRenderAction:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDocumentRoot:(id)arg1 renderForWideGamut:(_Bool)arg2;
- (id)initWithDocumentRoot:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) id <TSDCanvasProxyDelegate> canvasProxyDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

