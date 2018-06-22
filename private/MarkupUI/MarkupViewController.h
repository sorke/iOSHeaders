//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MUContentViewControllerDelegate.h"
#import "UINavigationBarDelegate.h"
#import "UIToolbarDelegate.h"

@class AKController, AKToolbarView, NSData, NSLayoutConstraint, NSString, NSUndoManager, PDFDocument, PDFView, UIBarButtonItem, UIColor, UIImage, UIImageView, UINavigationBar, UINavigationItem, UIScrollView, UIView, UIViewController<MUContentViewControllerProtocol>;

@interface MarkupViewController : UIViewController <MUContentViewControllerDelegate, UINavigationBarDelegate, UIToolbarDelegate>
{
    UIColor *_backgroundColor;
    UIColor *_toolbarItemTintColor;
    UIColor *_toolbarTintColor;
    UIColor *_navBarTitleColor;
    _Bool _pencilAlwaysDraws;
    _Bool _toolbarHidden;
    _Bool _thumbnailViewHidden;
    _Bool _showThumbnailViewForMultipage;
    _Bool _navigationModeHorizontal;
    _Bool _needToPerformFullTeardown;
    _Bool _needToPerformDocumentClosedTeardown;
    _Bool _observingAKCurrentPageIndex;
    _Bool _alreadyLoggedSavingForThisDocument;
    _Bool _useFancyTransition;
    _Bool _isAnimatingMarkupExtensionTransition;
    _Bool _userDidCancel;
    _Bool _showAsFormSheet;
    _Bool _encryptPrivateMetadata;
    _Bool _forcesPDFViewTopAlignment;
    _Bool _shapeDetectionEnabled;
    _Bool _allowShakeToUndo;
    _Bool _centersIgnoringContentInsets;
    _Bool _showShareButtonInToolbar;
    long long _toolbarPosition;
    UINavigationBar *_navBar;
    UIViewController<MUContentViewControllerProtocol> *_contentViewController;
    NSString *_sourceContentType;
    id _sourceContent;
    id _digestedSourceContent;
    NSData *_archivedModelData;
    double _initialContentScale;
    UIView *_toolbar;
    AKToolbarView *_modernToolbar;
    NSLayoutConstraint *_toolbarTopConstraint;
    NSLayoutConstraint *_toolbarTopAttachedConstraint;
    NSLayoutConstraint *_toolbarBottomConstraint;
    UINavigationItem *_navItem;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    UIImage *_placeholderImage;
    NSString *_preferredFileDisplayName;
    UIView *_contentContainerView;
    UIView *_transitionDimmingView;
    UIView *_whiteView;
    NSString *_hostProcessBundleIdentifier;
    NSUndoManager *_akUndoManager;
    id <MarkupViewControllerDelegate> _delegate;
    UIImageView *_placeholderImageView;
    unsigned long long _inkStyle;
}

