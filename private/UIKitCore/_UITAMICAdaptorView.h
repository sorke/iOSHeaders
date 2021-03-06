//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import "_UIGeometryChangeObserver.h"

@class NSLayoutConstraint, NSString, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface _UITAMICAdaptorView : UIView <_UIGeometryChangeObserver>
{
    UIView *_view;
    NSLayoutConstraint *_width;
    NSLayoutConstraint *_height;
    struct CGSize _layoutSize;
    _Bool _inLayout;
    float _sizingPriority;
    UILayoutGuide *_sizingLayoutGuide;
}

+ (_Bool)shouldWrapView:(id)arg1;
@property(retain, nonatomic) UILayoutGuide *sizingLayoutGuide; // @synthesize sizingLayoutGuide=_sizingLayoutGuide;
@property(nonatomic) float sizingPriority; // @synthesize sizingPriority=_sizingPriority;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_geometryChanges:(id)arg1 forAncestor:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateForAvailableSize;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

