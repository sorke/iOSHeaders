//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CorePDF/CPChunk.h>

__attribute__((visibility("hidden")))
@interface CPTextObject : CPChunk
{
    struct CGPoint anchor;
    _Bool metricInfoCalculated;
    float maxFontSize;
    double maxFontLineHeight;
}

- (void)translateObjectYBy:(double)arg1;
- (void)clearCachedInfo;
- (double)maxFontLineHeight;
- (float)maxFontSize;
- (void)calculateMetrics;

@end

