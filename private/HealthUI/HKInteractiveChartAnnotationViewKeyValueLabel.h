//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIStackView.h"

@class HKSelectedRangeLabel, UIColor;

@interface HKInteractiveChartAnnotationViewKeyValueLabel : UIStackView
{
    HKSelectedRangeLabel *_keyLabel;
    HKSelectedRangeLabel *_valueLabel;
    UIColor *_textColor;
}

@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) HKSelectedRangeLabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(readonly, nonatomic) HKSelectedRangeLabel *keyLabel; // @synthesize keyLabel=_keyLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

