//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface UIViewController (BaseBoardUI)
- (id)bs_topPresentedViewController;
- (id)bs_presentationContextDefiningViewController;
- (id)bs_presentedViewControllerIncludingAncestors;
- (_Bool)bs_removeChildViewController:(id)arg1 animated:(_Bool)arg2 transitionBlock:(CDUnknownBlockType)arg3;
- (_Bool)bs_removeChildViewController:(id)arg1;
- (_Bool)bs_addChildViewController:(id)arg1 withSuperview:(id)arg2 animated:(_Bool)arg3 transitionBlock:(CDUnknownBlockType)arg4;
- (_Bool)bs_addChildViewController:(id)arg1 withSuperview:(id)arg2;
- (_Bool)bs_addChildViewController:(id)arg1 animated:(_Bool)arg2 transitionBlock:(CDUnknownBlockType)arg3;
- (_Bool)bs_addChildViewController:(id)arg1;
- (_Bool)bs_endAppearanceTransitionForChildViewController:(id)arg1 toVisible:(_Bool)arg2;
- (_Bool)bs_endAppearanceTransitionForChildViewController:(id)arg1;
- (_Bool)bs_beginAppearanceTransitionForChildViewController:(id)arg1 toVisible:(_Bool)arg2 animated:(_Bool)arg3;
- (_Bool)bs_endAppearanceTransition;
- (_Bool)bs_endAppearanceTransition:(_Bool)arg1;
- (_Bool)bs_beginAppearanceTransition:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)bs_isDisappearingOrDisappeared;
- (_Bool)bs_isAppearingOrAppeared;
@end

