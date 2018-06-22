//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TLKObservable.h"
#import "TLKObserver.h"

@class NSString;

@interface TLKView : UIView <TLKObserver, TLKObservable>
{
    _Bool inBatchUpdate;
    id <TLKObserver> observer;
    unsigned long long _style;
    UIView *_containerView;
}

+ (void)makeContainerShadowCompatible:(id)arg1;
+ (void)enableShadow:(_Bool)arg1 forView:(id)arg2;
+ (Class)layerClass;
+ (struct UIEdgeInsets)defaultInsets;
@property(retain) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property _Bool inBatchUpdate; // @synthesize inBatchUpdate;
@property __weak id <TLKObserver> observer; // @synthesize observer;
- (void).cxx_destruct;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (_Bool)supportsAsynchronousMeasurement;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)isLayoutSizeDependentOnPerpendicularAxis;
- (void)disableUnbatchedUpdates;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)styleDidChange:(unsigned long long)arg1;
- (void)observedPropertiesChanged;
- (void)setContainer:(id)arg1 withInsets:(struct UIEdgeInsets)arg2;
- (void)setContainerWithDefaultInsets:(id)arg1;
- (void)layoutMarginsDidChange;
- (void)propertiesDidChange;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

