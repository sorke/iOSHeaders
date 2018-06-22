//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class PDFExtensionViewControllerPrivate;

@interface PDFExtensionViewController : UIViewController
{
    PDFExtensionViewControllerPrivate *_private;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
- (void).cxx_destruct;
- (void)_annotationLongPressNotification:(id)arg1;
- (void)_annotationHitNotification:(id)arg1;
- (void)_textSelectionDidCopyDataNotification:(id)arg1;
- (void)_textSelectionDidCopyStringNotification:(id)arg1;
- (void)_textSelectionShowTextSelectionMenu:(id)arg1;
- (void)_textSelectionPointChangedNotification:(id)arg1;
- (void)_textSelectionStateChangedNotification:(id)arg1;
- (void)_selectionChangedNotification:(id)arg1;
- (void)_pdfViewZoomToRect:(id)arg1;
- (void)_goToDestination:(id)arg1;
- (void)_goToPage:(id)arg1;
- (void)_pageChangedNotification:(id)arg1;
- (void)documentDidEndDocumentFind:(id)arg1;
- (void)didMatchString:(id)arg1;
- (void)_updatePageCount;
- (void)_zoomToRect:(struct CGRect)arg1;
- (void)_updateDocumentIsLocked;
- (void)_setupAutoScaleFactor;
- (void)_setupScrollViewContentSize;
- (void)endPDFViewRotation;
- (void)beginPDFViewRotation:(struct UIEdgeInsets)arg1;
- (void)unlockWithPassword:(id)arg1;
- (void)selectAll;
- (void)copy;
- (void)handleGesture:(unsigned long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3 locationOfFirstTouch:(struct CGPoint)arg4;
- (void)setMaximumZoomScale:(double)arg1;
- (void)setMinimumZoomScale:(double)arg1;
- (void)updatePDFViewLayout:(struct CGRect)arg1 boundsInView:(struct CGRect)arg2 scrollViewFrame:(struct CGRect)arg3 zoomScale:(double)arg4;
- (void)goToPageIndex:(long long)arg1;
- (void)clearSearchHighlights;
- (void)focusOnSearchResultAtIndex:(unsigned long long)arg1;
- (void)cancelFindStringWithHighlightsCleared:(_Bool)arg1;
- (void)cancelFindString;
- (void)findString:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)setScrollViewFrame:(struct CGRect)arg1;
- (void)setDocumentData:(id)arg1;
- (void)setupPDFView;
- (void)setup;
- (void)viewDidLoad;
- (id)init;

@end

