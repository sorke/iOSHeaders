//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

@class NTKColoringLabel;

@interface NTKCircularSmallStackTextComplicationView : NTKCircularComplicationView
{
    NTKColoringLabel *_firstLineLabel;
    NTKColoringLabel *_secondLineLabel;
}

+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;
- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateLabelsForFontChange;
- (void)setUsesMultiColor:(_Bool)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)_updateLabelColors;
- (void)_updateForTemplateChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

