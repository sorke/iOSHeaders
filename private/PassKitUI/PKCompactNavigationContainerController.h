//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKContentContainerObserver-Protocol.h>
#import <PassKitUI/UINavigationControllerDelegate-Protocol.h>
#import <PassKitUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, UINavigationController;
@protocol PKObservableContentContainer;

@interface PKCompactNavigationContainerController : UIViewController <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate, PKContentContainerObserver>
{
    UIViewController *_presentationContextVC;
    struct CGSize _navigationControllerSize;
    struct CGRect _statusBarFrame;
    _Bool _presentingNavigationController;
    UINavigationController<PKObservableContentContainer> *_containedNavigationController;
}

+ (id)dimmingColor;
@property(nonatomic, getter=isPresentingNavigationController) _Bool presentingNavigationController; // @synthesize presentingNavigationController=_presentingNavigationController;
@property(readonly, nonatomic) UINavigationController<PKObservableContentContainer> *containedNavigationController; // @synthesize containedNavigationController=_containedNavigationController;
- (void).cxx_destruct;
- (void)statusBarFrameWillChange:(id)arg1;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)contentContainer:(id)arg1 preferredContentSizeDidChangeForChildContentContainer:(id)arg2;
- (void)updateChildViewControllerSizeWithTopViewController:(id)arg1 animated:(_Bool)arg2;
- (struct CGSize)_navigationControllerSizeForViewController:(id)arg1;
- (id)_backgroundColor;
- (struct CGSize)modalPresentationSize;
- (struct CGSize)navigationControllerSizeForChildViewControllerPreferredContentSize:(struct CGSize)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithNavigationController:(id)arg1;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
