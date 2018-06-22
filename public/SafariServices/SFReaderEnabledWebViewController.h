//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariServices/SFWebViewController.h>

#import "WKNavigationDelegatePrivate.h"
#import "_SFReaderControllerDelegate.h"

@class NSString, _SFReaderController;

__attribute__((visibility("hidden")))
@interface SFReaderEnabledWebViewController : SFWebViewController <_SFReaderControllerDelegate, WKNavigationDelegatePrivate>
{
    _SFReaderController *_readerController;
}

@property(readonly, nonatomic) _SFReaderController *readerController; // @synthesize readerController=_readerController;
- (void).cxx_destruct;
- (void)readerController:(id)arg1 contentDidBecomeReadyWithDetectedLanguage:(id)arg2;
- (void)createReaderWebViewForReaderController:(id)arg1;
- (void)readerController:(id)arg1 didClickLinkInReaderWithRequest:(id)arg2;
- (void)readerController:(id)arg1 didClickLinkRequestingNewWindowInReaderWithRequest:(id)arg2;
- (void)readerController:(id)arg1 didDetermineReaderAvailability:(_Bool)arg2 dueToSameDocumentNavigation:(_Bool)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)setUpReaderWithReaderWebView:(id)arg1;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SFReaderEnabledWebViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

