//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PUPhotoEditLayoutDynamicAdaptable.h"
#import "PUViewControllerSpecChangeObserver.h"
#import "UIScrollViewDelegate.h"

@class NSString, NURenderPipelineFilter, PLEditSource, PLPhotoEditAggregateSession, PLPhotoEditMutableModel, PUPhotoEditToolControllerSpec, PUPhotoEditValuesCalculator, UIButton, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface PUPhotoEditToolController : UIViewController <PUViewControllerSpecChangeObserver, PUPhotoEditLayoutDynamicAdaptable, UIScrollViewDelegate>
{
    _Bool _performingLiveInteraction;
    long long _layoutOrientation;
    PLPhotoEditMutableModel *_photoEditModel;
    PLEditSource *_editSource;
    PUPhotoEditValuesCalculator *_valuesCalculator;
    PUPhotoEditToolControllerSpec *_spec;
    id <PUPhotoEditToolControllerDelegate> _delegate;
    PLPhotoEditAggregateSession *_aggregateSession;
    NSString *_localizedName;
    UIImage *_toolbarIcon;
    UIImage *_selectedToolbarIcon;
    UIButton *_preferredAlternateToolbarButton;
    CDUnknownBlockType _ppt_didBecomeActiveToolBlock;
}

@property(copy, nonatomic) CDUnknownBlockType ppt_didBecomeActiveToolBlock; // @synthesize ppt_didBecomeActiveToolBlock=_ppt_didBecomeActiveToolBlock;
@property(readonly, nonatomic) UIButton *preferredAlternateToolbarButton; // @synthesize preferredAlternateToolbarButton=_preferredAlternateToolbarButton;
@property(readonly, nonatomic, getter=isPerformingLiveInteraction) _Bool performingLiveInteraction; // @synthesize performingLiveInteraction=_performingLiveInteraction;
@property(readonly, nonatomic) UIImage *selectedToolbarIcon; // @synthesize selectedToolbarIcon=_selectedToolbarIcon;
@property(readonly, nonatomic) UIImage *toolbarIcon; // @synthesize toolbarIcon=_toolbarIcon;
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, nonatomic) PLPhotoEditAggregateSession *aggregateSession; // @synthesize aggregateSession=_aggregateSession;
@property(nonatomic) __weak id <PUPhotoEditToolControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PUPhotoEditToolControllerSpec *spec; // @synthesize spec=_spec;
@property(readonly, nonatomic) PUPhotoEditValuesCalculator *valuesCalculator; // @synthesize valuesCalculator=_valuesCalculator;
@property(readonly, nonatomic) PLEditSource *editSource; // @synthesize editSource=_editSource;
@property(readonly, nonatomic) PLPhotoEditMutableModel *photoEditModel; // @synthesize photoEditModel=_photoEditModel;
@property(readonly, nonatomic) long long layoutOrientation;
- (void).cxx_destruct;
- (struct CGRect)contentRectInCoordinateSpace:(id)arg1;
- (void)didResignActiveTool;
- (void)willResignActiveTool;
- (void)didBecomeActiveTool;
- (void)willBecomeActiveTool;
- (_Bool)canBecomeActiveTool;
- (void)specDidChange;
- (_Bool)installLivePhotoPlaybackGestureRecognizer:(id)arg1;
- (_Bool)installTogglePreviewGestureRecognizer:(id)arg1;
- (void)photoEditModelDidChange;
- (void)setAggregateSession:(id)arg1;
- (void)setPreferredAlternateToolbarButton:(id)arg1;
- (void)setPerformingLiveInteraction:(_Bool)arg1;
- (void)setSpec:(id)arg1;
- (void)_updateTraitCollectionAndLayoutReferenceSize;
- (void)_updateTraitCollectionAndLayoutReferenceSize:(struct CGSize)arg1;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)prepareForSave;
- (void)basePhotoInvalidated;
- (void)baseLivePhotoInvalidated;
- (void)_photoEditModelDidChange:(id)arg1;
- (void)resetToDefaultValueAnimated:(_Bool)arg1;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)setLayoutOrientation:(long long)arg1;
@property(readonly, copy, nonatomic) NURenderPipelineFilter *filter;
@property(readonly, nonatomic) _Bool suppressesEditUpdates;
@property(readonly, nonatomic) _Bool wantsSecondaryToolbarVisible;
@property(readonly, nonatomic) _Bool wantsZoomAndPanEnabled;
@property(readonly, copy, nonatomic) UIColor *preferredPreviewBackgroundColor;
@property(readonly, nonatomic) _Bool wantsDefaultPreviewView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets preferredPreviewViewInsets;
@property(readonly, nonatomic) NSString *localizedResetToolActionTitle;
@property(readonly, nonatomic) _Bool canResetToDefaultValue;
- (void)mediaViewIsReady;
- (void)setupWithPhotoEditModel:(id)arg1 editSource:(id)arg2 valuesCalculator:(id)arg3;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

