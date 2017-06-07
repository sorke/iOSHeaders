//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, WGWidgetHostingViewController, WGWidgetPlatterView;
@protocol WGWidgetHostingViewControllerDelegate><WGWidgetListItemViewControllerDelegate;

@interface WGWidgetListItemViewController : UIViewController
{
    NSString *_widgetIdentifier;
    id <WGWidgetHostingViewControllerDelegate><WGWidgetListItemViewControllerDelegate> _delegate;
    WGWidgetHostingViewController *_widgetHost;
}

@property(readonly, nonatomic) WGWidgetHostingViewController *widgetHost; // @synthesize widgetHost=_widgetHost;
@property(nonatomic) __weak id <WGWidgetHostingViewControllerDelegate><WGWidgetListItemViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *widgetIdentifier; // @synthesize widgetIdentifier=_widgetIdentifier;
- (void).cxx_destruct;
- (id)description;
- (void)_addWidgetHostIfNecessary;
- (id)_platterViewIfLoaded;
- (id)_platterViewLoadingIfNecessary:(_Bool)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)removeChildViewController:(id)arg1;
- (void)managingContainerDidDisappear:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)managingContainerWillAppear:(id)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLoad;
- (void)loadView;
@property(readonly, nonatomic) WGWidgetPlatterView *platterView;
- (id)initWithWidgetIdentifier:(id)arg1;

@end
