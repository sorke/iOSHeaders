//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NTKClockHardwareInput.h"

@class NSString, UIViewController<NTKFaceViewCustomEditing>;

@interface NTKFaceEditView : UIView <NTKClockHardwareInput>
{
    UIViewController<NTKFaceViewCustomEditing> *_editingContentViewController;
    id <NTKFaceEditViewDelegate> _delegate;
    long long _editMode;
}

@property(nonatomic) long long editMode; // @synthesize editMode=_editMode;
@property(nonatomic) __weak id <NTKFaceEditViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIViewController<NTKFaceViewCustomEditing> *editingContentViewController; // @synthesize editingContentViewController=_editingContentViewController;
- (void).cxx_destruct;
- (_Bool)_handlePhysicalButton:(unsigned long long)arg1 event:(unsigned long long)arg2;
- (_Bool)_wheelChangedWithEvent:(id)arg1;
- (_Bool)isTransitioningBetweenEditPages;
- (void)setForEditMode:(long long)arg1 gestureDiscreteScrollHandler:(CDUnknownBlockType)arg2;
- (void)setForEditMode:(long long)arg1 gestureDidScrollHandler:(CDUnknownBlockType)arg2;
- (void)setForEditMode:(long long)arg1 gestureDidStopHandler:(CDUnknownBlockType)arg2;
- (void)setForEditMode:(long long)arg1 numberOfLisaValues:(unsigned long long)arg2 currentValue:(unsigned long long)arg3 valueHeight:(double)arg4 animated:(_Bool)arg5;
- (void)setForEditMode:(long long)arg1 numberOfLisaValues:(unsigned long long)arg2 currentValue:(unsigned long long)arg3 valueHeight:(double)arg4;
- (void)removeAllKeylinesForEditMode:(long long)arg1;
- (void)selectKeylineForKey:(id)arg1 editMode:(long long)arg2;
- (void)setLabelActiveAreaInsets:(struct UIEdgeInsets)arg1 forKey:(id)arg2 editMode:(long long)arg3;
- (void)setLabelAlignment:(unsigned long long)arg1 forKey:(id)arg2 editMode:(long long)arg3;
- (void)setLabelText:(id)arg1 forKey:(id)arg2 editMode:(long long)arg3;
- (void)setDeselectedKeylineFrame:(struct CGRect)arg1 forKey:(id)arg2 editMode:(long long)arg3;
- (void)setSelectedKeylineFrame:(struct CGRect)arg1 forKey:(id)arg2 editMode:(long long)arg3;
- (void)addKeyline:(id)arg1 forKey:(id)arg2 tappable:(_Bool)arg3 editMode:(long long)arg4;
- (void)deactivateWithCompletion:(CDUnknownBlockType)arg1;
- (void)willDeactivate;
- (void)activate;
- (void)willActivate;
- (struct CGPoint)pageOffsetFromCenter:(long long)arg1;
- (void)setEditingContentViewController:(id)arg1 forEditMode:(long long)arg2;
- (id)initWithEditModes:(id)arg1 forDevice:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

