//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIInteraction.h"
#import "_UIClickInteractionProgressProvidingDelegate.h"

@class NSString, UIView, _UIClickFeedbackGenerator, _UIPreviewInteractionHighlighter;

@interface UIClickInteraction : NSObject <_UIClickInteractionProgressProvidingDelegate, UIInteraction>
{
    _UIClickFeedbackGenerator *_feedbackGenerator;
    _Bool _interactive;
    long long _state;
    _UIPreviewInteractionHighlighter *_interactionEffect;
    _Bool _latching;
    _Bool _selected;
    UIView *_view;
    id <UIClickInteractionDelegate> _delegate;
    id <_UIClickInteractionProgressProviding> _progressProvider;
}

@property(retain, nonatomic) id <_UIClickInteractionProgressProviding> progressProvider; // @synthesize progressProvider=_progressProvider;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isLatching) _Bool latching; // @synthesize latching=_latching;
@property(nonatomic) __weak id <UIClickInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)clickProgressProviderDidEnd:(id)arg1;
- (void)clickProgressProvider:(id)arg1 didUpdateWithOverallProgress:(double)arg2 currentState:(long long)arg3 ended:(_Bool)arg4;
- (void)clickProgressProviderDidBegin:(id)arg1;
- (void)_endInteractionIfNeeded;
- (void)_createFeedbackGenerator;
- (void)_prepareForInteraction;
- (void)didMoveToView:(id)arg1;
- (void)willMoveToView:(id)arg1;
- (void)cancelInteraction;
- (Class)_progressProviderClass;
- (void)_updateProgressProvider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

