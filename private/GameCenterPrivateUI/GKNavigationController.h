//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "UINavigationBarDelegate.h"
#import "UIViewControllerRestoration.h"

@class NSMutableArray, NSString;

@interface GKNavigationController : UINavigationController <UIViewControllerRestoration, UINavigationBarDelegate>
{
    NSMutableArray *_deferredTransitions;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(retain, nonatomic) NSMutableArray *deferredTransitions; // @synthesize deferredTransitions=_deferredTransitions;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)_deferTransitionOfType:(int)arg1 withViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_performDeferredTransition;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (void)willShowViewController:(id)arg1 animated:(_Bool)arg2;
- (id)targetViewControllerForAction:(SEL)arg1;
- (void)_gkRestorePopoverWithViewControllers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_gkViewControllersForRestoringPopover;
- (void)_gkPushPresentedViewControllerForCompactSizeClass:(id)arg1;
- (id)popEmbeddedPopoverViewControllers;
- (_Bool)hasEmbeddedPopoverNavigationStack;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (void)setupGKNavigationController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

