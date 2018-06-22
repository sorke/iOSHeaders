//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSString, UIImageView, UILabel;

@interface STDashedVerticalDivider : UIView
{
    NSString *_labelText;
    NSLayoutXAxisAnchor *_dashedLineCenterXAnchor;
    NSLayoutYAxisAnchor *_labelLastBaselineAnchor;
    UIImageView *_dashedLine;
    UILabel *_label;
    NSLayoutConstraint *_labelLeadingConstraint;
}

+ (id)dashedLineImage;
@property(retain, nonatomic) NSLayoutConstraint *labelLeadingConstraint; // @synthesize labelLeadingConstraint=_labelLeadingConstraint;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *dashedLine; // @synthesize dashedLine=_dashedLine;
@property(readonly, copy, nonatomic) NSLayoutYAxisAnchor *labelLastBaselineAnchor; // @synthesize labelLastBaselineAnchor=_labelLastBaselineAnchor;
@property(readonly, copy, nonatomic) NSLayoutXAxisAnchor *dashedLineCenterXAnchor; // @synthesize dashedLineCenterXAnchor=_dashedLineCenterXAnchor;
@property(copy, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
- (void).cxx_destruct;
- (id)init;

@end

