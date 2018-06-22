//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISlider.h"

@class UIColor, UISelectionFeedbackGenerator;

@interface PSSegmentableSlider : UISlider
{
    UIColor *_trackMarkersColor;
    _Bool _segmented;
    _Bool _locksToSegment;
    _Bool _snapsToSegment;
    unsigned long long _segmentCount;
    UISelectionFeedbackGenerator *_feedbackGenerator;
}

@property(retain, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(nonatomic) unsigned long long segmentCount; // @synthesize segmentCount=_segmentCount;
@property(nonatomic) _Bool snapsToSegment; // @synthesize snapsToSegment=_snapsToSegment;
@property(nonatomic) _Bool locksToSegment; // @synthesize locksToSegment=_locksToSegment;
@property(nonatomic, getter=isSegmented) _Bool segmented; // @synthesize segmented=_segmented;
- (void).cxx_destruct;
- (void)controlInteractionEnded:(id)arg1;
- (void)controlInteractionBegan:(id)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (float)offsetBetweenTicksForNumberOfTicks:(unsigned long long)arg1;
- (unsigned long long)numberOfTicks;
- (void)sliderTapped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

