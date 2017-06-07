//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUViewControllerCell-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIViewController;

@interface HUViewControllerTableViewCell : UITableViewCell <HUViewControllerCell>
{
    _Bool _hasValidHeight;
    UIViewController *_viewController;
    UIViewController *_parentViewController;
    NSArray *_viewControllerConstraints;
    NSLayoutConstraint *_viewControllerHeightConstraint;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSLayoutConstraint *viewControllerHeightConstraint; // @synthesize viewControllerHeightConstraint=_viewControllerHeightConstraint;
@property(retain, nonatomic) NSArray *viewControllerConstraints; // @synthesize viewControllerConstraints=_viewControllerConstraints;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) _Bool hasValidHeight; // @synthesize hasValidHeight=_hasValidHeight;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)_removeFromParentViewControllerAndClearProperty:(_Bool)arg1;
- (void)removeFromParentViewController;
- (void)addToParentViewController:(id)arg1;
- (void)prepareForReuse;
- (void)_updateHeightConstraint;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
