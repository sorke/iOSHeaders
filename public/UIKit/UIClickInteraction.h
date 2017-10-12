//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIInteraction.h"

@class NSString, UITouchForceGestureRecognizer, UIView, _UIClickFeedbackGenerator, _UIPreviewInteractionHighlighter;

@interface UIClickInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction>
{
    UIView *_view;
    UITouchForceGestureRecognizer *_touchForceGestureRecognizer;
    _UIClickFeedbackGenerator *_feedbackGenerator;
    _Bool _interactive;
    long long _state;
    _UIPreviewInteractionHighlighter *_interactionEffect;
    _Bool _latching;
    _Bool _selected;
    UIView *view;
    id <UIClickInteractionDelegate> _delegate;
}

@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isLatching) _Bool latching; // @synthesize latching=_latching;
@property(nonatomic) __weak id <UIClickInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view;
- (void).cxx_destruct;
- (void)_handleTouchForceGestureRecognizer:(id)arg1;
- (void)_updateInteractionForGestureRecognizer:(id)arg1;
- (void)_endInteractionIfNeeded;
- (void)_createFeedbackGenerator;
- (void)_prepareForInteraction;
- (void)didMoveToView:(id)arg1;
- (void)willMoveToView:(id)arg1;
- (void)cancelInteraction;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

