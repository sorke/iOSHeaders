//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPVolumeSlider.h"

@interface MediaControlsVolumeSlider : MPVolumeSlider
{
}

- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateStyle;
- (id)_thumbImageForStyle:(long long)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (id)createThumbView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

