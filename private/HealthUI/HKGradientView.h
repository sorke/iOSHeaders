//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class HKGradient;

@interface HKGradientView : UIView
{
    HKGradient *_gradient;
}

+ (Class)layerClass;
@property(retain, nonatomic) HKGradient *gradient; // @synthesize gradient=_gradient;
- (void).cxx_destruct;
- (void)_updateGradientLayer;
- (void)maskAllCornersWithRadius:(double)arg1;
- (void)maskCorners:(unsigned long long)arg1 radius:(double)arg2;
- (id)initWithGradient:(id)arg1;

@end

