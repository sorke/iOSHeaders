//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <UIKit/UISpringLoadedInteractionSupporting-Protocol.h>

@class NSLayoutConstraint, NSString, _UIButtonBarButtonVisualProvider;

__attribute__((visibility("hidden")))
@interface _UIButtonBarButton : UIControl <UISpringLoadedInteractionSupporting>
{
    _UIButtonBarButtonVisualProvider *_visualProvider;
    NSLayoutConstraint *_widthMinimizingConstraint;
    NSLayoutConstraint *_heightMinimizingConstraint;
    _Bool _backButton;
}

@property(readonly, nonatomic, getter=isBackButton) _Bool backButton; // @synthesize backButton=_backButton;
@property(readonly, copy, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider; // @synthesize visualProvider=_visualProvider;
- (void).cxx_destruct;
- (void)_accessibilitySettingsChanged:(id)arg1;
- (_Bool)_accessibilityShouldActivateOnHUDLift;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
@property(nonatomic, getter=isSpringLoaded) _Bool springLoaded;
- (void)_configureFromBarItem:(id)arg1 appearanceDelegate:(id)arg2 isBackButton:(_Bool)arg3;
@property(readonly, nonatomic) NSLayoutConstraint *heightMinimizingConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *widthMinimizingConstraint;
- (void)reset;
- (void)configureBackButtonFromBarItem:(id)arg1 withAppearanceDelegate:(id)arg2;
- (void)configureFromBarItem:(id)arg1 withAppearanceDelegate:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithVisualProvider:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
