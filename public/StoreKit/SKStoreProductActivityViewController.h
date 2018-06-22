//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIViewControllerTransitioningDelegate.h"

@class NSDictionary, NSString, SKInvocationQueueProxy<SKUIServiceProductActivityViewController>, SKRemoteProductActivityViewController, _SKStoreProductActivityAnimationController, _UIAsyncInvocation;

@interface SKStoreProductActivityViewController : UIViewController <UIViewControllerTransitioningDelegate>
{
    SKInvocationQueueProxy<SKUIServiceProductActivityViewController> *_serviceProxy;
    _UIAsyncInvocation *_cancelRequest;
    SKRemoteProductActivityViewController *_remoteViewController;
    NSDictionary *_parameters;
    _SKStoreProductActivityAnimationController *_animationController;
    id <SKStoreProductActivityViewControllerDelegate> _delegate;
}

@property(nonatomic) id <SKStoreProductActivityViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)_viewTapped:(id)arg1;
- (void)_addRemoteView;
- (void)_requestRemoteViewController;
- (void)_didFinishWithResult:(unsigned long long)arg1 error:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithParameters:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