+ (double)_maxImageDimensionInView;
+ (_Bool)_isInLowMemoryEnvironment;
+ (id)markupBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)cleanImageMetadataFromData:(id)arg1;
+ (_Bool)hasPrivateImageMetadata:(id)arg1;
+ (id)supportedOutputTypes;
@property unsigned long long inkStyle; // @synthesize inkStyle=_inkStyle;
@property(retain) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
@property(nonatomic) _Bool showShareButtonInToolbar; // @synthesize showShareButtonInToolbar=_showShareButtonInToolbar;
@property(nonatomic) _Bool centersIgnoringContentInsets; // @synthesize centersIgnoringContentInsets=_centersIgnoringContentInsets;
@property(nonatomic) __weak id <MarkupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool allowShakeToUndo; // @synthesize allowShakeToUndo=_allowShakeToUndo;
@property(retain, nonatomic) NSUndoManager *akUndoManager; // @synthesize akUndoManager=_akUndoManager;
@property(nonatomic, getter=isShapeDetectionEnabled) _Bool shapeDetectionEnabled; // @synthesize shapeDetectionEnabled=_shapeDetectionEnabled;
@property(nonatomic) _Bool forcesPDFViewTopAlignment; // @synthesize forcesPDFViewTopAlignment=_forcesPDFViewTopAlignment;
@property(copy, nonatomic) NSString *hostProcessBundleIdentifier; // @synthesize hostProcessBundleIdentifier=_hostProcessBundleIdentifier;
@property _Bool encryptPrivateMetadata; // @synthesize encryptPrivateMetadata=_encryptPrivateMetadata;
@property _Bool showAsFormSheet; // @synthesize showAsFormSheet=_showAsFormSheet;
@property _Bool userDidCancel; // @synthesize userDidCancel=_userDidCancel;
@property _Bool isAnimatingMarkupExtensionTransition; // @synthesize isAnimatingMarkupExtensionTransition=_isAnimatingMarkupExtensionTransition;
@property _Bool useFancyTransition; // @synthesize useFancyTransition=_useFancyTransition;
@property(retain) UIView *whiteView; // @synthesize whiteView=_whiteView;
@property(retain) UIView *transitionDimmingView; // @synthesize transitionDimmingView=_transitionDimmingView;
@property(retain) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(copy, nonatomic) NSString *preferredFileDisplayName; // @synthesize preferredFileDisplayName=_preferredFileDisplayName;
@property(nonatomic) _Bool alreadyLoggedSavingForThisDocument; // @synthesize alreadyLoggedSavingForThisDocument=_alreadyLoggedSavingForThisDocument;
@property(retain) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UINavigationItem *navItem; // @synthesize navItem=_navItem;
@property(retain) NSLayoutConstraint *toolbarBottomConstraint; // @synthesize toolbarBottomConstraint=_toolbarBottomConstraint;
@property(retain) NSLayoutConstraint *toolbarTopAttachedConstraint; // @synthesize toolbarTopAttachedConstraint=_toolbarTopAttachedConstraint;
@property(retain) NSLayoutConstraint *toolbarTopConstraint; // @synthesize toolbarTopConstraint=_toolbarTopConstraint;
@property(retain) AKToolbarView *modernToolbar; // @synthesize modernToolbar=_modernToolbar;
@property(retain, nonatomic) UIView *toolbar; // @synthesize toolbar=_toolbar;
@property double initialContentScale; // @synthesize initialContentScale=_initialContentScale;
@property(retain) NSData *archivedModelData; // @synthesize archivedModelData=_archivedModelData;
@property(retain) id digestedSourceContent; // @synthesize digestedSourceContent=_digestedSourceContent;
@property(retain, nonatomic) id sourceContent; // @synthesize sourceContent=_sourceContent;
@property(retain) NSString *sourceContentType; // @synthesize sourceContentType=_sourceContentType;
@property(getter=isObservingAKCurrentPageIndex) _Bool observingAKCurrentPageIndex; // @synthesize observingAKCurrentPageIndex=_observingAKCurrentPageIndex;
@property _Bool needToPerformDocumentClosedTeardown; // @synthesize needToPerformDocumentClosedTeardown=_needToPerformDocumentClosedTeardown;
@property _Bool needToPerformFullTeardown; // @synthesize needToPerformFullTeardown=_needToPerformFullTeardown;
@property(retain) UIViewController<MUContentViewControllerProtocol> *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic, getter=isNavigationModeHorizontal) _Bool navigationModeHorizontal; // @synthesize navigationModeHorizontal=_navigationModeHorizontal;
@property(nonatomic) _Bool showThumbnailViewForMultipage; // @synthesize showThumbnailViewForMultipage=_showThumbnailViewForMultipage;
@property(nonatomic, getter=isThumbnailViewHidden) _Bool thumbnailViewHidden; // @synthesize thumbnailViewHidden=_thumbnailViewHidden;
@property(retain, nonatomic) UINavigationBar *navBar; // @synthesize navBar=_navBar;
@property(nonatomic) long long toolbarPosition; // @synthesize toolbarPosition=_toolbarPosition;
@property(nonatomic, getter=isToolbarHidden) _Bool toolbarHidden; // @synthesize toolbarHidden=_toolbarHidden;
- (void).cxx_destruct;
- (long long)toolbarController:(id)arg1 positionForBar:(id)arg2;
- (void)_toolbarShareButtonTapped:(id)arg1;
- (long long)positionForBar:(id)arg1;
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;
- (void)controllerWillDismissSignatureManagerView:(id)arg1;
- (void)controllerWillShowSignatureManagerView:(id)arg1;
- (void)controllerWillDismissSignatureCaptureView:(id)arg1;
- (void)controllerWillShowSignatureCaptureView:(id)arg1;
- (void)penStrokeCompletedForAnnotationController:(id)arg1;
- (void)editDetectedForAnnotationController:(id)arg1;
- (void)editCheckpointReachedForAnnotationController:(id)arg1;
- (_Bool)contentViewController:(id)arg1 shouldHandleURL:(id)arg2;
- (id)annotationControllerOfContentViewController:(id)arg1 willSetToolbarItems:(id)arg2;
- (void)positionSketchOverlay:(id)arg1 forContentViewController:(id)arg2;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forContentViewController:(id)arg2;
- (id)undoManagerForContentViewController:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_showTextStyleOptions:(id)arg1;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)editTextAnnotation:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)delete:(id)arg1;
@property(readonly) _Bool isUsedOnDarkBackground;
- (id)_effectiveNavBarTitleColor;
@property(copy) UIColor *navBarTitleColor;
- (id)_effectiveToolbarTintColor;
@property(copy) UIColor *toolbarTintColor;
- (id)_effectiveToolbarItemTintColor;
@property(copy) UIColor *toolbarItemTintColor;
- (id)_effectiveBackgroundColor;
@property(copy) UIColor *backgroundColor;
- (void)_updateAppearanceForTraitCollection:(id)arg1;
- (void)_updateConstraintsForBarPosition:(long long)arg1;
- (void)adjustContentInsetsForBars;
- (void)_createCancelDoneNavBar;
- (void)_setupAnnotationController;
- (void)_installContentViewControllerForUTI:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingAnnotationController;
- (void)_startObservingAnnotationController;
- (void)_cleanupPlaceholderImage;
- (void)_presentPlaceholderImage;
- (void)_updateundoBarButtonWithController:(id)arg1;
- (void)_setupInitialBaseModelScaleFactorWithScreenSize:(struct CGSize)arg1 windowDecorationSize:(struct CGSize)arg2;
- (_Bool)_sourceImageMayContainBaseImageAndModel;
- (void)_bailFailedAnimateEnterMarkup;
@property(readonly, nonatomic) AKController *annotationController;
- (id)filteredToolbarItemsForItems:(id)arg1 fromController:(id)arg2;
- (id)_markupBlackColor;
@property(nonatomic) unsigned long long currentPDFPageIndex;
@property(readonly, nonatomic) UIScrollView *contentViewScrollView;
@property(readonly) PDFView *pdfView;
@property(readonly) PDFDocument *pdfDocument;
- (void)setSourceContent:(id)arg1 withArchivedModelData:(id)arg2;
- (void)_saveEditing:(id)arg1;
@property(nonatomic) _Bool pencilAlwaysDraws; // @synthesize pencilAlwaysDraws=_pencilAlwaysDraws;
@property(nonatomic) _Bool annotationEditingEnabled;
- (void)restoreToolModeForContentType;
@property(nonatomic) _Bool allEditingDisabled;
- (void)_loadSourceContentWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateAndLoadSourceContent:(id)arg1 withArchivedModelData:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_setData:(id)arg1 withArchivedModelData:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)_writeToDataConsumer:(struct CGDataConsumer *)arg1 embedSourceImageAndEditModel:(_Bool)arg2 error:(id *)arg3;
- (void)revert;
- (void)_cancel;
- (void)cancel:(id)arg1;
- (void)done:(id)arg1;
- (id)createArchivedModelData;
- (id)dataRepresentationWithError:(id *)arg1;
- (id)dataRepresentationEmbeddingSourceImageAndEditModel:(_Bool)arg1 error:(id *)arg2;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
- (_Bool)writeToURL:(id)arg1 embeddingSourceImageAndEditModel:(_Bool)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSString *outputType;
- (void)setData:(id)arg1;
- (void)setData:(id)arg1 withArchivedModelData:(id)arg2;
- (void)setData:(id)arg1 withArchivedModelData:(id)arg2 placeholderImage:(id)arg3;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 withArchivedModelData:(id)arg2;
- (void)setImage:(id)arg1 withArchivedModelData:(id)arg2 placeholderImage:(id)arg3;
- (void)setFileURL:(id)arg1;
- (void)_setFileURL:(id)arg1 withArchivedModelData:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setFileURL:(id)arg1 withArchivedModelData:(id)arg2;
- (void)setFileURL:(id)arg1 withArchivedModelData:(id)arg2 placeholderImage:(id)arg3;
- (void)setToolbarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_useLegacyToolbar;
- (long long)preferredStatusBarStyle;
- (void)traitCollectionDidChange:(id)arg1;
- (struct UIEdgeInsets)sketchOverlayInsets;
- (id)undoManager;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)documentDidCloseTeardown;
- (void)fullTeardown;
- (void)willBeginLoadingNewDocument;
- (void)dealloc;
- (void)_commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

