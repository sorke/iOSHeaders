//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, NSProgress;

__attribute__((visibility("hidden")))
@interface DCCircularProgressView : UIView
{
    double _progress;
    NSProgress *_observedProgress;
    CAShapeLayer *_circleLayer;
}

@property(retain, nonatomic) CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(retain, nonatomic) NSProgress *observedProgress; // @synthesize observedProgress=_observedProgress;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGPath *)newPathForProgress:(double)arg1;
- (void)awakeFromNib;
- (void)dealloc;

@end

