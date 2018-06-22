//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitUI/WLEasyToHitCustomView.h>

#import "PKForegroundActiveArbiterObserver.h"
#import "PKPaymentServiceDelegate.h"

@class CAFilter, NSArray, NSMutableArray, NSMutableSet, NSString, PKLiveRenderedCardFaceView, PKPass, PKPassColorProfile, PKPassFaceTemplate, PKPaymentService, UIImage, UIImageView, UIView;

@interface PKPassFaceView : WLEasyToHitCustomView <PKPaymentServiceDelegate, PKForegroundActiveArbiterObserver>
{
    PKPass *_pass;
    PKPassColorProfile *_colorProfile;
    NSMutableSet *_headerInvariantViews;
    NSMutableSet *_bodyInvariantViews;
    NSMutableSet *_headerContentViews;
    NSMutableSet *_bodyContentViews;
    _Bool _showingHeader;
    _Bool _showingBody;
    _Bool _resizablePartialImage;
    UIView *_contentView;
    UIImageView *_backgroundView;
    UIImage *_faceImage;
    UIImage *_partialFaceImage;
    CAFilter *_dimmingFilter;
    double _dimmer;
    NSMutableArray *_headerBucketViews;
    NSMutableArray *_bodyBucketViews;
    PKLiveRenderedCardFaceView *_liveBackgroundView;
    unsigned long long _contentViewCreatedRegions;
    unsigned long long _invariantViewCreatedRegions;
    _Bool _showsLiveRendering;
    _Bool _foregroundActive;
    PKPaymentService *_paymentService;
    _Bool _clipsContent;
    _Bool _allowBackgroundPlaceHolders;
    _Bool _liveMotionEnabled;
    id <PKPassFaceDelegate> _delegate;
    long long _backgroundMode;
    unsigned long long _visibleRegions;
    double _clippedContentHeight;
    NSArray *_buckets;
    long long _style;
    PKPassFaceTemplate *_faceTemplate;
}

+ (id)newFrontFaceViewForStyle:(long long)arg1;
+ (Class)_faceClassForStyle:(long long)arg1;
@property(readonly, nonatomic) PKPassFaceTemplate *faceTemplate; // @synthesize faceTemplate=_faceTemplate;
@property(retain, nonatomic) NSMutableArray *headerBucketViews; // @synthesize headerBucketViews=_headerBucketViews;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, retain, nonatomic) NSArray *buckets; // @synthesize buckets=_buckets;
@property(nonatomic) _Bool liveMotionEnabled; // @synthesize liveMotionEnabled=_liveMotionEnabled;
@property(nonatomic) double clippedContentHeight; // @synthesize clippedContentHeight=_clippedContentHeight;
@property(nonatomic) _Bool allowBackgroundPlaceHolders; // @synthesize allowBackgroundPlaceHolders=_allowBackgroundPlaceHolders;
@property(nonatomic) _Bool clipsContent; // @synthesize clipsContent=_clipsContent;
@property(nonatomic) unsigned long long visibleRegions; // @synthesize visibleRegions=_visibleRegions;
@property(nonatomic) long long backgroundMode; // @synthesize backgroundMode=_backgroundMode;
@property(nonatomic) id <PKPassFaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleTimeOrLocaleChange:(id)arg1;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(CDStruct_973bafd3)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
- (void)_recreateFieldDerivedContent;
- (void)_setBalances:(id)arg1;
- (void)_updateForeignBalances;
- (void)_createBucketsIfNecessary;
- (id)_relevantBuckets;
- (void)_setShowsBackgroundView:(_Bool)arg1;
- (void)_setContentViewsAlpha:(double)arg1;
- (void)_setShowsBodyViews:(_Bool)arg1;
- (void)_setShowsHeaderViews:(_Bool)arg1;
- (void)_flushContentViewsForRegions:(unsigned long long)arg1;
- (void)_createContentViewsForRegions:(unsigned long long)arg1;
- (void)_createInvariantViewsForRegions:(unsigned long long)arg1;
@property(nonatomic) _Bool showsLiveRendering;
- (void)createBodyContentViews;
- (void)createHeaderContentViews;
- (void)createBodyInvariantViews;
- (void)createHeaderInvariantViews;
@property(readonly, nonatomic) struct CGSize contentSize;
- (id)passFaceTemplate;
- (long long)_validityStateForPass:(id)arg1;
- (void)_presentDiffRecursivelyDiff:(id)arg1 forBucketAtIndex:(unsigned long long)arg2 withBuckets:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentDiff:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
@property(readonly, nonatomic) struct UIEdgeInsets shadowInsets;
- (void)createContentViewsWithFade:(_Bool)arg1;
- (void)setDimmer:(double)arg1 animated:(_Bool)arg2;
- (void)_createDimmingFilterIfNecessary;
@property(readonly, nonatomic) _Bool bodyContentCreated;
@property(readonly, nonatomic) PKPassColorProfile *colorProfile;
@property(readonly, nonatomic) PKPass *pass;
- (void)removeContentView:(id)arg1 ofType:(long long)arg2;
- (void)insertContentView:(id)arg1 ofType:(long long)arg2;
- (id)_viewSetForContentViewType:(long long)arg1;
@property(readonly, nonatomic) struct CGRect contentBounds;
@property(readonly, nonatomic) UIView *contentView;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)setPass:(id)arg1 colorProfile:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

