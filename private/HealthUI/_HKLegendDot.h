//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, UIColor;

@interface _HKLegendDot : UIView
{
    UIColor *_dotColor;
    UIColor *_innerDotColor;
    CALayer *_innerDotLayer;
}

@property(retain, nonatomic) CALayer *innerDotLayer; // @synthesize innerDotLayer=_innerDotLayer;
@property(retain, nonatomic) UIColor *innerDotColor; // @synthesize innerDotColor=_innerDotColor;
@property(retain, nonatomic) UIColor *dotColor; // @synthesize dotColor=_dotColor;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)init;

@end

