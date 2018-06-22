//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVFullscreenTransitionCoordinator.h"

@class NSString, UIView, UIViewPropertyAnimator;

@interface SVFullscreenPresentationAnimator : NSObject <SVFullscreenTransitionCoordinator>
{
    UIViewPropertyAnimator *_animator;
    id <SVFullscreenTransitionContext> _context;
    UIView *_fromView;
    CDUnknownBlockType _completionBlock;
}

@property(readonly, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
@property(retain, nonatomic) id <SVFullscreenTransitionContext> context; // @synthesize context=_context;
@property(retain, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
- (void).cxx_destruct;
- (void)completeTransition:(_Bool)arg1;
- (void)animateWithContext:(id)arg1;
- (id)initWithCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

