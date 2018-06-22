//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSObject<TSSPreset>, NSString, TSKDocumentRoot, TSUImage, UIView;

__attribute__((visibility("hidden")))
@interface TSDSwatchRenderingOperation : NSOperation
{
    UIView *mView;
    NSObject<TSSPreset> *mPreset;
    struct CGSize mImageSize;
    double mImageScale;
    struct CGRect mSwatchFrame;
    TSKDocumentRoot *mDocumentRoot;
    struct CGImage *mDeliveredImage;
    unsigned long long mInsertPopoverPageType;
    unsigned long long mInsertPopoverPageNumber;
    NSString *mIdentifier;
    TSUImage *mSwatch;
    id <TSKAccessControllerReadTicket> mRenderingTicket;
    _Bool mRenderForWideGamut;
    _Bool mSuppressesAnimation;
    id <TSDSwatchRenderingOperationDelegate> mDelegate;
    _Bool mDeliversImageAutomatically;
}

@property(nonatomic) _Bool suppressesAnimation; // @synthesize suppressesAnimation=mSuppressesAnimation;
@property(nonatomic) _Bool deliversImageAutomatically; // @synthesize deliversImageAutomatically=mDeliversImageAutomatically;
@property(readonly, nonatomic) _Bool renderForWideGamut; // @synthesize renderForWideGamut=mRenderForWideGamut;
@property(copy) NSString *identifier; // @synthesize identifier=mIdentifier;
@property unsigned long long insertPopoverPageNumber; // @synthesize insertPopoverPageNumber=mInsertPopoverPageNumber;
@property unsigned long long insertPopoverPageType; // @synthesize insertPopoverPageType=mInsertPopoverPageType;
@property(readonly) TSKDocumentRoot *documentRoot; // @synthesize documentRoot=mDocumentRoot;
@property(nonatomic) __weak id <TSDSwatchRenderingOperationDelegate> delegate; // @synthesize delegate=mDelegate;
@property(readonly) struct CGRect swatchFrame; // @synthesize swatchFrame=mSwatchFrame;
@property(readonly) double imageScale; // @synthesize imageScale=mImageScale;
@property(readonly) struct CGSize imageSize; // @synthesize imageSize=mImageSize;
@property(readonly) NSObject<TSSPreset> *preset; // @synthesize preset=mPreset;
@property(retain) UIView *view; // @synthesize view=mView;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (void)doWorkWithReadLock;
- (struct UIEdgeInsets)swatchEdgeInsets;
- (_Bool)needsPressedStateBackground;
@property(readonly, nonatomic) struct CGImage *deliveredImage;
- (void)deliverSwatch;
- (void)deliverCGImage:(struct CGImage *)arg1;
- (void)p_didFinishRendering;
- (void)p_deliverResultOnMainThread:(id)arg1;
- (struct CGImage *)p_newSwatchPressedStateBackgroundFromCGImage:(struct CGImage *)arg1;
- (void)p_showSwatchInViewAnimated:(_Bool)arg1;
- (id)p_extendedRenderingTicket;
@property(retain, nonatomic) id <TSKAccessControllerReadTicket> renderingTicket;
- (_Bool)isReadyToRender;
- (void)dealloc;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 documentRoot:(id)arg5;

@end

