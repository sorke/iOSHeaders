//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@class UIViewController;

@interface AVWindow : UIWindow
{
    UIViewController *_viewControllerToBePresented;
}

@property(retain, nonatomic) UIViewController *viewControllerToBePresented; // @synthesize viewControllerToBePresented=_viewControllerToBePresented;
- (void).cxx_destruct;
- (unsigned long long)_supportedInterfaceOrientationsForRootViewController;
- (_Bool)_canAffectStatusBarAppearance;
- (_Bool)_shouldControlAutorotation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 viewControllerToBePresented:(id)arg2;

@end

