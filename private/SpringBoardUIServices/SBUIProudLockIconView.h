//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class LAUIPearlGlyphView, NSSet, SBUICAPackageView, UIColor;

@interface SBUIProudLockIconView : UIView
{
    long long _state;
    SBUICAPackageView *_lockView;
    NSSet *_imageLayers;
    LAUIPearlGlyphView *_lazy_pearlGlyphView;
    UIColor *_contentColor;
}

@property(retain, nonatomic) UIColor *contentColor; // @synthesize contentColor=_contentColor;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)_pearlGlyphView;
- (id)_activeViewForState:(long long)arg1;
- (void)_transitionToState:(long long)arg1 animated:(_Bool)arg2 options:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_forEachLayerInHierarchy:(id)arg1 perform:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (void)setState:(long long)arg1 animated:(_Bool)arg2 options:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setState:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setState:(long long)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

