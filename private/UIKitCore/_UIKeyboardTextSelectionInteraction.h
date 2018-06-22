//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UITextInteraction.h>

#import "_UIPanOrFlickGestureRecognizerDelegate.h"

@class NSMapTable, NSString, NSTimer, UITapGestureRecognizer, _UIKeyboardTextSelectionGestureController, _UIPanOrFlickGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIKeyboardTextSelectionInteraction : UITextInteraction <_UIPanOrFlickGestureRecognizerDelegate>
{
    _UIKeyboardTextSelectionGestureController *_owner;
    NSMapTable *_weakMap;
    id _deallocToken;
    UITapGestureRecognizer *_activeTap;
    NSTimer *_touchPadTimer;
    CDUnknownBlockType _touchPadTimerCompletion;
    _UIPanOrFlickGestureRecognizer *_activePress;
}

+ (void)attachToExistingRecogniser:(id)arg1 owner:(id)arg2 forType:(long long)arg3;
- (void)removeTemporaryGesture;
- (void)oneFingerForcePress:(id)arg1;
- (void)_clearTouchPadCallback;
- (void)_cancelTouchPadTimer;
- (void)_startTouchPadTimerWithCompletion:(CDUnknownBlockType)arg1;
- (void)panningGesture:(id)arg1;
- (void)panningGestureTap:(id)arg1;
- (void)twoFingerTap:(id)arg1;
- (void)oneFingerForcePan:(id)arg1;
- (void)_logTapCounts:(id)arg1;
- (void)_longForcePressDetected:(id)arg1;
- (void)_beginLongForcePressTimerForGesture:(id)arg1;
- (void)indirectPanGestureWithState:(long long)arg1 withTranslation:(struct CGPoint)arg2 withFlickDirection:(unsigned long long)arg3;
- (void)cancelTwoFingerLongPressWithExecutionContext:(id)arg1;
- (void)endTwoFingerLongPressWithExecutionContext:(id)arg1;
- (void)finishTwoFingerLongPressWithExecutionContext:(id)arg1;
- (void)updateTwoFingerLongPressWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;
- (void)beginTwoFingerLongPressWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;
- (void)twoFingerLongPressGestureWithState:(long long)arg1 withTranslation:(struct CGPoint)arg2;
- (void)disableEnclosingScrollViewScrolling;
- (void)_granularityExpandingGestureWithTimeInterval:(double)arg1 timeGranularity:(double)arg2 isMidPan:(_Bool)arg3;
- (void)clearKeyboardTouchesForGesture:(id)arg1;
- (void)_cancelLongForcePressTimer;
- (struct CGPoint)cursorLocationForTranslation:(struct CGPoint)arg1;
- (void)beginCursorManipulationFromRect:(struct CGRect)arg1;
- (long long)layoutDirectionFromFlickDirection:(unsigned long long)arg1;
- (void)cancelTwoFingerPanWithExecutionContext:(id)arg1;
- (void)handleTwoFingerFlickInDirection:(long long)arg1 executionContext:(id)arg2;
- (void)endTwoFingerPanWithExecutionContext:(id)arg1;
- (void)updateTwoFingerPanWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;
- (void)beginTwoFingerPanWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;
- (void)beginTwoFingerCursorPanWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;
- (void)endIndirectBlockPanWithExecutionContext:(id)arg1;
- (void)updateIndirectBlockPanWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;
- (void)beginIndirectBlockPanWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;
- (void)indirectBlockPanGestureWithState:(long long)arg1 withTranslation:(struct CGPoint)arg2;
- (void)indirectCursorPanGestureWithState:(long long)arg1 withTranslation:(struct CGPoint)arg2 withFlickDirection:(unsigned long long)arg3;
- (_Bool)isPlacedCarefully;
- (void)_tidyUpGesture;
- (void)_prepareForGesture;
- (void)_willBeginIndirectSelectionGesture:(id)arg1;
- (struct CGPoint)boundedTranslation:(struct CGPoint)arg1;
- (_Bool)forceTouchGestureRecognizerShouldBegin:(id)arg1;
- (struct CGPoint)acceleratedTranslation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2 isActive:(_Bool)arg3;
- (void)_didEndIndirectSelectionGesture:(id)arg1;
- (id)selectionController;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)gestureRecognizerShouldBeginResponse:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 forForce:(_Bool)arg3;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)owner;
- (void)_configureLongPressRecognizer:(id)arg1;
- (void)_configureLongPressTapRecognizer:(id)arg1;
- (void)_configureTwoFingerTapGestureRecognizer:(id)arg1;
- (void)_configureTwoFingerPanGestureRecognizer:(id)arg1;
- (void)_configureOneFingerForcePressRecognizer:(id)arg1;
- (id)initWithView:(id)arg1 owner:(id)arg2 forTypes:(long long)arg3;
- (id)gestures;
- (void)registerOwner:(id)arg1;
- (void)dealloc;
- (void)detach;
- (void)_clearHiding;
- (void)hideInsideRecogniser:(id)arg1;
- (void)hideRecogniser:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

