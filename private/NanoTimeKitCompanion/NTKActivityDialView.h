//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CLKDevice, NSArray, NTKFaceColorScheme;

@interface NTKActivityDialView : UIView
{
    _Bool _shouldRasterize;
    NTKFaceColorScheme *_colorScheme;
    double _zoomFraction;
    CLKDevice *_device;
    NSArray *_segments;
}

@property(readonly, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(nonatomic) double zoomFraction; // @synthesize zoomFraction=_zoomFraction;
@property(nonatomic) _Bool shouldRasterize; // @synthesize shouldRasterize=_shouldRasterize;
@property(retain, nonatomic) NTKFaceColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (void).cxx_destruct;
- (double)_segmentAlphaForEditMode:(long long)arg1;
- (double)_handAlphaForEditMode:(long long)arg1;
- (void)applyTransitionFromScheme:(id)arg1 toScheme:(id)arg2 fraction:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;

@end

