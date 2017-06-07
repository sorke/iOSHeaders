//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXComponentView.h>

#import <Silex/ADBannerViewDelegate-Protocol.h>
#import <Silex/SXAdDisplayInstructions-Protocol.h>
#import <Silex/SXViewportChangeListener-Protocol.h>

@class ADBannerView, NSError, NSString, SXIAdDebugView;

@interface SXIAdComponentView : SXComponentView <ADBannerViewDelegate, SXAdDisplayInstructions, SXViewportChangeListener>
{
    _Bool _hasInvalidatedLayout;
    _Bool _isReceivingViewportChanges;
    _Bool _isDisplayingBannerView;
    _Bool _didUnloadBannerView;
    int _opportunityError;
    ADBannerView *_bannerView;
    CDUnknownBlockType _cancelHandler;
    SXIAdDebugView *_debugView;
    NSError *_error;
    NSString *_generatedOpportunityIdentifier;
    struct CGSize _viewportSizeOnAdRequest;
}

@property(nonatomic) _Bool didUnloadBannerView; // @synthesize didUnloadBannerView=_didUnloadBannerView;
@property(nonatomic) _Bool isDisplayingBannerView; // @synthesize isDisplayingBannerView=_isDisplayingBannerView;
@property(retain, nonatomic) NSString *generatedOpportunityIdentifier; // @synthesize generatedOpportunityIdentifier=_generatedOpportunityIdentifier;
@property(nonatomic) int opportunityError; // @synthesize opportunityError=_opportunityError;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) SXIAdDebugView *debugView; // @synthesize debugView=_debugView;
@property(nonatomic) _Bool isReceivingViewportChanges; // @synthesize isReceivingViewportChanges=_isReceivingViewportChanges;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(nonatomic) struct CGSize viewportSizeOnAdRequest; // @synthesize viewportSizeOnAdRequest=_viewportSizeOnAdRequest;
@property(nonatomic) _Bool hasInvalidatedLayout; // @synthesize hasInvalidatedLayout=_hasInvalidatedLayout;
@property(retain, nonatomic) ADBannerView *bannerView; // @synthesize bannerView=_bannerView;
- (void).cxx_destruct;
- (void)sendOpportunityEvent;
- (_Bool)shouldSendOpportunityEvent;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (void)stopDisplayingAdWithError:(unsigned long long)arg1;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)displayBannerView;
- (void)invalidateLayoutIfNeeded;
- (void)layoutBannerView;
- (void)cancelAdRequest;
- (void)unloadBannerWithError:(id)arg1;
- (void)removeBannerViewWithError:(id)arg1;
- (void)requestBannerView;
- (_Bool)hasRequestedBannerViewCurrentViewport;
- (_Bool)shouldRequestBannerView;
- (_Bool)shouldRegisterForViewportChanges;
- (void)registerForViewportChanges;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)presentComponent;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)adSheetDisconnectedNotification:(id)arg1;
- (void)dealloc;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 context:(id)arg3 configuration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
