//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AnnotationKit/NSObject-Protocol.h>

@class NSString, PKInlineInkPicker, UIColor;

@protocol PKInlineInkPickerDelegate <NSObject>

@optional
- (void)inlineInkPicker:(PKInlineInkPicker *)arg1 didChangeSizeState:(unsigned long long)arg2;
- (void)inlineInkPicker:(PKInlineInkPicker *)arg1 didChangeState:(unsigned long long)arg2;
- (void)inlineInkPicker:(PKInlineInkPicker *)arg1 didSelectColor:(UIColor *)arg2;
- (void)inlineInkPicker:(PKInlineInkPicker *)arg1 didSelectTool:(NSString *)arg2;
@end
