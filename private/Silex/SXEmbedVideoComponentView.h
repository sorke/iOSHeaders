//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Silex/SXMediaComponentView.h>

#import "SXViewportChangeListener.h"
#import "WKNavigationDelegate.h"
#import "WKNavigationDelegatePrivate.h"
#import "WKUIDelegate.h"

@class NSString, SXWebCrashRetryThrottler, WKWebView;

@interface SXEmbedVideoComponentView : SXMediaComponentView <WKNavigationDelegate, WKNavigationDelegatePrivate, WKUIDelegate, SXViewportChangeListener>
{
    _Bool _webViewIsLoaded;
    _Bool _isPresentingFullscreen;
    id <SXComponentActionHandler> _actionHandler;
    WKWebView *_webView;
    SXWebCrashRetryThrottler *_webCrashRetryThrottler;
}

+ (id)sharedConfiguration;
@property(nonatomic) _Bool isPresentingFullscreen; // @synthesize isPresentingFullscreen=_isPresentingFullscreen;
@property(nonatomic) _Bool webViewIsLoaded; // @synthesize webViewIsLoaded=_webViewIsLoaded;
@property(retain, nonatomic) SXWebCrashRetryThrottler *webCrashRetryThrottler; // @synthesize webCrashRetryThrottler=_webCrashRetryThrottler;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(readonly, nonatomic) id <SXComponentActionHandler> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (_Bool)allowHierarchyRemoval;
- (unsigned long long)analyticsVideoType;
- (unsigned long long)analyticsMediaType;
- (void)_webViewDidExitFullscreen:(id)arg1;
- (void)_webViewDidEnterFullscreen:(id)arg1;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (_Bool)shouldAllowRequestToURL:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)_webViewWebProcessDidCrash:(id)arg1;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)handleError:(id)arg1;
- (struct CGRect)visibleFrame;
- (struct CGRect)transitionContentFrame;
- (void)updateWebViewToWidth:(double)arg1;
- (void)initializeWebViewWithURL:(id)arg1;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (id)initWithDocumentController:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 analyticsReporting:(id)arg4 componentStyleRendererFactory:(id)arg5 appStateMonitor:(id)arg6 actionHandler:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

