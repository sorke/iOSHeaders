//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutYAxisAnchor, UIImageView, UILabel;

@interface STUsageTotalDeltaView : UIView
{
    NSLayoutYAxisAnchor *_labelLastBaselineAnchor;
    UIImageView *_imageView;
    UILabel *_label;
}

@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, copy, nonatomic) NSLayoutYAxisAnchor *labelLastBaselineAnchor; // @synthesize labelLastBaselineAnchor=_labelLastBaselineAnchor;
- (void).cxx_destruct;
- (void)setDeltaFromAverage:(double)arg1 timePeriod:(unsigned long long)arg2;
- (id)lastBaselineAnchor;
- (id)init;

@end

