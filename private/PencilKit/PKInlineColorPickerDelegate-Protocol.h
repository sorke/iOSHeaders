//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKInlineColorPicker, UIViewController;

@protocol PKInlineColorPickerDelegate <NSObject>

@optional
- (UIViewController *)viewControllerForPopoverPresentationFromColorPicker:(PKInlineColorPicker *)arg1;
- (void)colorPickerDidSelectColor:(PKInlineColorPicker *)arg1 colorChanged:(_Bool)arg2;
- (void)colorPickerColorTappedInCompactChooseToolState:(PKInlineColorPicker *)arg1;
@end

