//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIScrollViewDelegate.h"

@class CAShapeLayer, NSString, NTKCCenteringScrollView, NTKCompanionCustomPhotosEditor, NTKDigitalTimeLabel, NTKDigitalTimeLabelStyle, NTKFace, UIBarButtonItem, UIView;

@interface _NTKCFaceDetailPhotoCropViewController : UIViewController <UIScrollViewDelegate>
{
    CAShapeLayer *_reverseMask;
    NTKCCenteringScrollView *_scrollView;
    double _photoScale;
    CAShapeLayer *_mask;
    UIView *_timeContainer;
    NTKDigitalTimeLabel *_time;
    UIBarButtonItem *_deleteButton;
    UIBarButtonItem *_cancelButton;
    _Bool _cancelConfirmed;
    _Bool _deleteConfirmed;
    unsigned long long _index;
    NTKCompanionCustomPhotosEditor *_editor;
    NTKFace *_face;
    NTKDigitalTimeLabelStyle *_timeStyle;
}

@property(retain, nonatomic) NTKDigitalTimeLabelStyle *timeStyle; // @synthesize timeStyle=_timeStyle;
@property(retain, nonatomic) NTKFace *face; // @synthesize face=_face;
@property(retain, nonatomic) NTKCompanionCustomPhotosEditor *editor; // @synthesize editor=_editor;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)dismissWithSaving:(_Bool)arg1;
- (void)_donePressed;
- (void)_deletePressed;
- (void)_cancelPressed;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithIndex:(unsigned long long)arg1 inPhotosEditor:(id)arg2 forFace:(id)arg3 timeStyle:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

