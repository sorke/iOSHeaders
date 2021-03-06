//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXReusableObject.h"
#import "PXUIViewBasicTile.h"

@class NSArray, NSString, PXButtonSpec, UIButton, UIView;

@interface PXUIButtonTile : NSObject <PXUIViewBasicTile, PXReusableObject>
{
    _Bool _hasScheduledUpdate;
    CDStruct_6d279c03 _needsUpdateFlags;
    id <PXUIButtonTileDelegate> _delegate;
    NSString *_title;
    UIView *__view;
    UIButton *__button;
    PXButtonSpec *__spec;
    NSArray *__layoutConstraints;
}

@property(copy, nonatomic, setter=_setLayoutConstraints:) NSArray *_layoutConstraints; // @synthesize _layoutConstraints=__layoutConstraints;
@property(retain, nonatomic, setter=_setSpec:) PXButtonSpec *_spec; // @synthesize _spec=__spec;
@property(readonly, nonatomic) UIButton *_button; // @synthesize _button=__button;
@property(readonly, nonatomic) UIView *_view; // @synthesize _view=__view;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <PXUIButtonTileDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)becomeReusable;
@property(readonly, nonatomic) UIView *view;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)_updateButtonIfNeeded;
- (void)_invalidateButton;
- (void)_updateIfNeeded;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)_handleButton:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

