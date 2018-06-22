//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLPreviewController.h"

#import "QLPreviewControllerDataSource.h"
#import "QLPreviewControllerDelegate.h"

@class NSString, SXQuickLookFile, SXQuickLookTransitionContext;

@interface SXQuickLookPreviewViewController : QLPreviewController <QLPreviewControllerDelegate, QLPreviewControllerDataSource>
{
    SXQuickLookFile *_file;
    SXQuickLookTransitionContext *_transitionContext;
}

@property(readonly, nonatomic) SXQuickLookTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
@property(readonly, nonatomic) SXQuickLookFile *file; // @synthesize file=_file;
- (void).cxx_destruct;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;
- (void)viewDidLoad;
- (id)initWithFile:(id)arg1 transitionContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

