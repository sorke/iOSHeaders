//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class PKColorPickerCrosshairView, UIColor;

@protocol PKColorPickerCrosshairViewDelegate
- (void)colorPickerCrosshairViewShouldUpdateWithColor:(UIColor *)arg1;
- (void)colorPickerCrosshairViewShouldUpdateColor:(PKColorPickerCrosshairView *)arg1 point:(struct CGPoint)arg2;
- (struct CGRect)panningBoundsForColorPickerCrosshairView:(PKColorPickerCrosshairView *)arg1;
- (_Bool)circleModeForColorPickerCrosshairView:(PKColorPickerCrosshairView *)arg1;
- (UIColor *)colorForColorPickerCrosshairView:(PKColorPickerCrosshairView *)arg1 frame:(struct CGRect)arg2;
- (struct CGRect)frameForColorPickerCrosshairView:(PKColorPickerCrosshairView *)arg1;
@end

