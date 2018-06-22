//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TLKLayoutUtilities : NSObject
{
}

+ (struct CGSize)maxThumbnailSize;
+ (_Bool)isWideScreen;
+ (void)applyRowBoundedSizingToImageView:(id)arg1;
+ (struct CGSize)idealImageSizeWithSize:(struct CGSize)arg1 fittingSize:(struct CGSize)arg2;
+ (void)setDynamicBaslineAlignmentsForLabel:(id)arg1 top:(double)arg2 bottom:(double)arg3;
+ (double)scaledValueForValue:(double)arg1 withFont:(id)arg2;
+ (double)deviceScaledRoundedValue:(double)arg1;
+ (void)requireIntrinsicSizeForView:(id)arg1 withPriority:(float)arg2;
+ (void)requireIntrinsicSizeForView:(id)arg1;

@end

