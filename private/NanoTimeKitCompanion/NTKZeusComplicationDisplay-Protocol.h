//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NTKZeusColorPalette;

@protocol NTKZeusComplicationDisplay <NSObject>
@property(readonly, nonatomic) NTKZeusColorPalette *palette;
@property(nonatomic) unsigned long long style;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(NTKZeusColorPalette *)arg2 toPalette:(NTKZeusColorPalette *)arg3;
- (void)applyPalette:(NTKZeusColorPalette *)arg1;
@end

