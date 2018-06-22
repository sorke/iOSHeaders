//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSMutableDictionary, NSString, TSDFreehandDrawingToolkitUIState, TSKAnnotationAuthor, TSKSelectionPath, TSWPSelection;

__attribute__((visibility("hidden")))
@interface TPArchivedViewState : TSPObject
{
    struct CGRect _visibleRect;
    TSKSelectionPath *_compatibilitySelectionPath;
    TSKSelectionPath *_selectionPath;
    TSWPSelection *_bodySelection;
    _Bool _masterDrawablesSelectable;
    NSMutableDictionary *_chartUIState;
    _Bool _rulerVisible;
    _Bool _layoutBordersVisible;
    _Bool _wordCountHUDVisible;
    _Bool _showsComments;
    _Bool _showsCTMarkup;
    _Bool _showsCTDeletions;
    _Bool _hasShowsCTMarkup;
    _Bool _hasShowsCTDeletions;
    _Bool _changeTrackingPaused;
    _Bool _showsPageNavigator;
    _Bool _pencilAnnotationsHidden;
    _Bool _showsActivitySidebar;
    long long _viewScaleMode;
    long long _pageViewState;
    double _viewScale;
    struct CGRect _windowFrame;
    long long _viewScaleModeiOS;
    NSString *_selectedInspectorSwitchSegmentIdentifier;
    _Bool _inspectorHidden;
    int _wordCountHUDType;
    struct CGPoint _wordCountHUDPosition;
    _Bool _showUserDefinedGuides;
    NSString *_authorFilterName;
    TSKAnnotationAuthor *_authorFilter;
    TSDFreehandDrawingToolkitUIState *_freehandDrawingToolkitUIState;
    double _presentationAutoScrollSpeed;
}

@property(readonly, nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property(retain, nonatomic) TSKSelectionPath *selectionPath; // @synthesize selectionPath=_selectionPath;
@property(retain, nonatomic) TSKSelectionPath *compatibilitySelectionPath; // @synthesize compatibilitySelectionPath=_compatibilitySelectionPath;
- (void).cxx_destruct;
- (void)captureViewStateWithProvider:(id)arg1;
- (void)readViewStateWithConsumer:(id)arg1;
- (void)readCanvasStateWithConsumer:(id)arg1;
- (_Bool)showsComments;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)p_setArchivedViewStateDefaults;

@end

