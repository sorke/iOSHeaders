//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PUPhotoEditLayoutStaticAdaptable.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _PUSliderPlayheadBaseView : UIView <PUPhotoEditLayoutStaticAdaptable>
{
    long long _layoutOrientation;
}

+ (Class)layerClass;
@property(readonly, nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
- (void)_updateBaseShape;
- (void)drawRect:(struct CGRect)arg1;
- (void)setupWithLayoutOrientation:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

