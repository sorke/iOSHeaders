//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoEditSupport/BLRetouchEffectLayer.h>

@interface BLRetouchSaturationLayer : BLRetouchEffectLayer
{
    float _saturation;
}

+ (id)layerWithSaturation:(float)arg1;
@property(nonatomic) float saturation; // @synthesize saturation=_saturation;
- (void)dealloc;
- (struct CGContext *)newContextWithEffect:(struct CGContext *)arg1;

@end
