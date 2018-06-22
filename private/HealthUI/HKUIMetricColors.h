//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKGradient, UIColor;

@interface HKUIMetricColors : NSObject
{
    UIColor *_keyColor;
    HKGradient *_gradient;
    UIColor *_contextViewPrimaryTextColor;
    UIColor *_contextViewSecondaryTextColor;
    UIColor *_contextViewInfoButtonGlyphColor;
    UIColor *_contextViewInfoButtonBackgroundColor;
    HKGradient *_contentViewChartGradient;
}

+ (id)workoutContextViewColors;
+ (id)defaultContextViewColors;
+ (id)resultsColors;
+ (id)sleepColors;
+ (id)reproductiveHealthColors;
+ (id)mindfulnessColors;
+ (id)bodyMeasurementColors;
+ (id)activityColors;
+ (id)vitalsColors;
+ (id)unknownCategoryClinicalColors;
+ (id)vitalsClinicalColors;
+ (id)proceduresClinicalColors;
+ (id)medicationsClinicalColors;
+ (id)labResultsClinicalColors;
+ (id)immunizationsClinicalColors;
+ (id)conditionsClinicalColors;
+ (id)allergiesClinicalColors;
+ (id)metricColorsForHeartRateContext:(long long)arg1;
@property(retain, nonatomic) HKGradient *contentViewChartGradient; // @synthesize contentViewChartGradient=_contentViewChartGradient;
@property(retain, nonatomic) UIColor *contextViewInfoButtonBackgroundColor; // @synthesize contextViewInfoButtonBackgroundColor=_contextViewInfoButtonBackgroundColor;
@property(retain, nonatomic) UIColor *contextViewInfoButtonGlyphColor; // @synthesize contextViewInfoButtonGlyphColor=_contextViewInfoButtonGlyphColor;
@property(retain, nonatomic) UIColor *contextViewSecondaryTextColor; // @synthesize contextViewSecondaryTextColor=_contextViewSecondaryTextColor;
@property(retain, nonatomic) UIColor *contextViewPrimaryTextColor; // @synthesize contextViewPrimaryTextColor=_contextViewPrimaryTextColor;
@property(retain, nonatomic) HKGradient *gradient; // @synthesize gradient=_gradient;
@property(retain, nonatomic) UIColor *keyColor; // @synthesize keyColor=_keyColor;
- (void).cxx_destruct;

@end

